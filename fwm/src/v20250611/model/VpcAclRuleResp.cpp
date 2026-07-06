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

#include <tencentcloud/fwm/v20250611/model/VpcAclRuleResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

VpcAclRuleResp::VpcAclRuleResp() :
    m_ruleIdHasBeenSet(false),
    m_sequenceHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_sourceContentHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_destContentHasBeenSet(false),
    m_destTypeHasBeenSet(false),
    m_destNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_paramTemplateNameHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_edgeIdHasBeenSet(false),
    m_fwGroupIdHasBeenSet(false),
    m_invalidHasBeenSet(false),
    m_belongMemberHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dnsParseCntHasBeenSet(false),
    m_fwGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome VpcAclRuleResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.Sequence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = value["Sequence"].GetInt64();
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(value["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("DestContent") && !value["DestContent"].IsNull())
    {
        if (!value["DestContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.DestContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destContent = string(value["DestContent"].GetString());
        m_destContentHasBeenSet = true;
    }

    if (value.HasMember("DestType") && !value["DestType"].IsNull())
    {
        if (!value["DestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.DestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destType = string(value["DestType"].GetString());
        m_destTypeHasBeenSet = true;
    }

    if (value.HasMember("DestName") && !value["DestName"].IsNull())
    {
        if (!value["DestName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.DestName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destName = string(value["DestName"].GetString());
        m_destNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateId") && !value["ParamTemplateId"].IsNull())
    {
        if (!value["ParamTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.ParamTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateId = string(value["ParamTemplateId"].GetString());
        m_paramTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateName") && !value["ParamTemplateName"].IsNull())
    {
        if (!value["ParamTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.ParamTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateName = string(value["ParamTemplateName"].GetString());
        m_paramTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("EdgeId") && !value["EdgeId"].IsNull())
    {
        if (!value["EdgeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.EdgeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeId = string(value["EdgeId"].GetString());
        m_edgeIdHasBeenSet = true;
    }

    if (value.HasMember("FwGroupId") && !value["FwGroupId"].IsNull())
    {
        if (!value["FwGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.FwGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupId = string(value["FwGroupId"].GetString());
        m_fwGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Invalid") && !value["Invalid"].IsNull())
    {
        if (!value["Invalid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.Invalid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalid = value["Invalid"].GetInt64();
        m_invalidHasBeenSet = true;
    }

    if (value.HasMember("BelongMember") && !value["BelongMember"].IsNull())
    {
        if (!value["BelongMember"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.BelongMember` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_belongMember.Deserialize(value["BelongMember"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_belongMemberHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DnsParseCnt") && !value["DnsParseCnt"].IsNull())
    {
        if (!value["DnsParseCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.DnsParseCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsParseCnt = value["DnsParseCnt"].GetInt64();
        m_dnsParseCntHasBeenSet = true;
    }

    if (value.HasMember("FwGroupName") && !value["FwGroupName"].IsNull())
    {
        if (!value["FwGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcAclRuleResp.FwGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupName = string(value["FwGroupName"].GetString());
        m_fwGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcAclRuleResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sequence, allocator);
    }

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

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
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

    if (m_destNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destName.c_str(), allocator).Move(), allocator);
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

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateName.c_str(), allocator).Move(), allocator);
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

    if (m_invalidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invalid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalid, allocator);
    }

    if (m_belongMemberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongMember";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_belongMember.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsParseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsParseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dnsParseCnt, allocator);
    }

    if (m_fwGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwGroupName.c_str(), allocator).Move(), allocator);
    }

}


string VpcAclRuleResp::GetRuleId() const
{
    return m_ruleId;
}

void VpcAclRuleResp::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool VpcAclRuleResp::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t VpcAclRuleResp::GetSequence() const
{
    return m_sequence;
}

void VpcAclRuleResp::SetSequence(const int64_t& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool VpcAclRuleResp::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

string VpcAclRuleResp::GetIpVersion() const
{
    return m_ipVersion;
}

void VpcAclRuleResp::SetIpVersion(const string& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool VpcAclRuleResp::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

string VpcAclRuleResp::GetSourceContent() const
{
    return m_sourceContent;
}

void VpcAclRuleResp::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool VpcAclRuleResp::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string VpcAclRuleResp::GetSourceType() const
{
    return m_sourceType;
}

void VpcAclRuleResp::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool VpcAclRuleResp::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string VpcAclRuleResp::GetSourceName() const
{
    return m_sourceName;
}

void VpcAclRuleResp::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool VpcAclRuleResp::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string VpcAclRuleResp::GetDestContent() const
{
    return m_destContent;
}

void VpcAclRuleResp::SetDestContent(const string& _destContent)
{
    m_destContent = _destContent;
    m_destContentHasBeenSet = true;
}

bool VpcAclRuleResp::DestContentHasBeenSet() const
{
    return m_destContentHasBeenSet;
}

string VpcAclRuleResp::GetDestType() const
{
    return m_destType;
}

void VpcAclRuleResp::SetDestType(const string& _destType)
{
    m_destType = _destType;
    m_destTypeHasBeenSet = true;
}

bool VpcAclRuleResp::DestTypeHasBeenSet() const
{
    return m_destTypeHasBeenSet;
}

string VpcAclRuleResp::GetDestName() const
{
    return m_destName;
}

void VpcAclRuleResp::SetDestName(const string& _destName)
{
    m_destName = _destName;
    m_destNameHasBeenSet = true;
}

bool VpcAclRuleResp::DestNameHasBeenSet() const
{
    return m_destNameHasBeenSet;
}

string VpcAclRuleResp::GetProtocol() const
{
    return m_protocol;
}

void VpcAclRuleResp::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool VpcAclRuleResp::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string VpcAclRuleResp::GetPort() const
{
    return m_port;
}

void VpcAclRuleResp::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool VpcAclRuleResp::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string VpcAclRuleResp::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void VpcAclRuleResp::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool VpcAclRuleResp::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

string VpcAclRuleResp::GetParamTemplateName() const
{
    return m_paramTemplateName;
}

void VpcAclRuleResp::SetParamTemplateName(const string& _paramTemplateName)
{
    m_paramTemplateName = _paramTemplateName;
    m_paramTemplateNameHasBeenSet = true;
}

bool VpcAclRuleResp::ParamTemplateNameHasBeenSet() const
{
    return m_paramTemplateNameHasBeenSet;
}

string VpcAclRuleResp::GetRuleAction() const
{
    return m_ruleAction;
}

void VpcAclRuleResp::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool VpcAclRuleResp::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string VpcAclRuleResp::GetDescription() const
{
    return m_description;
}

void VpcAclRuleResp::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VpcAclRuleResp::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VpcAclRuleResp::GetEdgeId() const
{
    return m_edgeId;
}

void VpcAclRuleResp::SetEdgeId(const string& _edgeId)
{
    m_edgeId = _edgeId;
    m_edgeIdHasBeenSet = true;
}

bool VpcAclRuleResp::EdgeIdHasBeenSet() const
{
    return m_edgeIdHasBeenSet;
}

string VpcAclRuleResp::GetFwGroupId() const
{
    return m_fwGroupId;
}

void VpcAclRuleResp::SetFwGroupId(const string& _fwGroupId)
{
    m_fwGroupId = _fwGroupId;
    m_fwGroupIdHasBeenSet = true;
}

bool VpcAclRuleResp::FwGroupIdHasBeenSet() const
{
    return m_fwGroupIdHasBeenSet;
}

int64_t VpcAclRuleResp::GetInvalid() const
{
    return m_invalid;
}

void VpcAclRuleResp::SetInvalid(const int64_t& _invalid)
{
    m_invalid = _invalid;
    m_invalidHasBeenSet = true;
}

bool VpcAclRuleResp::InvalidHasBeenSet() const
{
    return m_invalidHasBeenSet;
}

MemberInfo VpcAclRuleResp::GetBelongMember() const
{
    return m_belongMember;
}

void VpcAclRuleResp::SetBelongMember(const MemberInfo& _belongMember)
{
    m_belongMember = _belongMember;
    m_belongMemberHasBeenSet = true;
}

bool VpcAclRuleResp::BelongMemberHasBeenSet() const
{
    return m_belongMemberHasBeenSet;
}

string VpcAclRuleResp::GetCreateTime() const
{
    return m_createTime;
}

void VpcAclRuleResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VpcAclRuleResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VpcAclRuleResp::GetUpdateTime() const
{
    return m_updateTime;
}

void VpcAclRuleResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VpcAclRuleResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t VpcAclRuleResp::GetDnsParseCnt() const
{
    return m_dnsParseCnt;
}

void VpcAclRuleResp::SetDnsParseCnt(const int64_t& _dnsParseCnt)
{
    m_dnsParseCnt = _dnsParseCnt;
    m_dnsParseCntHasBeenSet = true;
}

bool VpcAclRuleResp::DnsParseCntHasBeenSet() const
{
    return m_dnsParseCntHasBeenSet;
}

string VpcAclRuleResp::GetFwGroupName() const
{
    return m_fwGroupName;
}

void VpcAclRuleResp::SetFwGroupName(const string& _fwGroupName)
{
    m_fwGroupName = _fwGroupName;
    m_fwGroupNameHasBeenSet = true;
}

bool VpcAclRuleResp::FwGroupNameHasBeenSet() const
{
    return m_fwGroupNameHasBeenSet;
}

