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

#include <tencentcloud/ssa/v20180608/model/VulItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

VulItem::VulItem() :
    m_idHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_impactAssetNumHasBeenSet(false),
    m_impactAssetHasBeenSet(false),
    m_impactAssetNameHasBeenSet(false),
    m_vulDetailHasBeenSet(false),
    m_vulRefLinkHasBeenSet(false),
    m_oldIdMd5HasBeenSet(false),
    m_uniqIdHasBeenSet(false),
    m_operateTimeHasBeenSet(false),
    m_isAssetDeletedHasBeenSet(false),
    m_discoverTimeHasBeenSet(false),
    m_originIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcidHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetSubTypeHasBeenSet(false),
    m_assetIpAllHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_vulSourceHasBeenSet(false),
    m_affectedUrlHasBeenSet(false),
    m_ssaAssetCategoryHasBeenSet(false),
    m_vulUrlHasBeenSet(false),
    m_isOpenHasBeenSet(false),
    m_yzHostIdHasBeenSet(false),
    m_vulRepairPlanHasBeenSet(false),
    m_vulPathHasBeenSet(false)
{
}

CoreInternalOutcome VulItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ImpactAssetNum") && !value["ImpactAssetNum"].IsNull())
    {
        if (!value["ImpactAssetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.ImpactAssetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_impactAssetNum = value["ImpactAssetNum"].GetInt64();
        m_impactAssetNumHasBeenSet = true;
    }

    if (value.HasMember("ImpactAsset") && !value["ImpactAsset"].IsNull())
    {
        if (!value["ImpactAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.ImpactAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactAsset = string(value["ImpactAsset"].GetString());
        m_impactAssetHasBeenSet = true;
    }

    if (value.HasMember("ImpactAssetName") && !value["ImpactAssetName"].IsNull())
    {
        if (!value["ImpactAssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.ImpactAssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactAssetName = string(value["ImpactAssetName"].GetString());
        m_impactAssetNameHasBeenSet = true;
    }

    if (value.HasMember("VulDetail") && !value["VulDetail"].IsNull())
    {
        if (!value["VulDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.VulDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulDetail = string(value["VulDetail"].GetString());
        m_vulDetailHasBeenSet = true;
    }

    if (value.HasMember("VulRefLink") && !value["VulRefLink"].IsNull())
    {
        if (!value["VulRefLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.VulRefLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulRefLink = string(value["VulRefLink"].GetString());
        m_vulRefLinkHasBeenSet = true;
    }

    if (value.HasMember("OldIdMd5") && !value["OldIdMd5"].IsNull())
    {
        if (!value["OldIdMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.OldIdMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldIdMd5 = string(value["OldIdMd5"].GetString());
        m_oldIdMd5HasBeenSet = true;
    }

    if (value.HasMember("UniqId") && !value["UniqId"].IsNull())
    {
        if (!value["UniqId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.UniqId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqId = string(value["UniqId"].GetString());
        m_uniqIdHasBeenSet = true;
    }

    if (value.HasMember("OperateTime") && !value["OperateTime"].IsNull())
    {
        if (!value["OperateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.OperateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateTime = string(value["OperateTime"].GetString());
        m_operateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAssetDeleted") && !value["IsAssetDeleted"].IsNull())
    {
        if (!value["IsAssetDeleted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.IsAssetDeleted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isAssetDeleted = string(value["IsAssetDeleted"].GetString());
        m_isAssetDeletedHasBeenSet = true;
    }

    if (value.HasMember("DiscoverTime") && !value["DiscoverTime"].IsNull())
    {
        if (!value["DiscoverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.DiscoverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discoverTime = string(value["DiscoverTime"].GetString());
        m_discoverTimeHasBeenSet = true;
    }

    if (value.HasMember("OriginId") && !value["OriginId"].IsNull())
    {
        if (!value["OriginId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.OriginId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_originId = value["OriginId"].GetUint64();
        m_originIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Vpcid") && !value["Vpcid"].IsNull())
    {
        if (!value["Vpcid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.Vpcid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcid = string(value["Vpcid"].GetString());
        m_vpcidHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetSubType") && !value["AssetSubType"].IsNull())
    {
        if (!value["AssetSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.AssetSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSubType = string(value["AssetSubType"].GetString());
        m_assetSubTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetIpAll") && !value["AssetIpAll"].IsNull())
    {
        if (!value["AssetIpAll"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulItem.AssetIpAll` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetIpAll"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetIpAll.push_back((*itr).GetString());
        }
        m_assetIpAllHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulItem.PublicIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulItem.PrivateIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("VulSource") && !value["VulSource"].IsNull())
    {
        if (!value["VulSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.VulSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulSource = string(value["VulSource"].GetString());
        m_vulSourceHasBeenSet = true;
    }

    if (value.HasMember("AffectedUrl") && !value["AffectedUrl"].IsNull())
    {
        if (!value["AffectedUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.AffectedUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectedUrl = string(value["AffectedUrl"].GetString());
        m_affectedUrlHasBeenSet = true;
    }

    if (value.HasMember("SsaAssetCategory") && !value["SsaAssetCategory"].IsNull())
    {
        if (!value["SsaAssetCategory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.SsaAssetCategory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ssaAssetCategory = value["SsaAssetCategory"].GetInt64();
        m_ssaAssetCategoryHasBeenSet = true;
    }

    if (value.HasMember("VulUrl") && !value["VulUrl"].IsNull())
    {
        if (!value["VulUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.VulUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulUrl = string(value["VulUrl"].GetString());
        m_vulUrlHasBeenSet = true;
    }

    if (value.HasMember("IsOpen") && !value["IsOpen"].IsNull())
    {
        if (!value["IsOpen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.IsOpen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOpen = value["IsOpen"].GetBool();
        m_isOpenHasBeenSet = true;
    }

    if (value.HasMember("YzHostId") && !value["YzHostId"].IsNull())
    {
        if (!value["YzHostId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.YzHostId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_yzHostId = value["YzHostId"].GetUint64();
        m_yzHostIdHasBeenSet = true;
    }

    if (value.HasMember("VulRepairPlan") && !value["VulRepairPlan"].IsNull())
    {
        if (!value["VulRepairPlan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.VulRepairPlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulRepairPlan = string(value["VulRepairPlan"].GetString());
        m_vulRepairPlanHasBeenSet = true;
    }

    if (value.HasMember("VulPath") && !value["VulPath"].IsNull())
    {
        if (!value["VulPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulItem.VulPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulPath = string(value["VulPath"].GetString());
        m_vulPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_impactAssetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactAssetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_impactAssetNum, allocator);
    }

    if (m_impactAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_impactAssetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactAssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactAssetName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_vulRefLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulRefLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulRefLink.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIdMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIdMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldIdMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAssetDeletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAssetDeleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isAssetDeleted.c_str(), allocator).Move(), allocator);
    }

    if (m_discoverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discoverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_originIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpcid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcid.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIpAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetIpAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetIpAll.begin(); itr != m_assetIpAll.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_vulSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulSource.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectedUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaAssetCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaAssetCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ssaAssetCategory, allocator);
    }

    if (m_vulUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpen, allocator);
    }

    if (m_yzHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YzHostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yzHostId, allocator);
    }

    if (m_vulRepairPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulRepairPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulRepairPlan.c_str(), allocator).Move(), allocator);
    }

    if (m_vulPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulPath.c_str(), allocator).Move(), allocator);
    }

}


string VulItem::GetId() const
{
    return m_id;
}

void VulItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VulItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string VulItem::GetVulName() const
{
    return m_vulName;
}

void VulItem::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulItem::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

int64_t VulItem::GetType() const
{
    return m_type;
}

void VulItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VulItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t VulItem::GetLevel() const
{
    return m_level;
}

void VulItem::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t VulItem::GetStatus() const
{
    return m_status;
}

void VulItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VulItem::GetTime() const
{
    return m_time;
}

void VulItem::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool VulItem::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t VulItem::GetImpactAssetNum() const
{
    return m_impactAssetNum;
}

void VulItem::SetImpactAssetNum(const int64_t& _impactAssetNum)
{
    m_impactAssetNum = _impactAssetNum;
    m_impactAssetNumHasBeenSet = true;
}

bool VulItem::ImpactAssetNumHasBeenSet() const
{
    return m_impactAssetNumHasBeenSet;
}

string VulItem::GetImpactAsset() const
{
    return m_impactAsset;
}

void VulItem::SetImpactAsset(const string& _impactAsset)
{
    m_impactAsset = _impactAsset;
    m_impactAssetHasBeenSet = true;
}

bool VulItem::ImpactAssetHasBeenSet() const
{
    return m_impactAssetHasBeenSet;
}

string VulItem::GetImpactAssetName() const
{
    return m_impactAssetName;
}

void VulItem::SetImpactAssetName(const string& _impactAssetName)
{
    m_impactAssetName = _impactAssetName;
    m_impactAssetNameHasBeenSet = true;
}

bool VulItem::ImpactAssetNameHasBeenSet() const
{
    return m_impactAssetNameHasBeenSet;
}

string VulItem::GetVulDetail() const
{
    return m_vulDetail;
}

void VulItem::SetVulDetail(const string& _vulDetail)
{
    m_vulDetail = _vulDetail;
    m_vulDetailHasBeenSet = true;
}

bool VulItem::VulDetailHasBeenSet() const
{
    return m_vulDetailHasBeenSet;
}

string VulItem::GetVulRefLink() const
{
    return m_vulRefLink;
}

void VulItem::SetVulRefLink(const string& _vulRefLink)
{
    m_vulRefLink = _vulRefLink;
    m_vulRefLinkHasBeenSet = true;
}

bool VulItem::VulRefLinkHasBeenSet() const
{
    return m_vulRefLinkHasBeenSet;
}

string VulItem::GetOldIdMd5() const
{
    return m_oldIdMd5;
}

void VulItem::SetOldIdMd5(const string& _oldIdMd5)
{
    m_oldIdMd5 = _oldIdMd5;
    m_oldIdMd5HasBeenSet = true;
}

bool VulItem::OldIdMd5HasBeenSet() const
{
    return m_oldIdMd5HasBeenSet;
}

string VulItem::GetUniqId() const
{
    return m_uniqId;
}

void VulItem::SetUniqId(const string& _uniqId)
{
    m_uniqId = _uniqId;
    m_uniqIdHasBeenSet = true;
}

bool VulItem::UniqIdHasBeenSet() const
{
    return m_uniqIdHasBeenSet;
}

string VulItem::GetOperateTime() const
{
    return m_operateTime;
}

void VulItem::SetOperateTime(const string& _operateTime)
{
    m_operateTime = _operateTime;
    m_operateTimeHasBeenSet = true;
}

bool VulItem::OperateTimeHasBeenSet() const
{
    return m_operateTimeHasBeenSet;
}

string VulItem::GetIsAssetDeleted() const
{
    return m_isAssetDeleted;
}

void VulItem::SetIsAssetDeleted(const string& _isAssetDeleted)
{
    m_isAssetDeleted = _isAssetDeleted;
    m_isAssetDeletedHasBeenSet = true;
}

bool VulItem::IsAssetDeletedHasBeenSet() const
{
    return m_isAssetDeletedHasBeenSet;
}

string VulItem::GetDiscoverTime() const
{
    return m_discoverTime;
}

void VulItem::SetDiscoverTime(const string& _discoverTime)
{
    m_discoverTime = _discoverTime;
    m_discoverTimeHasBeenSet = true;
}

bool VulItem::DiscoverTimeHasBeenSet() const
{
    return m_discoverTimeHasBeenSet;
}

uint64_t VulItem::GetOriginId() const
{
    return m_originId;
}

void VulItem::SetOriginId(const uint64_t& _originId)
{
    m_originId = _originId;
    m_originIdHasBeenSet = true;
}

bool VulItem::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

string VulItem::GetRegion() const
{
    return m_region;
}

void VulItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool VulItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string VulItem::GetVpcid() const
{
    return m_vpcid;
}

void VulItem::SetVpcid(const string& _vpcid)
{
    m_vpcid = _vpcid;
    m_vpcidHasBeenSet = true;
}

bool VulItem::VpcidHasBeenSet() const
{
    return m_vpcidHasBeenSet;
}

string VulItem::GetAssetType() const
{
    return m_assetType;
}

void VulItem::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool VulItem::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string VulItem::GetAssetSubType() const
{
    return m_assetSubType;
}

void VulItem::SetAssetSubType(const string& _assetSubType)
{
    m_assetSubType = _assetSubType;
    m_assetSubTypeHasBeenSet = true;
}

bool VulItem::AssetSubTypeHasBeenSet() const
{
    return m_assetSubTypeHasBeenSet;
}

vector<string> VulItem::GetAssetIpAll() const
{
    return m_assetIpAll;
}

void VulItem::SetAssetIpAll(const vector<string>& _assetIpAll)
{
    m_assetIpAll = _assetIpAll;
    m_assetIpAllHasBeenSet = true;
}

bool VulItem::AssetIpAllHasBeenSet() const
{
    return m_assetIpAllHasBeenSet;
}

vector<string> VulItem::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void VulItem::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool VulItem::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

vector<string> VulItem::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void VulItem::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool VulItem::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

string VulItem::GetVulSource() const
{
    return m_vulSource;
}

void VulItem::SetVulSource(const string& _vulSource)
{
    m_vulSource = _vulSource;
    m_vulSourceHasBeenSet = true;
}

bool VulItem::VulSourceHasBeenSet() const
{
    return m_vulSourceHasBeenSet;
}

string VulItem::GetAffectedUrl() const
{
    return m_affectedUrl;
}

void VulItem::SetAffectedUrl(const string& _affectedUrl)
{
    m_affectedUrl = _affectedUrl;
    m_affectedUrlHasBeenSet = true;
}

bool VulItem::AffectedUrlHasBeenSet() const
{
    return m_affectedUrlHasBeenSet;
}

int64_t VulItem::GetSsaAssetCategory() const
{
    return m_ssaAssetCategory;
}

void VulItem::SetSsaAssetCategory(const int64_t& _ssaAssetCategory)
{
    m_ssaAssetCategory = _ssaAssetCategory;
    m_ssaAssetCategoryHasBeenSet = true;
}

bool VulItem::SsaAssetCategoryHasBeenSet() const
{
    return m_ssaAssetCategoryHasBeenSet;
}

string VulItem::GetVulUrl() const
{
    return m_vulUrl;
}

void VulItem::SetVulUrl(const string& _vulUrl)
{
    m_vulUrl = _vulUrl;
    m_vulUrlHasBeenSet = true;
}

bool VulItem::VulUrlHasBeenSet() const
{
    return m_vulUrlHasBeenSet;
}

bool VulItem::GetIsOpen() const
{
    return m_isOpen;
}

void VulItem::SetIsOpen(const bool& _isOpen)
{
    m_isOpen = _isOpen;
    m_isOpenHasBeenSet = true;
}

bool VulItem::IsOpenHasBeenSet() const
{
    return m_isOpenHasBeenSet;
}

uint64_t VulItem::GetYzHostId() const
{
    return m_yzHostId;
}

void VulItem::SetYzHostId(const uint64_t& _yzHostId)
{
    m_yzHostId = _yzHostId;
    m_yzHostIdHasBeenSet = true;
}

bool VulItem::YzHostIdHasBeenSet() const
{
    return m_yzHostIdHasBeenSet;
}

string VulItem::GetVulRepairPlan() const
{
    return m_vulRepairPlan;
}

void VulItem::SetVulRepairPlan(const string& _vulRepairPlan)
{
    m_vulRepairPlan = _vulRepairPlan;
    m_vulRepairPlanHasBeenSet = true;
}

bool VulItem::VulRepairPlanHasBeenSet() const
{
    return m_vulRepairPlanHasBeenSet;
}

string VulItem::GetVulPath() const
{
    return m_vulPath;
}

void VulItem::SetVulPath(const string& _vulPath)
{
    m_vulPath = _vulPath;
    m_vulPathHasBeenSet = true;
}

bool VulItem::VulPathHasBeenSet() const
{
    return m_vulPathHasBeenSet;
}

