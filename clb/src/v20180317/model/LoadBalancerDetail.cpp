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

#include <tencentcloud/clb/v20180317/model/LoadBalancerDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

LoadBalancerDetail::LoadBalancerDetail() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_addressIPv6HasBeenSet(false),
    m_addressIPVersionHasBeenSet(false),
    m_iPv6ModeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_addressIspHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_networkAttributesHasBeenSet(false),
    m_prepaidAttributesHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_locationIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetAddressHasBeenSet(false),
    m_targetPortHasBeenSet(false),
    m_targetWeightHasBeenSet(false),
    m_isolationHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_loadBalancerPassToTargetHasBeenSet(false),
    m_targetHealthHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_sniSwitchHasBeenSet(false),
    m_loadBalancerDomainHasBeenSet(false),
    m_egressHasBeenSet(false),
    m_attributeFlagsHasBeenSet(false),
    m_slaTypeHasBeenSet(false),
    m_exclusiveHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancerDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("AddressIPv6") && !value["AddressIPv6"].IsNull())
    {
        if (!value["AddressIPv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.AddressIPv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIPv6 = string(value["AddressIPv6"].GetString());
        m_addressIPv6HasBeenSet = true;
    }

    if (value.HasMember("AddressIPVersion") && !value["AddressIPVersion"].IsNull())
    {
        if (!value["AddressIPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.AddressIPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIPVersion = string(value["AddressIPVersion"].GetString());
        m_addressIPVersionHasBeenSet = true;
    }

    if (value.HasMember("IPv6Mode") && !value["IPv6Mode"].IsNull())
    {
        if (!value["IPv6Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.IPv6Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv6Mode = string(value["IPv6Mode"].GetString());
        m_iPv6ModeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("AddressIsp") && !value["AddressIsp"].IsNull())
    {
        if (!value["AddressIsp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.AddressIsp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIsp = string(value["AddressIsp"].GetString());
        m_addressIspHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkAttributes") && !value["NetworkAttributes"].IsNull())
    {
        if (!value["NetworkAttributes"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.NetworkAttributes` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_networkAttributes.Deserialize(value["NetworkAttributes"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_networkAttributesHasBeenSet = true;
    }

    if (value.HasMember("PrepaidAttributes") && !value["PrepaidAttributes"].IsNull())
    {
        if (!value["PrepaidAttributes"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.PrepaidAttributes` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prepaidAttributes.Deserialize(value["PrepaidAttributes"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prepaidAttributesHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.ExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraInfo.Deserialize(value["ExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("LocationId") && !value["LocationId"].IsNull())
    {
        if (!value["LocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.LocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationId = string(value["LocationId"].GetString());
        m_locationIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetAddress") && !value["TargetAddress"].IsNull())
    {
        if (!value["TargetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.TargetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetAddress = string(value["TargetAddress"].GetString());
        m_targetAddressHasBeenSet = true;
    }

    if (value.HasMember("TargetPort") && !value["TargetPort"].IsNull())
    {
        if (!value["TargetPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.TargetPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetPort = value["TargetPort"].GetUint64();
        m_targetPortHasBeenSet = true;
    }

    if (value.HasMember("TargetWeight") && !value["TargetWeight"].IsNull())
    {
        if (!value["TargetWeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.TargetWeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetWeight = value["TargetWeight"].GetUint64();
        m_targetWeightHasBeenSet = true;
    }

    if (value.HasMember("Isolation") && !value["Isolation"].IsNull())
    {
        if (!value["Isolation"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Isolation` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isolation = value["Isolation"].GetUint64();
        m_isolationHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroup") && !value["SecurityGroup"].IsNull())
    {
        if (!value["SecurityGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.SecurityGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroup.push_back((*itr).GetString());
        }
        m_securityGroupHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerPassToTarget") && !value["LoadBalancerPassToTarget"].IsNull())
    {
        if (!value["LoadBalancerPassToTarget"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.LoadBalancerPassToTarget` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPassToTarget = value["LoadBalancerPassToTarget"].GetUint64();
        m_loadBalancerPassToTargetHasBeenSet = true;
    }

    if (value.HasMember("TargetHealth") && !value["TargetHealth"].IsNull())
    {
        if (!value["TargetHealth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.TargetHealth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetHealth = string(value["TargetHealth"].GetString());
        m_targetHealthHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Domains` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domains = string(value["Domains"].GetString());
        m_domainsHasBeenSet = true;
    }

    if (value.HasMember("SlaveZone") && !value["SlaveZone"].IsNull())
    {
        if (!value["SlaveZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.SlaveZone` is not array type"));

        const rapidjson::Value &tmpValue = value["SlaveZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_slaveZone.push_back((*itr).GetString());
        }
        m_slaveZoneHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("SniSwitch") && !value["SniSwitch"].IsNull())
    {
        if (!value["SniSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.SniSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sniSwitch = value["SniSwitch"].GetInt64();
        m_sniSwitchHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerDomain") && !value["LoadBalancerDomain"].IsNull())
    {
        if (!value["LoadBalancerDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.LoadBalancerDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerDomain = string(value["LoadBalancerDomain"].GetString());
        m_loadBalancerDomainHasBeenSet = true;
    }

    if (value.HasMember("Egress") && !value["Egress"].IsNull())
    {
        if (!value["Egress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Egress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_egress = string(value["Egress"].GetString());
        m_egressHasBeenSet = true;
    }

    if (value.HasMember("AttributeFlags") && !value["AttributeFlags"].IsNull())
    {
        if (!value["AttributeFlags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.AttributeFlags` is not array type"));

        const rapidjson::Value &tmpValue = value["AttributeFlags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attributeFlags.push_back((*itr).GetString());
        }
        m_attributeFlagsHasBeenSet = true;
    }

    if (value.HasMember("SlaType") && !value["SlaType"].IsNull())
    {
        if (!value["SlaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.SlaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaType = string(value["SlaType"].GetString());
        m_slaTypeHasBeenSet = true;
    }

    if (value.HasMember("Exclusive") && !value["Exclusive"].IsNull())
    {
        if (!value["Exclusive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerDetail.Exclusive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusive = value["Exclusive"].GetUint64();
        m_exclusiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancerDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIPv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIPv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIPv6.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv6ModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv6Mode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIspHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIsp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIsp.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkAttributes.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prepaidAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prepaidAttributes.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_locationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_targetPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetPort, allocator);
    }

    if (m_targetWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetWeight, allocator);
    }

    if (m_isolationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isolation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolation, allocator);
    }

    if (m_securityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroup.begin(); itr != m_securityGroup.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loadBalancerPassToTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerPassToTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancerPassToTarget, allocator);
    }

    if (m_targetHealthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHealth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetHealth.c_str(), allocator).Move(), allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domains.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_slaveZone.begin(); itr != m_slaveZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sniSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sniSwitch, allocator);
    }

    if (m_loadBalancerDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_egressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Egress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_egress.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeFlagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeFlags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attributeFlags.begin(); itr != m_attributeFlags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_slaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaType.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusive, allocator);
    }

}


string LoadBalancerDetail::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void LoadBalancerDetail::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool LoadBalancerDetail::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string LoadBalancerDetail::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void LoadBalancerDetail::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool LoadBalancerDetail::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string LoadBalancerDetail::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void LoadBalancerDetail::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool LoadBalancerDetail::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

uint64_t LoadBalancerDetail::GetStatus() const
{
    return m_status;
}

void LoadBalancerDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LoadBalancerDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LoadBalancerDetail::GetAddress() const
{
    return m_address;
}

void LoadBalancerDetail::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool LoadBalancerDetail::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string LoadBalancerDetail::GetAddressIPv6() const
{
    return m_addressIPv6;
}

void LoadBalancerDetail::SetAddressIPv6(const string& _addressIPv6)
{
    m_addressIPv6 = _addressIPv6;
    m_addressIPv6HasBeenSet = true;
}

bool LoadBalancerDetail::AddressIPv6HasBeenSet() const
{
    return m_addressIPv6HasBeenSet;
}

string LoadBalancerDetail::GetAddressIPVersion() const
{
    return m_addressIPVersion;
}

void LoadBalancerDetail::SetAddressIPVersion(const string& _addressIPVersion)
{
    m_addressIPVersion = _addressIPVersion;
    m_addressIPVersionHasBeenSet = true;
}

bool LoadBalancerDetail::AddressIPVersionHasBeenSet() const
{
    return m_addressIPVersionHasBeenSet;
}

string LoadBalancerDetail::GetIPv6Mode() const
{
    return m_iPv6Mode;
}

void LoadBalancerDetail::SetIPv6Mode(const string& _iPv6Mode)
{
    m_iPv6Mode = _iPv6Mode;
    m_iPv6ModeHasBeenSet = true;
}

bool LoadBalancerDetail::IPv6ModeHasBeenSet() const
{
    return m_iPv6ModeHasBeenSet;
}

string LoadBalancerDetail::GetZone() const
{
    return m_zone;
}

void LoadBalancerDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool LoadBalancerDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string LoadBalancerDetail::GetAddressIsp() const
{
    return m_addressIsp;
}

void LoadBalancerDetail::SetAddressIsp(const string& _addressIsp)
{
    m_addressIsp = _addressIsp;
    m_addressIspHasBeenSet = true;
}

bool LoadBalancerDetail::AddressIspHasBeenSet() const
{
    return m_addressIspHasBeenSet;
}

string LoadBalancerDetail::GetVpcId() const
{
    return m_vpcId;
}

void LoadBalancerDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LoadBalancerDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t LoadBalancerDetail::GetProjectId() const
{
    return m_projectId;
}

void LoadBalancerDetail::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool LoadBalancerDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string LoadBalancerDetail::GetCreateTime() const
{
    return m_createTime;
}

void LoadBalancerDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LoadBalancerDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LoadBalancerDetail::GetChargeType() const
{
    return m_chargeType;
}

void LoadBalancerDetail::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool LoadBalancerDetail::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

InternetAccessible LoadBalancerDetail::GetNetworkAttributes() const
{
    return m_networkAttributes;
}

void LoadBalancerDetail::SetNetworkAttributes(const InternetAccessible& _networkAttributes)
{
    m_networkAttributes = _networkAttributes;
    m_networkAttributesHasBeenSet = true;
}

bool LoadBalancerDetail::NetworkAttributesHasBeenSet() const
{
    return m_networkAttributesHasBeenSet;
}

LBChargePrepaid LoadBalancerDetail::GetPrepaidAttributes() const
{
    return m_prepaidAttributes;
}

void LoadBalancerDetail::SetPrepaidAttributes(const LBChargePrepaid& _prepaidAttributes)
{
    m_prepaidAttributes = _prepaidAttributes;
    m_prepaidAttributesHasBeenSet = true;
}

bool LoadBalancerDetail::PrepaidAttributesHasBeenSet() const
{
    return m_prepaidAttributesHasBeenSet;
}

ExtraInfo LoadBalancerDetail::GetExtraInfo() const
{
    return m_extraInfo;
}

void LoadBalancerDetail::SetExtraInfo(const ExtraInfo& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool LoadBalancerDetail::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string LoadBalancerDetail::GetConfigId() const
{
    return m_configId;
}

void LoadBalancerDetail::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool LoadBalancerDetail::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

vector<TagInfo> LoadBalancerDetail::GetTags() const
{
    return m_tags;
}

void LoadBalancerDetail::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LoadBalancerDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string LoadBalancerDetail::GetListenerId() const
{
    return m_listenerId;
}

void LoadBalancerDetail::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool LoadBalancerDetail::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string LoadBalancerDetail::GetProtocol() const
{
    return m_protocol;
}

void LoadBalancerDetail::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool LoadBalancerDetail::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t LoadBalancerDetail::GetPort() const
{
    return m_port;
}

void LoadBalancerDetail::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool LoadBalancerDetail::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string LoadBalancerDetail::GetLocationId() const
{
    return m_locationId;
}

void LoadBalancerDetail::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool LoadBalancerDetail::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

string LoadBalancerDetail::GetDomain() const
{
    return m_domain;
}

void LoadBalancerDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool LoadBalancerDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string LoadBalancerDetail::GetUrl() const
{
    return m_url;
}

void LoadBalancerDetail::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool LoadBalancerDetail::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string LoadBalancerDetail::GetTargetId() const
{
    return m_targetId;
}

void LoadBalancerDetail::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool LoadBalancerDetail::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

string LoadBalancerDetail::GetTargetAddress() const
{
    return m_targetAddress;
}

void LoadBalancerDetail::SetTargetAddress(const string& _targetAddress)
{
    m_targetAddress = _targetAddress;
    m_targetAddressHasBeenSet = true;
}

bool LoadBalancerDetail::TargetAddressHasBeenSet() const
{
    return m_targetAddressHasBeenSet;
}

uint64_t LoadBalancerDetail::GetTargetPort() const
{
    return m_targetPort;
}

void LoadBalancerDetail::SetTargetPort(const uint64_t& _targetPort)
{
    m_targetPort = _targetPort;
    m_targetPortHasBeenSet = true;
}

bool LoadBalancerDetail::TargetPortHasBeenSet() const
{
    return m_targetPortHasBeenSet;
}

uint64_t LoadBalancerDetail::GetTargetWeight() const
{
    return m_targetWeight;
}

void LoadBalancerDetail::SetTargetWeight(const uint64_t& _targetWeight)
{
    m_targetWeight = _targetWeight;
    m_targetWeightHasBeenSet = true;
}

bool LoadBalancerDetail::TargetWeightHasBeenSet() const
{
    return m_targetWeightHasBeenSet;
}

uint64_t LoadBalancerDetail::GetIsolation() const
{
    return m_isolation;
}

void LoadBalancerDetail::SetIsolation(const uint64_t& _isolation)
{
    m_isolation = _isolation;
    m_isolationHasBeenSet = true;
}

bool LoadBalancerDetail::IsolationHasBeenSet() const
{
    return m_isolationHasBeenSet;
}

vector<string> LoadBalancerDetail::GetSecurityGroup() const
{
    return m_securityGroup;
}

void LoadBalancerDetail::SetSecurityGroup(const vector<string>& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool LoadBalancerDetail::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

uint64_t LoadBalancerDetail::GetLoadBalancerPassToTarget() const
{
    return m_loadBalancerPassToTarget;
}

void LoadBalancerDetail::SetLoadBalancerPassToTarget(const uint64_t& _loadBalancerPassToTarget)
{
    m_loadBalancerPassToTarget = _loadBalancerPassToTarget;
    m_loadBalancerPassToTargetHasBeenSet = true;
}

bool LoadBalancerDetail::LoadBalancerPassToTargetHasBeenSet() const
{
    return m_loadBalancerPassToTargetHasBeenSet;
}

string LoadBalancerDetail::GetTargetHealth() const
{
    return m_targetHealth;
}

void LoadBalancerDetail::SetTargetHealth(const string& _targetHealth)
{
    m_targetHealth = _targetHealth;
    m_targetHealthHasBeenSet = true;
}

bool LoadBalancerDetail::TargetHealthHasBeenSet() const
{
    return m_targetHealthHasBeenSet;
}

string LoadBalancerDetail::GetDomains() const
{
    return m_domains;
}

void LoadBalancerDetail::SetDomains(const string& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool LoadBalancerDetail::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<string> LoadBalancerDetail::GetSlaveZone() const
{
    return m_slaveZone;
}

void LoadBalancerDetail::SetSlaveZone(const vector<string>& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool LoadBalancerDetail::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

vector<string> LoadBalancerDetail::GetZones() const
{
    return m_zones;
}

void LoadBalancerDetail::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool LoadBalancerDetail::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t LoadBalancerDetail::GetSniSwitch() const
{
    return m_sniSwitch;
}

void LoadBalancerDetail::SetSniSwitch(const int64_t& _sniSwitch)
{
    m_sniSwitch = _sniSwitch;
    m_sniSwitchHasBeenSet = true;
}

bool LoadBalancerDetail::SniSwitchHasBeenSet() const
{
    return m_sniSwitchHasBeenSet;
}

string LoadBalancerDetail::GetLoadBalancerDomain() const
{
    return m_loadBalancerDomain;
}

void LoadBalancerDetail::SetLoadBalancerDomain(const string& _loadBalancerDomain)
{
    m_loadBalancerDomain = _loadBalancerDomain;
    m_loadBalancerDomainHasBeenSet = true;
}

bool LoadBalancerDetail::LoadBalancerDomainHasBeenSet() const
{
    return m_loadBalancerDomainHasBeenSet;
}

string LoadBalancerDetail::GetEgress() const
{
    return m_egress;
}

void LoadBalancerDetail::SetEgress(const string& _egress)
{
    m_egress = _egress;
    m_egressHasBeenSet = true;
}

bool LoadBalancerDetail::EgressHasBeenSet() const
{
    return m_egressHasBeenSet;
}

vector<string> LoadBalancerDetail::GetAttributeFlags() const
{
    return m_attributeFlags;
}

void LoadBalancerDetail::SetAttributeFlags(const vector<string>& _attributeFlags)
{
    m_attributeFlags = _attributeFlags;
    m_attributeFlagsHasBeenSet = true;
}

bool LoadBalancerDetail::AttributeFlagsHasBeenSet() const
{
    return m_attributeFlagsHasBeenSet;
}

string LoadBalancerDetail::GetSlaType() const
{
    return m_slaType;
}

void LoadBalancerDetail::SetSlaType(const string& _slaType)
{
    m_slaType = _slaType;
    m_slaTypeHasBeenSet = true;
}

bool LoadBalancerDetail::SlaTypeHasBeenSet() const
{
    return m_slaTypeHasBeenSet;
}

uint64_t LoadBalancerDetail::GetExclusive() const
{
    return m_exclusive;
}

void LoadBalancerDetail::SetExclusive(const uint64_t& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool LoadBalancerDetail::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

