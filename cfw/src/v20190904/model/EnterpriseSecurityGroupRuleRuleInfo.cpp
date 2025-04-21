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

#include <tencentcloud/cfw/v20190904/model/EnterpriseSecurityGroupRuleRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

EnterpriseSecurityGroupRuleRuleInfo::EnterpriseSecurityGroupRuleRuleInfo() :
    m_orderIndexHasBeenSet(false),
    m_ruleUuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_aclTagsHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_isDelayHasBeenSet(false),
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
    m_betaListHasBeenSet(false),
    m_idHasBeenSet(false),
    m_dnsParseCountHasBeenSet(false)
{
}

CoreInternalOutcome EnterpriseSecurityGroupRuleRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("RuleUuid") && !value["RuleUuid"].IsNull())
    {
        if (!value["RuleUuid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.RuleUuid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleUuid = value["RuleUuid"].GetUint64();
        m_ruleUuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.TargetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = value["TargetType"].GetInt64();
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.Strategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = value["Strategy"].GetInt64();
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("AclTags") && !value["AclTags"].IsNull())
    {
        if (!value["AclTags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.AclTags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclTags = string(value["AclTags"].GetString());
        m_aclTagsHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("IsDelay") && !value["IsDelay"].IsNull())
    {
        if (!value["IsDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.IsDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDelay = value["IsDelay"].GetInt64();
        m_isDelayHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateId") && !value["ServiceTemplateId"].IsNull())
    {
        if (!value["ServiceTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.ServiceTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateId = string(value["ServiceTemplateId"].GetString());
        m_serviceTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("SouInstanceName") && !value["SouInstanceName"].IsNull())
    {
        if (!value["SouInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.SouInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souInstanceName = string(value["SouInstanceName"].GetString());
        m_souInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("SouPublicIp") && !value["SouPublicIp"].IsNull())
    {
        if (!value["SouPublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.SouPublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souPublicIp = string(value["SouPublicIp"].GetString());
        m_souPublicIpHasBeenSet = true;
    }

    if (value.HasMember("SouPrivateIp") && !value["SouPrivateIp"].IsNull())
    {
        if (!value["SouPrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.SouPrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souPrivateIp = string(value["SouPrivateIp"].GetString());
        m_souPrivateIpHasBeenSet = true;
    }

    if (value.HasMember("SouCidr") && !value["SouCidr"].IsNull())
    {
        if (!value["SouCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.SouCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souCidr = string(value["SouCidr"].GetString());
        m_souCidrHasBeenSet = true;
    }

    if (value.HasMember("SouParameterName") && !value["SouParameterName"].IsNull())
    {
        if (!value["SouParameterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.SouParameterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_souParameterName = string(value["SouParameterName"].GetString());
        m_souParameterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Cidr") && !value["Cidr"].IsNull())
    {
        if (!value["Cidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr = string(value["Cidr"].GetString());
        m_cidrHasBeenSet = true;
    }

    if (value.HasMember("ParameterName") && !value["ParameterName"].IsNull())
    {
        if (!value["ParameterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.ParameterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterName = string(value["ParameterName"].GetString());
        m_parameterNameHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPortName") && !value["ProtocolPortName"].IsNull())
    {
        if (!value["ProtocolPortName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.ProtocolPortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolPortName = string(value["ProtocolPortName"].GetString());
        m_protocolPortNameHasBeenSet = true;
    }

    if (value.HasMember("BetaList") && !value["BetaList"].IsNull())
    {
        if (!value["BetaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.BetaList` is not array type"));

        const rapidjson::Value &tmpValue = value["BetaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnterpriseSecurityGroupRuleBetaInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_betaList.push_back(item);
        }
        m_betaListHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DnsParseCount") && !value["DnsParseCount"].IsNull())
    {
        if (!value["DnsParseCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleRuleInfo.DnsParseCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dnsParseCount.Deserialize(value["DnsParseCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dnsParseCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnterpriseSecurityGroupRuleRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_ruleUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleUuid, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_aclTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclTags.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_isDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDelay, allocator);
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

    if (m_betaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BetaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_betaList.begin(); itr != m_betaList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_dnsParseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsParseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dnsParseCount.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t EnterpriseSecurityGroupRuleRuleInfo::GetOrderIndex() const
{
    return m_orderIndex;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

uint64_t EnterpriseSecurityGroupRuleRuleInfo::GetRuleUuid() const
{
    return m_ruleUuid;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetRuleUuid(const uint64_t& _ruleUuid)
{
    m_ruleUuid = _ruleUuid;
    m_ruleUuidHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::RuleUuidHasBeenSet() const
{
    return m_ruleUuidHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetUuid() const
{
    return m_uuid;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetSourceId() const
{
    return m_sourceId;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

int64_t EnterpriseSecurityGroupRuleRuleInfo::GetSourceType() const
{
    return m_sourceType;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetTargetId() const
{
    return m_targetId;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

int64_t EnterpriseSecurityGroupRuleRuleInfo::GetTargetType() const
{
    return m_targetType;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetTargetType(const int64_t& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetProtocol() const
{
    return m_protocol;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetPort() const
{
    return m_port;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t EnterpriseSecurityGroupRuleRuleInfo::GetStrategy() const
{
    return m_strategy;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

int64_t EnterpriseSecurityGroupRuleRuleInfo::GetStatus() const
{
    return m_status;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetDetail() const
{
    return m_detail;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetAclTags() const
{
    return m_aclTags;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetAclTags(const string& _aclTags)
{
    m_aclTags = _aclTags;
    m_aclTagsHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::AclTagsHasBeenSet() const
{
    return m_aclTagsHasBeenSet;
}

int64_t EnterpriseSecurityGroupRuleRuleInfo::GetIsNew() const
{
    return m_isNew;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetRegion() const
{
    return m_region;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t EnterpriseSecurityGroupRuleRuleInfo::GetIsDelay() const
{
    return m_isDelay;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetIsDelay(const int64_t& _isDelay)
{
    m_isDelay = _isDelay;
    m_isDelayHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::IsDelayHasBeenSet() const
{
    return m_isDelayHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetServiceTemplateId() const
{
    return m_serviceTemplateId;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetServiceTemplateId(const string& _serviceTemplateId)
{
    m_serviceTemplateId = _serviceTemplateId;
    m_serviceTemplateIdHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::ServiceTemplateIdHasBeenSet() const
{
    return m_serviceTemplateIdHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetSouInstanceName() const
{
    return m_souInstanceName;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetSouInstanceName(const string& _souInstanceName)
{
    m_souInstanceName = _souInstanceName;
    m_souInstanceNameHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::SouInstanceNameHasBeenSet() const
{
    return m_souInstanceNameHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetSouPublicIp() const
{
    return m_souPublicIp;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetSouPublicIp(const string& _souPublicIp)
{
    m_souPublicIp = _souPublicIp;
    m_souPublicIpHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::SouPublicIpHasBeenSet() const
{
    return m_souPublicIpHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetSouPrivateIp() const
{
    return m_souPrivateIp;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetSouPrivateIp(const string& _souPrivateIp)
{
    m_souPrivateIp = _souPrivateIp;
    m_souPrivateIpHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::SouPrivateIpHasBeenSet() const
{
    return m_souPrivateIpHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetSouCidr() const
{
    return m_souCidr;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetSouCidr(const string& _souCidr)
{
    m_souCidr = _souCidr;
    m_souCidrHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::SouCidrHasBeenSet() const
{
    return m_souCidrHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetSouParameterName() const
{
    return m_souParameterName;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetSouParameterName(const string& _souParameterName)
{
    m_souParameterName = _souParameterName;
    m_souParameterNameHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::SouParameterNameHasBeenSet() const
{
    return m_souParameterNameHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetInstanceName() const
{
    return m_instanceName;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetPublicIp() const
{
    return m_publicIp;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetPrivateIp() const
{
    return m_privateIp;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetCidr() const
{
    return m_cidr;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetCidr(const string& _cidr)
{
    m_cidr = _cidr;
    m_cidrHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::CidrHasBeenSet() const
{
    return m_cidrHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetParameterName() const
{
    return m_parameterName;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetParameterName(const string& _parameterName)
{
    m_parameterName = _parameterName;
    m_parameterNameHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::ParameterNameHasBeenSet() const
{
    return m_parameterNameHasBeenSet;
}

string EnterpriseSecurityGroupRuleRuleInfo::GetProtocolPortName() const
{
    return m_protocolPortName;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetProtocolPortName(const string& _protocolPortName)
{
    m_protocolPortName = _protocolPortName;
    m_protocolPortNameHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::ProtocolPortNameHasBeenSet() const
{
    return m_protocolPortNameHasBeenSet;
}

vector<EnterpriseSecurityGroupRuleBetaInfo> EnterpriseSecurityGroupRuleRuleInfo::GetBetaList() const
{
    return m_betaList;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetBetaList(const vector<EnterpriseSecurityGroupRuleBetaInfo>& _betaList)
{
    m_betaList = _betaList;
    m_betaListHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::BetaListHasBeenSet() const
{
    return m_betaListHasBeenSet;
}

int64_t EnterpriseSecurityGroupRuleRuleInfo::GetId() const
{
    return m_id;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

SgDnsParseCount EnterpriseSecurityGroupRuleRuleInfo::GetDnsParseCount() const
{
    return m_dnsParseCount;
}

void EnterpriseSecurityGroupRuleRuleInfo::SetDnsParseCount(const SgDnsParseCount& _dnsParseCount)
{
    m_dnsParseCount = _dnsParseCount;
    m_dnsParseCountHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleRuleInfo::DnsParseCountHasBeenSet() const
{
    return m_dnsParseCountHasBeenSet;
}

