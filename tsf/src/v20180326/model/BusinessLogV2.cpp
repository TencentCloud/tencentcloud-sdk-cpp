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

#include <tencentcloud/tsf/v20180326/model/BusinessLogV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

BusinessLogV2::BusinessLogV2() :
    m_instanceIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_instanceIpHasBeenSet(false),
    m_logIdHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

CoreInternalOutcome BusinessLogV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogV2.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogV2.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogV2.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("InstanceIp") && !value["InstanceIp"].IsNull())
    {
        if (!value["InstanceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogV2.InstanceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceIp = string(value["InstanceIp"].GetString());
        m_instanceIpHasBeenSet = true;
    }

    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogV2.LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(value["LogId"].GetString());
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogV2.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusinessLogV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_instanceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

}


string BusinessLogV2::GetInstanceId() const
{
    return m_instanceId;
}

void BusinessLogV2::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BusinessLogV2::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BusinessLogV2::GetContent() const
{
    return m_content;
}

void BusinessLogV2::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool BusinessLogV2::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t BusinessLogV2::GetTimestamp() const
{
    return m_timestamp;
}

void BusinessLogV2::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool BusinessLogV2::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string BusinessLogV2::GetInstanceIp() const
{
    return m_instanceIp;
}

void BusinessLogV2::SetInstanceIp(const string& _instanceIp)
{
    m_instanceIp = _instanceIp;
    m_instanceIpHasBeenSet = true;
}

bool BusinessLogV2::InstanceIpHasBeenSet() const
{
    return m_instanceIpHasBeenSet;
}

string BusinessLogV2::GetLogId() const
{
    return m_logId;
}

void BusinessLogV2::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool BusinessLogV2::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string BusinessLogV2::GetGroupId() const
{
    return m_groupId;
}

void BusinessLogV2::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool BusinessLogV2::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

