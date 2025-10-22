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

#include <tencentcloud/es/v20180416/model/IpTimePair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

IpTimePair::IpTimePair() :
    m_ipHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_nodeIpHasBeenSet(false)
{
}

CoreInternalOutcome IpTimePair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTimePair.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpTimePair.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTimePair.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpTimePair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

}


string IpTimePair::GetIp() const
{
    return m_ip;
}

void IpTimePair::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool IpTimePair::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t IpTimePair::GetTimestamp() const
{
    return m_timestamp;
}

void IpTimePair::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool IpTimePair::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string IpTimePair::GetNodeIp() const
{
    return m_nodeIp;
}

void IpTimePair::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool IpTimePair::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

