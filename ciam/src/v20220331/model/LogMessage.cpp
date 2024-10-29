/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/ciam/v20220331/model/LogMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

LogMessage::LogMessage() :
    m_logIdHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_userStoreIdHasBeenSet(false),
    m_eventCodeHasBeenSet(false),
    m_eventDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_participantHasBeenSet(false),
    m_applicationClientIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_authSourceIdHasBeenSet(false),
    m_authSourceNameHasBeenSet(false),
    m_authSourceTypeHasBeenSet(false),
    m_authSourceCategoryHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_actionResultHasBeenSet(false)
{
}

CoreInternalOutcome LogMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(value["LogId"].GetString());
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("UserStoreId") && !value["UserStoreId"].IsNull())
    {
        if (!value["UserStoreId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.UserStoreId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userStoreId = string(value["UserStoreId"].GetString());
        m_userStoreIdHasBeenSet = true;
    }

    if (value.HasMember("EventCode") && !value["EventCode"].IsNull())
    {
        if (!value["EventCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.EventCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCode = string(value["EventCode"].GetString());
        m_eventCodeHasBeenSet = true;
    }

    if (value.HasMember("EventDate") && !value["EventDate"].IsNull())
    {
        if (!value["EventDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.EventDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventDate = value["EventDate"].GetInt64();
        m_eventDateHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Participant") && !value["Participant"].IsNull())
    {
        if (!value["Participant"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.Participant` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_participant = string(value["Participant"].GetString());
        m_participantHasBeenSet = true;
    }

    if (value.HasMember("ApplicationClientId") && !value["ApplicationClientId"].IsNull())
    {
        if (!value["ApplicationClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.ApplicationClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationClientId = string(value["ApplicationClientId"].GetString());
        m_applicationClientIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("AuthSourceId") && !value["AuthSourceId"].IsNull())
    {
        if (!value["AuthSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.AuthSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSourceId = string(value["AuthSourceId"].GetString());
        m_authSourceIdHasBeenSet = true;
    }

    if (value.HasMember("AuthSourceName") && !value["AuthSourceName"].IsNull())
    {
        if (!value["AuthSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.AuthSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSourceName = string(value["AuthSourceName"].GetString());
        m_authSourceNameHasBeenSet = true;
    }

    if (value.HasMember("AuthSourceType") && !value["AuthSourceType"].IsNull())
    {
        if (!value["AuthSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.AuthSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSourceType = string(value["AuthSourceType"].GetString());
        m_authSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthSourceCategory") && !value["AuthSourceCategory"].IsNull())
    {
        if (!value["AuthSourceCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.AuthSourceCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSourceCategory = string(value["AuthSourceCategory"].GetString());
        m_authSourceCategoryHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("ActionResult") && !value["ActionResult"].IsNull())
    {
        if (!value["ActionResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessage.ActionResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionResult = string(value["ActionResult"].GetString());
        m_actionResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCode.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventDate, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_participantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Participant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_participant.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationClientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationClientId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_authSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_authSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_authSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_authSourceCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSourceCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSourceCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_actionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionResult.c_str(), allocator).Move(), allocator);
    }

}


string LogMessage::GetLogId() const
{
    return m_logId;
}

void LogMessage::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool LogMessage::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string LogMessage::GetTenantId() const
{
    return m_tenantId;
}

void LogMessage::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool LogMessage::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string LogMessage::GetUserStoreId() const
{
    return m_userStoreId;
}

void LogMessage::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool LogMessage::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

string LogMessage::GetEventCode() const
{
    return m_eventCode;
}

void LogMessage::SetEventCode(const string& _eventCode)
{
    m_eventCode = _eventCode;
    m_eventCodeHasBeenSet = true;
}

bool LogMessage::EventCodeHasBeenSet() const
{
    return m_eventCodeHasBeenSet;
}

int64_t LogMessage::GetEventDate() const
{
    return m_eventDate;
}

void LogMessage::SetEventDate(const int64_t& _eventDate)
{
    m_eventDate = _eventDate;
    m_eventDateHasBeenSet = true;
}

bool LogMessage::EventDateHasBeenSet() const
{
    return m_eventDateHasBeenSet;
}

string LogMessage::GetDescription() const
{
    return m_description;
}

void LogMessage::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LogMessage::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LogMessage::GetParticipant() const
{
    return m_participant;
}

void LogMessage::SetParticipant(const string& _participant)
{
    m_participant = _participant;
    m_participantHasBeenSet = true;
}

bool LogMessage::ParticipantHasBeenSet() const
{
    return m_participantHasBeenSet;
}

string LogMessage::GetApplicationClientId() const
{
    return m_applicationClientId;
}

void LogMessage::SetApplicationClientId(const string& _applicationClientId)
{
    m_applicationClientId = _applicationClientId;
    m_applicationClientIdHasBeenSet = true;
}

bool LogMessage::ApplicationClientIdHasBeenSet() const
{
    return m_applicationClientIdHasBeenSet;
}

string LogMessage::GetApplicationName() const
{
    return m_applicationName;
}

void LogMessage::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool LogMessage::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string LogMessage::GetAuthSourceId() const
{
    return m_authSourceId;
}

void LogMessage::SetAuthSourceId(const string& _authSourceId)
{
    m_authSourceId = _authSourceId;
    m_authSourceIdHasBeenSet = true;
}

bool LogMessage::AuthSourceIdHasBeenSet() const
{
    return m_authSourceIdHasBeenSet;
}

string LogMessage::GetAuthSourceName() const
{
    return m_authSourceName;
}

void LogMessage::SetAuthSourceName(const string& _authSourceName)
{
    m_authSourceName = _authSourceName;
    m_authSourceNameHasBeenSet = true;
}

bool LogMessage::AuthSourceNameHasBeenSet() const
{
    return m_authSourceNameHasBeenSet;
}

string LogMessage::GetAuthSourceType() const
{
    return m_authSourceType;
}

void LogMessage::SetAuthSourceType(const string& _authSourceType)
{
    m_authSourceType = _authSourceType;
    m_authSourceTypeHasBeenSet = true;
}

bool LogMessage::AuthSourceTypeHasBeenSet() const
{
    return m_authSourceTypeHasBeenSet;
}

string LogMessage::GetAuthSourceCategory() const
{
    return m_authSourceCategory;
}

void LogMessage::SetAuthSourceCategory(const string& _authSourceCategory)
{
    m_authSourceCategory = _authSourceCategory;
    m_authSourceCategoryHasBeenSet = true;
}

bool LogMessage::AuthSourceCategoryHasBeenSet() const
{
    return m_authSourceCategoryHasBeenSet;
}

string LogMessage::GetIp() const
{
    return m_ip;
}

void LogMessage::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool LogMessage::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string LogMessage::GetUserAgent() const
{
    return m_userAgent;
}

void LogMessage::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool LogMessage::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string LogMessage::GetUserId() const
{
    return m_userId;
}

void LogMessage::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool LogMessage::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string LogMessage::GetDetail() const
{
    return m_detail;
}

void LogMessage::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool LogMessage::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string LogMessage::GetActionResult() const
{
    return m_actionResult;
}

void LogMessage::SetActionResult(const string& _actionResult)
{
    m_actionResult = _actionResult;
    m_actionResultHasBeenSet = true;
}

bool LogMessage::ActionResultHasBeenSet() const
{
    return m_actionResultHasBeenSet;
}

