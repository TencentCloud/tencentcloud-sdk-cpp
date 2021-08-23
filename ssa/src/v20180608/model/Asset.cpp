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

#include <tencentcloud/ssa/v20180608/model/Asset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

Asset::Asset() :
    m_assetTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_assetRegionNameHasBeenSet(false),
    m_assetVpcidHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_assetCspmRiskNumHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_assetUniqidHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_assetEventNumHasBeenSet(false),
    m_assetVulNumHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_ssaAssetDiscoverTimeHasBeenSet(false),
    m_ssaAssetDeleteTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_assetSubnetIdHasBeenSet(false),
    m_assetSubnetNameHasBeenSet(false),
    m_assetVpcNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_nameSpaceHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_loadBalancerVipsHasBeenSet(false),
    m_assetIpv6HasBeenSet(false),
    m_sSHRiskHasBeenSet(false),
    m_rDPRiskHasBeenSet(false),
    m_eventRiskHasBeenSet(false)
{
}

CoreInternalOutcome Asset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AssetRegionName") && !value["AssetRegionName"].IsNull())
    {
        if (!value["AssetRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRegionName = string(value["AssetRegionName"].GetString());
        m_assetRegionNameHasBeenSet = true;
    }

    if (value.HasMember("AssetVpcid") && !value["AssetVpcid"].IsNull())
    {
        if (!value["AssetVpcid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetVpcid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetVpcid = string(value["AssetVpcid"].GetString());
        m_assetVpcidHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Asset.Tag` is not array type"));

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

    if (value.HasMember("AssetCspmRiskNum") && !value["AssetCspmRiskNum"].IsNull())
    {
        if (!value["AssetCspmRiskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetCspmRiskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCspmRiskNum = value["AssetCspmRiskNum"].GetInt64();
        m_assetCspmRiskNumHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Asset.PublicIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("AssetUniqid") && !value["AssetUniqid"].IsNull())
    {
        if (!value["AssetUniqid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetUniqid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetUniqid = string(value["AssetUniqid"].GetString());
        m_assetUniqidHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetEventNum") && !value["AssetEventNum"].IsNull())
    {
        if (!value["AssetEventNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetEventNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetEventNum = value["AssetEventNum"].GetInt64();
        m_assetEventNumHasBeenSet = true;
    }

    if (value.HasMember("AssetVulNum") && !value["AssetVulNum"].IsNull())
    {
        if (!value["AssetVulNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetVulNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetVulNum = value["AssetVulNum"].GetInt64();
        m_assetVulNumHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Asset.PrivateIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("SsaAssetDiscoverTime") && !value["SsaAssetDiscoverTime"].IsNull())
    {
        if (!value["SsaAssetDiscoverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.SsaAssetDiscoverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaAssetDiscoverTime = string(value["SsaAssetDiscoverTime"].GetString());
        m_ssaAssetDiscoverTimeHasBeenSet = true;
    }

    if (value.HasMember("SsaAssetDeleteTime") && !value["SsaAssetDeleteTime"].IsNull())
    {
        if (!value["SsaAssetDeleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.SsaAssetDeleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaAssetDeleteTime = string(value["SsaAssetDeleteTime"].GetString());
        m_ssaAssetDeleteTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.IsNew` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetBool();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("AssetSubnetId") && !value["AssetSubnetId"].IsNull())
    {
        if (!value["AssetSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSubnetId = string(value["AssetSubnetId"].GetString());
        m_assetSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetSubnetName") && !value["AssetSubnetName"].IsNull())
    {
        if (!value["AssetSubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetSubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSubnetName = string(value["AssetSubnetName"].GetString());
        m_assetSubnetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetVpcName") && !value["AssetVpcName"].IsNull())
    {
        if (!value["AssetVpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.AssetVpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetVpcName = string(value["AssetVpcName"].GetString());
        m_assetVpcNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.ClusterType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = value["ClusterType"].GetInt64();
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("NameSpace") && !value["NameSpace"].IsNull())
    {
        if (!value["NameSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.NameSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameSpace = string(value["NameSpace"].GetString());
        m_nameSpaceHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerVips") && !value["LoadBalancerVips"].IsNull())
    {
        if (!value["LoadBalancerVips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Asset.LoadBalancerVips` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerVips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerVips.push_back((*itr).GetString());
        }
        m_loadBalancerVipsHasBeenSet = true;
    }

    if (value.HasMember("AssetIpv6") && !value["AssetIpv6"].IsNull())
    {
        if (!value["AssetIpv6"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Asset.AssetIpv6` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `Asset.SSHRisk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSHRisk = string(value["SSHRisk"].GetString());
        m_sSHRiskHasBeenSet = true;
    }

    if (value.HasMember("RDPRisk") && !value["RDPRisk"].IsNull())
    {
        if (!value["RDPRisk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.RDPRisk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rDPRisk = string(value["RDPRisk"].GetString());
        m_rDPRiskHasBeenSet = true;
    }

    if (value.HasMember("EventRisk") && !value["EventRisk"].IsNull())
    {
        if (!value["EventRisk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Asset.EventRisk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventRisk = string(value["EventRisk"].GetString());
        m_eventRiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Asset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_assetCspmRiskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCspmRiskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCspmRiskNum, allocator);
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

    if (m_assetUniqidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetUniqid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetUniqid.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetEventNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetEventNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetEventNum, allocator);
    }

    if (m_assetVulNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetVulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetVulNum, allocator);
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

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaAssetDiscoverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaAssetDiscoverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaAssetDiscoverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaAssetDeleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaAssetDeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaAssetDeleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
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

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
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

}


string Asset::GetAssetType() const
{
    return m_assetType;
}

void Asset::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool Asset::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string Asset::GetName() const
{
    return m_name;
}

void Asset::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Asset::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Asset::GetAssetRegionName() const
{
    return m_assetRegionName;
}

void Asset::SetAssetRegionName(const string& _assetRegionName)
{
    m_assetRegionName = _assetRegionName;
    m_assetRegionNameHasBeenSet = true;
}

bool Asset::AssetRegionNameHasBeenSet() const
{
    return m_assetRegionNameHasBeenSet;
}

string Asset::GetAssetVpcid() const
{
    return m_assetVpcid;
}

void Asset::SetAssetVpcid(const string& _assetVpcid)
{
    m_assetVpcid = _assetVpcid;
    m_assetVpcidHasBeenSet = true;
}

bool Asset::AssetVpcidHasBeenSet() const
{
    return m_assetVpcidHasBeenSet;
}

string Asset::GetInstanceType() const
{
    return m_instanceType;
}

void Asset::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool Asset::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string Asset::GetInstanceState() const
{
    return m_instanceState;
}

void Asset::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool Asset::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string Asset::GetEngineVersion() const
{
    return m_engineVersion;
}

void Asset::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool Asset::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string Asset::GetId() const
{
    return m_id;
}

void Asset::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Asset::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<Tag> Asset::GetTag() const
{
    return m_tag;
}

void Asset::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool Asset::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t Asset::GetAssetCspmRiskNum() const
{
    return m_assetCspmRiskNum;
}

void Asset::SetAssetCspmRiskNum(const int64_t& _assetCspmRiskNum)
{
    m_assetCspmRiskNum = _assetCspmRiskNum;
    m_assetCspmRiskNumHasBeenSet = true;
}

bool Asset::AssetCspmRiskNumHasBeenSet() const
{
    return m_assetCspmRiskNumHasBeenSet;
}

vector<string> Asset::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void Asset::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool Asset::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

string Asset::GetAssetUniqid() const
{
    return m_assetUniqid;
}

void Asset::SetAssetUniqid(const string& _assetUniqid)
{
    m_assetUniqid = _assetUniqid;
    m_assetUniqidHasBeenSet = true;
}

bool Asset::AssetUniqidHasBeenSet() const
{
    return m_assetUniqidHasBeenSet;
}

string Asset::GetChargeType() const
{
    return m_chargeType;
}

void Asset::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool Asset::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

int64_t Asset::GetAssetEventNum() const
{
    return m_assetEventNum;
}

void Asset::SetAssetEventNum(const int64_t& _assetEventNum)
{
    m_assetEventNum = _assetEventNum;
    m_assetEventNumHasBeenSet = true;
}

bool Asset::AssetEventNumHasBeenSet() const
{
    return m_assetEventNumHasBeenSet;
}

int64_t Asset::GetAssetVulNum() const
{
    return m_assetVulNum;
}

void Asset::SetAssetVulNum(const int64_t& _assetVulNum)
{
    m_assetVulNum = _assetVulNum;
    m_assetVulNumHasBeenSet = true;
}

bool Asset::AssetVulNumHasBeenSet() const
{
    return m_assetVulNumHasBeenSet;
}

vector<string> Asset::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void Asset::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool Asset::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

string Asset::GetGroupName() const
{
    return m_groupName;
}

void Asset::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool Asset::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string Asset::GetSsaAssetDiscoverTime() const
{
    return m_ssaAssetDiscoverTime;
}

void Asset::SetSsaAssetDiscoverTime(const string& _ssaAssetDiscoverTime)
{
    m_ssaAssetDiscoverTime = _ssaAssetDiscoverTime;
    m_ssaAssetDiscoverTimeHasBeenSet = true;
}

bool Asset::SsaAssetDiscoverTimeHasBeenSet() const
{
    return m_ssaAssetDiscoverTimeHasBeenSet;
}

string Asset::GetSsaAssetDeleteTime() const
{
    return m_ssaAssetDeleteTime;
}

void Asset::SetSsaAssetDeleteTime(const string& _ssaAssetDeleteTime)
{
    m_ssaAssetDeleteTime = _ssaAssetDeleteTime;
    m_ssaAssetDeleteTimeHasBeenSet = true;
}

bool Asset::SsaAssetDeleteTimeHasBeenSet() const
{
    return m_ssaAssetDeleteTimeHasBeenSet;
}

bool Asset::GetIsNew() const
{
    return m_isNew;
}

void Asset::SetIsNew(const bool& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool Asset::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

string Asset::GetAssetSubnetId() const
{
    return m_assetSubnetId;
}

void Asset::SetAssetSubnetId(const string& _assetSubnetId)
{
    m_assetSubnetId = _assetSubnetId;
    m_assetSubnetIdHasBeenSet = true;
}

bool Asset::AssetSubnetIdHasBeenSet() const
{
    return m_assetSubnetIdHasBeenSet;
}

string Asset::GetAssetSubnetName() const
{
    return m_assetSubnetName;
}

void Asset::SetAssetSubnetName(const string& _assetSubnetName)
{
    m_assetSubnetName = _assetSubnetName;
    m_assetSubnetNameHasBeenSet = true;
}

bool Asset::AssetSubnetNameHasBeenSet() const
{
    return m_assetSubnetNameHasBeenSet;
}

string Asset::GetAssetVpcName() const
{
    return m_assetVpcName;
}

void Asset::SetAssetVpcName(const string& _assetVpcName)
{
    m_assetVpcName = _assetVpcName;
    m_assetVpcNameHasBeenSet = true;
}

bool Asset::AssetVpcNameHasBeenSet() const
{
    return m_assetVpcNameHasBeenSet;
}

int64_t Asset::GetClusterType() const
{
    return m_clusterType;
}

void Asset::SetClusterType(const int64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool Asset::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string Asset::GetNameSpace() const
{
    return m_nameSpace;
}

void Asset::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool Asset::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

string Asset::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void Asset::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool Asset::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

vector<string> Asset::GetLoadBalancerVips() const
{
    return m_loadBalancerVips;
}

void Asset::SetLoadBalancerVips(const vector<string>& _loadBalancerVips)
{
    m_loadBalancerVips = _loadBalancerVips;
    m_loadBalancerVipsHasBeenSet = true;
}

bool Asset::LoadBalancerVipsHasBeenSet() const
{
    return m_loadBalancerVipsHasBeenSet;
}

vector<string> Asset::GetAssetIpv6() const
{
    return m_assetIpv6;
}

void Asset::SetAssetIpv6(const vector<string>& _assetIpv6)
{
    m_assetIpv6 = _assetIpv6;
    m_assetIpv6HasBeenSet = true;
}

bool Asset::AssetIpv6HasBeenSet() const
{
    return m_assetIpv6HasBeenSet;
}

string Asset::GetSSHRisk() const
{
    return m_sSHRisk;
}

void Asset::SetSSHRisk(const string& _sSHRisk)
{
    m_sSHRisk = _sSHRisk;
    m_sSHRiskHasBeenSet = true;
}

bool Asset::SSHRiskHasBeenSet() const
{
    return m_sSHRiskHasBeenSet;
}

string Asset::GetRDPRisk() const
{
    return m_rDPRisk;
}

void Asset::SetRDPRisk(const string& _rDPRisk)
{
    m_rDPRisk = _rDPRisk;
    m_rDPRiskHasBeenSet = true;
}

bool Asset::RDPRiskHasBeenSet() const
{
    return m_rDPRiskHasBeenSet;
}

string Asset::GetEventRisk() const
{
    return m_eventRisk;
}

void Asset::SetEventRisk(const string& _eventRisk)
{
    m_eventRisk = _eventRisk;
    m_eventRiskHasBeenSet = true;
}

bool Asset::EventRiskHasBeenSet() const
{
    return m_eventRiskHasBeenSet;
}

