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

#include <tencentcloud/tse/v20201207/model/SREInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

SREInstance::SREInstance() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_specIdHasBeenSet(false),
    m_replicaHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_enableStorageHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_storageCapacityHasBeenSet(false),
    m_paymodeHasBeenSet(false),
    m_eKSClusterIDHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_envInfosHasBeenSet(false),
    m_engineRegionHasBeenSet(false),
    m_enableInternetHasBeenSet(false),
    m_vpcInfosHasBeenSet(false),
    m_serviceGovernanceInfosHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_enableConsoleInternetHasBeenSet(false),
    m_enableConsoleIntranetHasBeenSet(false),
    m_configInfoVisibleHasBeenSet(false),
    m_consoleDefaultPwdHasBeenSet(false),
    m_tradeTypeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_curDeadlineHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_regionInfosHasBeenSet(false),
    m_eKSTypeHasBeenSet(false),
    m_featureVersionHasBeenSet(false),
    m_enableClientIntranetHasBeenSet(false),
    m_storageOptionHasBeenSet(false),
    m_zookeeperRegionInfoHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_globalTypeHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_isMainRegionHasBeenSet(false)
{
}

CoreInternalOutcome SREInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("Replica") && !value["Replica"].IsNull())
    {
        if (!value["Replica"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.Replica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replica = value["Replica"].GetInt64();
        m_replicaHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SREInstance.SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("EnableStorage") && !value["EnableStorage"].IsNull())
    {
        if (!value["EnableStorage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.EnableStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableStorage = value["EnableStorage"].GetBool();
        m_enableStorageHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageCapacity") && !value["StorageCapacity"].IsNull())
    {
        if (!value["StorageCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.StorageCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageCapacity = value["StorageCapacity"].GetInt64();
        m_storageCapacityHasBeenSet = true;
    }

    if (value.HasMember("Paymode") && !value["Paymode"].IsNull())
    {
        if (!value["Paymode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.Paymode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymode = string(value["Paymode"].GetString());
        m_paymodeHasBeenSet = true;
    }

    if (value.HasMember("EKSClusterID") && !value["EKSClusterID"].IsNull())
    {
        if (!value["EKSClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.EKSClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eKSClusterID = string(value["EKSClusterID"].GetString());
        m_eKSClusterIDHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EnvInfos") && !value["EnvInfos"].IsNull())
    {
        if (!value["EnvInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SREInstance.EnvInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envInfos.push_back(item);
        }
        m_envInfosHasBeenSet = true;
    }

    if (value.HasMember("EngineRegion") && !value["EngineRegion"].IsNull())
    {
        if (!value["EngineRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.EngineRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineRegion = string(value["EngineRegion"].GetString());
        m_engineRegionHasBeenSet = true;
    }

    if (value.HasMember("EnableInternet") && !value["EnableInternet"].IsNull())
    {
        if (!value["EnableInternet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.EnableInternet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableInternet = value["EnableInternet"].GetBool();
        m_enableInternetHasBeenSet = true;
    }

    if (value.HasMember("VpcInfos") && !value["VpcInfos"].IsNull())
    {
        if (!value["VpcInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SREInstance.VpcInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcInfos.push_back(item);
        }
        m_vpcInfosHasBeenSet = true;
    }

    if (value.HasMember("ServiceGovernanceInfos") && !value["ServiceGovernanceInfos"].IsNull())
    {
        if (!value["ServiceGovernanceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SREInstance.ServiceGovernanceInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceGovernanceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceGovernanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceGovernanceInfos.push_back(item);
        }
        m_serviceGovernanceInfosHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SREInstance.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
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

    if (value.HasMember("EnableConsoleInternet") && !value["EnableConsoleInternet"].IsNull())
    {
        if (!value["EnableConsoleInternet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.EnableConsoleInternet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableConsoleInternet = value["EnableConsoleInternet"].GetBool();
        m_enableConsoleInternetHasBeenSet = true;
    }

    if (value.HasMember("EnableConsoleIntranet") && !value["EnableConsoleIntranet"].IsNull())
    {
        if (!value["EnableConsoleIntranet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.EnableConsoleIntranet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableConsoleIntranet = value["EnableConsoleIntranet"].GetBool();
        m_enableConsoleIntranetHasBeenSet = true;
    }

    if (value.HasMember("ConfigInfoVisible") && !value["ConfigInfoVisible"].IsNull())
    {
        if (!value["ConfigInfoVisible"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.ConfigInfoVisible` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_configInfoVisible = value["ConfigInfoVisible"].GetBool();
        m_configInfoVisibleHasBeenSet = true;
    }

    if (value.HasMember("ConsoleDefaultPwd") && !value["ConsoleDefaultPwd"].IsNull())
    {
        if (!value["ConsoleDefaultPwd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.ConsoleDefaultPwd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consoleDefaultPwd = string(value["ConsoleDefaultPwd"].GetString());
        m_consoleDefaultPwdHasBeenSet = true;
    }

    if (value.HasMember("TradeType") && !value["TradeType"].IsNull())
    {
        if (!value["TradeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.TradeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tradeType = value["TradeType"].GetInt64();
        m_tradeTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("CurDeadline") && !value["CurDeadline"].IsNull())
    {
        if (!value["CurDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.CurDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curDeadline = string(value["CurDeadline"].GetString());
        m_curDeadlineHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("RegionInfos") && !value["RegionInfos"].IsNull())
    {
        if (!value["RegionInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SREInstance.RegionInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeInstanceRegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionInfos.push_back(item);
        }
        m_regionInfosHasBeenSet = true;
    }

    if (value.HasMember("EKSType") && !value["EKSType"].IsNull())
    {
        if (!value["EKSType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.EKSType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eKSType = string(value["EKSType"].GetString());
        m_eKSTypeHasBeenSet = true;
    }

    if (value.HasMember("FeatureVersion") && !value["FeatureVersion"].IsNull())
    {
        if (!value["FeatureVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.FeatureVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_featureVersion = string(value["FeatureVersion"].GetString());
        m_featureVersionHasBeenSet = true;
    }

    if (value.HasMember("EnableClientIntranet") && !value["EnableClientIntranet"].IsNull())
    {
        if (!value["EnableClientIntranet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.EnableClientIntranet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableClientIntranet = value["EnableClientIntranet"].GetBool();
        m_enableClientIntranetHasBeenSet = true;
    }

    if (value.HasMember("StorageOption") && !value["StorageOption"].IsNull())
    {
        if (!value["StorageOption"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SREInstance.StorageOption` is not array type"));

        const rapidjson::Value &tmpValue = value["StorageOption"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storageOption.push_back(item);
        }
        m_storageOptionHasBeenSet = true;
    }

    if (value.HasMember("ZookeeperRegionInfo") && !value["ZookeeperRegionInfo"].IsNull())
    {
        if (!value["ZookeeperRegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.ZookeeperRegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zookeeperRegionInfo.Deserialize(value["ZookeeperRegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zookeeperRegionInfoHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.DeployMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = string(value["DeployMode"].GetString());
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("GlobalType") && !value["GlobalType"].IsNull())
    {
        if (!value["GlobalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.GlobalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalType = string(value["GlobalType"].GetString());
        m_globalTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SREInstance.GroupId` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupId.push_back((*itr).GetString());
        }
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("IsMainRegion") && !value["IsMainRegion"].IsNull())
    {
        if (!value["IsMainRegion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SREInstance.IsMainRegion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMainRegion = value["IsMainRegion"].GetBool();
        m_isMainRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SREInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replica, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableStorage, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageCapacity, allocator);
    }

    if (m_paymodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paymode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymode.c_str(), allocator).Move(), allocator);
    }

    if (m_eKSClusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EKSClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eKSClusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_envInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envInfos.begin(); itr != m_envInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_engineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_enableInternetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableInternet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableInternet, allocator);
    }

    if (m_vpcInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfos.begin(); itr != m_vpcInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceGovernanceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGovernanceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceGovernanceInfos.begin(); itr != m_serviceGovernanceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_enableConsoleInternetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableConsoleInternet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableConsoleInternet, allocator);
    }

    if (m_enableConsoleIntranetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableConsoleIntranet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableConsoleIntranet, allocator);
    }

    if (m_configInfoVisibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigInfoVisible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configInfoVisible, allocator);
    }

    if (m_consoleDefaultPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleDefaultPwd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consoleDefaultPwd.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tradeType, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_curDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionInfos.begin(); itr != m_regionInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eKSTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EKSType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eKSType.c_str(), allocator).Move(), allocator);
    }

    if (m_featureVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_featureVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_enableClientIntranetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableClientIntranet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableClientIntranet, allocator);
    }

    if (m_storageOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageOption.begin(); itr != m_storageOption.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_zookeeperRegionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZookeeperRegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zookeeperRegionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

    if (m_globalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupId.begin(); itr != m_groupId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isMainRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMainRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMainRegion, allocator);
    }

}


string SREInstance::GetInstanceId() const
{
    return m_instanceId;
}

void SREInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SREInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SREInstance::GetName() const
{
    return m_name;
}

void SREInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SREInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SREInstance::GetEdition() const
{
    return m_edition;
}

void SREInstance::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool SREInstance::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string SREInstance::GetStatus() const
{
    return m_status;
}

void SREInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SREInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SREInstance::GetSpecId() const
{
    return m_specId;
}

void SREInstance::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool SREInstance::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

int64_t SREInstance::GetReplica() const
{
    return m_replica;
}

void SREInstance::SetReplica(const int64_t& _replica)
{
    m_replica = _replica;
    m_replicaHasBeenSet = true;
}

bool SREInstance::ReplicaHasBeenSet() const
{
    return m_replicaHasBeenSet;
}

string SREInstance::GetType() const
{
    return m_type;
}

void SREInstance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SREInstance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SREInstance::GetVpcId() const
{
    return m_vpcId;
}

void SREInstance::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SREInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> SREInstance::GetSubnetIds() const
{
    return m_subnetIds;
}

void SREInstance::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool SREInstance::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

bool SREInstance::GetEnableStorage() const
{
    return m_enableStorage;
}

void SREInstance::SetEnableStorage(const bool& _enableStorage)
{
    m_enableStorage = _enableStorage;
    m_enableStorageHasBeenSet = true;
}

bool SREInstance::EnableStorageHasBeenSet() const
{
    return m_enableStorageHasBeenSet;
}

string SREInstance::GetStorageType() const
{
    return m_storageType;
}

void SREInstance::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool SREInstance::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t SREInstance::GetStorageCapacity() const
{
    return m_storageCapacity;
}

void SREInstance::SetStorageCapacity(const int64_t& _storageCapacity)
{
    m_storageCapacity = _storageCapacity;
    m_storageCapacityHasBeenSet = true;
}

bool SREInstance::StorageCapacityHasBeenSet() const
{
    return m_storageCapacityHasBeenSet;
}

string SREInstance::GetPaymode() const
{
    return m_paymode;
}

void SREInstance::SetPaymode(const string& _paymode)
{
    m_paymode = _paymode;
    m_paymodeHasBeenSet = true;
}

bool SREInstance::PaymodeHasBeenSet() const
{
    return m_paymodeHasBeenSet;
}

string SREInstance::GetEKSClusterID() const
{
    return m_eKSClusterID;
}

void SREInstance::SetEKSClusterID(const string& _eKSClusterID)
{
    m_eKSClusterID = _eKSClusterID;
    m_eKSClusterIDHasBeenSet = true;
}

bool SREInstance::EKSClusterIDHasBeenSet() const
{
    return m_eKSClusterIDHasBeenSet;
}

string SREInstance::GetCreateTime() const
{
    return m_createTime;
}

void SREInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SREInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<EnvInfo> SREInstance::GetEnvInfos() const
{
    return m_envInfos;
}

void SREInstance::SetEnvInfos(const vector<EnvInfo>& _envInfos)
{
    m_envInfos = _envInfos;
    m_envInfosHasBeenSet = true;
}

bool SREInstance::EnvInfosHasBeenSet() const
{
    return m_envInfosHasBeenSet;
}

string SREInstance::GetEngineRegion() const
{
    return m_engineRegion;
}

void SREInstance::SetEngineRegion(const string& _engineRegion)
{
    m_engineRegion = _engineRegion;
    m_engineRegionHasBeenSet = true;
}

bool SREInstance::EngineRegionHasBeenSet() const
{
    return m_engineRegionHasBeenSet;
}

bool SREInstance::GetEnableInternet() const
{
    return m_enableInternet;
}

void SREInstance::SetEnableInternet(const bool& _enableInternet)
{
    m_enableInternet = _enableInternet;
    m_enableInternetHasBeenSet = true;
}

bool SREInstance::EnableInternetHasBeenSet() const
{
    return m_enableInternetHasBeenSet;
}

vector<VpcInfo> SREInstance::GetVpcInfos() const
{
    return m_vpcInfos;
}

void SREInstance::SetVpcInfos(const vector<VpcInfo>& _vpcInfos)
{
    m_vpcInfos = _vpcInfos;
    m_vpcInfosHasBeenSet = true;
}

bool SREInstance::VpcInfosHasBeenSet() const
{
    return m_vpcInfosHasBeenSet;
}

vector<ServiceGovernanceInfo> SREInstance::GetServiceGovernanceInfos() const
{
    return m_serviceGovernanceInfos;
}

void SREInstance::SetServiceGovernanceInfos(const vector<ServiceGovernanceInfo>& _serviceGovernanceInfos)
{
    m_serviceGovernanceInfos = _serviceGovernanceInfos;
    m_serviceGovernanceInfosHasBeenSet = true;
}

bool SREInstance::ServiceGovernanceInfosHasBeenSet() const
{
    return m_serviceGovernanceInfosHasBeenSet;
}

vector<KVPair> SREInstance::GetTags() const
{
    return m_tags;
}

void SREInstance::SetTags(const vector<KVPair>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SREInstance::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool SREInstance::GetEnableConsoleInternet() const
{
    return m_enableConsoleInternet;
}

void SREInstance::SetEnableConsoleInternet(const bool& _enableConsoleInternet)
{
    m_enableConsoleInternet = _enableConsoleInternet;
    m_enableConsoleInternetHasBeenSet = true;
}

bool SREInstance::EnableConsoleInternetHasBeenSet() const
{
    return m_enableConsoleInternetHasBeenSet;
}

bool SREInstance::GetEnableConsoleIntranet() const
{
    return m_enableConsoleIntranet;
}

void SREInstance::SetEnableConsoleIntranet(const bool& _enableConsoleIntranet)
{
    m_enableConsoleIntranet = _enableConsoleIntranet;
    m_enableConsoleIntranetHasBeenSet = true;
}

bool SREInstance::EnableConsoleIntranetHasBeenSet() const
{
    return m_enableConsoleIntranetHasBeenSet;
}

bool SREInstance::GetConfigInfoVisible() const
{
    return m_configInfoVisible;
}

void SREInstance::SetConfigInfoVisible(const bool& _configInfoVisible)
{
    m_configInfoVisible = _configInfoVisible;
    m_configInfoVisibleHasBeenSet = true;
}

bool SREInstance::ConfigInfoVisibleHasBeenSet() const
{
    return m_configInfoVisibleHasBeenSet;
}

string SREInstance::GetConsoleDefaultPwd() const
{
    return m_consoleDefaultPwd;
}

void SREInstance::SetConsoleDefaultPwd(const string& _consoleDefaultPwd)
{
    m_consoleDefaultPwd = _consoleDefaultPwd;
    m_consoleDefaultPwdHasBeenSet = true;
}

bool SREInstance::ConsoleDefaultPwdHasBeenSet() const
{
    return m_consoleDefaultPwdHasBeenSet;
}

int64_t SREInstance::GetTradeType() const
{
    return m_tradeType;
}

void SREInstance::SetTradeType(const int64_t& _tradeType)
{
    m_tradeType = _tradeType;
    m_tradeTypeHasBeenSet = true;
}

bool SREInstance::TradeTypeHasBeenSet() const
{
    return m_tradeTypeHasBeenSet;
}

int64_t SREInstance::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void SREInstance::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool SREInstance::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string SREInstance::GetCurDeadline() const
{
    return m_curDeadline;
}

void SREInstance::SetCurDeadline(const string& _curDeadline)
{
    m_curDeadline = _curDeadline;
    m_curDeadlineHasBeenSet = true;
}

bool SREInstance::CurDeadlineHasBeenSet() const
{
    return m_curDeadlineHasBeenSet;
}

string SREInstance::GetIsolateTime() const
{
    return m_isolateTime;
}

void SREInstance::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool SREInstance::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

vector<DescribeInstanceRegionInfo> SREInstance::GetRegionInfos() const
{
    return m_regionInfos;
}

void SREInstance::SetRegionInfos(const vector<DescribeInstanceRegionInfo>& _regionInfos)
{
    m_regionInfos = _regionInfos;
    m_regionInfosHasBeenSet = true;
}

bool SREInstance::RegionInfosHasBeenSet() const
{
    return m_regionInfosHasBeenSet;
}

string SREInstance::GetEKSType() const
{
    return m_eKSType;
}

void SREInstance::SetEKSType(const string& _eKSType)
{
    m_eKSType = _eKSType;
    m_eKSTypeHasBeenSet = true;
}

bool SREInstance::EKSTypeHasBeenSet() const
{
    return m_eKSTypeHasBeenSet;
}

string SREInstance::GetFeatureVersion() const
{
    return m_featureVersion;
}

void SREInstance::SetFeatureVersion(const string& _featureVersion)
{
    m_featureVersion = _featureVersion;
    m_featureVersionHasBeenSet = true;
}

bool SREInstance::FeatureVersionHasBeenSet() const
{
    return m_featureVersionHasBeenSet;
}

bool SREInstance::GetEnableClientIntranet() const
{
    return m_enableClientIntranet;
}

void SREInstance::SetEnableClientIntranet(const bool& _enableClientIntranet)
{
    m_enableClientIntranet = _enableClientIntranet;
    m_enableClientIntranetHasBeenSet = true;
}

bool SREInstance::EnableClientIntranetHasBeenSet() const
{
    return m_enableClientIntranetHasBeenSet;
}

vector<StorageOption> SREInstance::GetStorageOption() const
{
    return m_storageOption;
}

void SREInstance::SetStorageOption(const vector<StorageOption>& _storageOption)
{
    m_storageOption = _storageOption;
    m_storageOptionHasBeenSet = true;
}

bool SREInstance::StorageOptionHasBeenSet() const
{
    return m_storageOptionHasBeenSet;
}

ZookeeperRegionInfo SREInstance::GetZookeeperRegionInfo() const
{
    return m_zookeeperRegionInfo;
}

void SREInstance::SetZookeeperRegionInfo(const ZookeeperRegionInfo& _zookeeperRegionInfo)
{
    m_zookeeperRegionInfo = _zookeeperRegionInfo;
    m_zookeeperRegionInfoHasBeenSet = true;
}

bool SREInstance::ZookeeperRegionInfoHasBeenSet() const
{
    return m_zookeeperRegionInfoHasBeenSet;
}

string SREInstance::GetDeployMode() const
{
    return m_deployMode;
}

void SREInstance::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool SREInstance::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string SREInstance::GetGlobalType() const
{
    return m_globalType;
}

void SREInstance::SetGlobalType(const string& _globalType)
{
    m_globalType = _globalType;
    m_globalTypeHasBeenSet = true;
}

bool SREInstance::GlobalTypeHasBeenSet() const
{
    return m_globalTypeHasBeenSet;
}

string SREInstance::GetGroupType() const
{
    return m_groupType;
}

void SREInstance::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool SREInstance::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

vector<string> SREInstance::GetGroupId() const
{
    return m_groupId;
}

void SREInstance::SetGroupId(const vector<string>& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SREInstance::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

bool SREInstance::GetIsMainRegion() const
{
    return m_isMainRegion;
}

void SREInstance::SetIsMainRegion(const bool& _isMainRegion)
{
    m_isMainRegion = _isMainRegion;
    m_isMainRegionHasBeenSet = true;
}

bool SREInstance::IsMainRegionHasBeenSet() const
{
    return m_isMainRegionHasBeenSet;
}

