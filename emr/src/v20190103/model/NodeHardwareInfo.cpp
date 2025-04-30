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

#include <tencentcloud/emr/v20190103/model/NodeHardwareInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeHardwareInfo::NodeHardwareInfo() :
    m_appIdHasBeenSet(false),
    m_serialNoHasBeenSet(false),
    m_orderNoHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_specHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_memDescHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_freeTimeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_nameTagHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_rootSizeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_cdbIpHasBeenSet(false),
    m_cdbPortHasBeenSet(false),
    m_hwDiskSizeHasBeenSet(false),
    m_hwDiskSizeDescHasBeenSet(false),
    m_hwMemSizeHasBeenSet(false),
    m_hwMemSizeDescHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_emrResourceIdHasBeenSet(false),
    m_isAutoRenewHasBeenSet(false),
    m_deviceClassHasBeenSet(false),
    m_mutableHasBeenSet(false),
    m_mCMultiDiskHasBeenSet(false),
    m_cdbNodeInfoHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_destroyableHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoFlagHasBeenSet(false),
    m_hardwareResourceTypeHasBeenSet(false),
    m_isDynamicSpecHasBeenSet(false),
    m_dynamicPodSpecHasBeenSet(false),
    m_supportModifyPayModeHasBeenSet(false),
    m_rootStorageTypeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_subnetInfoHasBeenSet(false),
    m_clientsHasBeenSet(false),
    m_currentTimeHasBeenSet(false),
    m_isFederationHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceClientHasBeenSet(false),
    m_disableApiTerminationHasBeenSet(false),
    m_tradeVersionHasBeenSet(false),
    m_servicesStatusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_sharedClusterIdHasBeenSet(false),
    m_sharedClusterIdDescHasBeenSet(false),
    m_timingResourceHasBeenSet(false),
    m_tkeClusterIdHasBeenSet(false),
    m_configurableServicesHasBeenSet(false)
{
}

