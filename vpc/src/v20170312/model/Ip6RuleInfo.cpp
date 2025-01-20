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

#include <tencentcloud/vpc/v20170312/model/Ip6RuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

Ip6RuleInfo::Ip6RuleInfo() :
    m_vport6HasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false)
{
}

CoreInternalOutcome Ip6RuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vport6") && !value["Vport6"].IsNull())
    {
        if (!value["Vport6"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6RuleInfo.Vport6` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport6 = value["Vport6"].GetInt64();
        m_vport6HasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6RuleInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6RuleInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6RuleInfo.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Ip6RuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vport6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport6, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

}


int64_t Ip6RuleInfo::GetVport6() const
{
    return m_vport6;
}

void Ip6RuleInfo::SetVport6(const int64_t& _vport6)
{
    m_vport6 = _vport6;
    m_vport6HasBeenSet = true;
}

bool Ip6RuleInfo::Vport6HasBeenSet() const
{
    return m_vport6HasBeenSet;
}

string Ip6RuleInfo::GetProtocol() const
{
    return m_protocol;
}

void Ip6RuleInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Ip6RuleInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string Ip6RuleInfo::GetVip() const
{
    return m_vip;
}

void Ip6RuleInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool Ip6RuleInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t Ip6RuleInfo::GetVport() const
{
    return m_vport;
}

void Ip6RuleInfo::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool Ip6RuleInfo::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

