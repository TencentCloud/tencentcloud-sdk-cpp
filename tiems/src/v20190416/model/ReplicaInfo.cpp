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

#include <tencentcloud/tiems/v20190416/model/ReplicaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

ReplicaInfo::ReplicaInfo() :
    m_nameHasBeenSet(false),
    m_eniIpHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_restartedHasBeenSet(false)
{
}

CoreInternalOutcome ReplicaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicaInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EniIp") && !value["EniIp"].IsNull())
    {
        if (!value["EniIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicaInfo.EniIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniIp = string(value["EniIp"].GetString());
        m_eniIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicaInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicaInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicaInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicaInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Restarted") && !value["Restarted"].IsNull())
    {
        if (!value["Restarted"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicaInfo.Restarted` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restarted = value["Restarted"].GetUint64();
        m_restartedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplicaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_eniIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eniIp.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_restartedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Restarted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restarted, allocator);
    }

}


string ReplicaInfo::GetName() const
{
    return m_name;
}

void ReplicaInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReplicaInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ReplicaInfo::GetEniIp() const
{
    return m_eniIp;
}

void ReplicaInfo::SetEniIp(const string& _eniIp)
{
    m_eniIp = _eniIp;
    m_eniIpHasBeenSet = true;
}

bool ReplicaInfo::EniIpHasBeenSet() const
{
    return m_eniIpHasBeenSet;
}

string ReplicaInfo::GetStatus() const
{
    return m_status;
}

void ReplicaInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReplicaInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReplicaInfo::GetMessage() const
{
    return m_message;
}

void ReplicaInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ReplicaInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string ReplicaInfo::GetStartTime() const
{
    return m_startTime;
}

void ReplicaInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ReplicaInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ReplicaInfo::GetCreateTime() const
{
    return m_createTime;
}

void ReplicaInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReplicaInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ReplicaInfo::GetRestarted() const
{
    return m_restarted;
}

void ReplicaInfo::SetRestarted(const uint64_t& _restarted)
{
    m_restarted = _restarted;
    m_restartedHasBeenSet = true;
}

bool ReplicaInfo::RestartedHasBeenSet() const
{
    return m_restartedHasBeenSet;
}

