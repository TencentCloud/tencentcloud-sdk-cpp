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

#include <tencentcloud/tsf/v20180326/model/StdoutLogV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

StdoutLogV2::StdoutLogV2() :
    m_instanceIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_instanceIpHasBeenSet(false)
{
}

CoreInternalOutcome StdoutLogV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StdoutLogV2.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StdoutLogV2.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StdoutLogV2.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("InstanceIp") && !value["InstanceIp"].IsNull())
    {
        if (!value["InstanceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StdoutLogV2.InstanceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceIp = string(value["InstanceIp"].GetString());
        m_instanceIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StdoutLogV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string StdoutLogV2::GetInstanceId() const
{
    return m_instanceId;
}

void StdoutLogV2::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool StdoutLogV2::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string StdoutLogV2::GetContent() const
{
    return m_content;
}

void StdoutLogV2::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool StdoutLogV2::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t StdoutLogV2::GetTimestamp() const
{
    return m_timestamp;
}

void StdoutLogV2::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool StdoutLogV2::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string StdoutLogV2::GetInstanceIp() const
{
    return m_instanceIp;
}

void StdoutLogV2::SetInstanceIp(const string& _instanceIp)
{
    m_instanceIp = _instanceIp;
    m_instanceIpHasBeenSet = true;
}

bool StdoutLogV2::InstanceIpHasBeenSet() const
{
    return m_instanceIpHasBeenSet;
}

