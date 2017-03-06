// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google People API (people/v1)
// Description:
//   Provides access to information about profiles and contacts.
// Documentation:
//   https://developers.google.com/people/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: Manage your contacts
 *
 *  Value "https://www.googleapis.com/auth/contacts"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleContacts;
/**
 *  Authorization scope: View your contacts
 *
 *  Value "https://www.googleapis.com/auth/contacts.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleContactsReadonly;
/**
 *  Authorization scope: Know the list of people in your circles, your age
 *  range, and language
 *
 *  Value "https://www.googleapis.com/auth/plus.login"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeoplePlusLogin;
/**
 *  Authorization scope: View your street addresses
 *
 *  Value "https://www.googleapis.com/auth/user.addresses.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleUserAddressesRead;
/**
 *  Authorization scope: View your complete date of birth
 *
 *  Value "https://www.googleapis.com/auth/user.birthday.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleUserBirthdayRead;
/**
 *  Authorization scope: View your email addresses
 *
 *  Value "https://www.googleapis.com/auth/user.emails.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleUserEmailsRead;
/**
 *  Authorization scope: View your email address
 *
 *  Value "https://www.googleapis.com/auth/userinfo.email"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleUserinfoEmail;
/**
 *  Authorization scope: View your basic profile info
 *
 *  Value "https://www.googleapis.com/auth/userinfo.profile"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleUserinfoProfile;
/**
 *  Authorization scope: View your phone numbers
 *
 *  Value "https://www.googleapis.com/auth/user.phonenumbers.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePeopleUserPhonenumbersRead;

// ----------------------------------------------------------------------------
//   GTLRPeopleService
//

/**
 *  Service for executing Google People API queries.
 *
 *  Provides access to information about profiles and contacts.
 */
@interface GTLRPeopleService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRPeopleQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
