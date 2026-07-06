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

#include <tencentcloud/fwm/v20250611/model/SgRuleResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

SgRuleResp::SgRuleResp() :
    m_ruleIdHasBeenSet(false),
    m_sequenceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_srcContentHasBeenSet(false),
    m_srcTypeHasBeenSet(false),
    m_dstContentHasBeenSet(false),
    m_dstTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_protocolPortTypeHasBeenSet(false),
    m_serviceTemplateIdHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_ruleSourceHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

CoreInternalOutcome SgRuleResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.Sequence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = value["Sequence"].GetInt64();
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(value["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("SrcContent") && !value["SrcContent"].IsNull())
    {
        if (!value["SrcContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.SrcContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcContent = string(value["SrcContent"].GetString());
        m_srcContentHasBeenSet = true;
    }

    if (value.HasMember("SrcType") && !value["SrcType"].IsNull())
    {
        if (!value["SrcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.SrcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcType = string(value["SrcType"].GetString());
        m_srcTypeHasBeenSet = true;
    }

    if (value.HasMember("DstContent") && !value["DstContent"].IsNull())
    {
        if (!value["DstContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.DstContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstContent = string(value["DstContent"].GetString());
        m_dstContentHasBeenSet = true;
    }

    if (value.HasMember("DstType") && !value["DstType"].IsNull())
    {
        if (!value["DstType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.DstType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstType = string(value["DstType"].GetString());
        m_dstTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPortType") && !value["ProtocolPortType"].IsNull())
    {
        if (!value["ProtocolPortType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.ProtocolPortType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolPortType = value["ProtocolPortType"].GetInt64();
        m_protocolPortTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateId") && !value["ServiceTemplateId"].IsNull())
    {
        if (!value["ServiceTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.ServiceTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateId = string(value["ServiceTemplateId"].GetString());
        m_serviceTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.DstPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = string(value["DstPort"].GetString());
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("RuleSource") && !value["RuleSource"].IsNull())
    {
        if (!value["RuleSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.RuleSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleSource = string(value["RuleSource"].GetString());
        m_ruleSourceHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgRuleResp.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SgRuleResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_srcContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcContent.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstContent.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolPortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPortType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocolPortType, allocator);
    }

    if (m_serviceTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPort.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleSource.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

}


string SgRuleResp::GetRuleId() const
{
    return m_ruleId;
}

void SgRuleResp::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SgRuleResp::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t SgRuleResp::GetSequence() const
{
    return m_sequence;
}

void SgRuleResp::SetSequence(const int64_t& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool SgRuleResp::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

string SgRuleResp::GetRegion() const
{
    return m_region;
}

void SgRuleResp::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SgRuleResp::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SgRuleResp::GetIpVersion() const
{
    return m_ipVersion;
}

void SgRuleResp::SetIpVersion(const string& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool SgRuleResp::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

string SgRuleResp::GetSrcContent() const
{
    return m_srcContent;
}

void SgRuleResp::SetSrcContent(const string& _srcContent)
{
    m_srcContent = _srcContent;
    m_srcContentHasBeenSet = true;
}

bool SgRuleResp::SrcContentHasBeenSet() const
{
    return m_srcContentHasBeenSet;
}

string SgRuleResp::GetSrcType() const
{
    return m_srcType;
}

void SgRuleResp::SetSrcType(const string& _srcType)
{
    m_srcType = _srcType;
    m_srcTypeHasBeenSet = true;
}

bool SgRuleResp::SrcTypeHasBeenSet() const
{
    return m_srcTypeHasBeenSet;
}

string SgRuleResp::GetDstContent() const
{
    return m_dstContent;
}

void SgRuleResp::SetDstContent(const string& _dstContent)
{
    m_dstContent = _dstContent;
    m_dstContentHasBeenSet = true;
}

bool SgRuleResp::DstContentHasBeenSet() const
{
    return m_dstContentHasBeenSet;
}

string SgRuleResp::GetDstType() const
{
    return m_dstType;
}

void SgRuleResp::SetDstType(const string& _dstType)
{
    m_dstType = _dstType;
    m_dstTypeHasBeenSet = true;
}

bool SgRuleResp::DstTypeHasBeenSet() const
{
    return m_dstTypeHasBeenSet;
}

string SgRuleResp::GetProtocol() const
{
    return m_protocol;
}

void SgRuleResp::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SgRuleResp::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t SgRuleResp::GetProtocolPortType() const
{
    return m_protocolPortType;
}

void SgRuleResp::SetProtocolPortType(const int64_t& _protocolPortType)
{
    m_protocolPortType = _protocolPortType;
    m_protocolPortTypeHasBeenSet = true;
}

bool SgRuleResp::ProtocolPortTypeHasBeenSet() const
{
    return m_protocolPortTypeHasBeenSet;
}

string SgRuleResp::GetServiceTemplateId() const
{
    return m_serviceTemplateId;
}

void SgRuleResp::SetServiceTemplateId(const string& _serviceTemplateId)
{
    m_serviceTemplateId = _serviceTemplateId;
    m_serviceTemplateIdHasBeenSet = true;
}

bool SgRuleResp::ServiceTemplateIdHasBeenSet() const
{
    return m_serviceTemplateIdHasBeenSet;
}

string SgRuleResp::GetDstPort() const
{
    return m_dstPort;
}

void SgRuleResp::SetDstPort(const string& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool SgRuleResp::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string SgRuleResp::GetRuleAction() const
{
    return m_ruleAction;
}

void SgRuleResp::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool SgRuleResp::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string SgRuleResp::GetDetail() const
{
    return m_detail;
}

void SgRuleResp::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool SgRuleResp::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string SgRuleResp::GetRuleSource() const
{
    return m_ruleSource;
}

void SgRuleResp::SetRuleSource(const string& _ruleSource)
{
    m_ruleSource = _ruleSource;
    m_ruleSourceHasBeenSet = true;
}

bool SgRuleResp::RuleSourceHasBeenSet() const
{
    return m_ruleSourceHasBeenSet;
}

string SgRuleResp::GetScope() const
{
    return m_scope;
}

void SgRuleResp::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool SgRuleResp::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

