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

#include <tencentcloud/cloudaudit/v20190319/model/Event.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

Event::Event() :
    m_eventIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_cloudAuditEventHasBeenSet(false),
    m_resourceTypeCnHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_requestIDHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_accountIDHasBeenSet(false),
    m_sourceIPAddressHasBeenSet(false),
    m_eventNameCnHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_eventRegionHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome Event::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("CloudAuditEvent") && !value["CloudAuditEvent"].IsNull())
    {
        if (!value["CloudAuditEvent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.CloudAuditEvent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAuditEvent = string(value["CloudAuditEvent"].GetString());
        m_cloudAuditEventHasBeenSet = true;
    }

    if (value.HasMember("ResourceTypeCn") && !value["ResourceTypeCn"].IsNull())
    {
        if (!value["ResourceTypeCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.ResourceTypeCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceTypeCn = string(value["ResourceTypeCn"].GetString());
        m_resourceTypeCnHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Event.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("EventSource") && !value["EventSource"].IsNull())
    {
        if (!value["EventSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.EventSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSource = string(value["EventSource"].GetString());
        m_eventSourceHasBeenSet = true;
    }

    if (value.HasMember("RequestID") && !value["RequestID"].IsNull())
    {
        if (!value["RequestID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.RequestID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestID = string(value["RequestID"].GetString());
        m_requestIDHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("AccountID") && !value["AccountID"].IsNull())
    {
        if (!value["AccountID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Event.AccountID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountID = value["AccountID"].GetInt64();
        m_accountIDHasBeenSet = true;
    }

    if (value.HasMember("SourceIPAddress") && !value["SourceIPAddress"].IsNull())
    {
        if (!value["SourceIPAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.SourceIPAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIPAddress = string(value["SourceIPAddress"].GetString());
        m_sourceIPAddressHasBeenSet = true;
    }

    if (value.HasMember("EventNameCn") && !value["EventNameCn"].IsNull())
    {
        if (!value["EventNameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.EventNameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventNameCn = string(value["EventNameCn"].GetString());
        m_eventNameCnHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Resources` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resources.Deserialize(value["Resources"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("EventRegion") && !value["EventRegion"].IsNull())
    {
        if (!value["EventRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.EventRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventRegion = string(value["EventRegion"].GetString());
        m_eventRegionHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Event::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAuditEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAuditEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAuditEvent.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTypeCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceTypeCn.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventSource.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestID.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountID, allocator);
    }

    if (m_sourceIPAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIPAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIPAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventNameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resources.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

}


string Event::GetEventId() const
{
    return m_eventId;
}

void Event::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool Event::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string Event::GetUsername() const
{
    return m_username;
}

void Event::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool Event::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string Event::GetEventTime() const
{
    return m_eventTime;
}

void Event::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool Event::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string Event::GetCloudAuditEvent() const
{
    return m_cloudAuditEvent;
}

void Event::SetCloudAuditEvent(const string& _cloudAuditEvent)
{
    m_cloudAuditEvent = _cloudAuditEvent;
    m_cloudAuditEventHasBeenSet = true;
}

bool Event::CloudAuditEventHasBeenSet() const
{
    return m_cloudAuditEventHasBeenSet;
}

string Event::GetResourceTypeCn() const
{
    return m_resourceTypeCn;
}

void Event::SetResourceTypeCn(const string& _resourceTypeCn)
{
    m_resourceTypeCn = _resourceTypeCn;
    m_resourceTypeCnHasBeenSet = true;
}

bool Event::ResourceTypeCnHasBeenSet() const
{
    return m_resourceTypeCnHasBeenSet;
}

int64_t Event::GetErrorCode() const
{
    return m_errorCode;
}

void Event::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool Event::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string Event::GetEventName() const
{
    return m_eventName;
}

void Event::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool Event::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string Event::GetSecretId() const
{
    return m_secretId;
}

void Event::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool Event::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string Event::GetEventSource() const
{
    return m_eventSource;
}

void Event::SetEventSource(const string& _eventSource)
{
    m_eventSource = _eventSource;
    m_eventSourceHasBeenSet = true;
}

bool Event::EventSourceHasBeenSet() const
{
    return m_eventSourceHasBeenSet;
}

string Event::GetRequestID() const
{
    return m_requestID;
}

void Event::SetRequestID(const string& _requestID)
{
    m_requestID = _requestID;
    m_requestIDHasBeenSet = true;
}

bool Event::RequestIDHasBeenSet() const
{
    return m_requestIDHasBeenSet;
}

string Event::GetResourceRegion() const
{
    return m_resourceRegion;
}

void Event::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool Event::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

int64_t Event::GetAccountID() const
{
    return m_accountID;
}

void Event::SetAccountID(const int64_t& _accountID)
{
    m_accountID = _accountID;
    m_accountIDHasBeenSet = true;
}

bool Event::AccountIDHasBeenSet() const
{
    return m_accountIDHasBeenSet;
}

string Event::GetSourceIPAddress() const
{
    return m_sourceIPAddress;
}

void Event::SetSourceIPAddress(const string& _sourceIPAddress)
{
    m_sourceIPAddress = _sourceIPAddress;
    m_sourceIPAddressHasBeenSet = true;
}

bool Event::SourceIPAddressHasBeenSet() const
{
    return m_sourceIPAddressHasBeenSet;
}

string Event::GetEventNameCn() const
{
    return m_eventNameCn;
}

void Event::SetEventNameCn(const string& _eventNameCn)
{
    m_eventNameCn = _eventNameCn;
    m_eventNameCnHasBeenSet = true;
}

bool Event::EventNameCnHasBeenSet() const
{
    return m_eventNameCnHasBeenSet;
}

Resource Event::GetResources() const
{
    return m_resources;
}

void Event::SetResources(const Resource& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool Event::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string Event::GetEventRegion() const
{
    return m_eventRegion;
}

void Event::SetEventRegion(const string& _eventRegion)
{
    m_eventRegion = _eventRegion;
    m_eventRegionHasBeenSet = true;
}

bool Event::EventRegionHasBeenSet() const
{
    return m_eventRegionHasBeenSet;
}

string Event::GetLocation() const
{
    return m_location;
}

void Event::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool Event::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

