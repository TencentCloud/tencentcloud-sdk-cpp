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

#include <tencentcloud/fwm/v20250611/model/AnalysisSgRuleInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

AnalysisSgRuleInfoResp::AnalysisSgRuleInfoResp() :
    m_idHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_cfwOrderIndexHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_serviceTemplateIdHasBeenSet(false),
    m_souInstanceNameHasBeenSet(false),
    m_souPublicIpHasBeenSet(false),
    m_souPrivateIpHasBeenSet(false),
    m_souCidrHasBeenSet(false),
    m_souParameterNameHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_parameterNameHasBeenSet(false),
    m_protocolPortNameHasBeenSet(false),
    m_dnsParseCountHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_rulePartitionHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupRuleIdHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_belongMemberHasBeenSet(false)
{
}

CoreInternalOutcome AnalysisSgRuleInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("CfwOrderIndex") && !value["CfwOrderIndex"].IsNull())
    {
        if (!value["CfwOrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.CfwOrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cfwOrderIndex = value["CfwOrderIndex"].GetInt64();
        m_cfwOrderIndexHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.TargetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = value["TargetType"].GetInt64();
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.Strategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = value["Strategy"].GetInt64();
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateId") && !value["ServiceTemplateId"].IsNull())
    {
        if (!value["ServiceTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.ServiceTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateId = string(value["ServiceTemplateId"].GetString());
        m_serviceTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("SouInstanceName") && !value["SouInstanceName"].IsNull())
    {
        if (!value["SouInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.SouInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souInstanceName = string(value["SouInstanceName"].GetString());
        m_souInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("SouPublicIp") && !value["SouPublicIp"].IsNull())
    {
        if (!value["SouPublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.SouPublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souPublicIp = string(value["SouPublicIp"].GetString());
        m_souPublicIpHasBeenSet = true;
    }

    if (value.HasMember("SouPrivateIp") && !value["SouPrivateIp"].IsNull())
    {
        if (!value["SouPrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.SouPrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souPrivateIp = string(value["SouPrivateIp"].GetString());
        m_souPrivateIpHasBeenSet = true;
    }

    if (value.HasMember("SouCidr") && !value["SouCidr"].IsNull())
    {
        if (!value["SouCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.SouCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souCidr = string(value["SouCidr"].GetString());
        m_souCidrHasBeenSet = true;
    }

    if (value.HasMember("SouParameterName") && !value["SouParameterName"].IsNull())
    {
        if (!value["SouParameterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.SouParameterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souParameterName = string(value["SouParameterName"].GetString());
        m_souParameterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Cidr") && !value["Cidr"].IsNull())
    {
        if (!value["Cidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr = string(value["Cidr"].GetString());
        m_cidrHasBeenSet = true;
    }

    if (value.HasMember("ParameterName") && !value["ParameterName"].IsNull())
    {
        if (!value["ParameterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.ParameterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterName = string(value["ParameterName"].GetString());
        m_parameterNameHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPortName") && !value["ProtocolPortName"].IsNull())
    {
        if (!value["ProtocolPortName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.ProtocolPortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolPortName = string(value["ProtocolPortName"].GetString());
        m_protocolPortNameHasBeenSet = true;
    }

    if (value.HasMember("DnsParseCount") && !value["DnsParseCount"].IsNull())
    {
        if (!value["DnsParseCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.DnsParseCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dnsParseCount.Deserialize(value["DnsParseCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dnsParseCountHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("RulePartition") && !value["RulePartition"].IsNull())
    {
        if (!value["RulePartition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.RulePartition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rulePartition = value["RulePartition"].GetInt64();
        m_rulePartitionHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupRuleId") && !value["GroupRuleId"].IsNull())
    {
        if (!value["GroupRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.GroupRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupRuleId = string(value["GroupRuleId"].GetString());
        m_groupRuleIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(value["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("BelongMember") && !value["BelongMember"].IsNull())
    {
        if (!value["BelongMember"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisSgRuleInfoResp.BelongMember` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_belongMember.Deserialize(value["BelongMember"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_belongMemberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalysisSgRuleInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_cfwOrderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwOrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cfwOrderIndex, allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetType, allocator);
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

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategy, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_souInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SouInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_souInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_souPublicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SouPublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_souPublicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_souPrivateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SouPrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_souPrivateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_souCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SouCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_souCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_souParameterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SouParameterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_souParameterName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidr.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolPortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPortName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolPortName.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsParseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsParseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dnsParseCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_rulePartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulePartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rulePartition, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_belongMemberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongMember";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_belongMember.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AnalysisSgRuleInfoResp::GetId() const
{
    return m_id;
}

void AnalysisSgRuleInfoResp::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetRuleId() const
{
    return m_ruleId;
}

void AnalysisSgRuleInfoResp::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t AnalysisSgRuleInfoResp::GetOrderIndex() const
{
    return m_orderIndex;
}

void AnalysisSgRuleInfoResp::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

int64_t AnalysisSgRuleInfoResp::GetCfwOrderIndex() const
{
    return m_cfwOrderIndex;
}

void AnalysisSgRuleInfoResp::SetCfwOrderIndex(const int64_t& _cfwOrderIndex)
{
    m_cfwOrderIndex = _cfwOrderIndex;
    m_cfwOrderIndexHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::CfwOrderIndexHasBeenSet() const
{
    return m_cfwOrderIndexHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetSourceId() const
{
    return m_sourceId;
}

void AnalysisSgRuleInfoResp::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

int64_t AnalysisSgRuleInfoResp::GetSourceType() const
{
    return m_sourceType;
}

void AnalysisSgRuleInfoResp::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetTargetId() const
{
    return m_targetId;
}

void AnalysisSgRuleInfoResp::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

int64_t AnalysisSgRuleInfoResp::GetTargetType() const
{
    return m_targetType;
}

void AnalysisSgRuleInfoResp::SetTargetType(const int64_t& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetProtocol() const
{
    return m_protocol;
}

void AnalysisSgRuleInfoResp::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetPort() const
{
    return m_port;
}

void AnalysisSgRuleInfoResp::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t AnalysisSgRuleInfoResp::GetStrategy() const
{
    return m_strategy;
}

void AnalysisSgRuleInfoResp::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetDetail() const
{
    return m_detail;
}

void AnalysisSgRuleInfoResp::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetRegion() const
{
    return m_region;
}

void AnalysisSgRuleInfoResp::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetServiceTemplateId() const
{
    return m_serviceTemplateId;
}

void AnalysisSgRuleInfoResp::SetServiceTemplateId(const string& _serviceTemplateId)
{
    m_serviceTemplateId = _serviceTemplateId;
    m_serviceTemplateIdHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::ServiceTemplateIdHasBeenSet() const
{
    return m_serviceTemplateIdHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetSouInstanceName() const
{
    return m_souInstanceName;
}

void AnalysisSgRuleInfoResp::SetSouInstanceName(const string& _souInstanceName)
{
    m_souInstanceName = _souInstanceName;
    m_souInstanceNameHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::SouInstanceNameHasBeenSet() const
{
    return m_souInstanceNameHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetSouPublicIp() const
{
    return m_souPublicIp;
}

void AnalysisSgRuleInfoResp::SetSouPublicIp(const string& _souPublicIp)
{
    m_souPublicIp = _souPublicIp;
    m_souPublicIpHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::SouPublicIpHasBeenSet() const
{
    return m_souPublicIpHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetSouPrivateIp() const
{
    return m_souPrivateIp;
}

void AnalysisSgRuleInfoResp::SetSouPrivateIp(const string& _souPrivateIp)
{
    m_souPrivateIp = _souPrivateIp;
    m_souPrivateIpHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::SouPrivateIpHasBeenSet() const
{
    return m_souPrivateIpHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetSouCidr() const
{
    return m_souCidr;
}

void AnalysisSgRuleInfoResp::SetSouCidr(const string& _souCidr)
{
    m_souCidr = _souCidr;
    m_souCidrHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::SouCidrHasBeenSet() const
{
    return m_souCidrHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetSouParameterName() const
{
    return m_souParameterName;
}

void AnalysisSgRuleInfoResp::SetSouParameterName(const string& _souParameterName)
{
    m_souParameterName = _souParameterName;
    m_souParameterNameHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::SouParameterNameHasBeenSet() const
{
    return m_souParameterNameHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetInstanceName() const
{
    return m_instanceName;
}

void AnalysisSgRuleInfoResp::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetPublicIp() const
{
    return m_publicIp;
}

void AnalysisSgRuleInfoResp::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetPrivateIp() const
{
    return m_privateIp;
}

void AnalysisSgRuleInfoResp::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetCidr() const
{
    return m_cidr;
}

void AnalysisSgRuleInfoResp::SetCidr(const string& _cidr)
{
    m_cidr = _cidr;
    m_cidrHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::CidrHasBeenSet() const
{
    return m_cidrHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetParameterName() const
{
    return m_parameterName;
}

void AnalysisSgRuleInfoResp::SetParameterName(const string& _parameterName)
{
    m_parameterName = _parameterName;
    m_parameterNameHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::ParameterNameHasBeenSet() const
{
    return m_parameterNameHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetProtocolPortName() const
{
    return m_protocolPortName;
}

void AnalysisSgRuleInfoResp::SetProtocolPortName(const string& _protocolPortName)
{
    m_protocolPortName = _protocolPortName;
    m_protocolPortNameHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::ProtocolPortNameHasBeenSet() const
{
    return m_protocolPortNameHasBeenSet;
}

SgDnsParseCount AnalysisSgRuleInfoResp::GetDnsParseCount() const
{
    return m_dnsParseCount;
}

void AnalysisSgRuleInfoResp::SetDnsParseCount(const SgDnsParseCount& _dnsParseCount)
{
    m_dnsParseCount = _dnsParseCount;
    m_dnsParseCountHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::DnsParseCountHasBeenSet() const
{
    return m_dnsParseCountHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetScope() const
{
    return m_scope;
}

void AnalysisSgRuleInfoResp::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

int64_t AnalysisSgRuleInfoResp::GetRulePartition() const
{
    return m_rulePartition;
}

void AnalysisSgRuleInfoResp::SetRulePartition(const int64_t& _rulePartition)
{
    m_rulePartition = _rulePartition;
    m_rulePartitionHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::RulePartitionHasBeenSet() const
{
    return m_rulePartitionHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetGroupId() const
{
    return m_groupId;
}

void AnalysisSgRuleInfoResp::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetGroupName() const
{
    return m_groupName;
}

void AnalysisSgRuleInfoResp::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetGroupRuleId() const
{
    return m_groupRuleId;
}

void AnalysisSgRuleInfoResp::SetGroupRuleId(const string& _groupRuleId)
{
    m_groupRuleId = _groupRuleId;
    m_groupRuleIdHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::GroupRuleIdHasBeenSet() const
{
    return m_groupRuleIdHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetStrategyId() const
{
    return m_strategyId;
}

void AnalysisSgRuleInfoResp::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string AnalysisSgRuleInfoResp::GetIpVersion() const
{
    return m_ipVersion;
}

void AnalysisSgRuleInfoResp::SetIpVersion(const string& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

MemberInfo AnalysisSgRuleInfoResp::GetBelongMember() const
{
    return m_belongMember;
}

void AnalysisSgRuleInfoResp::SetBelongMember(const MemberInfo& _belongMember)
{
    m_belongMember = _belongMember;
    m_belongMemberHasBeenSet = true;
}

bool AnalysisSgRuleInfoResp::BelongMemberHasBeenSet() const
{
    return m_belongMemberHasBeenSet;
}

