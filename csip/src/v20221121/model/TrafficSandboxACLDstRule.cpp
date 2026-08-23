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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLDstRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxACLDstRule::TrafficSandboxACLDstRule() :
    m_dstIPHasBeenSet(false),
    m_dstIPExceptHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_dstPortExceptHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxACLDstRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DstIP") && !value["DstIP"].IsNull())
    {
        if (!value["DstIP"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLDstRule.DstIP` is not array type"));

        const rapidjson::Value &tmpValue = value["DstIP"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dstIP.push_back((*itr).GetString());
        }
        m_dstIPHasBeenSet = true;
    }

    if (value.HasMember("DstIPExcept") && !value["DstIPExcept"].IsNull())
    {
        if (!value["DstIPExcept"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLDstRule.DstIPExcept` is not array type"));

        const rapidjson::Value &tmpValue = value["DstIPExcept"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dstIPExcept.push_back((*itr).GetString());
        }
        m_dstIPExceptHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLDstRule.DstPort` is not array type"));

        const rapidjson::Value &tmpValue = value["DstPort"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dstPort.push_back((*itr).GetString());
        }
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("DstPortExcept") && !value["DstPortExcept"].IsNull())
    {
        if (!value["DstPortExcept"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLDstRule.DstPortExcept` is not array type"));

        const rapidjson::Value &tmpValue = value["DstPortExcept"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dstPortExcept.push_back((*itr).GetString());
        }
        m_dstPortExceptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxACLDstRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dstIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dstIP.begin(); itr != m_dstIP.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dstIPExceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIPExcept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dstIPExcept.begin(); itr != m_dstIPExcept.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dstPort.begin(); itr != m_dstPort.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dstPortExceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPortExcept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dstPortExcept.begin(); itr != m_dstPortExcept.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> TrafficSandboxACLDstRule::GetDstIP() const
{
    return m_dstIP;
}

void TrafficSandboxACLDstRule::SetDstIP(const vector<string>& _dstIP)
{
    m_dstIP = _dstIP;
    m_dstIPHasBeenSet = true;
}

bool TrafficSandboxACLDstRule::DstIPHasBeenSet() const
{
    return m_dstIPHasBeenSet;
}

vector<string> TrafficSandboxACLDstRule::GetDstIPExcept() const
{
    return m_dstIPExcept;
}

void TrafficSandboxACLDstRule::SetDstIPExcept(const vector<string>& _dstIPExcept)
{
    m_dstIPExcept = _dstIPExcept;
    m_dstIPExceptHasBeenSet = true;
}

bool TrafficSandboxACLDstRule::DstIPExceptHasBeenSet() const
{
    return m_dstIPExceptHasBeenSet;
}

vector<string> TrafficSandboxACLDstRule::GetDstPort() const
{
    return m_dstPort;
}

void TrafficSandboxACLDstRule::SetDstPort(const vector<string>& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool TrafficSandboxACLDstRule::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

vector<string> TrafficSandboxACLDstRule::GetDstPortExcept() const
{
    return m_dstPortExcept;
}

void TrafficSandboxACLDstRule::SetDstPortExcept(const vector<string>& _dstPortExcept)
{
    m_dstPortExcept = _dstPortExcept;
    m_dstPortExceptHasBeenSet = true;
}

bool TrafficSandboxACLDstRule::DstPortExceptHasBeenSet() const
{
    return m_dstPortExceptHasBeenSet;
}

