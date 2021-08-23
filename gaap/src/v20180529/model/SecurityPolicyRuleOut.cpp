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

#include <tencentcloud/gaap/v20180529/model/SecurityPolicyRuleOut.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

SecurityPolicyRuleOut::SecurityPolicyRuleOut() :
    m_actionHasBeenSet(false),
    m_sourceCidrHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_destPortRangeHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_policyIdHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicyRuleOut::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleOut.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("SourceCidr") && !value["SourceCidr"].IsNull())
    {
        if (!value["SourceCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleOut.SourceCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCidr = string(value["SourceCidr"].GetString());
        m_sourceCidrHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleOut.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("DestPortRange") && !value["DestPortRange"].IsNull())
    {
        if (!value["DestPortRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleOut.DestPortRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destPortRange = string(value["DestPortRange"].GetString());
        m_destPortRangeHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleOut.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleOut.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleOut.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicyRuleOut::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_destPortRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestPortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destPortRange.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

}


string SecurityPolicyRuleOut::GetAction() const
{
    return m_action;
}

void SecurityPolicyRuleOut::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SecurityPolicyRuleOut::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SecurityPolicyRuleOut::GetSourceCidr() const
{
    return m_sourceCidr;
}

void SecurityPolicyRuleOut::SetSourceCidr(const string& _sourceCidr)
{
    m_sourceCidr = _sourceCidr;
    m_sourceCidrHasBeenSet = true;
}

bool SecurityPolicyRuleOut::SourceCidrHasBeenSet() const
{
    return m_sourceCidrHasBeenSet;
}

string SecurityPolicyRuleOut::GetAliasName() const
{
    return m_aliasName;
}

void SecurityPolicyRuleOut::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool SecurityPolicyRuleOut::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string SecurityPolicyRuleOut::GetDestPortRange() const
{
    return m_destPortRange;
}

void SecurityPolicyRuleOut::SetDestPortRange(const string& _destPortRange)
{
    m_destPortRange = _destPortRange;
    m_destPortRangeHasBeenSet = true;
}

bool SecurityPolicyRuleOut::DestPortRangeHasBeenSet() const
{
    return m_destPortRangeHasBeenSet;
}

string SecurityPolicyRuleOut::GetRuleId() const
{
    return m_ruleId;
}

void SecurityPolicyRuleOut::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SecurityPolicyRuleOut::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string SecurityPolicyRuleOut::GetProtocol() const
{
    return m_protocol;
}

void SecurityPolicyRuleOut::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SecurityPolicyRuleOut::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SecurityPolicyRuleOut::GetPolicyId() const
{
    return m_policyId;
}

void SecurityPolicyRuleOut::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool SecurityPolicyRuleOut::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

