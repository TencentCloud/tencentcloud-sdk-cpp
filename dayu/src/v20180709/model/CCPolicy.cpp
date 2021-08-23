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

#include <tencentcloud/dayu/v20180709/model/CCPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CCPolicy::CCPolicy() :
    m_nameHasBeenSet(false),
    m_smodeHasBeenSet(false),
    m_setIdHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_exeModeHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_ruleListHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

CoreInternalOutcome CCPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Smode") && !value["Smode"].IsNull())
    {
        if (!value["Smode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.Smode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_smode = string(value["Smode"].GetString());
        m_smodeHasBeenSet = true;
    }

    if (value.HasMember("SetId") && !value["SetId"].IsNull())
    {
        if (!value["SetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.SetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setId = string(value["SetId"].GetString());
        m_setIdHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.Frequency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = value["Frequency"].GetUint64();
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("ExeMode") && !value["ExeMode"].IsNull())
    {
        if (!value["ExeMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.ExeMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exeMode = string(value["ExeMode"].GetString());
        m_exeModeHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.Switch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_switch = value["Switch"].GetUint64();
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleList") && !value["RuleList"].IsNull())
    {
        if (!value["RuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCPolicy.RuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CCRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleList.push_back(item);
        }
        m_ruleListHasBeenSet = true;
    }

    if (value.HasMember("IpList") && !value["IpList"].IsNull())
    {
        if (!value["IpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCPolicy.IpList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipList.push_back((*itr).GetString());
        }
        m_ipListHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCPolicy.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_smodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Smode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_smode.c_str(), allocator).Move(), allocator);
    }

    if (m_setIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setId.c_str(), allocator).Move(), allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequency, allocator);
    }

    if (m_exeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExeMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switch, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleList.begin(); itr != m_ruleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

}


string CCPolicy::GetName() const
{
    return m_name;
}

void CCPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CCPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CCPolicy::GetSmode() const
{
    return m_smode;
}

void CCPolicy::SetSmode(const string& _smode)
{
    m_smode = _smode;
    m_smodeHasBeenSet = true;
}

bool CCPolicy::SmodeHasBeenSet() const
{
    return m_smodeHasBeenSet;
}

string CCPolicy::GetSetId() const
{
    return m_setId;
}

void CCPolicy::SetSetId(const string& _setId)
{
    m_setId = _setId;
    m_setIdHasBeenSet = true;
}

bool CCPolicy::SetIdHasBeenSet() const
{
    return m_setIdHasBeenSet;
}

uint64_t CCPolicy::GetFrequency() const
{
    return m_frequency;
}

void CCPolicy::SetFrequency(const uint64_t& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool CCPolicy::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

string CCPolicy::GetExeMode() const
{
    return m_exeMode;
}

void CCPolicy::SetExeMode(const string& _exeMode)
{
    m_exeMode = _exeMode;
    m_exeModeHasBeenSet = true;
}

bool CCPolicy::ExeModeHasBeenSet() const
{
    return m_exeModeHasBeenSet;
}

uint64_t CCPolicy::GetSwitch() const
{
    return m_switch;
}

void CCPolicy::SetSwitch(const uint64_t& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool CCPolicy::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string CCPolicy::GetCreateTime() const
{
    return m_createTime;
}

void CCPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CCPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<CCRule> CCPolicy::GetRuleList() const
{
    return m_ruleList;
}

void CCPolicy::SetRuleList(const vector<CCRule>& _ruleList)
{
    m_ruleList = _ruleList;
    m_ruleListHasBeenSet = true;
}

bool CCPolicy::RuleListHasBeenSet() const
{
    return m_ruleListHasBeenSet;
}

vector<string> CCPolicy::GetIpList() const
{
    return m_ipList;
}

void CCPolicy::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool CCPolicy::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

string CCPolicy::GetProtocol() const
{
    return m_protocol;
}

void CCPolicy::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CCPolicy::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CCPolicy::GetRuleId() const
{
    return m_ruleId;
}

void CCPolicy::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CCPolicy::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CCPolicy::GetDomain() const
{
    return m_domain;
}

void CCPolicy::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CCPolicy::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

