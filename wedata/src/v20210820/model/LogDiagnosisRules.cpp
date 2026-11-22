/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/wedata/v20210820/model/LogDiagnosisRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LogDiagnosisRules::LogDiagnosisRules() :
    m_idHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_errorTitleHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorReasonHasBeenSet(false),
    m_errorSolutionHasBeenSet(false),
    m_errorOrderHasBeenSet(false),
    m_errorExampleHasBeenSet(false),
    m_extToolsUrlHasBeenSet(false),
    m_errorLevelHasBeenSet(false),
    m_errorTypeAggregationHasBeenSet(false),
    m_errorSystemHasBeenSet(false),
    m_errorLogSystemHasBeenSet(false)
{
}

CoreInternalOutcome LogDiagnosisRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdate") && !value["LastUpdate"].IsNull())
    {
        if (!value["LastUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.LastUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdate = string(value["LastUpdate"].GetString());
        m_lastUpdateHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("ErrorTitle") && !value["ErrorTitle"].IsNull())
    {
        if (!value["ErrorTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorTitle = string(value["ErrorTitle"].GetString());
        m_errorTitleHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("ErrorReason") && !value["ErrorReason"].IsNull())
    {
        if (!value["ErrorReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorReason = string(value["ErrorReason"].GetString());
        m_errorReasonHasBeenSet = true;
    }

    if (value.HasMember("ErrorSolution") && !value["ErrorSolution"].IsNull())
    {
        if (!value["ErrorSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorSolution = string(value["ErrorSolution"].GetString());
        m_errorSolutionHasBeenSet = true;
    }

    if (value.HasMember("ErrorOrder") && !value["ErrorOrder"].IsNull())
    {
        if (!value["ErrorOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorOrder = string(value["ErrorOrder"].GetString());
        m_errorOrderHasBeenSet = true;
    }

    if (value.HasMember("ErrorExample") && !value["ErrorExample"].IsNull())
    {
        if (!value["ErrorExample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorExample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorExample = string(value["ErrorExample"].GetString());
        m_errorExampleHasBeenSet = true;
    }

    if (value.HasMember("ExtToolsUrl") && !value["ExtToolsUrl"].IsNull())
    {
        if (!value["ExtToolsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ExtToolsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extToolsUrl = string(value["ExtToolsUrl"].GetString());
        m_extToolsUrlHasBeenSet = true;
    }

    if (value.HasMember("ErrorLevel") && !value["ErrorLevel"].IsNull())
    {
        if (!value["ErrorLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLevel = string(value["ErrorLevel"].GetString());
        m_errorLevelHasBeenSet = true;
    }

    if (value.HasMember("ErrorTypeAggregation") && !value["ErrorTypeAggregation"].IsNull())
    {
        if (!value["ErrorTypeAggregation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorTypeAggregation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorTypeAggregation = string(value["ErrorTypeAggregation"].GetString());
        m_errorTypeAggregationHasBeenSet = true;
    }

    if (value.HasMember("ErrorSystem") && !value["ErrorSystem"].IsNull())
    {
        if (!value["ErrorSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorSystem = string(value["ErrorSystem"].GetString());
        m_errorSystemHasBeenSet = true;
    }

    if (value.HasMember("ErrorLogSystem") && !value["ErrorLogSystem"].IsNull())
    {
        if (!value["ErrorLogSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDiagnosisRules.ErrorLogSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLogSystem = string(value["ErrorLogSystem"].GetString());
        m_errorLogSystemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogDiagnosisRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdate.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_errorTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_errorReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorReason.c_str(), allocator).Move(), allocator);
    }

    if (m_errorSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_errorOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_errorExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorExample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorExample.c_str(), allocator).Move(), allocator);
    }

    if (m_extToolsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtToolsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extToolsUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_errorLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_errorTypeAggregationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorTypeAggregation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorTypeAggregation.c_str(), allocator).Move(), allocator);
    }

    if (m_errorSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_errorLogSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLogSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLogSystem.c_str(), allocator).Move(), allocator);
    }

}


int64_t LogDiagnosisRules::GetId() const
{
    return m_id;
}

void LogDiagnosisRules::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LogDiagnosisRules::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t LogDiagnosisRules::GetErrorCode() const
{
    return m_errorCode;
}

void LogDiagnosisRules::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string LogDiagnosisRules::GetCreateTime() const
{
    return m_createTime;
}

void LogDiagnosisRules::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LogDiagnosisRules::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LogDiagnosisRules::GetLastUpdate() const
{
    return m_lastUpdate;
}

void LogDiagnosisRules::SetLastUpdate(const string& _lastUpdate)
{
    m_lastUpdate = _lastUpdate;
    m_lastUpdateHasBeenSet = true;
}

bool LogDiagnosisRules::LastUpdateHasBeenSet() const
{
    return m_lastUpdateHasBeenSet;
}

string LogDiagnosisRules::GetOwner() const
{
    return m_owner;
}

void LogDiagnosisRules::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool LogDiagnosisRules::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string LogDiagnosisRules::GetErrorTitle() const
{
    return m_errorTitle;
}

void LogDiagnosisRules::SetErrorTitle(const string& _errorTitle)
{
    m_errorTitle = _errorTitle;
    m_errorTitleHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorTitleHasBeenSet() const
{
    return m_errorTitleHasBeenSet;
}

string LogDiagnosisRules::GetErrorMessage() const
{
    return m_errorMessage;
}

void LogDiagnosisRules::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string LogDiagnosisRules::GetErrorReason() const
{
    return m_errorReason;
}

void LogDiagnosisRules::SetErrorReason(const string& _errorReason)
{
    m_errorReason = _errorReason;
    m_errorReasonHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorReasonHasBeenSet() const
{
    return m_errorReasonHasBeenSet;
}

string LogDiagnosisRules::GetErrorSolution() const
{
    return m_errorSolution;
}

void LogDiagnosisRules::SetErrorSolution(const string& _errorSolution)
{
    m_errorSolution = _errorSolution;
    m_errorSolutionHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorSolutionHasBeenSet() const
{
    return m_errorSolutionHasBeenSet;
}

string LogDiagnosisRules::GetErrorOrder() const
{
    return m_errorOrder;
}

void LogDiagnosisRules::SetErrorOrder(const string& _errorOrder)
{
    m_errorOrder = _errorOrder;
    m_errorOrderHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorOrderHasBeenSet() const
{
    return m_errorOrderHasBeenSet;
}

string LogDiagnosisRules::GetErrorExample() const
{
    return m_errorExample;
}

void LogDiagnosisRules::SetErrorExample(const string& _errorExample)
{
    m_errorExample = _errorExample;
    m_errorExampleHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorExampleHasBeenSet() const
{
    return m_errorExampleHasBeenSet;
}

string LogDiagnosisRules::GetExtToolsUrl() const
{
    return m_extToolsUrl;
}

void LogDiagnosisRules::SetExtToolsUrl(const string& _extToolsUrl)
{
    m_extToolsUrl = _extToolsUrl;
    m_extToolsUrlHasBeenSet = true;
}

bool LogDiagnosisRules::ExtToolsUrlHasBeenSet() const
{
    return m_extToolsUrlHasBeenSet;
}

string LogDiagnosisRules::GetErrorLevel() const
{
    return m_errorLevel;
}

void LogDiagnosisRules::SetErrorLevel(const string& _errorLevel)
{
    m_errorLevel = _errorLevel;
    m_errorLevelHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorLevelHasBeenSet() const
{
    return m_errorLevelHasBeenSet;
}

string LogDiagnosisRules::GetErrorTypeAggregation() const
{
    return m_errorTypeAggregation;
}

void LogDiagnosisRules::SetErrorTypeAggregation(const string& _errorTypeAggregation)
{
    m_errorTypeAggregation = _errorTypeAggregation;
    m_errorTypeAggregationHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorTypeAggregationHasBeenSet() const
{
    return m_errorTypeAggregationHasBeenSet;
}

string LogDiagnosisRules::GetErrorSystem() const
{
    return m_errorSystem;
}

void LogDiagnosisRules::SetErrorSystem(const string& _errorSystem)
{
    m_errorSystem = _errorSystem;
    m_errorSystemHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorSystemHasBeenSet() const
{
    return m_errorSystemHasBeenSet;
}

string LogDiagnosisRules::GetErrorLogSystem() const
{
    return m_errorLogSystem;
}

void LogDiagnosisRules::SetErrorLogSystem(const string& _errorLogSystem)
{
    m_errorLogSystem = _errorLogSystem;
    m_errorLogSystemHasBeenSet = true;
}

bool LogDiagnosisRules::ErrorLogSystemHasBeenSet() const
{
    return m_errorLogSystemHasBeenSet;
}

