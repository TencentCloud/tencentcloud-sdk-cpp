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

#include <tencentcloud/csip/v20221121/model/UserCallRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UserCallRecord::UserCallRecord() :
    m_sourceIPHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_callCountHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_firstCallTimeHasBeenSet(false),
    m_lastCallTimeHasBeenSet(false),
    m_sourceIPRemarkHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_iSPHasBeenSet(false)
{
}

CoreInternalOutcome UserCallRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceIP") && !value["SourceIP"].IsNull())
    {
        if (!value["SourceIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.SourceIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIP = string(value["SourceIP"].GetString());
        m_sourceIPHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("CallCount") && !value["CallCount"].IsNull())
    {
        if (!value["CallCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.CallCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callCount = value["CallCount"].GetInt64();
        m_callCountHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("FirstCallTime") && !value["FirstCallTime"].IsNull())
    {
        if (!value["FirstCallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.FirstCallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstCallTime = string(value["FirstCallTime"].GetString());
        m_firstCallTimeHasBeenSet = true;
    }

    if (value.HasMember("LastCallTime") && !value["LastCallTime"].IsNull())
    {
        if (!value["LastCallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.LastCallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCallTime = string(value["LastCallTime"].GetString());
        m_lastCallTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceIPRemark") && !value["SourceIPRemark"].IsNull())
    {
        if (!value["SourceIPRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.SourceIPRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIPRemark = string(value["SourceIPRemark"].GetString());
        m_sourceIPRemarkHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCallRecord.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserCallRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIP.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_callCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callCount, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_firstCallTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstCallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstCallTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCallTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCallTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIPRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIPRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIPRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

}


string UserCallRecord::GetSourceIP() const
{
    return m_sourceIP;
}

void UserCallRecord::SetSourceIP(const string& _sourceIP)
{
    m_sourceIP = _sourceIP;
    m_sourceIPHasBeenSet = true;
}

bool UserCallRecord::SourceIPHasBeenSet() const
{
    return m_sourceIPHasBeenSet;
}

int64_t UserCallRecord::GetEventType() const
{
    return m_eventType;
}

void UserCallRecord::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool UserCallRecord::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

int64_t UserCallRecord::GetCallCount() const
{
    return m_callCount;
}

void UserCallRecord::SetCallCount(const int64_t& _callCount)
{
    m_callCount = _callCount;
    m_callCountHasBeenSet = true;
}

bool UserCallRecord::CallCountHasBeenSet() const
{
    return m_callCountHasBeenSet;
}

int64_t UserCallRecord::GetCode() const
{
    return m_code;
}

void UserCallRecord::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool UserCallRecord::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string UserCallRecord::GetFirstCallTime() const
{
    return m_firstCallTime;
}

void UserCallRecord::SetFirstCallTime(const string& _firstCallTime)
{
    m_firstCallTime = _firstCallTime;
    m_firstCallTimeHasBeenSet = true;
}

bool UserCallRecord::FirstCallTimeHasBeenSet() const
{
    return m_firstCallTimeHasBeenSet;
}

string UserCallRecord::GetLastCallTime() const
{
    return m_lastCallTime;
}

void UserCallRecord::SetLastCallTime(const string& _lastCallTime)
{
    m_lastCallTime = _lastCallTime;
    m_lastCallTimeHasBeenSet = true;
}

bool UserCallRecord::LastCallTimeHasBeenSet() const
{
    return m_lastCallTimeHasBeenSet;
}

string UserCallRecord::GetSourceIPRemark() const
{
    return m_sourceIPRemark;
}

void UserCallRecord::SetSourceIPRemark(const string& _sourceIPRemark)
{
    m_sourceIPRemark = _sourceIPRemark;
    m_sourceIPRemarkHasBeenSet = true;
}

bool UserCallRecord::SourceIPRemarkHasBeenSet() const
{
    return m_sourceIPRemarkHasBeenSet;
}

string UserCallRecord::GetRegion() const
{
    return m_region;
}

void UserCallRecord::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool UserCallRecord::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string UserCallRecord::GetUserName() const
{
    return m_userName;
}

void UserCallRecord::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserCallRecord::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserCallRecord::GetDate() const
{
    return m_date;
}

void UserCallRecord::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool UserCallRecord::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

int64_t UserCallRecord::GetAppID() const
{
    return m_appID;
}

void UserCallRecord::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool UserCallRecord::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string UserCallRecord::GetISP() const
{
    return m_iSP;
}

void UserCallRecord::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool UserCallRecord::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

