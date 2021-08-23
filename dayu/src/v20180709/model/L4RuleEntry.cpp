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

#include <tencentcloud/dayu/v20180709/model/L4RuleEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

L4RuleEntry::L4RuleEntry() :
    m_protocolHasBeenSet(false),
    m_virtualPortHasBeenSet(false),
    m_sourcePortHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_keepTimeHasBeenSet(false),
    m_sourceListHasBeenSet(false),
    m_lbTypeHasBeenSet(false),
    m_keepEnableHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_removeSwitchHasBeenSet(false)
{
}

CoreInternalOutcome L4RuleEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("VirtualPort") && !value["VirtualPort"].IsNull())
    {
        if (!value["VirtualPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.VirtualPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualPort = value["VirtualPort"].GetUint64();
        m_virtualPortHasBeenSet = true;
    }

    if (value.HasMember("SourcePort") && !value["SourcePort"].IsNull())
    {
        if (!value["SourcePort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.SourcePort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourcePort = value["SourcePort"].GetUint64();
        m_sourcePortHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepTime") && !value["KeepTime"].IsNull())
    {
        if (!value["KeepTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.KeepTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepTime = value["KeepTime"].GetUint64();
        m_keepTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceList") && !value["SourceList"].IsNull())
    {
        if (!value["SourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.SourceList` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            L4RuleSource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceList.push_back(item);
        }
        m_sourceListHasBeenSet = true;
    }

    if (value.HasMember("LbType") && !value["LbType"].IsNull())
    {
        if (!value["LbType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.LbType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lbType = value["LbType"].GetUint64();
        m_lbTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepEnable") && !value["KeepEnable"].IsNull())
    {
        if (!value["KeepEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.KeepEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepEnable = value["KeepEnable"].GetUint64();
        m_keepEnableHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RemoveSwitch") && !value["RemoveSwitch"].IsNull())
    {
        if (!value["RemoveSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleEntry.RemoveSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_removeSwitch = value["RemoveSwitch"].GetUint64();
        m_removeSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4RuleEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualPort, allocator);
    }

    if (m_sourcePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourcePort, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_keepTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepTime, allocator);
    }

    if (m_sourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceList.begin(); itr != m_sourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lbType, allocator);
    }

    if (m_keepEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepEnable, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_removeSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeSwitch, allocator);
    }

}


string L4RuleEntry::GetProtocol() const
{
    return m_protocol;
}

void L4RuleEntry::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool L4RuleEntry::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t L4RuleEntry::GetVirtualPort() const
{
    return m_virtualPort;
}

void L4RuleEntry::SetVirtualPort(const uint64_t& _virtualPort)
{
    m_virtualPort = _virtualPort;
    m_virtualPortHasBeenSet = true;
}

bool L4RuleEntry::VirtualPortHasBeenSet() const
{
    return m_virtualPortHasBeenSet;
}

uint64_t L4RuleEntry::GetSourcePort() const
{
    return m_sourcePort;
}

void L4RuleEntry::SetSourcePort(const uint64_t& _sourcePort)
{
    m_sourcePort = _sourcePort;
    m_sourcePortHasBeenSet = true;
}

bool L4RuleEntry::SourcePortHasBeenSet() const
{
    return m_sourcePortHasBeenSet;
}

uint64_t L4RuleEntry::GetSourceType() const
{
    return m_sourceType;
}

void L4RuleEntry::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool L4RuleEntry::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

uint64_t L4RuleEntry::GetKeepTime() const
{
    return m_keepTime;
}

void L4RuleEntry::SetKeepTime(const uint64_t& _keepTime)
{
    m_keepTime = _keepTime;
    m_keepTimeHasBeenSet = true;
}

bool L4RuleEntry::KeepTimeHasBeenSet() const
{
    return m_keepTimeHasBeenSet;
}

vector<L4RuleSource> L4RuleEntry::GetSourceList() const
{
    return m_sourceList;
}

void L4RuleEntry::SetSourceList(const vector<L4RuleSource>& _sourceList)
{
    m_sourceList = _sourceList;
    m_sourceListHasBeenSet = true;
}

bool L4RuleEntry::SourceListHasBeenSet() const
{
    return m_sourceListHasBeenSet;
}

uint64_t L4RuleEntry::GetLbType() const
{
    return m_lbType;
}

void L4RuleEntry::SetLbType(const uint64_t& _lbType)
{
    m_lbType = _lbType;
    m_lbTypeHasBeenSet = true;
}

bool L4RuleEntry::LbTypeHasBeenSet() const
{
    return m_lbTypeHasBeenSet;
}

uint64_t L4RuleEntry::GetKeepEnable() const
{
    return m_keepEnable;
}

void L4RuleEntry::SetKeepEnable(const uint64_t& _keepEnable)
{
    m_keepEnable = _keepEnable;
    m_keepEnableHasBeenSet = true;
}

bool L4RuleEntry::KeepEnableHasBeenSet() const
{
    return m_keepEnableHasBeenSet;
}

string L4RuleEntry::GetRuleId() const
{
    return m_ruleId;
}

void L4RuleEntry::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool L4RuleEntry::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string L4RuleEntry::GetRuleName() const
{
    return m_ruleName;
}

void L4RuleEntry::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool L4RuleEntry::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t L4RuleEntry::GetRemoveSwitch() const
{
    return m_removeSwitch;
}

void L4RuleEntry::SetRemoveSwitch(const uint64_t& _removeSwitch)
{
    m_removeSwitch = _removeSwitch;
    m_removeSwitchHasBeenSet = true;
}

bool L4RuleEntry::RemoveSwitchHasBeenSet() const
{
    return m_removeSwitchHasBeenSet;
}