CoreInternalOutcome NodeHardwareInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }

    if (value.HasMember("OrderNo") && !value["OrderNo"].IsNull())
    {
        if (!value["OrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.OrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNo = string(value["OrderNo"].GetString());
        m_orderNoHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Flag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flag = value["Flag"].GetInt64();
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.CpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetInt64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("MemDesc") && !value["MemDesc"].IsNull())
    {
        if (!value["MemDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.MemDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memDesc = string(value["MemDesc"].GetString());
        m_memDescHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("FreeTime") && !value["FreeTime"].IsNull())
    {
        if (!value["FreeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.FreeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_freeTime = string(value["FreeTime"].GetString());
        m_freeTimeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.DiskSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = string(value["DiskSize"].GetString());
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("NameTag") && !value["NameTag"].IsNull())
    {
        if (!value["NameTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.NameTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameTag = string(value["NameTag"].GetString());
        m_nameTagHasBeenSet = true;
    }

    if (value.HasMember("Services") && !value["Services"].IsNull())
    {
        if (!value["Services"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Services` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_services = string(value["Services"].GetString());
        m_servicesHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.StorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetInt64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("RootSize") && !value["RootSize"].IsNull())
    {
        if (!value["RootSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.RootSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rootSize = value["RootSize"].GetInt64();
        m_rootSizeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.ChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = value["ChargeType"].GetInt64();
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("CdbIp") && !value["CdbIp"].IsNull())
    {
        if (!value["CdbIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.CdbIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdbIp = string(value["CdbIp"].GetString());
        m_cdbIpHasBeenSet = true;
    }

    if (value.HasMember("CdbPort") && !value["CdbPort"].IsNull())
    {
        if (!value["CdbPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.CdbPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cdbPort = value["CdbPort"].GetInt64();
        m_cdbPortHasBeenSet = true;
    }

    if (value.HasMember("HwDiskSize") && !value["HwDiskSize"].IsNull())
    {
        if (!value["HwDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.HwDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hwDiskSize = value["HwDiskSize"].GetInt64();
        m_hwDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("HwDiskSizeDesc") && !value["HwDiskSizeDesc"].IsNull())
    {
        if (!value["HwDiskSizeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.HwDiskSizeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hwDiskSizeDesc = string(value["HwDiskSizeDesc"].GetString());
        m_hwDiskSizeDescHasBeenSet = true;
    }

    if (value.HasMember("HwMemSize") && !value["HwMemSize"].IsNull())
    {
        if (!value["HwMemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.HwMemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hwMemSize = value["HwMemSize"].GetInt64();
        m_hwMemSizeHasBeenSet = true;
    }

    if (value.HasMember("HwMemSizeDesc") && !value["HwMemSizeDesc"].IsNull())
    {
        if (!value["HwMemSizeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.HwMemSizeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hwMemSizeDesc = string(value["HwMemSizeDesc"].GetString());
        m_hwMemSizeDescHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("EmrResourceId") && !value["EmrResourceId"].IsNull())
    {
        if (!value["EmrResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.EmrResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emrResourceId = string(value["EmrResourceId"].GetString());
        m_emrResourceIdHasBeenSet = true;
    }

    if (value.HasMember("IsAutoRenew") && !value["IsAutoRenew"].IsNull())
    {
        if (!value["IsAutoRenew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.IsAutoRenew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoRenew = value["IsAutoRenew"].GetInt64();
        m_isAutoRenewHasBeenSet = true;
    }

    if (value.HasMember("DeviceClass") && !value["DeviceClass"].IsNull())
    {
        if (!value["DeviceClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.DeviceClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceClass = string(value["DeviceClass"].GetString());
        m_deviceClassHasBeenSet = true;
    }

    if (value.HasMember("Mutable") && !value["Mutable"].IsNull())
    {
        if (!value["Mutable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Mutable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mutable = value["Mutable"].GetInt64();
        m_mutableHasBeenSet = true;
    }

    if (value.HasMember("MCMultiDisk") && !value["MCMultiDisk"].IsNull())
    {
        if (!value["MCMultiDisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.MCMultiDisk` is not array type"));

        const rapidjson::Value &tmpValue = value["MCMultiDisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiDiskMC item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mCMultiDisk.push_back(item);
        }
        m_mCMultiDiskHasBeenSet = true;
    }

    if (value.HasMember("CdbNodeInfo") && !value["CdbNodeInfo"].IsNull())
    {
        if (!value["CdbNodeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.CdbNodeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cdbNodeInfo.Deserialize(value["CdbNodeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cdbNodeInfoHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Destroyable") && !value["Destroyable"].IsNull())
    {
        if (!value["Destroyable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Destroyable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_destroyable = value["Destroyable"].GetInt64();
        m_destroyableHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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

    if (value.HasMember("AutoFlag") && !value["AutoFlag"].IsNull())
    {
        if (!value["AutoFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.AutoFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoFlag = value["AutoFlag"].GetInt64();
        m_autoFlagHasBeenSet = true;
    }

    if (value.HasMember("HardwareResourceType") && !value["HardwareResourceType"].IsNull())
    {
        if (!value["HardwareResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.HardwareResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareResourceType = string(value["HardwareResourceType"].GetString());
        m_hardwareResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("IsDynamicSpec") && !value["IsDynamicSpec"].IsNull())
    {
        if (!value["IsDynamicSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.IsDynamicSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDynamicSpec = value["IsDynamicSpec"].GetInt64();
        m_isDynamicSpecHasBeenSet = true;
    }

    if (value.HasMember("DynamicPodSpec") && !value["DynamicPodSpec"].IsNull())
    {
        if (!value["DynamicPodSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.DynamicPodSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dynamicPodSpec = string(value["DynamicPodSpec"].GetString());
        m_dynamicPodSpecHasBeenSet = true;
    }

    if (value.HasMember("SupportModifyPayMode") && !value["SupportModifyPayMode"].IsNull())
    {
        if (!value["SupportModifyPayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.SupportModifyPayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportModifyPayMode = value["SupportModifyPayMode"].GetInt64();
        m_supportModifyPayModeHasBeenSet = true;
    }

    if (value.HasMember("RootStorageType") && !value["RootStorageType"].IsNull())
    {
        if (!value["RootStorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.RootStorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rootStorageType = value["RootStorageType"].GetInt64();
        m_rootStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SubnetInfo") && !value["SubnetInfo"].IsNull())
    {
        if (!value["SubnetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.SubnetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subnetInfo.Deserialize(value["SubnetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subnetInfoHasBeenSet = true;
    }

    if (value.HasMember("Clients") && !value["Clients"].IsNull())
    {
        if (!value["Clients"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Clients` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clients = string(value["Clients"].GetString());
        m_clientsHasBeenSet = true;
    }

    if (value.HasMember("CurrentTime") && !value["CurrentTime"].IsNull())
    {
        if (!value["CurrentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.CurrentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentTime = string(value["CurrentTime"].GetString());
        m_currentTimeHasBeenSet = true;
    }

    if (value.HasMember("IsFederation") && !value["IsFederation"].IsNull())
    {
        if (!value["IsFederation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.IsFederation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFederation = value["IsFederation"].GetInt64();
        m_isFederationHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceClient") && !value["ServiceClient"].IsNull())
    {
        if (!value["ServiceClient"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.ServiceClient` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceClient = string(value["ServiceClient"].GetString());
        m_serviceClientHasBeenSet = true;
    }

    if (value.HasMember("DisableApiTermination") && !value["DisableApiTermination"].IsNull())
    {
        if (!value["DisableApiTermination"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.DisableApiTermination` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableApiTermination = value["DisableApiTermination"].GetBool();
        m_disableApiTerminationHasBeenSet = true;
    }

    if (value.HasMember("TradeVersion") && !value["TradeVersion"].IsNull())
    {
        if (!value["TradeVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.TradeVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tradeVersion = value["TradeVersion"].GetInt64();
        m_tradeVersionHasBeenSet = true;
    }

    if (value.HasMember("ServicesStatus") && !value["ServicesStatus"].IsNull())
    {
        if (!value["ServicesStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.ServicesStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servicesStatus = string(value["ServicesStatus"].GetString());
        m_servicesStatusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SharedClusterId") && !value["SharedClusterId"].IsNull())
    {
        if (!value["SharedClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.SharedClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedClusterId = string(value["SharedClusterId"].GetString());
        m_sharedClusterIdHasBeenSet = true;
    }

    if (value.HasMember("SharedClusterIdDesc") && !value["SharedClusterIdDesc"].IsNull())
    {
        if (!value["SharedClusterIdDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.SharedClusterIdDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedClusterIdDesc = string(value["SharedClusterIdDesc"].GetString());
        m_sharedClusterIdDescHasBeenSet = true;
    }

    if (value.HasMember("TimingResource") && !value["TimingResource"].IsNull())
    {
        if (!value["TimingResource"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.TimingResource` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_timingResource = value["TimingResource"].GetBool();
        m_timingResourceHasBeenSet = true;
    }

    if (value.HasMember("TkeClusterId") && !value["TkeClusterId"].IsNull())
    {
        if (!value["TkeClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.TkeClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tkeClusterId = string(value["TkeClusterId"].GetString());
        m_tkeClusterIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigurableServices") && !value["ConfigurableServices"].IsNull())
    {
        if (!value["ConfigurableServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeHardwareInfo.ConfigurableServices` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigurableServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_configurableServices.push_back((*itr).GetString());
        }
        m_configurableServicesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeHardwareInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_serialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flag, allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuNum, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_memDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_freeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_freeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskSize.c_str(), allocator).Move(), allocator);
    }

    if (m_nameTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameTag.c_str(), allocator).Move(), allocator);
    }

    if (m_servicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_services.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageType, allocator);
    }

    if (m_rootSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootSize, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeType, allocator);
    }

    if (m_cdbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdbIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cdbPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cdbPort, allocator);
    }

    if (m_hwDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HwDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hwDiskSize, allocator);
    }

    if (m_hwDiskSizeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HwDiskSizeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hwDiskSizeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_hwMemSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HwMemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hwMemSize, allocator);
    }

    if (m_hwMemSizeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HwMemSizeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hwMemSizeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_emrResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emrResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isAutoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoRenew, allocator);
    }

    if (m_deviceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_mutableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mutable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mutable, allocator);
    }

    if (m_mCMultiDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCMultiDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mCMultiDisk.begin(); itr != m_mCMultiDisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cdbNodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbNodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cdbNodeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destroyable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destroyable, allocator);
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

    if (m_autoFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoFlag, allocator);
    }

    if (m_hardwareResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_isDynamicSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDynamicSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDynamicSpec, allocator);
    }

    if (m_dynamicPodSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicPodSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dynamicPodSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_supportModifyPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportModifyPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportModifyPayMode, allocator);
    }

    if (m_rootStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootStorageType, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subnetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clients.c_str(), allocator).Move(), allocator);
    }

    if (m_currentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isFederationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFederation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFederation, allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceClientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceClient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceClient.c_str(), allocator).Move(), allocator);
    }

    if (m_disableApiTerminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableApiTermination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableApiTermination, allocator);
    }

    if (m_tradeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tradeVersion, allocator);
    }

    if (m_servicesStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicesStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_servicesStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedClusterIdDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedClusterIdDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedClusterIdDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_timingResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timingResource, allocator);
    }

    if (m_tkeClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tkeClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_configurableServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurableServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_configurableServices.begin(); itr != m_configurableServices.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t NodeHardwareInfo::GetAppId() const
{
    return m_appId;
}

void NodeHardwareInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool NodeHardwareInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string NodeHardwareInfo::GetSerialNo() const
{
    return m_serialNo;
}

void NodeHardwareInfo::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool NodeHardwareInfo::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

string NodeHardwareInfo::GetOrderNo() const
{
    return m_orderNo;
}

void NodeHardwareInfo::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool NodeHardwareInfo::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string NodeHardwareInfo::GetWanIp() const
{
    return m_wanIp;
}

void NodeHardwareInfo::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool NodeHardwareInfo::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

int64_t NodeHardwareInfo::GetFlag() const
{
    return m_flag;
}

void NodeHardwareInfo::SetFlag(const int64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool NodeHardwareInfo::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string NodeHardwareInfo::GetSpec() const
{
    return m_spec;
}

void NodeHardwareInfo::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool NodeHardwareInfo::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t NodeHardwareInfo::GetCpuNum() const
{
    return m_cpuNum;
}

void NodeHardwareInfo::SetCpuNum(const int64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool NodeHardwareInfo::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

int64_t NodeHardwareInfo::GetMemSize() const
{
    return m_memSize;
}

void NodeHardwareInfo::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool NodeHardwareInfo::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

string NodeHardwareInfo::GetMemDesc() const
{
    return m_memDesc;
}

void NodeHardwareInfo::SetMemDesc(const string& _memDesc)
{
    m_memDesc = _memDesc;
    m_memDescHasBeenSet = true;
}

bool NodeHardwareInfo::MemDescHasBeenSet() const
{
    return m_memDescHasBeenSet;
}

int64_t NodeHardwareInfo::GetRegionId() const
{
    return m_regionId;
}

void NodeHardwareInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool NodeHardwareInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t NodeHardwareInfo::GetZoneId() const
{
    return m_zoneId;
}

void NodeHardwareInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool NodeHardwareInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string NodeHardwareInfo::GetApplyTime() const
{
    return m_applyTime;
}

void NodeHardwareInfo::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool NodeHardwareInfo::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string NodeHardwareInfo::GetFreeTime() const
{
    return m_freeTime;
}

void NodeHardwareInfo::SetFreeTime(const string& _freeTime)
{
    m_freeTime = _freeTime;
    m_freeTimeHasBeenSet = true;
}

bool NodeHardwareInfo::FreeTimeHasBeenSet() const
{
    return m_freeTimeHasBeenSet;
}

string NodeHardwareInfo::GetDiskSize() const
{
    return m_diskSize;
}

void NodeHardwareInfo::SetDiskSize(const string& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool NodeHardwareInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string NodeHardwareInfo::GetNameTag() const
{
    return m_nameTag;
}

void NodeHardwareInfo::SetNameTag(const string& _nameTag)
{
    m_nameTag = _nameTag;
    m_nameTagHasBeenSet = true;
}

bool NodeHardwareInfo::NameTagHasBeenSet() const
{
    return m_nameTagHasBeenSet;
}

string NodeHardwareInfo::GetServices() const
{
    return m_services;
}

void NodeHardwareInfo::SetServices(const string& _services)
{
    m_services = _services;
    m_servicesHasBeenSet = true;
}

bool NodeHardwareInfo::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}

int64_t NodeHardwareInfo::GetStorageType() const
{
    return m_storageType;
}

void NodeHardwareInfo::SetStorageType(const int64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool NodeHardwareInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

int64_t NodeHardwareInfo::GetRootSize() const
{
    return m_rootSize;
}

void NodeHardwareInfo::SetRootSize(const int64_t& _rootSize)
{
    m_rootSize = _rootSize;
    m_rootSizeHasBeenSet = true;
}

bool NodeHardwareInfo::RootSizeHasBeenSet() const
{
    return m_rootSizeHasBeenSet;
}

int64_t NodeHardwareInfo::GetChargeType() const
{
    return m_chargeType;
}

void NodeHardwareInfo::SetChargeType(const int64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool NodeHardwareInfo::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string NodeHardwareInfo::GetCdbIp() const
{
    return m_cdbIp;
}

void NodeHardwareInfo::SetCdbIp(const string& _cdbIp)
{
    m_cdbIp = _cdbIp;
    m_cdbIpHasBeenSet = true;
}

bool NodeHardwareInfo::CdbIpHasBeenSet() const
{
    return m_cdbIpHasBeenSet;
}

int64_t NodeHardwareInfo::GetCdbPort() const
{
    return m_cdbPort;
}

void NodeHardwareInfo::SetCdbPort(const int64_t& _cdbPort)
{
    m_cdbPort = _cdbPort;
    m_cdbPortHasBeenSet = true;
}

bool NodeHardwareInfo::CdbPortHasBeenSet() const
{
    return m_cdbPortHasBeenSet;
}

int64_t NodeHardwareInfo::GetHwDiskSize() const
{
    return m_hwDiskSize;
}

void NodeHardwareInfo::SetHwDiskSize(const int64_t& _hwDiskSize)
{
    m_hwDiskSize = _hwDiskSize;
    m_hwDiskSizeHasBeenSet = true;
}

bool NodeHardwareInfo::HwDiskSizeHasBeenSet() const
{
    return m_hwDiskSizeHasBeenSet;
}

string NodeHardwareInfo::GetHwDiskSizeDesc() const
{
    return m_hwDiskSizeDesc;
}

void NodeHardwareInfo::SetHwDiskSizeDesc(const string& _hwDiskSizeDesc)
{
    m_hwDiskSizeDesc = _hwDiskSizeDesc;
    m_hwDiskSizeDescHasBeenSet = true;
}

bool NodeHardwareInfo::HwDiskSizeDescHasBeenSet() const
{
    return m_hwDiskSizeDescHasBeenSet;
}

int64_t NodeHardwareInfo::GetHwMemSize() const
{
    return m_hwMemSize;
}

void NodeHardwareInfo::SetHwMemSize(const int64_t& _hwMemSize)
{
    m_hwMemSize = _hwMemSize;
    m_hwMemSizeHasBeenSet = true;
}

bool NodeHardwareInfo::HwMemSizeHasBeenSet() const
{
    return m_hwMemSizeHasBeenSet;
}

string NodeHardwareInfo::GetHwMemSizeDesc() const
{
    return m_hwMemSizeDesc;
}

void NodeHardwareInfo::SetHwMemSizeDesc(const string& _hwMemSizeDesc)
{
    m_hwMemSizeDesc = _hwMemSizeDesc;
    m_hwMemSizeDescHasBeenSet = true;
}

bool NodeHardwareInfo::HwMemSizeDescHasBeenSet() const
{
    return m_hwMemSizeDescHasBeenSet;
}

string NodeHardwareInfo::GetExpireTime() const
{
    return m_expireTime;
}

void NodeHardwareInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool NodeHardwareInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string NodeHardwareInfo::GetEmrResourceId() const
{
    return m_emrResourceId;
}

void NodeHardwareInfo::SetEmrResourceId(const string& _emrResourceId)
{
    m_emrResourceId = _emrResourceId;
    m_emrResourceIdHasBeenSet = true;
}

bool NodeHardwareInfo::EmrResourceIdHasBeenSet() const
{
    return m_emrResourceIdHasBeenSet;
}

int64_t NodeHardwareInfo::GetIsAutoRenew() const
{
    return m_isAutoRenew;
}

void NodeHardwareInfo::SetIsAutoRenew(const int64_t& _isAutoRenew)
{
    m_isAutoRenew = _isAutoRenew;
    m_isAutoRenewHasBeenSet = true;
}

bool NodeHardwareInfo::IsAutoRenewHasBeenSet() const
{
    return m_isAutoRenewHasBeenSet;
}

string NodeHardwareInfo::GetDeviceClass() const
{
    return m_deviceClass;
}

void NodeHardwareInfo::SetDeviceClass(const string& _deviceClass)
{
    m_deviceClass = _deviceClass;
    m_deviceClassHasBeenSet = true;
}

bool NodeHardwareInfo::DeviceClassHasBeenSet() const
{
    return m_deviceClassHasBeenSet;
}

int64_t NodeHardwareInfo::GetMutable() const
{
    return m_mutable;
}

void NodeHardwareInfo::SetMutable(const int64_t& _mutable)
{
    m_mutable = _mutable;
    m_mutableHasBeenSet = true;
}

bool NodeHardwareInfo::MutableHasBeenSet() const
{
    return m_mutableHasBeenSet;
}

vector<MultiDiskMC> NodeHardwareInfo::GetMCMultiDisk() const
{
    return m_mCMultiDisk;
}

void NodeHardwareInfo::SetMCMultiDisk(const vector<MultiDiskMC>& _mCMultiDisk)
{
    m_mCMultiDisk = _mCMultiDisk;
    m_mCMultiDiskHasBeenSet = true;
}

bool NodeHardwareInfo::MCMultiDiskHasBeenSet() const
{
    return m_mCMultiDiskHasBeenSet;
}

CdbInfo NodeHardwareInfo::GetCdbNodeInfo() const
{
    return m_cdbNodeInfo;
}

void NodeHardwareInfo::SetCdbNodeInfo(const CdbInfo& _cdbNodeInfo)
{
    m_cdbNodeInfo = _cdbNodeInfo;
    m_cdbNodeInfoHasBeenSet = true;
}

bool NodeHardwareInfo::CdbNodeInfoHasBeenSet() const
{
    return m_cdbNodeInfoHasBeenSet;
}

string NodeHardwareInfo::GetIp() const
{
    return m_ip;
}

void NodeHardwareInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool NodeHardwareInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t NodeHardwareInfo::GetDestroyable() const
{
    return m_destroyable;
}

void NodeHardwareInfo::SetDestroyable(const int64_t& _destroyable)
{
    m_destroyable = _destroyable;
    m_destroyableHasBeenSet = true;
}

bool NodeHardwareInfo::DestroyableHasBeenSet() const
{
    return m_destroyableHasBeenSet;
}

vector<Tag> NodeHardwareInfo::GetTags() const
{
    return m_tags;
}

void NodeHardwareInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool NodeHardwareInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t NodeHardwareInfo::GetAutoFlag() const
{
    return m_autoFlag;
}

void NodeHardwareInfo::SetAutoFlag(const int64_t& _autoFlag)
{
    m_autoFlag = _autoFlag;
    m_autoFlagHasBeenSet = true;
}

bool NodeHardwareInfo::AutoFlagHasBeenSet() const
{
    return m_autoFlagHasBeenSet;
}

string NodeHardwareInfo::GetHardwareResourceType() const
{
    return m_hardwareResourceType;
}

void NodeHardwareInfo::SetHardwareResourceType(const string& _hardwareResourceType)
{
    m_hardwareResourceType = _hardwareResourceType;
    m_hardwareResourceTypeHasBeenSet = true;
}

bool NodeHardwareInfo::HardwareResourceTypeHasBeenSet() const
{
    return m_hardwareResourceTypeHasBeenSet;
}

int64_t NodeHardwareInfo::GetIsDynamicSpec() const
{
    return m_isDynamicSpec;
}

void NodeHardwareInfo::SetIsDynamicSpec(const int64_t& _isDynamicSpec)
{
    m_isDynamicSpec = _isDynamicSpec;
    m_isDynamicSpecHasBeenSet = true;
}

bool NodeHardwareInfo::IsDynamicSpecHasBeenSet() const
{
    return m_isDynamicSpecHasBeenSet;
}

string NodeHardwareInfo::GetDynamicPodSpec() const
{
    return m_dynamicPodSpec;
}

void NodeHardwareInfo::SetDynamicPodSpec(const string& _dynamicPodSpec)
{
    m_dynamicPodSpec = _dynamicPodSpec;
    m_dynamicPodSpecHasBeenSet = true;
}

bool NodeHardwareInfo::DynamicPodSpecHasBeenSet() const
{
    return m_dynamicPodSpecHasBeenSet;
}

int64_t NodeHardwareInfo::GetSupportModifyPayMode() const
{
    return m_supportModifyPayMode;
}

void NodeHardwareInfo::SetSupportModifyPayMode(const int64_t& _supportModifyPayMode)
{
    m_supportModifyPayMode = _supportModifyPayMode;
    m_supportModifyPayModeHasBeenSet = true;
}

bool NodeHardwareInfo::SupportModifyPayModeHasBeenSet() const
{
    return m_supportModifyPayModeHasBeenSet;
}

int64_t NodeHardwareInfo::GetRootStorageType() const
{
    return m_rootStorageType;
}

void NodeHardwareInfo::SetRootStorageType(const int64_t& _rootStorageType)
{
    m_rootStorageType = _rootStorageType;
    m_rootStorageTypeHasBeenSet = true;
}

bool NodeHardwareInfo::RootStorageTypeHasBeenSet() const
{
    return m_rootStorageTypeHasBeenSet;
}

string NodeHardwareInfo::GetZone() const
{
    return m_zone;
}

void NodeHardwareInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NodeHardwareInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

SubnetInfo NodeHardwareInfo::GetSubnetInfo() const
{
    return m_subnetInfo;
}

void NodeHardwareInfo::SetSubnetInfo(const SubnetInfo& _subnetInfo)
{
    m_subnetInfo = _subnetInfo;
    m_subnetInfoHasBeenSet = true;
}

bool NodeHardwareInfo::SubnetInfoHasBeenSet() const
{
    return m_subnetInfoHasBeenSet;
}

string NodeHardwareInfo::GetClients() const
{
    return m_clients;
}

void NodeHardwareInfo::SetClients(const string& _clients)
{
    m_clients = _clients;
    m_clientsHasBeenSet = true;
}

bool NodeHardwareInfo::ClientsHasBeenSet() const
{
    return m_clientsHasBeenSet;
}

string NodeHardwareInfo::GetCurrentTime() const
{
    return m_currentTime;
}

void NodeHardwareInfo::SetCurrentTime(const string& _currentTime)
{
    m_currentTime = _currentTime;
    m_currentTimeHasBeenSet = true;
}

bool NodeHardwareInfo::CurrentTimeHasBeenSet() const
{
    return m_currentTimeHasBeenSet;
}

int64_t NodeHardwareInfo::GetIsFederation() const
{
    return m_isFederation;
}

void NodeHardwareInfo::SetIsFederation(const int64_t& _isFederation)
{
    m_isFederation = _isFederation;
    m_isFederationHasBeenSet = true;
}

bool NodeHardwareInfo::IsFederationHasBeenSet() const
{
    return m_isFederationHasBeenSet;
}

string NodeHardwareInfo::GetDeviceName() const
{
    return m_deviceName;
}

void NodeHardwareInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool NodeHardwareInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string NodeHardwareInfo::GetServiceClient() const
{
    return m_serviceClient;
}

void NodeHardwareInfo::SetServiceClient(const string& _serviceClient)
{
    m_serviceClient = _serviceClient;
    m_serviceClientHasBeenSet = true;
}

bool NodeHardwareInfo::ServiceClientHasBeenSet() const
{
    return m_serviceClientHasBeenSet;
}

bool NodeHardwareInfo::GetDisableApiTermination() const
{
    return m_disableApiTermination;
}

void NodeHardwareInfo::SetDisableApiTermination(const bool& _disableApiTermination)
{
    m_disableApiTermination = _disableApiTermination;
    m_disableApiTerminationHasBeenSet = true;
}

bool NodeHardwareInfo::DisableApiTerminationHasBeenSet() const
{
    return m_disableApiTerminationHasBeenSet;
}

int64_t NodeHardwareInfo::GetTradeVersion() const
{
    return m_tradeVersion;
}

void NodeHardwareInfo::SetTradeVersion(const int64_t& _tradeVersion)
{
    m_tradeVersion = _tradeVersion;
    m_tradeVersionHasBeenSet = true;
}

bool NodeHardwareInfo::TradeVersionHasBeenSet() const
{
    return m_tradeVersionHasBeenSet;
}

string NodeHardwareInfo::GetServicesStatus() const
{
    return m_servicesStatus;
}

void NodeHardwareInfo::SetServicesStatus(const string& _servicesStatus)
{
    m_servicesStatus = _servicesStatus;
    m_servicesStatusHasBeenSet = true;
}

bool NodeHardwareInfo::ServicesStatusHasBeenSet() const
{
    return m_servicesStatusHasBeenSet;
}

string NodeHardwareInfo::GetRemark() const
{
    return m_remark;
}

void NodeHardwareInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool NodeHardwareInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string NodeHardwareInfo::GetSharedClusterId() const
{
    return m_sharedClusterId;
}

void NodeHardwareInfo::SetSharedClusterId(const string& _sharedClusterId)
{
    m_sharedClusterId = _sharedClusterId;
    m_sharedClusterIdHasBeenSet = true;
}

bool NodeHardwareInfo::SharedClusterIdHasBeenSet() const
{
    return m_sharedClusterIdHasBeenSet;
}

string NodeHardwareInfo::GetSharedClusterIdDesc() const
{
    return m_sharedClusterIdDesc;
}

void NodeHardwareInfo::SetSharedClusterIdDesc(const string& _sharedClusterIdDesc)
{
    m_sharedClusterIdDesc = _sharedClusterIdDesc;
    m_sharedClusterIdDescHasBeenSet = true;
}

bool NodeHardwareInfo::SharedClusterIdDescHasBeenSet() const
{
    return m_sharedClusterIdDescHasBeenSet;
}

bool NodeHardwareInfo::GetTimingResource() const
{
    return m_timingResource;
}

void NodeHardwareInfo::SetTimingResource(const bool& _timingResource)
{
    m_timingResource = _timingResource;
    m_timingResourceHasBeenSet = true;
}

bool NodeHardwareInfo::TimingResourceHasBeenSet() const
{
    return m_timingResourceHasBeenSet;
}

string NodeHardwareInfo::GetTkeClusterId() const
{
    return m_tkeClusterId;
}

void NodeHardwareInfo::SetTkeClusterId(const string& _tkeClusterId)
{
    m_tkeClusterId = _tkeClusterId;
    m_tkeClusterIdHasBeenSet = true;
}

bool NodeHardwareInfo::TkeClusterIdHasBeenSet() const
{
    return m_tkeClusterIdHasBeenSet;
}

vector<string> NodeHardwareInfo::GetConfigurableServices() const
{
    return m_configurableServices;
}

void NodeHardwareInfo::SetConfigurableServices(const vector<string>& _configurableServices)
{
    m_configurableServices = _configurableServices;
    m_configurableServicesHasBeenSet = true;
}

bool NodeHardwareInfo::ConfigurableServicesHasBeenSet() const
{
    return m_configurableServicesHasBeenSet;
}

