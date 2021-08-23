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

#include <tencentcloud/vpc/v20170312/model/Ip6Rule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

Ip6Rule::Ip6Rule() :
    m_ip6RuleIdHasBeenSet(false),
    m_ip6RuleNameHasBeenSet(false),
    m_vip6HasBeenSet(false),
    m_vport6HasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_ruleStatusHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome Ip6Rule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip6RuleId") && !value["Ip6RuleId"].IsNull())
    {
        if (!value["Ip6RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Rule.Ip6RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip6RuleId = string(value["Ip6RuleId"].GetString());
        m_ip6RuleIdHasBeenSet = true;
    }

    if (value.HasMember("Ip6RuleName") && !value["Ip6RuleName"].IsNull())
    {
        if (!value["Ip6RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Rule.Ip6RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip6RuleName = string(value["Ip6RuleName"].GetString());
        m_ip6RuleNameHasBeenSet = true;
    }

    if (value.HasMember("Vip6") && !value["Vip6"].IsNull())
    {
        if (!value["Vip6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Rule.Vip6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip6 = string(value["Vip6"].GetString());
        m_vip6HasBeenSet = true;
    }

    if (value.HasMember("Vport6") && !value["Vport6"].IsNull())
    {
        if (!value["Vport6"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Rule.Vport6` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport6 = value["Vport6"].GetInt64();
        m_vport6HasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Rule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Rule.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Rule.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Rule.RuleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = string(value["RuleStatus"].GetString());
        m_ruleStatusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Rule.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Ip6Rule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ip6RuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip6RuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ip6RuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip6RuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_vip6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip6.c_str(), allocator).Move(), allocator);
    }

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

    if (m_ruleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string Ip6Rule::GetIp6RuleId() const
{
    return m_ip6RuleId;
}

void Ip6Rule::SetIp6RuleId(const string& _ip6RuleId)
{
    m_ip6RuleId = _ip6RuleId;
    m_ip6RuleIdHasBeenSet = true;
}

bool Ip6Rule::Ip6RuleIdHasBeenSet() const
{
    return m_ip6RuleIdHasBeenSet;
}

string Ip6Rule::GetIp6RuleName() const
{
    return m_ip6RuleName;
}

void Ip6Rule::SetIp6RuleName(const string& _ip6RuleName)
{
    m_ip6RuleName = _ip6RuleName;
    m_ip6RuleNameHasBeenSet = true;
}

bool Ip6Rule::Ip6RuleNameHasBeenSet() const
{
    return m_ip6RuleNameHasBeenSet;
}

string Ip6Rule::GetVip6() const
{
    return m_vip6;
}

void Ip6Rule::SetVip6(const string& _vip6)
{
    m_vip6 = _vip6;
    m_vip6HasBeenSet = true;
}

bool Ip6Rule::Vip6HasBeenSet() const
{
    return m_vip6HasBeenSet;
}

int64_t Ip6Rule::GetVport6() const
{
    return m_vport6;
}

void Ip6Rule::SetVport6(const int64_t& _vport6)
{
    m_vport6 = _vport6;
    m_vport6HasBeenSet = true;
}

bool Ip6Rule::Vport6HasBeenSet() const
{
    return m_vport6HasBeenSet;
}

string Ip6Rule::GetProtocol() const
{
    return m_protocol;
}

void Ip6Rule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Ip6Rule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string Ip6Rule::GetVip() const
{
    return m_vip;
}

void Ip6Rule::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool Ip6Rule::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t Ip6Rule::GetVport() const
{
    return m_vport;
}

void Ip6Rule::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool Ip6Rule::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string Ip6Rule::GetRuleStatus() const
{
    return m_ruleStatus;
}

void Ip6Rule::SetRuleStatus(const string& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool Ip6Rule::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

string Ip6Rule::GetCreatedTime() const
{
    return m_createdTime;
}

void Ip6Rule::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Ip6Rule::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

