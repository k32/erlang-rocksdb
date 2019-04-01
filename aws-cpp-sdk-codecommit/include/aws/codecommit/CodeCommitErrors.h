﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once

#include <aws/core/client/CoreErrors.h>
#include <aws/codecommit/CodeCommit_EXPORTS.h>

namespace Aws
{
namespace CodeCommit
{
enum class CodeCommitErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  ACTOR_DOES_NOT_EXIST= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  AUTHOR_DOES_NOT_EXIST,
  BEFORE_COMMIT_ID_AND_AFTER_COMMIT_ID_ARE_SAME,
  BLOB_ID_DOES_NOT_EXIST,
  BLOB_ID_REQUIRED,
  BRANCH_DOES_NOT_EXIST,
  BRANCH_NAME_EXISTS,
  BRANCH_NAME_IS_TAG_NAME,
  BRANCH_NAME_REQUIRED,
  CLIENT_REQUEST_TOKEN_REQUIRED,
  COMMENT_CONTENT_REQUIRED,
  COMMENT_CONTENT_SIZE_LIMIT_EXCEEDED,
  COMMENT_DELETED,
  COMMENT_DOES_NOT_EXIST,
  COMMENT_ID_REQUIRED,
  COMMENT_NOT_CREATED_BY_CALLER,
  COMMIT_DOES_NOT_EXIST,
  COMMIT_ID_DOES_NOT_EXIST,
  COMMIT_ID_REQUIRED,
  COMMIT_MESSAGE_LENGTH_EXCEEDED,
  COMMIT_REQUIRED,
  DEFAULT_BRANCH_CANNOT_BE_DELETED,
  DIRECTORY_NAME_CONFLICTS_WITH_FILE_NAME,
  ENCRYPTION_INTEGRITY_CHECKS_FAILED,
  ENCRYPTION_KEY_ACCESS_DENIED,
  ENCRYPTION_KEY_DISABLED,
  ENCRYPTION_KEY_NOT_FOUND,
  ENCRYPTION_KEY_UNAVAILABLE,
  FILE_CONTENT_AND_SOURCE_FILE_SPECIFIED,
  FILE_CONTENT_REQUIRED,
  FILE_CONTENT_SIZE_LIMIT_EXCEEDED,
  FILE_DOES_NOT_EXIST,
  FILE_ENTRY_REQUIRED,
  FILE_MODE_REQUIRED,
  FILE_NAME_CONFLICTS_WITH_DIRECTORY_NAME,
  FILE_PATH_CONFLICTS_WITH_SUBMODULE_PATH,
  FILE_TOO_LARGE,
  FOLDER_CONTENT_SIZE_LIMIT_EXCEEDED,
  FOLDER_DOES_NOT_EXIST,
  IDEMPOTENCY_PARAMETER_MISMATCH,
  INVALID_ACTOR_ARN,
  INVALID_AUTHOR_ARN,
  INVALID_BLOB_ID,
  INVALID_BRANCH_NAME,
  INVALID_CLIENT_REQUEST_TOKEN,
  INVALID_COMMENT_ID,
  INVALID_COMMIT,
  INVALID_COMMIT_ID,
  INVALID_CONTINUATION_TOKEN,
  INVALID_DELETION_PARAMETER,
  INVALID_DESCRIPTION,
  INVALID_DESTINATION_COMMIT_SPECIFIER,
  INVALID_EMAIL,
  INVALID_FILE_LOCATION,
  INVALID_FILE_MODE,
  INVALID_FILE_POSITION,
  INVALID_MAX_RESULTS,
  INVALID_MERGE_OPTION,
  INVALID_ORDER,
  INVALID_PARENT_COMMIT_ID,
  INVALID_PATH,
  INVALID_PULL_REQUEST_EVENT_TYPE,
  INVALID_PULL_REQUEST_ID,
  INVALID_PULL_REQUEST_STATUS,
  INVALID_PULL_REQUEST_STATUS_UPDATE,
  INVALID_REFERENCE_NAME,
  INVALID_RELATIVE_FILE_VERSION_ENUM,
  INVALID_REPOSITORY_DESCRIPTION,
  INVALID_REPOSITORY_NAME,
  INVALID_REPOSITORY_TRIGGER_BRANCH_NAME,
  INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA,
  INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN,
  INVALID_REPOSITORY_TRIGGER_EVENTS,
  INVALID_REPOSITORY_TRIGGER_NAME,
  INVALID_REPOSITORY_TRIGGER_REGION,
  INVALID_SORT_BY,
  INVALID_SOURCE_COMMIT_SPECIFIER,
  INVALID_TARGET,
  INVALID_TARGETS,
  INVALID_TITLE,
  MANUAL_MERGE_REQUIRED,
  MAXIMUM_BRANCHES_EXCEEDED,
  MAXIMUM_FILE_ENTRIES_EXCEEDED,
  MAXIMUM_OPEN_PULL_REQUESTS_EXCEEDED,
  MAXIMUM_REPOSITORY_NAMES_EXCEEDED,
  MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED,
  MERGE_OPTION_REQUIRED,
  MULTIPLE_REPOSITORIES_IN_PULL_REQUEST,
  NAME_LENGTH_EXCEEDED,
  NO_CHANGE,
  PARENT_COMMIT_DOES_NOT_EXIST,
  PARENT_COMMIT_ID_OUTDATED,
  PARENT_COMMIT_ID_REQUIRED,
  PATH_DOES_NOT_EXIST,
  PATH_REQUIRED,
  PULL_REQUEST_ALREADY_CLOSED,
  PULL_REQUEST_DOES_NOT_EXIST,
  PULL_REQUEST_ID_REQUIRED,
  PULL_REQUEST_STATUS_REQUIRED,
  PUT_FILE_ENTRY_CONFLICT,
  REFERENCE_DOES_NOT_EXIST,
  REFERENCE_NAME_REQUIRED,
  REFERENCE_TYPE_NOT_SUPPORTED,
  REPOSITORY_DOES_NOT_EXIST,
  REPOSITORY_LIMIT_EXCEEDED,
  REPOSITORY_NAMES_REQUIRED,
  REPOSITORY_NAME_EXISTS,
  REPOSITORY_NAME_REQUIRED,
  REPOSITORY_NOT_ASSOCIATED_WITH_PULL_REQUEST,
  REPOSITORY_TRIGGERS_LIST_REQUIRED,
  REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED,
  REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED,
  REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED,
  REPOSITORY_TRIGGER_NAME_REQUIRED,
  RESTRICTED_SOURCE_FILE,
  SAME_FILE_CONTENT,
  SAME_PATH_REQUEST,
  SOURCE_AND_DESTINATION_ARE_SAME,
  SOURCE_FILE_OR_CONTENT_REQUIRED,
  TARGETS_REQUIRED,
  TARGET_REQUIRED,
  TIPS_DIVERGENCE_EXCEEDED,
  TIP_OF_SOURCE_REFERENCE_IS_DIFFERENT,
  TITLE_REQUIRED
};
namespace CodeCommitErrorMapper
{
  AWS_CODECOMMIT_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace CodeCommit
} // namespace Aws
