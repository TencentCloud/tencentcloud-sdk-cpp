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

#include <tencentcloud/fwm/v20250611/model/NatAclRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

NatAclRule::NatAclRule() :
    m_sourceContentHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetContentHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_belongMemberIdHasBeenSet(false)
{
}

CoreInternalOutcome NatAclRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetContent") && !value["TargetContent"].IsNull())
    {
        if (!value["TargetContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.TargetContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetContent = string(value["TargetContent"].GetString());
        m_targetContentHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateId") && !value["ParamTemplateId"].IsNull())
    {
        if (!value["ParamTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.ParamTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateId = string(value["ParamTemplateId"].GetString());
        m_paramTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("BelongMemberId") && !value["BelongMemberId"].IsNull())
    {
        if (!value["BelongMemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRule.BelongMemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongMemberId = string(value["BelongMemberId"].GetString());
        m_belongMemberIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatAclRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceContent.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetContent.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_belongMemberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongMemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_belongMemberId.c_str(), allocator).Move(), allocator);
    }

}


string NatAclRule::GetSourceContent() const
{
    return m_sourceContent;
}

void NatAclRule::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool NatAclRule::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string NatAclRule::GetSourceType() const
{
    return m_sourceType;
}

void NatAclRule::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool NatAclRule::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string NatAclRule::GetTargetContent() const
{
    return m_targetContent;
}

void NatAclRule::SetTargetContent(const string& _targetContent)
{
    m_targetContent = _targetContent;
    m_targetContentHasBeenSet = true;
}

bool NatAclRule::TargetContentHasBeenSet() const
{
    return m_targetContentHasBeenSet;
}

string NatAclRule::GetTargetType() const
{
    return m_targetType;
}

void NatAclRule::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool NatAclRule::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string NatAclRule::GetProtocol() const
{
    return m_protocol;
}

void NatAclRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool NatAclRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string NatAclRule::GetRuleAction() const
{
    return m_ruleAction;
}

void NatAclRule::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool NatAclRule::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

int64_t NatAclRule::GetOrderIndex() const
{
    return m_orderIndex;
}

void NatAclRule::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool NatAclRule::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string NatAclRule::GetScope() const
{
    return m_scope;
}

void NatAclRule::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool NatAclRule::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

int64_t NatAclRule::GetDirection() const
{
    return m_direction;
}

void NatAclRule::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool NatAclRule::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string NatAclRule::GetRuleId() const
{
    return m_ruleId;
}

void NatAclRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool NatAclRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string NatAclRule::GetPort() const
{
    return m_port;
}

void NatAclRule::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool NatAclRule::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string NatAclRule::GetDescription() const
{
    return m_description;
}

void NatAclRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NatAclRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NatAclRule::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void NatAclRule::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool NatAclRule::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

string NatAclRule::GetBelongMemberId() const
{
    return m_belongMemberId;
}

void NatAclRule::SetBelongMemberId(const string& _belongMemberId)
{
    m_belongMemberId = _belongMemberId;
    m_belongMemberIdHasBeenSet = true;
}

bool NatAclRule::BelongMemberIdHasBeenSet() const
{
    return m_belongMemberIdHasBeenSet;
}

