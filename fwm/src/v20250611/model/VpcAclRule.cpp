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

#include <tencentcloud/fwm/v20250611/model/VpcAclRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

VpcAclRule::VpcAclRule() :
    m_sourceContentHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_destContentHasBeenSet(false),
    m_destTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_edgeIdHasBeenSet(false),
    m_fwGroupIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_belongMemberIdHasBeenSet(false)
{
}

CoreInternalOutcome VpcAclRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("DestContent") && !value["DestContent"].IsNull())
    {
        if (!value["DestContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.DestContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destContent = string(value["DestContent"].GetString());
        m_destContentHasBeenSet = true;
    }

    if (value.HasMember("DestType") && !value["DestType"].IsNull())
    {
        if (!value["DestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.DestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destType = string(value["DestType"].GetString());
        m_destTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("EdgeId") && !value["EdgeId"].IsNull())
    {
        if (!value["EdgeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.EdgeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeId = string(value["EdgeId"].GetString());
        m_edgeIdHasBeenSet = true;
    }

    if (value.HasMember("FwGroupId") && !value["FwGroupId"].IsNull())
    {
        if (!value["FwGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.FwGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupId = string(value["FwGroupId"].GetString());
        m_fwGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateId") && !value["ParamTemplateId"].IsNull())
    {
        if (!value["ParamTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.ParamTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateId = string(value["ParamTemplateId"].GetString());
        m_paramTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("BelongMemberId") && !value["BelongMemberId"].IsNull())
    {
        if (!value["BelongMemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRule.BelongMemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongMemberId = string(value["BelongMemberId"].GetString());
        m_belongMemberIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcAclRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_edgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwGroupId.c_str(), allocator).Move(), allocator);
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


string VpcAclRule::GetSourceContent() const
{
    return m_sourceContent;
}

void VpcAclRule::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool VpcAclRule::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string VpcAclRule::GetSourceType() const
{
    return m_sourceType;
}

void VpcAclRule::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool VpcAclRule::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string VpcAclRule::GetDestContent() const
{
    return m_destContent;
}

void VpcAclRule::SetDestContent(const string& _destContent)
{
    m_destContent = _destContent;
    m_destContentHasBeenSet = true;
}

bool VpcAclRule::DestContentHasBeenSet() const
{
    return m_destContentHasBeenSet;
}

string VpcAclRule::GetDestType() const
{
    return m_destType;
}

void VpcAclRule::SetDestType(const string& _destType)
{
    m_destType = _destType;
    m_destTypeHasBeenSet = true;
}

bool VpcAclRule::DestTypeHasBeenSet() const
{
    return m_destTypeHasBeenSet;
}

string VpcAclRule::GetProtocol() const
{
    return m_protocol;
}

void VpcAclRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool VpcAclRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string VpcAclRule::GetRuleAction() const
{
    return m_ruleAction;
}

void VpcAclRule::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool VpcAclRule::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

int64_t VpcAclRule::GetOrderIndex() const
{
    return m_orderIndex;
}

void VpcAclRule::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool VpcAclRule::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string VpcAclRule::GetEdgeId() const
{
    return m_edgeId;
}

void VpcAclRule::SetEdgeId(const string& _edgeId)
{
    m_edgeId = _edgeId;
    m_edgeIdHasBeenSet = true;
}

bool VpcAclRule::EdgeIdHasBeenSet() const
{
    return m_edgeIdHasBeenSet;
}

string VpcAclRule::GetFwGroupId() const
{
    return m_fwGroupId;
}

void VpcAclRule::SetFwGroupId(const string& _fwGroupId)
{
    m_fwGroupId = _fwGroupId;
    m_fwGroupIdHasBeenSet = true;
}

bool VpcAclRule::FwGroupIdHasBeenSet() const
{
    return m_fwGroupIdHasBeenSet;
}

string VpcAclRule::GetRuleId() const
{
    return m_ruleId;
}

void VpcAclRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool VpcAclRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string VpcAclRule::GetPort() const
{
    return m_port;
}

void VpcAclRule::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool VpcAclRule::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string VpcAclRule::GetDescription() const
{
    return m_description;
}

void VpcAclRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VpcAclRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VpcAclRule::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void VpcAclRule::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool VpcAclRule::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

string VpcAclRule::GetBelongMemberId() const
{
    return m_belongMemberId;
}

void VpcAclRule::SetBelongMemberId(const string& _belongMemberId)
{
    m_belongMemberId = _belongMemberId;
    m_belongMemberIdHasBeenSet = true;
}

bool VpcAclRule::BelongMemberIdHasBeenSet() const
{
    return m_belongMemberIdHasBeenSet;
}

