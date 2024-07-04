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

#include <tencentcloud/cwp/v20180228/model/DeliverTypeDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DeliverTypeDetails::DeliverTypeDetails() :
    m_securityTypeHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errInfoHasBeenSet(false),
    m_statusTimeHasBeenSet(false),
    m_logNameHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome DeliverTypeDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityType") && !value["SecurityType"].IsNull())
    {
        if (!value["SecurityType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.SecurityType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_securityType = value["SecurityType"].GetUint64();
        m_securityTypeHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.LogType` is not array type"));

        const rapidjson::Value &tmpValue = value["LogType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logType.push_back((*itr).GetInt64());
        }
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.Switch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_switch = value["Switch"].GetUint64();
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrInfo") && !value["ErrInfo"].IsNull())
    {
        if (!value["ErrInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.ErrInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errInfo = string(value["ErrInfo"].GetString());
        m_errInfoHasBeenSet = true;
    }

    if (value.HasMember("StatusTime") && !value["StatusTime"].IsNull())
    {
        if (!value["StatusTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.StatusTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusTime = value["StatusTime"].GetInt64();
        m_statusTimeHasBeenSet = true;
    }

    if (value.HasMember("LogName") && !value["LogName"].IsNull())
    {
        if (!value["LogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.LogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logName = string(value["LogName"].GetString());
        m_logNameHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliverTypeDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityType, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logType.begin(); itr != m_logType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switch, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusTime, allocator);
    }

    if (m_logNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logName.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DeliverTypeDetails::GetSecurityType() const
{
    return m_securityType;
}

void DeliverTypeDetails::SetSecurityType(const uint64_t& _securityType)
{
    m_securityType = _securityType;
    m_securityTypeHasBeenSet = true;
}

bool DeliverTypeDetails::SecurityTypeHasBeenSet() const
{
    return m_securityTypeHasBeenSet;
}

vector<int64_t> DeliverTypeDetails::GetLogType() const
{
    return m_logType;
}

void DeliverTypeDetails::SetLogType(const vector<int64_t>& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool DeliverTypeDetails::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string DeliverTypeDetails::GetTopicId() const
{
    return m_topicId;
}

void DeliverTypeDetails::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DeliverTypeDetails::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string DeliverTypeDetails::GetTopicName() const
{
    return m_topicName;
}

void DeliverTypeDetails::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DeliverTypeDetails::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t DeliverTypeDetails::GetSwitch() const
{
    return m_switch;
}

void DeliverTypeDetails::SetSwitch(const uint64_t& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DeliverTypeDetails::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

uint64_t DeliverTypeDetails::GetStatus() const
{
    return m_status;
}

void DeliverTypeDetails::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeliverTypeDetails::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeliverTypeDetails::GetErrInfo() const
{
    return m_errInfo;
}

void DeliverTypeDetails::SetErrInfo(const string& _errInfo)
{
    m_errInfo = _errInfo;
    m_errInfoHasBeenSet = true;
}

bool DeliverTypeDetails::ErrInfoHasBeenSet() const
{
    return m_errInfoHasBeenSet;
}

int64_t DeliverTypeDetails::GetStatusTime() const
{
    return m_statusTime;
}

void DeliverTypeDetails::SetStatusTime(const int64_t& _statusTime)
{
    m_statusTime = _statusTime;
    m_statusTimeHasBeenSet = true;
}

bool DeliverTypeDetails::StatusTimeHasBeenSet() const
{
    return m_statusTimeHasBeenSet;
}

string DeliverTypeDetails::GetLogName() const
{
    return m_logName;
}

void DeliverTypeDetails::SetLogName(const string& _logName)
{
    m_logName = _logName;
    m_logNameHasBeenSet = true;
}

bool DeliverTypeDetails::LogNameHasBeenSet() const
{
    return m_logNameHasBeenSet;
}

string DeliverTypeDetails::GetLogSetId() const
{
    return m_logSetId;
}

void DeliverTypeDetails::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool DeliverTypeDetails::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string DeliverTypeDetails::GetRegion() const
{
    return m_region;
}

void DeliverTypeDetails::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DeliverTypeDetails::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

