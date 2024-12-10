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

#include <tencentcloud/es/v20180416/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_vpcUidHasBeenSet(false),
    m_subnetUidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_chargePeriodHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_esDomainHasBeenSet(false),
    m_esVipHasBeenSet(false),
    m_esPortHasBeenSet(false),
    m_kibanaUrlHasBeenSet(false),
    m_esVersionHasBeenSet(false),
    m_esConfigHasBeenSet(false),
    m_esAclHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_ikConfigHasBeenSet(false),
    m_masterNodeInfoHasBeenSet(false),
    m_cosBackupHasBeenSet(false),
    m_allowCosBackupHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_enableHotWarmModeHasBeenSet(false),
    m_warmNodeTypeHasBeenSet(false),
    m_warmNodeNumHasBeenSet(false),
    m_warmCpuNumHasBeenSet(false),
    m_warmMemSizeHasBeenSet(false),
    m_warmDiskTypeHasBeenSet(false),
    m_warmDiskSizeHasBeenSet(false),
    m_nodeInfoListHasBeenSet(false),
    m_esPublicUrlHasBeenSet(false),
    m_multiZoneInfoHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_publicAccessHasBeenSet(false),
    m_esPublicAclHasBeenSet(false),
    m_kibanaPrivateUrlHasBeenSet(false),
    m_kibanaPublicAccessHasBeenSet(false),
    m_kibanaPrivateAccessHasBeenSet(false),
    m_securityTypeHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_kibanaConfigHasBeenSet(false),
    m_kibanaNodeInfoHasBeenSet(false),
    m_webNodeTypeInfoHasBeenSet(false),
    m_jdkHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_coldNodeTypeHasBeenSet(false),
    m_coldNodeNumHasBeenSet(false),
    m_coldCpuNumHasBeenSet(false),
    m_coldMemSizeHasBeenSet(false),
    m_coldDiskTypeHasBeenSet(false),
    m_coldDiskSizeHasBeenSet(false),
    m_frozenNodeTypeHasBeenSet(false),
    m_frozenNodeNumHasBeenSet(false),
    m_frozenCpuNumHasBeenSet(false),
    m_frozenMemSizeHasBeenSet(false),
    m_frozenDiskTypeHasBeenSet(false),
    m_frozenDiskSizeHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_esPrivateUrlHasBeenSet(false),
    m_esPrivateDomainHasBeenSet(false),
    m_esConfigSetsHasBeenSet(false),
    m_operationDurationHasBeenSet(false),
    m_optionalWebServiceInfosHasBeenSet(false),
    m_autoIndexEnabledHasBeenSet(false),
    m_enableHybridStorageHasBeenSet(false),
    m_processPercentHasBeenSet(false),
    m_kibanaAlteringPublicAccessHasBeenSet(false),
    m_hasKernelUpgradeHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_kibanaPrivateVipHasBeenSet(false),
    m_customKibanaPrivateUrlHasBeenSet(false),
    m_outboundPublicAclsHasBeenSet(false),
    m_netConnectSchemeHasBeenSet(false),
    m_disasterRecoverGroupAffinityHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_cosBucketStorageSizeHasBeenSet(false),
    m_readWriteModeHasBeenSet(false),
    m_enableScheduleRecoverGroupHasBeenSet(false),
    m_enableScheduleOperationDurationHasBeenSet(false),
    m_enableDestroyProtectionHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("VpcUid") && !value["VpcUid"].IsNull())
    {
        if (!value["VpcUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.VpcUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcUid = string(value["VpcUid"].GetString());
        m_vpcUidHasBeenSet = true;
    }

    if (value.HasMember("SubnetUid") && !value["SubnetUid"].IsNull())
    {
        if (!value["SubnetUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubnetUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetUid = string(value["SubnetUid"].GetString());
        m_subnetUidHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ChargePeriod") && !value["ChargePeriod"].IsNull())
    {
        if (!value["ChargePeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ChargePeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargePeriod = value["ChargePeriod"].GetUint64();
        m_chargePeriodHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeNum") && !value["NodeNum"].IsNull())
    {
        if (!value["NodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.NodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = value["NodeNum"].GetUint64();
        m_nodeNumHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetUint64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetUint64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("EsDomain") && !value["EsDomain"].IsNull())
    {
        if (!value["EsDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esDomain = string(value["EsDomain"].GetString());
        m_esDomainHasBeenSet = true;
    }

    if (value.HasMember("EsVip") && !value["EsVip"].IsNull())
    {
        if (!value["EsVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esVip = string(value["EsVip"].GetString());
        m_esVipHasBeenSet = true;
    }

    if (value.HasMember("EsPort") && !value["EsPort"].IsNull())
    {
        if (!value["EsPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_esPort = value["EsPort"].GetUint64();
        m_esPortHasBeenSet = true;
    }

    if (value.HasMember("KibanaUrl") && !value["KibanaUrl"].IsNull())
    {
        if (!value["KibanaUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.KibanaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaUrl = string(value["KibanaUrl"].GetString());
        m_kibanaUrlHasBeenSet = true;
    }

    if (value.HasMember("EsVersion") && !value["EsVersion"].IsNull())
    {
        if (!value["EsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esVersion = string(value["EsVersion"].GetString());
        m_esVersionHasBeenSet = true;
    }

    if (value.HasMember("EsConfig") && !value["EsConfig"].IsNull())
    {
        if (!value["EsConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esConfig = string(value["EsConfig"].GetString());
        m_esConfigHasBeenSet = true;
    }

    if (value.HasMember("EsAcl") && !value["EsAcl"].IsNull())
    {
        if (!value["EsAcl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsAcl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_esAcl.Deserialize(value["EsAcl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_esAclHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetUint64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("IkConfig") && !value["IkConfig"].IsNull())
    {
        if (!value["IkConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IkConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ikConfig.Deserialize(value["IkConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ikConfigHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeInfo") && !value["MasterNodeInfo"].IsNull())
    {
        if (!value["MasterNodeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MasterNodeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterNodeInfo.Deserialize(value["MasterNodeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterNodeInfoHasBeenSet = true;
    }

    if (value.HasMember("CosBackup") && !value["CosBackup"].IsNull())
    {
        if (!value["CosBackup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CosBackup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosBackup.Deserialize(value["CosBackup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosBackupHasBeenSet = true;
    }

    if (value.HasMember("AllowCosBackup") && !value["AllowCosBackup"].IsNull())
    {
        if (!value["AllowCosBackup"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AllowCosBackup` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowCosBackup = value["AllowCosBackup"].GetBool();
        m_allowCosBackupHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableHotWarmMode") && !value["EnableHotWarmMode"].IsNull())
    {
        if (!value["EnableHotWarmMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EnableHotWarmMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHotWarmMode = value["EnableHotWarmMode"].GetBool();
        m_enableHotWarmModeHasBeenSet = true;
    }

    if (value.HasMember("WarmNodeType") && !value["WarmNodeType"].IsNull())
    {
        if (!value["WarmNodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WarmNodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warmNodeType = string(value["WarmNodeType"].GetString());
        m_warmNodeTypeHasBeenSet = true;
    }

    if (value.HasMember("WarmNodeNum") && !value["WarmNodeNum"].IsNull())
    {
        if (!value["WarmNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WarmNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_warmNodeNum = value["WarmNodeNum"].GetUint64();
        m_warmNodeNumHasBeenSet = true;
    }

    if (value.HasMember("WarmCpuNum") && !value["WarmCpuNum"].IsNull())
    {
        if (!value["WarmCpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WarmCpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_warmCpuNum = value["WarmCpuNum"].GetUint64();
        m_warmCpuNumHasBeenSet = true;
    }

    if (value.HasMember("WarmMemSize") && !value["WarmMemSize"].IsNull())
    {
        if (!value["WarmMemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WarmMemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_warmMemSize = value["WarmMemSize"].GetUint64();
        m_warmMemSizeHasBeenSet = true;
    }

    if (value.HasMember("WarmDiskType") && !value["WarmDiskType"].IsNull())
    {
        if (!value["WarmDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WarmDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warmDiskType = string(value["WarmDiskType"].GetString());
        m_warmDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("WarmDiskSize") && !value["WarmDiskSize"].IsNull())
    {
        if (!value["WarmDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WarmDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_warmDiskSize = value["WarmDiskSize"].GetUint64();
        m_warmDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("NodeInfoList") && !value["NodeInfoList"].IsNull())
    {
        if (!value["NodeInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.NodeInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeInfoList.push_back(item);
        }
        m_nodeInfoListHasBeenSet = true;
    }

    if (value.HasMember("EsPublicUrl") && !value["EsPublicUrl"].IsNull())
    {
        if (!value["EsPublicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsPublicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esPublicUrl = string(value["EsPublicUrl"].GetString());
        m_esPublicUrlHasBeenSet = true;
    }

    if (value.HasMember("MultiZoneInfo") && !value["MultiZoneInfo"].IsNull())
    {
        if (!value["MultiZoneInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MultiZoneInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiZoneInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiZoneInfo.push_back(item);
        }
        m_multiZoneInfoHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DeployMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = value["DeployMode"].GetUint64();
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("PublicAccess") && !value["PublicAccess"].IsNull())
    {
        if (!value["PublicAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PublicAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAccess = string(value["PublicAccess"].GetString());
        m_publicAccessHasBeenSet = true;
    }

    if (value.HasMember("EsPublicAcl") && !value["EsPublicAcl"].IsNull())
    {
        if (!value["EsPublicAcl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsPublicAcl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_esPublicAcl.Deserialize(value["EsPublicAcl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_esPublicAclHasBeenSet = true;
    }

    if (value.HasMember("KibanaPrivateUrl") && !value["KibanaPrivateUrl"].IsNull())
    {
        if (!value["KibanaPrivateUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.KibanaPrivateUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaPrivateUrl = string(value["KibanaPrivateUrl"].GetString());
        m_kibanaPrivateUrlHasBeenSet = true;
    }

    if (value.HasMember("KibanaPublicAccess") && !value["KibanaPublicAccess"].IsNull())
    {
        if (!value["KibanaPublicAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.KibanaPublicAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaPublicAccess = string(value["KibanaPublicAccess"].GetString());
        m_kibanaPublicAccessHasBeenSet = true;
    }

    if (value.HasMember("KibanaPrivateAccess") && !value["KibanaPrivateAccess"].IsNull())
    {
        if (!value["KibanaPrivateAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.KibanaPrivateAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaPrivateAccess = string(value["KibanaPrivateAccess"].GetString());
        m_kibanaPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("SecurityType") && !value["SecurityType"].IsNull())
    {
        if (!value["SecurityType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SecurityType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_securityType = value["SecurityType"].GetUint64();
        m_securityTypeHasBeenSet = true;
    }

    if (value.HasMember("SceneType") && !value["SceneType"].IsNull())
    {
        if (!value["SceneType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SceneType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = value["SceneType"].GetInt64();
        m_sceneTypeHasBeenSet = true;
    }

    if (value.HasMember("KibanaConfig") && !value["KibanaConfig"].IsNull())
    {
        if (!value["KibanaConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.KibanaConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaConfig = string(value["KibanaConfig"].GetString());
        m_kibanaConfigHasBeenSet = true;
    }

    if (value.HasMember("KibanaNodeInfo") && !value["KibanaNodeInfo"].IsNull())
    {
        if (!value["KibanaNodeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.KibanaNodeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kibanaNodeInfo.Deserialize(value["KibanaNodeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kibanaNodeInfoHasBeenSet = true;
    }

    if (value.HasMember("WebNodeTypeInfo") && !value["WebNodeTypeInfo"].IsNull())
    {
        if (!value["WebNodeTypeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WebNodeTypeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webNodeTypeInfo.Deserialize(value["WebNodeTypeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webNodeTypeInfoHasBeenSet = true;
    }

    if (value.HasMember("Jdk") && !value["Jdk"].IsNull())
    {
        if (!value["Jdk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Jdk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jdk = string(value["Jdk"].GetString());
        m_jdkHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroups") && !value["SecurityGroups"].IsNull())
    {
        if (!value["SecurityGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SecurityGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroups.push_back((*itr).GetString());
        }
        m_securityGroupsHasBeenSet = true;
    }

    if (value.HasMember("ColdNodeType") && !value["ColdNodeType"].IsNull())
    {
        if (!value["ColdNodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColdNodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coldNodeType = string(value["ColdNodeType"].GetString());
        m_coldNodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ColdNodeNum") && !value["ColdNodeNum"].IsNull())
    {
        if (!value["ColdNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColdNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coldNodeNum = value["ColdNodeNum"].GetUint64();
        m_coldNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ColdCpuNum") && !value["ColdCpuNum"].IsNull())
    {
        if (!value["ColdCpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColdCpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coldCpuNum = value["ColdCpuNum"].GetUint64();
        m_coldCpuNumHasBeenSet = true;
    }

    if (value.HasMember("ColdMemSize") && !value["ColdMemSize"].IsNull())
    {
        if (!value["ColdMemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColdMemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coldMemSize = value["ColdMemSize"].GetUint64();
        m_coldMemSizeHasBeenSet = true;
    }

    if (value.HasMember("ColdDiskType") && !value["ColdDiskType"].IsNull())
    {
        if (!value["ColdDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColdDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coldDiskType = string(value["ColdDiskType"].GetString());
        m_coldDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("ColdDiskSize") && !value["ColdDiskSize"].IsNull())
    {
        if (!value["ColdDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColdDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coldDiskSize = value["ColdDiskSize"].GetUint64();
        m_coldDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("FrozenNodeType") && !value["FrozenNodeType"].IsNull())
    {
        if (!value["FrozenNodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FrozenNodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frozenNodeType = string(value["FrozenNodeType"].GetString());
        m_frozenNodeTypeHasBeenSet = true;
    }

    if (value.HasMember("FrozenNodeNum") && !value["FrozenNodeNum"].IsNull())
    {
        if (!value["FrozenNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FrozenNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frozenNodeNum = value["FrozenNodeNum"].GetUint64();
        m_frozenNodeNumHasBeenSet = true;
    }

    if (value.HasMember("FrozenCpuNum") && !value["FrozenCpuNum"].IsNull())
    {
        if (!value["FrozenCpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FrozenCpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frozenCpuNum = value["FrozenCpuNum"].GetUint64();
        m_frozenCpuNumHasBeenSet = true;
    }

    if (value.HasMember("FrozenMemSize") && !value["FrozenMemSize"].IsNull())
    {
        if (!value["FrozenMemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FrozenMemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frozenMemSize = value["FrozenMemSize"].GetUint64();
        m_frozenMemSizeHasBeenSet = true;
    }

    if (value.HasMember("FrozenDiskType") && !value["FrozenDiskType"].IsNull())
    {
        if (!value["FrozenDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FrozenDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frozenDiskType = string(value["FrozenDiskType"].GetString());
        m_frozenDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("FrozenDiskSize") && !value["FrozenDiskSize"].IsNull())
    {
        if (!value["FrozenDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FrozenDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frozenDiskSize = value["FrozenDiskSize"].GetUint64();
        m_frozenDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HealthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthStatus = value["HealthStatus"].GetInt64();
        m_healthStatusHasBeenSet = true;
    }

    if (value.HasMember("EsPrivateUrl") && !value["EsPrivateUrl"].IsNull())
    {
        if (!value["EsPrivateUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsPrivateUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esPrivateUrl = string(value["EsPrivateUrl"].GetString());
        m_esPrivateUrlHasBeenSet = true;
    }

    if (value.HasMember("EsPrivateDomain") && !value["EsPrivateDomain"].IsNull())
    {
        if (!value["EsPrivateDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsPrivateDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esPrivateDomain = string(value["EsPrivateDomain"].GetString());
        m_esPrivateDomainHasBeenSet = true;
    }

    if (value.HasMember("EsConfigSets") && !value["EsConfigSets"].IsNull())
    {
        if (!value["EsConfigSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsConfigSets` is not array type"));

        const rapidjson::Value &tmpValue = value["EsConfigSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EsConfigSetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_esConfigSets.push_back(item);
        }
        m_esConfigSetsHasBeenSet = true;
    }

    if (value.HasMember("OperationDuration") && !value["OperationDuration"].IsNull())
    {
        if (!value["OperationDuration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.OperationDuration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operationDuration.Deserialize(value["OperationDuration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operationDurationHasBeenSet = true;
    }

    if (value.HasMember("OptionalWebServiceInfos") && !value["OptionalWebServiceInfos"].IsNull())
    {
        if (!value["OptionalWebServiceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.OptionalWebServiceInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionalWebServiceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OptionalWebServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_optionalWebServiceInfos.push_back(item);
        }
        m_optionalWebServiceInfosHasBeenSet = true;
    }

    if (value.HasMember("AutoIndexEnabled") && !value["AutoIndexEnabled"].IsNull())
    {
        if (!value["AutoIndexEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AutoIndexEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoIndexEnabled = value["AutoIndexEnabled"].GetBool();
        m_autoIndexEnabledHasBeenSet = true;
    }

    if (value.HasMember("EnableHybridStorage") && !value["EnableHybridStorage"].IsNull())
    {
        if (!value["EnableHybridStorage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EnableHybridStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHybridStorage = value["EnableHybridStorage"].GetBool();
        m_enableHybridStorageHasBeenSet = true;
    }

    if (value.HasMember("ProcessPercent") && !value["ProcessPercent"].IsNull())
    {
        if (!value["ProcessPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ProcessPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_processPercent = value["ProcessPercent"].GetDouble();
        m_processPercentHasBeenSet = true;
    }

    if (value.HasMember("KibanaAlteringPublicAccess") && !value["KibanaAlteringPublicAccess"].IsNull())
    {
        if (!value["KibanaAlteringPublicAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.KibanaAlteringPublicAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaAlteringPublicAccess = string(value["KibanaAlteringPublicAccess"].GetString());
        m_kibanaAlteringPublicAccessHasBeenSet = true;
    }

    if (value.HasMember("HasKernelUpgrade") && !value["HasKernelUpgrade"].IsNull())
    {
        if (!value["HasKernelUpgrade"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HasKernelUpgrade` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasKernelUpgrade = value["HasKernelUpgrade"].GetBool();
        m_hasKernelUpgradeHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("KibanaPrivateVip") && !value["KibanaPrivateVip"].IsNull())
    {
        if (!value["KibanaPrivateVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.KibanaPrivateVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaPrivateVip = string(value["KibanaPrivateVip"].GetString());
        m_kibanaPrivateVipHasBeenSet = true;
    }

    if (value.HasMember("CustomKibanaPrivateUrl") && !value["CustomKibanaPrivateUrl"].IsNull())
    {
        if (!value["CustomKibanaPrivateUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CustomKibanaPrivateUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customKibanaPrivateUrl = string(value["CustomKibanaPrivateUrl"].GetString());
        m_customKibanaPrivateUrlHasBeenSet = true;
    }

    if (value.HasMember("OutboundPublicAcls") && !value["OutboundPublicAcls"].IsNull())
    {
        if (!value["OutboundPublicAcls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.OutboundPublicAcls` is not array type"));

        const rapidjson::Value &tmpValue = value["OutboundPublicAcls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutboundPublicAcl item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outboundPublicAcls.push_back(item);
        }
        m_outboundPublicAclsHasBeenSet = true;
    }

    if (value.HasMember("NetConnectScheme") && !value["NetConnectScheme"].IsNull())
    {
        if (!value["NetConnectScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.NetConnectScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netConnectScheme = string(value["NetConnectScheme"].GetString());
        m_netConnectSchemeHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoverGroupAffinity") && !value["DisasterRecoverGroupAffinity"].IsNull())
    {
        if (!value["DisasterRecoverGroupAffinity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DisasterRecoverGroupAffinity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoverGroupAffinity = value["DisasterRecoverGroupAffinity"].GetUint64();
        m_disasterRecoverGroupAffinityHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("CosBucketStorageSize") && !value["CosBucketStorageSize"].IsNull())
    {
        if (!value["CosBucketStorageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CosBucketStorageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketStorageSize = value["CosBucketStorageSize"].GetUint64();
        m_cosBucketStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("ReadWriteMode") && !value["ReadWriteMode"].IsNull())
    {
        if (!value["ReadWriteMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ReadWriteMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readWriteMode = value["ReadWriteMode"].GetInt64();
        m_readWriteModeHasBeenSet = true;
    }

    if (value.HasMember("EnableScheduleRecoverGroup") && !value["EnableScheduleRecoverGroup"].IsNull())
    {
        if (!value["EnableScheduleRecoverGroup"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EnableScheduleRecoverGroup` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableScheduleRecoverGroup = value["EnableScheduleRecoverGroup"].GetBool();
        m_enableScheduleRecoverGroupHasBeenSet = true;
    }

    if (value.HasMember("EnableScheduleOperationDuration") && !value["EnableScheduleOperationDuration"].IsNull())
    {
        if (!value["EnableScheduleOperationDuration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EnableScheduleOperationDuration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enableScheduleOperationDuration.Deserialize(value["EnableScheduleOperationDuration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enableScheduleOperationDurationHasBeenSet = true;
    }

    if (value.HasMember("EnableDestroyProtection") && !value["EnableDestroyProtection"].IsNull())
    {
        if (!value["EnableDestroyProtection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EnableDestroyProtection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableDestroyProtection = string(value["EnableDestroyProtection"].GetString());
        m_enableDestroyProtectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcUid.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetUid.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargePeriod, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
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

    if (m_esDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_esVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esVip.c_str(), allocator).Move(), allocator);
    }

    if (m_esPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esPort, allocator);
    }

    if (m_kibanaUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_esVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_esConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_esAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsAcl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esAcl.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_ikConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ikConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_masterNodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_masterNodeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cosBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosBackup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_allowCosBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowCosBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowCosBackup, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHotWarmModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHotWarmMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHotWarmMode, allocator);
    }

    if (m_warmNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmNodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warmNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_warmNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warmNodeNum, allocator);
    }

    if (m_warmCpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmCpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warmCpuNum, allocator);
    }

    if (m_warmMemSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmMemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warmMemSize, allocator);
    }

    if (m_warmDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warmDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_warmDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warmDiskSize, allocator);
    }

    if (m_nodeInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfoList.begin(); itr != m_nodeInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_esPublicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsPublicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esPublicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_multiZoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiZoneInfo.begin(); itr != m_multiZoneInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_publicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_esPublicAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsPublicAcl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esPublicAcl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kibanaPrivateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPrivateUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaPrivateUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPublicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPublicAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaPublicAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaPrivateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_securityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityType, allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sceneType, allocator);
    }

    if (m_kibanaConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaNodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaNodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kibanaNodeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webNodeTypeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebNodeTypeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webNodeTypeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jdkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jdk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jdk.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_coldNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdNodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coldNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_coldNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coldNodeNum, allocator);
    }

    if (m_coldCpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdCpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coldCpuNum, allocator);
    }

    if (m_coldMemSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdMemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coldMemSize, allocator);
    }

    if (m_coldDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coldDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_coldDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coldDiskSize, allocator);
    }

    if (m_frozenNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrozenNodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frozenNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_frozenNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrozenNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frozenNodeNum, allocator);
    }

    if (m_frozenCpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrozenCpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frozenCpuNum, allocator);
    }

    if (m_frozenMemSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrozenMemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frozenMemSize, allocator);
    }

    if (m_frozenDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrozenDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frozenDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_frozenDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrozenDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frozenDiskSize, allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthStatus, allocator);
    }

    if (m_esPrivateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsPrivateUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esPrivateUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_esPrivateDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsPrivateDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esPrivateDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_esConfigSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConfigSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_esConfigSets.begin(); itr != m_esConfigSets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operationDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operationDuration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_optionalWebServiceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionalWebServiceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_optionalWebServiceInfos.begin(); itr != m_optionalWebServiceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_autoIndexEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoIndexEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoIndexEnabled, allocator);
    }

    if (m_enableHybridStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHybridStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHybridStorage, allocator);
    }

    if (m_processPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processPercent, allocator);
    }

    if (m_kibanaAlteringPublicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaAlteringPublicAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaAlteringPublicAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_hasKernelUpgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasKernelUpgrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasKernelUpgrade, allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPrivateVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPrivateVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kibanaPrivateVip.c_str(), allocator).Move(), allocator);
    }

    if (m_customKibanaPrivateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomKibanaPrivateUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customKibanaPrivateUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_outboundPublicAclsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundPublicAcls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outboundPublicAcls.begin(); itr != m_outboundPublicAcls.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_netConnectSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetConnectScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netConnectScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_disasterRecoverGroupAffinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupAffinity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disasterRecoverGroupAffinity, allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosBucketStorageSize, allocator);
    }

    if (m_readWriteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readWriteMode, allocator);
    }

    if (m_enableScheduleRecoverGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScheduleRecoverGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableScheduleRecoverGroup, allocator);
    }

    if (m_enableScheduleOperationDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScheduleOperationDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enableScheduleOperationDuration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableDestroyProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDestroyProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableDestroyProtection.c_str(), allocator).Move(), allocator);
    }

}


string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetZone() const
{
    return m_zone;
}

void InstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t InstanceInfo::GetAppId() const
{
    return m_appId;
}

void InstanceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InstanceInfo::GetUin() const
{
    return m_uin;
}

void InstanceInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool InstanceInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string InstanceInfo::GetVpcUid() const
{
    return m_vpcUid;
}

void InstanceInfo::SetVpcUid(const string& _vpcUid)
{
    m_vpcUid = _vpcUid;
    m_vpcUidHasBeenSet = true;
}

bool InstanceInfo::VpcUidHasBeenSet() const
{
    return m_vpcUidHasBeenSet;
}

string InstanceInfo::GetSubnetUid() const
{
    return m_subnetUid;
}

void InstanceInfo::SetSubnetUid(const string& _subnetUid)
{
    m_subnetUid = _subnetUid;
    m_subnetUidHasBeenSet = true;
}

bool InstanceInfo::SubnetUidHasBeenSet() const
{
    return m_subnetUidHasBeenSet;
}

int64_t InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceInfo::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string InstanceInfo::GetChargeType() const
{
    return m_chargeType;
}

void InstanceInfo::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool InstanceInfo::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

uint64_t InstanceInfo::GetChargePeriod() const
{
    return m_chargePeriod;
}

void InstanceInfo::SetChargePeriod(const uint64_t& _chargePeriod)
{
    m_chargePeriod = _chargePeriod;
    m_chargePeriodHasBeenSet = true;
}

bool InstanceInfo::ChargePeriodHasBeenSet() const
{
    return m_chargePeriodHasBeenSet;
}

string InstanceInfo::GetNodeType() const
{
    return m_nodeType;
}

void InstanceInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool InstanceInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t InstanceInfo::GetNodeNum() const
{
    return m_nodeNum;
}

void InstanceInfo::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool InstanceInfo::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

uint64_t InstanceInfo::GetCpuNum() const
{
    return m_cpuNum;
}

void InstanceInfo::SetCpuNum(const uint64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool InstanceInfo::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

uint64_t InstanceInfo::GetMemSize() const
{
    return m_memSize;
}

void InstanceInfo::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool InstanceInfo::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

string InstanceInfo::GetDiskType() const
{
    return m_diskType;
}

void InstanceInfo::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool InstanceInfo::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t InstanceInfo::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceInfo::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string InstanceInfo::GetEsDomain() const
{
    return m_esDomain;
}

void InstanceInfo::SetEsDomain(const string& _esDomain)
{
    m_esDomain = _esDomain;
    m_esDomainHasBeenSet = true;
}

bool InstanceInfo::EsDomainHasBeenSet() const
{
    return m_esDomainHasBeenSet;
}

string InstanceInfo::GetEsVip() const
{
    return m_esVip;
}

void InstanceInfo::SetEsVip(const string& _esVip)
{
    m_esVip = _esVip;
    m_esVipHasBeenSet = true;
}

bool InstanceInfo::EsVipHasBeenSet() const
{
    return m_esVipHasBeenSet;
}

uint64_t InstanceInfo::GetEsPort() const
{
    return m_esPort;
}

void InstanceInfo::SetEsPort(const uint64_t& _esPort)
{
    m_esPort = _esPort;
    m_esPortHasBeenSet = true;
}

bool InstanceInfo::EsPortHasBeenSet() const
{
    return m_esPortHasBeenSet;
}

string InstanceInfo::GetKibanaUrl() const
{
    return m_kibanaUrl;
}

void InstanceInfo::SetKibanaUrl(const string& _kibanaUrl)
{
    m_kibanaUrl = _kibanaUrl;
    m_kibanaUrlHasBeenSet = true;
}

bool InstanceInfo::KibanaUrlHasBeenSet() const
{
    return m_kibanaUrlHasBeenSet;
}

string InstanceInfo::GetEsVersion() const
{
    return m_esVersion;
}

void InstanceInfo::SetEsVersion(const string& _esVersion)
{
    m_esVersion = _esVersion;
    m_esVersionHasBeenSet = true;
}

bool InstanceInfo::EsVersionHasBeenSet() const
{
    return m_esVersionHasBeenSet;
}

string InstanceInfo::GetEsConfig() const
{
    return m_esConfig;
}

void InstanceInfo::SetEsConfig(const string& _esConfig)
{
    m_esConfig = _esConfig;
    m_esConfigHasBeenSet = true;
}

bool InstanceInfo::EsConfigHasBeenSet() const
{
    return m_esConfigHasBeenSet;
}

EsAcl InstanceInfo::GetEsAcl() const
{
    return m_esAcl;
}

void InstanceInfo::SetEsAcl(const EsAcl& _esAcl)
{
    m_esAcl = _esAcl;
    m_esAclHasBeenSet = true;
}

bool InstanceInfo::EsAclHasBeenSet() const
{
    return m_esAclHasBeenSet;
}

string InstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void InstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void InstanceInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InstanceInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string InstanceInfo::GetDeadline() const
{
    return m_deadline;
}

void InstanceInfo::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool InstanceInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

uint64_t InstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceInfo::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

EsDictionaryInfo InstanceInfo::GetIkConfig() const
{
    return m_ikConfig;
}

void InstanceInfo::SetIkConfig(const EsDictionaryInfo& _ikConfig)
{
    m_ikConfig = _ikConfig;
    m_ikConfigHasBeenSet = true;
}

bool InstanceInfo::IkConfigHasBeenSet() const
{
    return m_ikConfigHasBeenSet;
}

MasterNodeInfo InstanceInfo::GetMasterNodeInfo() const
{
    return m_masterNodeInfo;
}

void InstanceInfo::SetMasterNodeInfo(const MasterNodeInfo& _masterNodeInfo)
{
    m_masterNodeInfo = _masterNodeInfo;
    m_masterNodeInfoHasBeenSet = true;
}

bool InstanceInfo::MasterNodeInfoHasBeenSet() const
{
    return m_masterNodeInfoHasBeenSet;
}

CosBackup InstanceInfo::GetCosBackup() const
{
    return m_cosBackup;
}

void InstanceInfo::SetCosBackup(const CosBackup& _cosBackup)
{
    m_cosBackup = _cosBackup;
    m_cosBackupHasBeenSet = true;
}

bool InstanceInfo::CosBackupHasBeenSet() const
{
    return m_cosBackupHasBeenSet;
}

bool InstanceInfo::GetAllowCosBackup() const
{
    return m_allowCosBackup;
}

void InstanceInfo::SetAllowCosBackup(const bool& _allowCosBackup)
{
    m_allowCosBackup = _allowCosBackup;
    m_allowCosBackupHasBeenSet = true;
}

bool InstanceInfo::AllowCosBackupHasBeenSet() const
{
    return m_allowCosBackupHasBeenSet;
}

vector<TagInfo> InstanceInfo::GetTagList() const
{
    return m_tagList;
}

void InstanceInfo::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool InstanceInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string InstanceInfo::GetLicenseType() const
{
    return m_licenseType;
}

void InstanceInfo::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool InstanceInfo::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

bool InstanceInfo::GetEnableHotWarmMode() const
{
    return m_enableHotWarmMode;
}

void InstanceInfo::SetEnableHotWarmMode(const bool& _enableHotWarmMode)
{
    m_enableHotWarmMode = _enableHotWarmMode;
    m_enableHotWarmModeHasBeenSet = true;
}

bool InstanceInfo::EnableHotWarmModeHasBeenSet() const
{
    return m_enableHotWarmModeHasBeenSet;
}

string InstanceInfo::GetWarmNodeType() const
{
    return m_warmNodeType;
}

void InstanceInfo::SetWarmNodeType(const string& _warmNodeType)
{
    m_warmNodeType = _warmNodeType;
    m_warmNodeTypeHasBeenSet = true;
}

bool InstanceInfo::WarmNodeTypeHasBeenSet() const
{
    return m_warmNodeTypeHasBeenSet;
}

uint64_t InstanceInfo::GetWarmNodeNum() const
{
    return m_warmNodeNum;
}

void InstanceInfo::SetWarmNodeNum(const uint64_t& _warmNodeNum)
{
    m_warmNodeNum = _warmNodeNum;
    m_warmNodeNumHasBeenSet = true;
}

bool InstanceInfo::WarmNodeNumHasBeenSet() const
{
    return m_warmNodeNumHasBeenSet;
}

uint64_t InstanceInfo::GetWarmCpuNum() const
{
    return m_warmCpuNum;
}

void InstanceInfo::SetWarmCpuNum(const uint64_t& _warmCpuNum)
{
    m_warmCpuNum = _warmCpuNum;
    m_warmCpuNumHasBeenSet = true;
}

bool InstanceInfo::WarmCpuNumHasBeenSet() const
{
    return m_warmCpuNumHasBeenSet;
}

uint64_t InstanceInfo::GetWarmMemSize() const
{
    return m_warmMemSize;
}

void InstanceInfo::SetWarmMemSize(const uint64_t& _warmMemSize)
{
    m_warmMemSize = _warmMemSize;
    m_warmMemSizeHasBeenSet = true;
}

bool InstanceInfo::WarmMemSizeHasBeenSet() const
{
    return m_warmMemSizeHasBeenSet;
}

string InstanceInfo::GetWarmDiskType() const
{
    return m_warmDiskType;
}

void InstanceInfo::SetWarmDiskType(const string& _warmDiskType)
{
    m_warmDiskType = _warmDiskType;
    m_warmDiskTypeHasBeenSet = true;
}

bool InstanceInfo::WarmDiskTypeHasBeenSet() const
{
    return m_warmDiskTypeHasBeenSet;
}

uint64_t InstanceInfo::GetWarmDiskSize() const
{
    return m_warmDiskSize;
}

void InstanceInfo::SetWarmDiskSize(const uint64_t& _warmDiskSize)
{
    m_warmDiskSize = _warmDiskSize;
    m_warmDiskSizeHasBeenSet = true;
}

bool InstanceInfo::WarmDiskSizeHasBeenSet() const
{
    return m_warmDiskSizeHasBeenSet;
}

vector<NodeInfo> InstanceInfo::GetNodeInfoList() const
{
    return m_nodeInfoList;
}

void InstanceInfo::SetNodeInfoList(const vector<NodeInfo>& _nodeInfoList)
{
    m_nodeInfoList = _nodeInfoList;
    m_nodeInfoListHasBeenSet = true;
}

bool InstanceInfo::NodeInfoListHasBeenSet() const
{
    return m_nodeInfoListHasBeenSet;
}

string InstanceInfo::GetEsPublicUrl() const
{
    return m_esPublicUrl;
}

void InstanceInfo::SetEsPublicUrl(const string& _esPublicUrl)
{
    m_esPublicUrl = _esPublicUrl;
    m_esPublicUrlHasBeenSet = true;
}

bool InstanceInfo::EsPublicUrlHasBeenSet() const
{
    return m_esPublicUrlHasBeenSet;
}

vector<ZoneDetail> InstanceInfo::GetMultiZoneInfo() const
{
    return m_multiZoneInfo;
}

void InstanceInfo::SetMultiZoneInfo(const vector<ZoneDetail>& _multiZoneInfo)
{
    m_multiZoneInfo = _multiZoneInfo;
    m_multiZoneInfoHasBeenSet = true;
}

bool InstanceInfo::MultiZoneInfoHasBeenSet() const
{
    return m_multiZoneInfoHasBeenSet;
}

uint64_t InstanceInfo::GetDeployMode() const
{
    return m_deployMode;
}

void InstanceInfo::SetDeployMode(const uint64_t& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool InstanceInfo::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string InstanceInfo::GetPublicAccess() const
{
    return m_publicAccess;
}

void InstanceInfo::SetPublicAccess(const string& _publicAccess)
{
    m_publicAccess = _publicAccess;
    m_publicAccessHasBeenSet = true;
}

bool InstanceInfo::PublicAccessHasBeenSet() const
{
    return m_publicAccessHasBeenSet;
}

EsAcl InstanceInfo::GetEsPublicAcl() const
{
    return m_esPublicAcl;
}

void InstanceInfo::SetEsPublicAcl(const EsAcl& _esPublicAcl)
{
    m_esPublicAcl = _esPublicAcl;
    m_esPublicAclHasBeenSet = true;
}

bool InstanceInfo::EsPublicAclHasBeenSet() const
{
    return m_esPublicAclHasBeenSet;
}

string InstanceInfo::GetKibanaPrivateUrl() const
{
    return m_kibanaPrivateUrl;
}

void InstanceInfo::SetKibanaPrivateUrl(const string& _kibanaPrivateUrl)
{
    m_kibanaPrivateUrl = _kibanaPrivateUrl;
    m_kibanaPrivateUrlHasBeenSet = true;
}

bool InstanceInfo::KibanaPrivateUrlHasBeenSet() const
{
    return m_kibanaPrivateUrlHasBeenSet;
}

string InstanceInfo::GetKibanaPublicAccess() const
{
    return m_kibanaPublicAccess;
}

void InstanceInfo::SetKibanaPublicAccess(const string& _kibanaPublicAccess)
{
    m_kibanaPublicAccess = _kibanaPublicAccess;
    m_kibanaPublicAccessHasBeenSet = true;
}

bool InstanceInfo::KibanaPublicAccessHasBeenSet() const
{
    return m_kibanaPublicAccessHasBeenSet;
}

string InstanceInfo::GetKibanaPrivateAccess() const
{
    return m_kibanaPrivateAccess;
}

void InstanceInfo::SetKibanaPrivateAccess(const string& _kibanaPrivateAccess)
{
    m_kibanaPrivateAccess = _kibanaPrivateAccess;
    m_kibanaPrivateAccessHasBeenSet = true;
}

bool InstanceInfo::KibanaPrivateAccessHasBeenSet() const
{
    return m_kibanaPrivateAccessHasBeenSet;
}

uint64_t InstanceInfo::GetSecurityType() const
{
    return m_securityType;
}

void InstanceInfo::SetSecurityType(const uint64_t& _securityType)
{
    m_securityType = _securityType;
    m_securityTypeHasBeenSet = true;
}

bool InstanceInfo::SecurityTypeHasBeenSet() const
{
    return m_securityTypeHasBeenSet;
}

int64_t InstanceInfo::GetSceneType() const
{
    return m_sceneType;
}

void InstanceInfo::SetSceneType(const int64_t& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool InstanceInfo::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string InstanceInfo::GetKibanaConfig() const
{
    return m_kibanaConfig;
}

void InstanceInfo::SetKibanaConfig(const string& _kibanaConfig)
{
    m_kibanaConfig = _kibanaConfig;
    m_kibanaConfigHasBeenSet = true;
}

bool InstanceInfo::KibanaConfigHasBeenSet() const
{
    return m_kibanaConfigHasBeenSet;
}

KibanaNodeInfo InstanceInfo::GetKibanaNodeInfo() const
{
    return m_kibanaNodeInfo;
}

void InstanceInfo::SetKibanaNodeInfo(const KibanaNodeInfo& _kibanaNodeInfo)
{
    m_kibanaNodeInfo = _kibanaNodeInfo;
    m_kibanaNodeInfoHasBeenSet = true;
}

bool InstanceInfo::KibanaNodeInfoHasBeenSet() const
{
    return m_kibanaNodeInfoHasBeenSet;
}

WebNodeTypeInfo InstanceInfo::GetWebNodeTypeInfo() const
{
    return m_webNodeTypeInfo;
}

void InstanceInfo::SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo)
{
    m_webNodeTypeInfo = _webNodeTypeInfo;
    m_webNodeTypeInfoHasBeenSet = true;
}

bool InstanceInfo::WebNodeTypeInfoHasBeenSet() const
{
    return m_webNodeTypeInfoHasBeenSet;
}

string InstanceInfo::GetJdk() const
{
    return m_jdk;
}

void InstanceInfo::SetJdk(const string& _jdk)
{
    m_jdk = _jdk;
    m_jdkHasBeenSet = true;
}

bool InstanceInfo::JdkHasBeenSet() const
{
    return m_jdkHasBeenSet;
}

string InstanceInfo::GetProtocol() const
{
    return m_protocol;
}

void InstanceInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool InstanceInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<string> InstanceInfo::GetSecurityGroups() const
{
    return m_securityGroups;
}

void InstanceInfo::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool InstanceInfo::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}

string InstanceInfo::GetColdNodeType() const
{
    return m_coldNodeType;
}

void InstanceInfo::SetColdNodeType(const string& _coldNodeType)
{
    m_coldNodeType = _coldNodeType;
    m_coldNodeTypeHasBeenSet = true;
}

bool InstanceInfo::ColdNodeTypeHasBeenSet() const
{
    return m_coldNodeTypeHasBeenSet;
}

uint64_t InstanceInfo::GetColdNodeNum() const
{
    return m_coldNodeNum;
}

void InstanceInfo::SetColdNodeNum(const uint64_t& _coldNodeNum)
{
    m_coldNodeNum = _coldNodeNum;
    m_coldNodeNumHasBeenSet = true;
}

bool InstanceInfo::ColdNodeNumHasBeenSet() const
{
    return m_coldNodeNumHasBeenSet;
}

uint64_t InstanceInfo::GetColdCpuNum() const
{
    return m_coldCpuNum;
}

void InstanceInfo::SetColdCpuNum(const uint64_t& _coldCpuNum)
{
    m_coldCpuNum = _coldCpuNum;
    m_coldCpuNumHasBeenSet = true;
}

bool InstanceInfo::ColdCpuNumHasBeenSet() const
{
    return m_coldCpuNumHasBeenSet;
}

uint64_t InstanceInfo::GetColdMemSize() const
{
    return m_coldMemSize;
}

void InstanceInfo::SetColdMemSize(const uint64_t& _coldMemSize)
{
    m_coldMemSize = _coldMemSize;
    m_coldMemSizeHasBeenSet = true;
}

bool InstanceInfo::ColdMemSizeHasBeenSet() const
{
    return m_coldMemSizeHasBeenSet;
}

string InstanceInfo::GetColdDiskType() const
{
    return m_coldDiskType;
}

void InstanceInfo::SetColdDiskType(const string& _coldDiskType)
{
    m_coldDiskType = _coldDiskType;
    m_coldDiskTypeHasBeenSet = true;
}

bool InstanceInfo::ColdDiskTypeHasBeenSet() const
{
    return m_coldDiskTypeHasBeenSet;
}

uint64_t InstanceInfo::GetColdDiskSize() const
{
    return m_coldDiskSize;
}

void InstanceInfo::SetColdDiskSize(const uint64_t& _coldDiskSize)
{
    m_coldDiskSize = _coldDiskSize;
    m_coldDiskSizeHasBeenSet = true;
}

bool InstanceInfo::ColdDiskSizeHasBeenSet() const
{
    return m_coldDiskSizeHasBeenSet;
}

string InstanceInfo::GetFrozenNodeType() const
{
    return m_frozenNodeType;
}

void InstanceInfo::SetFrozenNodeType(const string& _frozenNodeType)
{
    m_frozenNodeType = _frozenNodeType;
    m_frozenNodeTypeHasBeenSet = true;
}

bool InstanceInfo::FrozenNodeTypeHasBeenSet() const
{
    return m_frozenNodeTypeHasBeenSet;
}

uint64_t InstanceInfo::GetFrozenNodeNum() const
{
    return m_frozenNodeNum;
}

void InstanceInfo::SetFrozenNodeNum(const uint64_t& _frozenNodeNum)
{
    m_frozenNodeNum = _frozenNodeNum;
    m_frozenNodeNumHasBeenSet = true;
}

bool InstanceInfo::FrozenNodeNumHasBeenSet() const
{
    return m_frozenNodeNumHasBeenSet;
}

uint64_t InstanceInfo::GetFrozenCpuNum() const
{
    return m_frozenCpuNum;
}

void InstanceInfo::SetFrozenCpuNum(const uint64_t& _frozenCpuNum)
{
    m_frozenCpuNum = _frozenCpuNum;
    m_frozenCpuNumHasBeenSet = true;
}

bool InstanceInfo::FrozenCpuNumHasBeenSet() const
{
    return m_frozenCpuNumHasBeenSet;
}

uint64_t InstanceInfo::GetFrozenMemSize() const
{
    return m_frozenMemSize;
}

void InstanceInfo::SetFrozenMemSize(const uint64_t& _frozenMemSize)
{
    m_frozenMemSize = _frozenMemSize;
    m_frozenMemSizeHasBeenSet = true;
}

bool InstanceInfo::FrozenMemSizeHasBeenSet() const
{
    return m_frozenMemSizeHasBeenSet;
}

string InstanceInfo::GetFrozenDiskType() const
{
    return m_frozenDiskType;
}

void InstanceInfo::SetFrozenDiskType(const string& _frozenDiskType)
{
    m_frozenDiskType = _frozenDiskType;
    m_frozenDiskTypeHasBeenSet = true;
}

bool InstanceInfo::FrozenDiskTypeHasBeenSet() const
{
    return m_frozenDiskTypeHasBeenSet;
}

uint64_t InstanceInfo::GetFrozenDiskSize() const
{
    return m_frozenDiskSize;
}

void InstanceInfo::SetFrozenDiskSize(const uint64_t& _frozenDiskSize)
{
    m_frozenDiskSize = _frozenDiskSize;
    m_frozenDiskSizeHasBeenSet = true;
}

bool InstanceInfo::FrozenDiskSizeHasBeenSet() const
{
    return m_frozenDiskSizeHasBeenSet;
}

int64_t InstanceInfo::GetHealthStatus() const
{
    return m_healthStatus;
}

void InstanceInfo::SetHealthStatus(const int64_t& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool InstanceInfo::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

string InstanceInfo::GetEsPrivateUrl() const
{
    return m_esPrivateUrl;
}

void InstanceInfo::SetEsPrivateUrl(const string& _esPrivateUrl)
{
    m_esPrivateUrl = _esPrivateUrl;
    m_esPrivateUrlHasBeenSet = true;
}

bool InstanceInfo::EsPrivateUrlHasBeenSet() const
{
    return m_esPrivateUrlHasBeenSet;
}

string InstanceInfo::GetEsPrivateDomain() const
{
    return m_esPrivateDomain;
}

void InstanceInfo::SetEsPrivateDomain(const string& _esPrivateDomain)
{
    m_esPrivateDomain = _esPrivateDomain;
    m_esPrivateDomainHasBeenSet = true;
}

bool InstanceInfo::EsPrivateDomainHasBeenSet() const
{
    return m_esPrivateDomainHasBeenSet;
}

vector<EsConfigSetInfo> InstanceInfo::GetEsConfigSets() const
{
    return m_esConfigSets;
}

void InstanceInfo::SetEsConfigSets(const vector<EsConfigSetInfo>& _esConfigSets)
{
    m_esConfigSets = _esConfigSets;
    m_esConfigSetsHasBeenSet = true;
}

bool InstanceInfo::EsConfigSetsHasBeenSet() const
{
    return m_esConfigSetsHasBeenSet;
}

OperationDuration InstanceInfo::GetOperationDuration() const
{
    return m_operationDuration;
}

void InstanceInfo::SetOperationDuration(const OperationDuration& _operationDuration)
{
    m_operationDuration = _operationDuration;
    m_operationDurationHasBeenSet = true;
}

bool InstanceInfo::OperationDurationHasBeenSet() const
{
    return m_operationDurationHasBeenSet;
}

vector<OptionalWebServiceInfo> InstanceInfo::GetOptionalWebServiceInfos() const
{
    return m_optionalWebServiceInfos;
}

void InstanceInfo::SetOptionalWebServiceInfos(const vector<OptionalWebServiceInfo>& _optionalWebServiceInfos)
{
    m_optionalWebServiceInfos = _optionalWebServiceInfos;
    m_optionalWebServiceInfosHasBeenSet = true;
}

bool InstanceInfo::OptionalWebServiceInfosHasBeenSet() const
{
    return m_optionalWebServiceInfosHasBeenSet;
}

bool InstanceInfo::GetAutoIndexEnabled() const
{
    return m_autoIndexEnabled;
}

void InstanceInfo::SetAutoIndexEnabled(const bool& _autoIndexEnabled)
{
    m_autoIndexEnabled = _autoIndexEnabled;
    m_autoIndexEnabledHasBeenSet = true;
}

bool InstanceInfo::AutoIndexEnabledHasBeenSet() const
{
    return m_autoIndexEnabledHasBeenSet;
}

bool InstanceInfo::GetEnableHybridStorage() const
{
    return m_enableHybridStorage;
}

void InstanceInfo::SetEnableHybridStorage(const bool& _enableHybridStorage)
{
    m_enableHybridStorage = _enableHybridStorage;
    m_enableHybridStorageHasBeenSet = true;
}

bool InstanceInfo::EnableHybridStorageHasBeenSet() const
{
    return m_enableHybridStorageHasBeenSet;
}

double InstanceInfo::GetProcessPercent() const
{
    return m_processPercent;
}

void InstanceInfo::SetProcessPercent(const double& _processPercent)
{
    m_processPercent = _processPercent;
    m_processPercentHasBeenSet = true;
}

bool InstanceInfo::ProcessPercentHasBeenSet() const
{
    return m_processPercentHasBeenSet;
}

string InstanceInfo::GetKibanaAlteringPublicAccess() const
{
    return m_kibanaAlteringPublicAccess;
}

void InstanceInfo::SetKibanaAlteringPublicAccess(const string& _kibanaAlteringPublicAccess)
{
    m_kibanaAlteringPublicAccess = _kibanaAlteringPublicAccess;
    m_kibanaAlteringPublicAccessHasBeenSet = true;
}

bool InstanceInfo::KibanaAlteringPublicAccessHasBeenSet() const
{
    return m_kibanaAlteringPublicAccessHasBeenSet;
}

bool InstanceInfo::GetHasKernelUpgrade() const
{
    return m_hasKernelUpgrade;
}

void InstanceInfo::SetHasKernelUpgrade(const bool& _hasKernelUpgrade)
{
    m_hasKernelUpgrade = _hasKernelUpgrade;
    m_hasKernelUpgradeHasBeenSet = true;
}

bool InstanceInfo::HasKernelUpgradeHasBeenSet() const
{
    return m_hasKernelUpgradeHasBeenSet;
}

string InstanceInfo::GetCdcId() const
{
    return m_cdcId;
}

void InstanceInfo::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool InstanceInfo::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

string InstanceInfo::GetKibanaPrivateVip() const
{
    return m_kibanaPrivateVip;
}

void InstanceInfo::SetKibanaPrivateVip(const string& _kibanaPrivateVip)
{
    m_kibanaPrivateVip = _kibanaPrivateVip;
    m_kibanaPrivateVipHasBeenSet = true;
}

bool InstanceInfo::KibanaPrivateVipHasBeenSet() const
{
    return m_kibanaPrivateVipHasBeenSet;
}

string InstanceInfo::GetCustomKibanaPrivateUrl() const
{
    return m_customKibanaPrivateUrl;
}

void InstanceInfo::SetCustomKibanaPrivateUrl(const string& _customKibanaPrivateUrl)
{
    m_customKibanaPrivateUrl = _customKibanaPrivateUrl;
    m_customKibanaPrivateUrlHasBeenSet = true;
}

bool InstanceInfo::CustomKibanaPrivateUrlHasBeenSet() const
{
    return m_customKibanaPrivateUrlHasBeenSet;
}

vector<OutboundPublicAcl> InstanceInfo::GetOutboundPublicAcls() const
{
    return m_outboundPublicAcls;
}

void InstanceInfo::SetOutboundPublicAcls(const vector<OutboundPublicAcl>& _outboundPublicAcls)
{
    m_outboundPublicAcls = _outboundPublicAcls;
    m_outboundPublicAclsHasBeenSet = true;
}

bool InstanceInfo::OutboundPublicAclsHasBeenSet() const
{
    return m_outboundPublicAclsHasBeenSet;
}

string InstanceInfo::GetNetConnectScheme() const
{
    return m_netConnectScheme;
}

void InstanceInfo::SetNetConnectScheme(const string& _netConnectScheme)
{
    m_netConnectScheme = _netConnectScheme;
    m_netConnectSchemeHasBeenSet = true;
}

bool InstanceInfo::NetConnectSchemeHasBeenSet() const
{
    return m_netConnectSchemeHasBeenSet;
}

uint64_t InstanceInfo::GetDisasterRecoverGroupAffinity() const
{
    return m_disasterRecoverGroupAffinity;
}

void InstanceInfo::SetDisasterRecoverGroupAffinity(const uint64_t& _disasterRecoverGroupAffinity)
{
    m_disasterRecoverGroupAffinity = _disasterRecoverGroupAffinity;
    m_disasterRecoverGroupAffinityHasBeenSet = true;
}

bool InstanceInfo::DisasterRecoverGroupAffinityHasBeenSet() const
{
    return m_disasterRecoverGroupAffinityHasBeenSet;
}

string InstanceInfo::GetSubProductCode() const
{
    return m_subProductCode;
}

void InstanceInfo::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool InstanceInfo::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

uint64_t InstanceInfo::GetCosBucketStorageSize() const
{
    return m_cosBucketStorageSize;
}

void InstanceInfo::SetCosBucketStorageSize(const uint64_t& _cosBucketStorageSize)
{
    m_cosBucketStorageSize = _cosBucketStorageSize;
    m_cosBucketStorageSizeHasBeenSet = true;
}

bool InstanceInfo::CosBucketStorageSizeHasBeenSet() const
{
    return m_cosBucketStorageSizeHasBeenSet;
}

int64_t InstanceInfo::GetReadWriteMode() const
{
    return m_readWriteMode;
}

void InstanceInfo::SetReadWriteMode(const int64_t& _readWriteMode)
{
    m_readWriteMode = _readWriteMode;
    m_readWriteModeHasBeenSet = true;
}

bool InstanceInfo::ReadWriteModeHasBeenSet() const
{
    return m_readWriteModeHasBeenSet;
}

bool InstanceInfo::GetEnableScheduleRecoverGroup() const
{
    return m_enableScheduleRecoverGroup;
}

void InstanceInfo::SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup)
{
    m_enableScheduleRecoverGroup = _enableScheduleRecoverGroup;
    m_enableScheduleRecoverGroupHasBeenSet = true;
}

bool InstanceInfo::EnableScheduleRecoverGroupHasBeenSet() const
{
    return m_enableScheduleRecoverGroupHasBeenSet;
}

EnableScheduleOperationDuration InstanceInfo::GetEnableScheduleOperationDuration() const
{
    return m_enableScheduleOperationDuration;
}

void InstanceInfo::SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration)
{
    m_enableScheduleOperationDuration = _enableScheduleOperationDuration;
    m_enableScheduleOperationDurationHasBeenSet = true;
}

bool InstanceInfo::EnableScheduleOperationDurationHasBeenSet() const
{
    return m_enableScheduleOperationDurationHasBeenSet;
}

string InstanceInfo::GetEnableDestroyProtection() const
{
    return m_enableDestroyProtection;
}

void InstanceInfo::SetEnableDestroyProtection(const string& _enableDestroyProtection)
{
    m_enableDestroyProtection = _enableDestroyProtection;
    m_enableDestroyProtectionHasBeenSet = true;
}

bool InstanceInfo::EnableDestroyProtectionHasBeenSet() const
{
    return m_enableDestroyProtectionHasBeenSet;
}

