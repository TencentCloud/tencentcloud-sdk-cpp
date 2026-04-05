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

#include <tencentcloud/ga2/v20250115/model/ForwardingRuleSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ForwardingRuleSet::ForwardingRuleSet() :
    m_ruleConditionHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_enableOriginSniHasBeenSet(false),
    m_originSniHasBeenSet(false),
    m_originHeadersHasBeenSet(false),
    m_originHostHasBeenSet(false),
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_forwardingPolicyIdHasBeenSet(false),
    m_forwardingRuleIdHasBeenSet(false)
{
}

CoreInternalOutcome ForwardingRuleSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleCondition") && !value["RuleCondition"].IsNull())
    {
        if (!value["RuleCondition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.RuleCondition` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleCondition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleCondition.push_back(item);
        }
        m_ruleConditionHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.RuleAction` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleAction"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleAction.push_back(item);
        }
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("EnableOriginSni") && !value["EnableOriginSni"].IsNull())
    {
        if (!value["EnableOriginSni"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.EnableOriginSni` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableOriginSni = value["EnableOriginSni"].GetBool();
        m_enableOriginSniHasBeenSet = true;
    }

    if (value.HasMember("OriginSni") && !value["OriginSni"].IsNull())
    {
        if (!value["OriginSni"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.OriginSni` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originSni = string(value["OriginSni"].GetString());
        m_originSniHasBeenSet = true;
    }

    if (value.HasMember("OriginHeaders") && !value["OriginHeaders"].IsNull())
    {
        if (!value["OriginHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.OriginHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originHeaders.push_back(item);
        }
        m_originHeadersHasBeenSet = true;
    }

    if (value.HasMember("OriginHost") && !value["OriginHost"].IsNull())
    {
        if (!value["OriginHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.OriginHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originHost = string(value["OriginHost"].GetString());
        m_originHostHasBeenSet = true;
    }

    if (value.HasMember("GlobalAcceleratorId") && !value["GlobalAcceleratorId"].IsNull())
    {
        if (!value["GlobalAcceleratorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.GlobalAcceleratorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalAcceleratorId = string(value["GlobalAcceleratorId"].GetString());
        m_globalAcceleratorIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ForwardingPolicyId") && !value["ForwardingPolicyId"].IsNull())
    {
        if (!value["ForwardingPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.ForwardingPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardingPolicyId = string(value["ForwardingPolicyId"].GetString());
        m_forwardingPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("ForwardingRuleId") && !value["ForwardingRuleId"].IsNull())
    {
        if (!value["ForwardingRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingRuleSet.ForwardingRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardingRuleId = string(value["ForwardingRuleId"].GetString());
        m_forwardingRuleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForwardingRuleSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleCondition.begin(); itr != m_ruleCondition.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleAction.begin(); itr != m_ruleAction.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableOriginSniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOriginSni";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableOriginSni, allocator);
    }

    if (m_originSniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSni";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originSni.c_str(), allocator).Move(), allocator);
    }

    if (m_originHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originHeaders.begin(); itr != m_originHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_originHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originHost.c_str(), allocator).Move(), allocator);
    }

    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardingPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardingPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardingPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardingRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardingRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardingRuleId.c_str(), allocator).Move(), allocator);
    }

}


vector<RuleCondition> ForwardingRuleSet::GetRuleCondition() const
{
    return m_ruleCondition;
}

void ForwardingRuleSet::SetRuleCondition(const vector<RuleCondition>& _ruleCondition)
{
    m_ruleCondition = _ruleCondition;
    m_ruleConditionHasBeenSet = true;
}

bool ForwardingRuleSet::RuleConditionHasBeenSet() const
{
    return m_ruleConditionHasBeenSet;
}

vector<RuleAction> ForwardingRuleSet::GetRuleAction() const
{
    return m_ruleAction;
}

void ForwardingRuleSet::SetRuleAction(const vector<RuleAction>& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool ForwardingRuleSet::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

bool ForwardingRuleSet::GetEnableOriginSni() const
{
    return m_enableOriginSni;
}

void ForwardingRuleSet::SetEnableOriginSni(const bool& _enableOriginSni)
{
    m_enableOriginSni = _enableOriginSni;
    m_enableOriginSniHasBeenSet = true;
}

bool ForwardingRuleSet::EnableOriginSniHasBeenSet() const
{
    return m_enableOriginSniHasBeenSet;
}

string ForwardingRuleSet::GetOriginSni() const
{
    return m_originSni;
}

void ForwardingRuleSet::SetOriginSni(const string& _originSni)
{
    m_originSni = _originSni;
    m_originSniHasBeenSet = true;
}

bool ForwardingRuleSet::OriginSniHasBeenSet() const
{
    return m_originSniHasBeenSet;
}

vector<OriginHeader> ForwardingRuleSet::GetOriginHeaders() const
{
    return m_originHeaders;
}

void ForwardingRuleSet::SetOriginHeaders(const vector<OriginHeader>& _originHeaders)
{
    m_originHeaders = _originHeaders;
    m_originHeadersHasBeenSet = true;
}

bool ForwardingRuleSet::OriginHeadersHasBeenSet() const
{
    return m_originHeadersHasBeenSet;
}

string ForwardingRuleSet::GetOriginHost() const
{
    return m_originHost;
}

void ForwardingRuleSet::SetOriginHost(const string& _originHost)
{
    m_originHost = _originHost;
    m_originHostHasBeenSet = true;
}

bool ForwardingRuleSet::OriginHostHasBeenSet() const
{
    return m_originHostHasBeenSet;
}

string ForwardingRuleSet::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ForwardingRuleSet::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ForwardingRuleSet::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ForwardingRuleSet::GetListenerId() const
{
    return m_listenerId;
}

void ForwardingRuleSet::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ForwardingRuleSet::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ForwardingRuleSet::GetForwardingPolicyId() const
{
    return m_forwardingPolicyId;
}

void ForwardingRuleSet::SetForwardingPolicyId(const string& _forwardingPolicyId)
{
    m_forwardingPolicyId = _forwardingPolicyId;
    m_forwardingPolicyIdHasBeenSet = true;
}

bool ForwardingRuleSet::ForwardingPolicyIdHasBeenSet() const
{
    return m_forwardingPolicyIdHasBeenSet;
}

string ForwardingRuleSet::GetForwardingRuleId() const
{
    return m_forwardingRuleId;
}

void ForwardingRuleSet::SetForwardingRuleId(const string& _forwardingRuleId)
{
    m_forwardingRuleId = _forwardingRuleId;
    m_forwardingRuleIdHasBeenSet = true;
}

bool ForwardingRuleSet::ForwardingRuleIdHasBeenSet() const
{
    return m_forwardingRuleIdHasBeenSet;
}

