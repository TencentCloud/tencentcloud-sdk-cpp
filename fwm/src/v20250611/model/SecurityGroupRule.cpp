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

#include <tencentcloud/fwm/v20250611/model/SecurityGroupRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

SecurityGroupRule::SecurityGroupRule() :
    m_ipVersionHasBeenSet(false),
    m_sourceContentHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_destContentHasBeenSet(false),
    m_destTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_serviceTemplateIdHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_protocolPortTypeHasBeenSet(false),
    m_belongMemberIdHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(value["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("DestContent") && !value["DestContent"].IsNull())
    {
        if (!value["DestContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.DestContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destContent = string(value["DestContent"].GetString());
        m_destContentHasBeenSet = true;
    }

    if (value.HasMember("DestType") && !value["DestType"].IsNull())
    {
        if (!value["DestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.DestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destType = string(value["DestType"].GetString());
        m_destTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateId") && !value["ServiceTemplateId"].IsNull())
    {
        if (!value["ServiceTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.ServiceTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateId = string(value["ServiceTemplateId"].GetString());
        m_serviceTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPortType") && !value["ProtocolPortType"].IsNull())
    {
        if (!value["ProtocolPortType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.ProtocolPortType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolPortType = value["ProtocolPortType"].GetInt64();
        m_protocolPortTypeHasBeenSet = true;
    }

    if (value.HasMember("BelongMemberId") && !value["BelongMemberId"].IsNull())
    {
        if (!value["BelongMemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupRule.BelongMemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongMemberId = string(value["BelongMemberId"].GetString());
        m_belongMemberIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipVersion.c_str(), allocator).Move(), allocator);
    }

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

    if (m_destContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destContent.c_str(), allocator).Move(), allocator);
    }

    if (m_destTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolPortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPortType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocolPortType, allocator);
    }

    if (m_belongMemberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongMemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_belongMemberId.c_str(), allocator).Move(), allocator);
    }

}


string SecurityGroupRule::GetIpVersion() const
{
    return m_ipVersion;
}

void SecurityGroupRule::SetIpVersion(const string& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool SecurityGroupRule::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

string SecurityGroupRule::GetSourceContent() const
{
    return m_sourceContent;
}

void SecurityGroupRule::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool SecurityGroupRule::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string SecurityGroupRule::GetSourceType() const
{
    return m_sourceType;
}

void SecurityGroupRule::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool SecurityGroupRule::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string SecurityGroupRule::GetDestContent() const
{
    return m_destContent;
}

void SecurityGroupRule::SetDestContent(const string& _destContent)
{
    m_destContent = _destContent;
    m_destContentHasBeenSet = true;
}

bool SecurityGroupRule::DestContentHasBeenSet() const
{
    return m_destContentHasBeenSet;
}

string SecurityGroupRule::GetDestType() const
{
    return m_destType;
}

void SecurityGroupRule::SetDestType(const string& _destType)
{
    m_destType = _destType;
    m_destTypeHasBeenSet = true;
}

bool SecurityGroupRule::DestTypeHasBeenSet() const
{
    return m_destTypeHasBeenSet;
}

string SecurityGroupRule::GetProtocol() const
{
    return m_protocol;
}

void SecurityGroupRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SecurityGroupRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SecurityGroupRule::GetPort() const
{
    return m_port;
}

void SecurityGroupRule::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SecurityGroupRule::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string SecurityGroupRule::GetServiceTemplateId() const
{
    return m_serviceTemplateId;
}

void SecurityGroupRule::SetServiceTemplateId(const string& _serviceTemplateId)
{
    m_serviceTemplateId = _serviceTemplateId;
    m_serviceTemplateIdHasBeenSet = true;
}

bool SecurityGroupRule::ServiceTemplateIdHasBeenSet() const
{
    return m_serviceTemplateIdHasBeenSet;
}

string SecurityGroupRule::GetRuleAction() const
{
    return m_ruleAction;
}

void SecurityGroupRule::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool SecurityGroupRule::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string SecurityGroupRule::GetDescription() const
{
    return m_description;
}

void SecurityGroupRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SecurityGroupRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t SecurityGroupRule::GetOrderIndex() const
{
    return m_orderIndex;
}

void SecurityGroupRule::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool SecurityGroupRule::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string SecurityGroupRule::GetRuleId() const
{
    return m_ruleId;
}

void SecurityGroupRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SecurityGroupRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string SecurityGroupRule::GetScope() const
{
    return m_scope;
}

void SecurityGroupRule::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool SecurityGroupRule::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

int64_t SecurityGroupRule::GetProtocolPortType() const
{
    return m_protocolPortType;
}

void SecurityGroupRule::SetProtocolPortType(const int64_t& _protocolPortType)
{
    m_protocolPortType = _protocolPortType;
    m_protocolPortTypeHasBeenSet = true;
}

bool SecurityGroupRule::ProtocolPortTypeHasBeenSet() const
{
    return m_protocolPortTypeHasBeenSet;
}

string SecurityGroupRule::GetBelongMemberId() const
{
    return m_belongMemberId;
}

void SecurityGroupRule::SetBelongMemberId(const string& _belongMemberId)
{
    m_belongMemberId = _belongMemberId;
    m_belongMemberIdHasBeenSet = true;
}

bool SecurityGroupRule::BelongMemberIdHasBeenSet() const
{
    return m_belongMemberIdHasBeenSet;
}

