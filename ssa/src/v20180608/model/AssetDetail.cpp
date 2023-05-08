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

#include <tencentcloud/ssa/v20180608/model/AssetDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

AssetDetail::AssetDetail() :
    m_assetTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_loadBalancerVipsHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_assetUniqidHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_assetStatusHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_certEndTimeHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_riskConfigHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_vulHasBeenSet(false),
    m_ssaAssetDiscoverTimeHasBeenSet(false),
    m_assetSubnetIdHasBeenSet(false),
    m_assetSubnetNameHasBeenSet(false),
    m_assetVpcNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_nameSpaceHasBeenSet(false),
    m_assetCreateTimeHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_assetIpv6HasBeenSet(false),
    m_sSHRiskHasBeenSet(false),
    m_rDPRiskHasBeenSet(false),
    m_eventRiskHasBeenSet(false),
    m_assetVulNumHasBeenSet(false),
    m_assetEventNumHasBeenSet(false),
    m_assetCspmRiskNumHasBeenSet(false),
    m_ssaAssetDeleteTimeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_assetRegionNameHasBeenSet(false),
    m_assetVpcidHasBeenSet(false)
{
}

CoreInternalOutcome AssetDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetail.PublicIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerVips") && !value["LoadBalancerVips"].IsNull())
    {
        if (!value["LoadBalancerVips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetail.LoadBalancerVips` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerVips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerVips.push_back((*itr).GetString());
        }
        m_loadBalancerVipsHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CreationDate") && !value["CreationDate"].IsNull())
    {
        if (!value["CreationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.CreationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationDate = string(value["CreationDate"].GetString());
        m_creationDateHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AssetUniqid") && !value["AssetUniqid"].IsNull())
    {
        if (!value["AssetUniqid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetUniqid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetUniqid = string(value["AssetUniqid"].GetString());
        m_assetUniqidHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("AssetStatus") && !value["AssetStatus"].IsNull())
    {
        if (!value["AssetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetStatus = string(value["AssetStatus"].GetString());
        m_assetStatusHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.CertType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certType = string(value["CertType"].GetString());
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("CertEndTime") && !value["CertEndTime"].IsNull())
    {
        if (!value["CertEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.CertEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certEndTime = string(value["CertEndTime"].GetString());
        m_certEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.ProductType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productType = value["ProductType"].GetInt64();
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetail.PrivateIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("ValidityPeriod") && !value["ValidityPeriod"].IsNull())
    {
        if (!value["ValidityPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.ValidityPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validityPeriod = string(value["ValidityPeriod"].GetString());
        m_validityPeriodHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Port` is not array type"));

        const rapidjson::Value &tmpValue = value["Port"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_port.push_back((*itr).GetString());
        }
        m_portHasBeenSet = true;
    }

    if (value.HasMember("RiskConfig") && !value["RiskConfig"].IsNull())
    {
        if (!value["RiskConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetail.RiskConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskConfig.push_back((*itr).GetString());
        }
        m_riskConfigHasBeenSet = true;
    }

    if (value.HasMember("Event") && !value["Event"].IsNull())
    {
        if (!value["Event"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Event` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_event = string(value["Event"].GetString());
        m_eventHasBeenSet = true;
    }

    if (value.HasMember("Vul") && !value["Vul"].IsNull())
    {
        if (!value["Vul"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.Vul` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vul = string(value["Vul"].GetString());
        m_vulHasBeenSet = true;
    }

    if (value.HasMember("SsaAssetDiscoverTime") && !value["SsaAssetDiscoverTime"].IsNull())
    {
        if (!value["SsaAssetDiscoverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.SsaAssetDiscoverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaAssetDiscoverTime = string(value["SsaAssetDiscoverTime"].GetString());
        m_ssaAssetDiscoverTimeHasBeenSet = true;
    }

    if (value.HasMember("AssetSubnetId") && !value["AssetSubnetId"].IsNull())
    {
        if (!value["AssetSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSubnetId = string(value["AssetSubnetId"].GetString());
        m_assetSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetSubnetName") && !value["AssetSubnetName"].IsNull())
    {
        if (!value["AssetSubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetSubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSubnetName = string(value["AssetSubnetName"].GetString());
        m_assetSubnetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetVpcName") && !value["AssetVpcName"].IsNull())
    {
        if (!value["AssetVpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetVpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetVpcName = string(value["AssetVpcName"].GetString());
        m_assetVpcNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.ClusterType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = value["ClusterType"].GetInt64();
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("NameSpace") && !value["NameSpace"].IsNull())
    {
        if (!value["NameSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.NameSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameSpace = string(value["NameSpace"].GetString());
        m_nameSpaceHasBeenSet = true;
    }

    if (value.HasMember("AssetCreateTime") && !value["AssetCreateTime"].IsNull())
    {
        if (!value["AssetCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetCreateTime = string(value["AssetCreateTime"].GetString());
        m_assetCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetIpv6") && !value["AssetIpv6"].IsNull())
    {
        if (!value["AssetIpv6"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetIpv6` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetIpv6"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetIpv6.push_back((*itr).GetString());
        }
        m_assetIpv6HasBeenSet = true;
    }

    if (value.HasMember("SSHRisk") && !value["SSHRisk"].IsNull())
    {
        if (!value["SSHRisk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.SSHRisk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSHRisk = string(value["SSHRisk"].GetString());
        m_sSHRiskHasBeenSet = true;
    }

    if (value.HasMember("RDPRisk") && !value["RDPRisk"].IsNull())
    {
        if (!value["RDPRisk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.RDPRisk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rDPRisk = string(value["RDPRisk"].GetString());
        m_rDPRiskHasBeenSet = true;
    }

    if (value.HasMember("EventRisk") && !value["EventRisk"].IsNull())
    {
        if (!value["EventRisk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.EventRisk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventRisk = string(value["EventRisk"].GetString());
        m_eventRiskHasBeenSet = true;
    }

    if (value.HasMember("AssetVulNum") && !value["AssetVulNum"].IsNull())
    {
        if (!value["AssetVulNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetVulNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetVulNum = value["AssetVulNum"].GetInt64();
        m_assetVulNumHasBeenSet = true;
    }

    if (value.HasMember("AssetEventNum") && !value["AssetEventNum"].IsNull())
    {
        if (!value["AssetEventNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetEventNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetEventNum = value["AssetEventNum"].GetInt64();
        m_assetEventNumHasBeenSet = true;
    }

    if (value.HasMember("AssetCspmRiskNum") && !value["AssetCspmRiskNum"].IsNull())
    {
        if (!value["AssetCspmRiskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetCspmRiskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCspmRiskNum = value["AssetCspmRiskNum"].GetInt64();
        m_assetCspmRiskNumHasBeenSet = true;
    }

    if (value.HasMember("SsaAssetDeleteTime") && !value["SsaAssetDeleteTime"].IsNull())
    {
        if (!value["SsaAssetDeleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.SsaAssetDeleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaAssetDeleteTime = string(value["SsaAssetDeleteTime"].GetString());
        m_ssaAssetDeleteTimeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetRegionName") && !value["AssetRegionName"].IsNull())
    {
        if (!value["AssetRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRegionName = string(value["AssetRegionName"].GetString());
        m_assetRegionNameHasBeenSet = true;
    }

    if (value.HasMember("AssetVpcid") && !value["AssetVpcid"].IsNull())
    {
        if (!value["AssetVpcid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetail.AssetVpcid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetVpcid = string(value["AssetVpcid"].GetString());
        m_assetVpcidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_loadBalancerVipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerVips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerVips.begin(); itr != m_loadBalancerVips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_creationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_assetUniqidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetUniqid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetUniqid.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_assetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_certEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productType, allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_validityPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validityPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_port.begin(); itr != m_port.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskConfig.begin(); itr != m_riskConfig.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_event.c_str(), allocator).Move(), allocator);
    }

    if (m_vulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vul.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaAssetDiscoverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaAssetDiscoverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaAssetDiscoverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetSubnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetSubnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetVpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetVpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetVpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterType, allocator);
    }

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetIpv6.begin(); itr != m_assetIpv6.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sSHRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSHRisk.c_str(), allocator).Move(), allocator);
    }

    if (m_rDPRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RDPRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rDPRisk.c_str(), allocator).Move(), allocator);
    }

    if (m_eventRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventRisk.c_str(), allocator).Move(), allocator);
    }

    if (m_assetVulNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetVulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetVulNum, allocator);
    }

    if (m_assetEventNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetEventNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetEventNum, allocator);
    }

    if (m_assetCspmRiskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCspmRiskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCspmRiskNum, allocator);
    }

    if (m_ssaAssetDeleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaAssetDeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaAssetDeleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetVpcidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetVpcid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetVpcid.c_str(), allocator).Move(), allocator);
    }

}


string AssetDetail::GetAssetType() const
{
    return m_assetType;
}

void AssetDetail::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool AssetDetail::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string AssetDetail::GetName() const
{
    return m_name;
}

void AssetDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetDetail::GetRegion() const
{
    return m_region;
}

void AssetDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AssetDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AssetDetail::GetVpcId() const
{
    return m_vpcId;
}

void AssetDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AssetDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AssetDetail::GetInstanceType() const
{
    return m_instanceType;
}

void AssetDetail::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AssetDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AssetDetail::GetInstanceState() const
{
    return m_instanceState;
}

void AssetDetail::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool AssetDetail::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

vector<string> AssetDetail::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void AssetDetail::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool AssetDetail::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

string AssetDetail::GetEngineVersion() const
{
    return m_engineVersion;
}

void AssetDetail::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool AssetDetail::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string AssetDetail::GetId() const
{
    return m_id;
}

void AssetDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<Tag> AssetDetail::GetTag() const
{
    return m_tag;
}

void AssetDetail::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AssetDetail::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AssetDetail::GetVip() const
{
    return m_vip;
}

void AssetDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool AssetDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t AssetDetail::GetStatus() const
{
    return m_status;
}

void AssetDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> AssetDetail::GetLoadBalancerVips() const
{
    return m_loadBalancerVips;
}

void AssetDetail::SetLoadBalancerVips(const vector<string>& _loadBalancerVips)
{
    m_loadBalancerVips = _loadBalancerVips;
    m_loadBalancerVipsHasBeenSet = true;
}

bool AssetDetail::LoadBalancerVipsHasBeenSet() const
{
    return m_loadBalancerVipsHasBeenSet;
}

int64_t AssetDetail::GetUin() const
{
    return m_uin;
}

void AssetDetail::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AssetDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AssetDetail::GetCreationDate() const
{
    return m_creationDate;
}

void AssetDetail::SetCreationDate(const string& _creationDate)
{
    m_creationDate = _creationDate;
    m_creationDateHasBeenSet = true;
}

bool AssetDetail::CreationDateHasBeenSet() const
{
    return m_creationDateHasBeenSet;
}

string AssetDetail::GetDomain() const
{
    return m_domain;
}

void AssetDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool AssetDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string AssetDetail::GetAssetUniqid() const
{
    return m_assetUniqid;
}

void AssetDetail::SetAssetUniqid(const string& _assetUniqid)
{
    m_assetUniqid = _assetUniqid;
    m_assetUniqidHasBeenSet = true;
}

bool AssetDetail::AssetUniqidHasBeenSet() const
{
    return m_assetUniqidHasBeenSet;
}

string AssetDetail::GetInstanceId() const
{
    return m_instanceId;
}

void AssetDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssetDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssetDetail::GetDiskType() const
{
    return m_diskType;
}

void AssetDetail::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool AssetDetail::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t AssetDetail::GetDiskSize() const
{
    return m_diskSize;
}

void AssetDetail::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool AssetDetail::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string AssetDetail::GetAssetStatus() const
{
    return m_assetStatus;
}

void AssetDetail::SetAssetStatus(const string& _assetStatus)
{
    m_assetStatus = _assetStatus;
    m_assetStatusHasBeenSet = true;
}

bool AssetDetail::AssetStatusHasBeenSet() const
{
    return m_assetStatusHasBeenSet;
}

string AssetDetail::GetCertType() const
{
    return m_certType;
}

void AssetDetail::SetCertType(const string& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool AssetDetail::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string AssetDetail::GetProjectName() const
{
    return m_projectName;
}

void AssetDetail::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AssetDetail::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string AssetDetail::GetCertEndTime() const
{
    return m_certEndTime;
}

void AssetDetail::SetCertEndTime(const string& _certEndTime)
{
    m_certEndTime = _certEndTime;
    m_certEndTimeHasBeenSet = true;
}

bool AssetDetail::CertEndTimeHasBeenSet() const
{
    return m_certEndTimeHasBeenSet;
}

int64_t AssetDetail::GetProductType() const
{
    return m_productType;
}

void AssetDetail::SetProductType(const int64_t& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool AssetDetail::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

vector<string> AssetDetail::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void AssetDetail::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool AssetDetail::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

string AssetDetail::GetValidityPeriod() const
{
    return m_validityPeriod;
}

void AssetDetail::SetValidityPeriod(const string& _validityPeriod)
{
    m_validityPeriod = _validityPeriod;
    m_validityPeriodHasBeenSet = true;
}

bool AssetDetail::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

string AssetDetail::GetGroupName() const
{
    return m_groupName;
}

void AssetDetail::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AssetDetail::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<string> AssetDetail::GetPort() const
{
    return m_port;
}

void AssetDetail::SetPort(const vector<string>& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetDetail::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<string> AssetDetail::GetRiskConfig() const
{
    return m_riskConfig;
}

void AssetDetail::SetRiskConfig(const vector<string>& _riskConfig)
{
    m_riskConfig = _riskConfig;
    m_riskConfigHasBeenSet = true;
}

bool AssetDetail::RiskConfigHasBeenSet() const
{
    return m_riskConfigHasBeenSet;
}

string AssetDetail::GetEvent() const
{
    return m_event;
}

void AssetDetail::SetEvent(const string& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool AssetDetail::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

string AssetDetail::GetVul() const
{
    return m_vul;
}

void AssetDetail::SetVul(const string& _vul)
{
    m_vul = _vul;
    m_vulHasBeenSet = true;
}

bool AssetDetail::VulHasBeenSet() const
{
    return m_vulHasBeenSet;
}

string AssetDetail::GetSsaAssetDiscoverTime() const
{
    return m_ssaAssetDiscoverTime;
}

void AssetDetail::SetSsaAssetDiscoverTime(const string& _ssaAssetDiscoverTime)
{
    m_ssaAssetDiscoverTime = _ssaAssetDiscoverTime;
    m_ssaAssetDiscoverTimeHasBeenSet = true;
}

bool AssetDetail::SsaAssetDiscoverTimeHasBeenSet() const
{
    return m_ssaAssetDiscoverTimeHasBeenSet;
}

string AssetDetail::GetAssetSubnetId() const
{
    return m_assetSubnetId;
}

void AssetDetail::SetAssetSubnetId(const string& _assetSubnetId)
{
    m_assetSubnetId = _assetSubnetId;
    m_assetSubnetIdHasBeenSet = true;
}

bool AssetDetail::AssetSubnetIdHasBeenSet() const
{
    return m_assetSubnetIdHasBeenSet;
}

string AssetDetail::GetAssetSubnetName() const
{
    return m_assetSubnetName;
}

void AssetDetail::SetAssetSubnetName(const string& _assetSubnetName)
{
    m_assetSubnetName = _assetSubnetName;
    m_assetSubnetNameHasBeenSet = true;
}

bool AssetDetail::AssetSubnetNameHasBeenSet() const
{
    return m_assetSubnetNameHasBeenSet;
}

string AssetDetail::GetAssetVpcName() const
{
    return m_assetVpcName;
}

void AssetDetail::SetAssetVpcName(const string& _assetVpcName)
{
    m_assetVpcName = _assetVpcName;
    m_assetVpcNameHasBeenSet = true;
}

bool AssetDetail::AssetVpcNameHasBeenSet() const
{
    return m_assetVpcNameHasBeenSet;
}

int64_t AssetDetail::GetClusterType() const
{
    return m_clusterType;
}

void AssetDetail::SetClusterType(const int64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool AssetDetail::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string AssetDetail::GetNameSpace() const
{
    return m_nameSpace;
}

void AssetDetail::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool AssetDetail::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

string AssetDetail::GetAssetCreateTime() const
{
    return m_assetCreateTime;
}

void AssetDetail::SetAssetCreateTime(const string& _assetCreateTime)
{
    m_assetCreateTime = _assetCreateTime;
    m_assetCreateTimeHasBeenSet = true;
}

bool AssetDetail::AssetCreateTimeHasBeenSet() const
{
    return m_assetCreateTimeHasBeenSet;
}

string AssetDetail::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void AssetDetail::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool AssetDetail::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

vector<string> AssetDetail::GetAssetIpv6() const
{
    return m_assetIpv6;
}

void AssetDetail::SetAssetIpv6(const vector<string>& _assetIpv6)
{
    m_assetIpv6 = _assetIpv6;
    m_assetIpv6HasBeenSet = true;
}

bool AssetDetail::AssetIpv6HasBeenSet() const
{
    return m_assetIpv6HasBeenSet;
}

string AssetDetail::GetSSHRisk() const
{
    return m_sSHRisk;
}

void AssetDetail::SetSSHRisk(const string& _sSHRisk)
{
    m_sSHRisk = _sSHRisk;
    m_sSHRiskHasBeenSet = true;
}

bool AssetDetail::SSHRiskHasBeenSet() const
{
    return m_sSHRiskHasBeenSet;
}

string AssetDetail::GetRDPRisk() const
{
    return m_rDPRisk;
}

void AssetDetail::SetRDPRisk(const string& _rDPRisk)
{
    m_rDPRisk = _rDPRisk;
    m_rDPRiskHasBeenSet = true;
}

bool AssetDetail::RDPRiskHasBeenSet() const
{
    return m_rDPRiskHasBeenSet;
}

string AssetDetail::GetEventRisk() const
{
    return m_eventRisk;
}

void AssetDetail::SetEventRisk(const string& _eventRisk)
{
    m_eventRisk = _eventRisk;
    m_eventRiskHasBeenSet = true;
}

bool AssetDetail::EventRiskHasBeenSet() const
{
    return m_eventRiskHasBeenSet;
}

int64_t AssetDetail::GetAssetVulNum() const
{
    return m_assetVulNum;
}

void AssetDetail::SetAssetVulNum(const int64_t& _assetVulNum)
{
    m_assetVulNum = _assetVulNum;
    m_assetVulNumHasBeenSet = true;
}

bool AssetDetail::AssetVulNumHasBeenSet() const
{
    return m_assetVulNumHasBeenSet;
}

int64_t AssetDetail::GetAssetEventNum() const
{
    return m_assetEventNum;
}

void AssetDetail::SetAssetEventNum(const int64_t& _assetEventNum)
{
    m_assetEventNum = _assetEventNum;
    m_assetEventNumHasBeenSet = true;
}

bool AssetDetail::AssetEventNumHasBeenSet() const
{
    return m_assetEventNumHasBeenSet;
}

int64_t AssetDetail::GetAssetCspmRiskNum() const
{
    return m_assetCspmRiskNum;
}

void AssetDetail::SetAssetCspmRiskNum(const int64_t& _assetCspmRiskNum)
{
    m_assetCspmRiskNum = _assetCspmRiskNum;
    m_assetCspmRiskNumHasBeenSet = true;
}

bool AssetDetail::AssetCspmRiskNumHasBeenSet() const
{
    return m_assetCspmRiskNumHasBeenSet;
}

string AssetDetail::GetSsaAssetDeleteTime() const
{
    return m_ssaAssetDeleteTime;
}

void AssetDetail::SetSsaAssetDeleteTime(const string& _ssaAssetDeleteTime)
{
    m_ssaAssetDeleteTime = _ssaAssetDeleteTime;
    m_ssaAssetDeleteTimeHasBeenSet = true;
}

bool AssetDetail::SsaAssetDeleteTimeHasBeenSet() const
{
    return m_ssaAssetDeleteTimeHasBeenSet;
}

string AssetDetail::GetChargeType() const
{
    return m_chargeType;
}

void AssetDetail::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool AssetDetail::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string AssetDetail::GetAssetRegionName() const
{
    return m_assetRegionName;
}

void AssetDetail::SetAssetRegionName(const string& _assetRegionName)
{
    m_assetRegionName = _assetRegionName;
    m_assetRegionNameHasBeenSet = true;
}

bool AssetDetail::AssetRegionNameHasBeenSet() const
{
    return m_assetRegionNameHasBeenSet;
}

string AssetDetail::GetAssetVpcid() const
{
    return m_assetVpcid;
}

void AssetDetail::SetAssetVpcid(const string& _assetVpcid)
{
    m_assetVpcid = _assetVpcid;
    m_assetVpcidHasBeenSet = true;
}

bool AssetDetail::AssetVpcidHasBeenSet() const
{
    return m_assetVpcidHasBeenSet;
}

