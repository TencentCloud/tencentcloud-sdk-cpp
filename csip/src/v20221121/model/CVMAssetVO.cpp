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

#include <tencentcloud/csip/v20221121/model/CVMAssetVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CVMAssetVO::CVMAssetVO() :
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_cWPStatusHasBeenSet(false),
    m_assetCreateTimeHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_availableAreaHasBeenSet(false),
    m_isCoreHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_instanceUuidHasBeenSet(false),
    m_instanceQUuidHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_partitionCountHasBeenSet(false),
    m_cPUInfoHasBeenSet(false),
    m_cPUSizeHasBeenSet(false),
    m_cPULoadHasBeenSet(false),
    m_memorySizeHasBeenSet(false),
    m_memoryLoadHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskLoadHasBeenSet(false),
    m_accountCountHasBeenSet(false),
    m_processCountHasBeenSet(false),
    m_appCountHasBeenSet(false),
    m_portCountHasBeenSet(false),
    m_attackHasBeenSet(false),
    m_accessHasBeenSet(false),
    m_interceptHasBeenSet(false),
    m_inBandwidthHasBeenSet(false),
    m_outBandwidthHasBeenSet(false),
    m_inFlowHasBeenSet(false),
    m_outFlowHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_netWorkOutHasBeenSet(false),
    m_portRiskHasBeenSet(false),
    m_vulnerabilityRiskHasBeenSet(false),
    m_configurationRiskHasBeenSet(false),
    m_scanTaskHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_osHasBeenSet(false),
    m_riskExposureHasBeenSet(false),
    m_bASAgentStatusHasBeenSet(false),
    m_isNewAssetHasBeenSet(false),
    m_cVMAgentStatusHasBeenSet(false),
    m_cVMStatusHasBeenSet(false),
    m_defenseModelHasBeenSet(false),
    m_tatStatusHasBeenSet(false),
    m_cpuTrendHasBeenSet(false),
    m_memoryTrendHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_closeDefenseCountHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_agentMemRssHasBeenSet(false),
    m_agentCpuPerHasBeenSet(false),
    m_realAppidHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_protectStatusHasBeenSet(false),
    m_offlineTimeHasBeenSet(false)
{
}

CoreInternalOutcome CVMAssetVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CWPStatus") && !value["CWPStatus"].IsNull())
    {
        if (!value["CWPStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.CWPStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPStatus = value["CWPStatus"].GetUint64();
        m_cWPStatusHasBeenSet = true;
    }

    if (value.HasMember("AssetCreateTime") && !value["AssetCreateTime"].IsNull())
    {
        if (!value["AssetCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AssetCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetCreateTime = string(value["AssetCreateTime"].GetString());
        m_assetCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("AvailableArea") && !value["AvailableArea"].IsNull())
    {
        if (!value["AvailableArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AvailableArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableArea = string(value["AvailableArea"].GetString());
        m_availableAreaHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.IsCore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetUint64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceUuid") && !value["InstanceUuid"].IsNull())
    {
        if (!value["InstanceUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.InstanceUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUuid = string(value["InstanceUuid"].GetString());
        m_instanceUuidHasBeenSet = true;
    }

    if (value.HasMember("InstanceQUuid") && !value["InstanceQUuid"].IsNull())
    {
        if (!value["InstanceQUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.InstanceQUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceQUuid = string(value["InstanceQUuid"].GetString());
        m_instanceQUuidHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("PartitionCount") && !value["PartitionCount"].IsNull())
    {
        if (!value["PartitionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.PartitionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCount = value["PartitionCount"].GetUint64();
        m_partitionCountHasBeenSet = true;
    }

    if (value.HasMember("CPUInfo") && !value["CPUInfo"].IsNull())
    {
        if (!value["CPUInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.CPUInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPUInfo = string(value["CPUInfo"].GetString());
        m_cPUInfoHasBeenSet = true;
    }

    if (value.HasMember("CPUSize") && !value["CPUSize"].IsNull())
    {
        if (!value["CPUSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.CPUSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPUSize = value["CPUSize"].GetUint64();
        m_cPUSizeHasBeenSet = true;
    }

    if (value.HasMember("CPULoad") && !value["CPULoad"].IsNull())
    {
        if (!value["CPULoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.CPULoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPULoad = string(value["CPULoad"].GetString());
        m_cPULoadHasBeenSet = true;
    }

    if (value.HasMember("MemorySize") && !value["MemorySize"].IsNull())
    {
        if (!value["MemorySize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.MemorySize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memorySize = string(value["MemorySize"].GetString());
        m_memorySizeHasBeenSet = true;
    }

    if (value.HasMember("MemoryLoad") && !value["MemoryLoad"].IsNull())
    {
        if (!value["MemoryLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.MemoryLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLoad = string(value["MemoryLoad"].GetString());
        m_memoryLoadHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.DiskSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = string(value["DiskSize"].GetString());
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskLoad") && !value["DiskLoad"].IsNull())
    {
        if (!value["DiskLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.DiskLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskLoad = string(value["DiskLoad"].GetString());
        m_diskLoadHasBeenSet = true;
    }

    if (value.HasMember("AccountCount") && !value["AccountCount"].IsNull())
    {
        if (!value["AccountCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AccountCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountCount = string(value["AccountCount"].GetString());
        m_accountCountHasBeenSet = true;
    }

    if (value.HasMember("ProcessCount") && !value["ProcessCount"].IsNull())
    {
        if (!value["ProcessCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.ProcessCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processCount = string(value["ProcessCount"].GetString());
        m_processCountHasBeenSet = true;
    }

    if (value.HasMember("AppCount") && !value["AppCount"].IsNull())
    {
        if (!value["AppCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AppCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appCount = string(value["AppCount"].GetString());
        m_appCountHasBeenSet = true;
    }

    if (value.HasMember("PortCount") && !value["PortCount"].IsNull())
    {
        if (!value["PortCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.PortCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portCount = value["PortCount"].GetUint64();
        m_portCountHasBeenSet = true;
    }

    if (value.HasMember("Attack") && !value["Attack"].IsNull())
    {
        if (!value["Attack"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.Attack` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attack = value["Attack"].GetUint64();
        m_attackHasBeenSet = true;
    }

    if (value.HasMember("Access") && !value["Access"].IsNull())
    {
        if (!value["Access"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.Access` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_access = value["Access"].GetUint64();
        m_accessHasBeenSet = true;
    }

    if (value.HasMember("Intercept") && !value["Intercept"].IsNull())
    {
        if (!value["Intercept"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.Intercept` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intercept = value["Intercept"].GetUint64();
        m_interceptHasBeenSet = true;
    }

    if (value.HasMember("InBandwidth") && !value["InBandwidth"].IsNull())
    {
        if (!value["InBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.InBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inBandwidth = string(value["InBandwidth"].GetString());
        m_inBandwidthHasBeenSet = true;
    }

    if (value.HasMember("OutBandwidth") && !value["OutBandwidth"].IsNull())
    {
        if (!value["OutBandwidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.OutBandwidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outBandwidth = string(value["OutBandwidth"].GetString());
        m_outBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InFlow") && !value["InFlow"].IsNull())
    {
        if (!value["InFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.InFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inFlow = string(value["InFlow"].GetString());
        m_inFlowHasBeenSet = true;
    }

    if (value.HasMember("OutFlow") && !value["OutFlow"].IsNull())
    {
        if (!value["OutFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.OutFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outFlow = string(value["OutFlow"].GetString());
        m_outFlowHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("NetWorkOut") && !value["NetWorkOut"].IsNull())
    {
        if (!value["NetWorkOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.NetWorkOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netWorkOut = value["NetWorkOut"].GetUint64();
        m_netWorkOutHasBeenSet = true;
    }

    if (value.HasMember("PortRisk") && !value["PortRisk"].IsNull())
    {
        if (!value["PortRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.PortRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portRisk = value["PortRisk"].GetUint64();
        m_portRiskHasBeenSet = true;
    }

    if (value.HasMember("VulnerabilityRisk") && !value["VulnerabilityRisk"].IsNull())
    {
        if (!value["VulnerabilityRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.VulnerabilityRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityRisk = value["VulnerabilityRisk"].GetUint64();
        m_vulnerabilityRiskHasBeenSet = true;
    }

    if (value.HasMember("ConfigurationRisk") && !value["ConfigurationRisk"].IsNull())
    {
        if (!value["ConfigurationRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.ConfigurationRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configurationRisk = value["ConfigurationRisk"].GetUint64();
        m_configurationRiskHasBeenSet = true;
    }

    if (value.HasMember("ScanTask") && !value["ScanTask"].IsNull())
    {
        if (!value["ScanTask"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.ScanTask` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTask = value["ScanTask"].GetUint64();
        m_scanTaskHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.Tag` is not array type"));

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

    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("Os") && !value["Os"].IsNull())
    {
        if (!value["Os"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.Os` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_os = string(value["Os"].GetString());
        m_osHasBeenSet = true;
    }

    if (value.HasMember("RiskExposure") && !value["RiskExposure"].IsNull())
    {
        if (!value["RiskExposure"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.RiskExposure` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskExposure = value["RiskExposure"].GetInt64();
        m_riskExposureHasBeenSet = true;
    }

    if (value.HasMember("BASAgentStatus") && !value["BASAgentStatus"].IsNull())
    {
        if (!value["BASAgentStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.BASAgentStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bASAgentStatus = value["BASAgentStatus"].GetInt64();
        m_bASAgentStatusHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }

    if (value.HasMember("CVMAgentStatus") && !value["CVMAgentStatus"].IsNull())
    {
        if (!value["CVMAgentStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.CVMAgentStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cVMAgentStatus = value["CVMAgentStatus"].GetInt64();
        m_cVMAgentStatusHasBeenSet = true;
    }

    if (value.HasMember("CVMStatus") && !value["CVMStatus"].IsNull())
    {
        if (!value["CVMStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.CVMStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cVMStatus = value["CVMStatus"].GetInt64();
        m_cVMStatusHasBeenSet = true;
    }

    if (value.HasMember("DefenseModel") && !value["DefenseModel"].IsNull())
    {
        if (!value["DefenseModel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.DefenseModel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defenseModel = value["DefenseModel"].GetInt64();
        m_defenseModelHasBeenSet = true;
    }

    if (value.HasMember("TatStatus") && !value["TatStatus"].IsNull())
    {
        if (!value["TatStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.TatStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tatStatus = value["TatStatus"].GetInt64();
        m_tatStatusHasBeenSet = true;
    }

    if (value.HasMember("CpuTrend") && !value["CpuTrend"].IsNull())
    {
        if (!value["CpuTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.CpuTrend` is not array type"));

        const rapidjson::Value &tmpValue = value["CpuTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Element item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cpuTrend.push_back(item);
        }
        m_cpuTrendHasBeenSet = true;
    }

    if (value.HasMember("MemoryTrend") && !value["MemoryTrend"].IsNull())
    {
        if (!value["MemoryTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.MemoryTrend` is not array type"));

        const rapidjson::Value &tmpValue = value["MemoryTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Element item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_memoryTrend.push_back(item);
        }
        m_memoryTrendHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AgentStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = value["AgentStatus"].GetInt64();
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("CloseDefenseCount") && !value["CloseDefenseCount"].IsNull())
    {
        if (!value["CloseDefenseCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.CloseDefenseCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_closeDefenseCount = value["CloseDefenseCount"].GetInt64();
        m_closeDefenseCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("AgentMemRss") && !value["AgentMemRss"].IsNull())
    {
        if (!value["AgentMemRss"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AgentMemRss` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_agentMemRss = value["AgentMemRss"].GetInt64();
        m_agentMemRssHasBeenSet = true;
    }

    if (value.HasMember("AgentCpuPer") && !value["AgentCpuPer"].IsNull())
    {
        if (!value["AgentCpuPer"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.AgentCpuPer` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_agentCpuPer = value["AgentCpuPer"].GetDouble();
        m_agentCpuPerHasBeenSet = true;
    }

    if (value.HasMember("RealAppid") && !value["RealAppid"].IsNull())
    {
        if (!value["RealAppid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.RealAppid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realAppid = value["RealAppid"].GetInt64();
        m_realAppidHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("ProtectStatus") && !value["ProtectStatus"].IsNull())
    {
        if (!value["ProtectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.ProtectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectStatus = value["ProtectStatus"].GetInt64();
        m_protectStatusHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVMAssetVO.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CVMAssetVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_cWPStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPStatus, allocator);
    }

    if (m_assetCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetCreateTime.c_str(), allocator).Move(), allocator);
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

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
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

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_availableAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableArea.c_str(), allocator).Move(), allocator);
    }

    if (m_isCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCore, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceQUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceQUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceQUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionCount, allocator);
    }

    if (m_cPUInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPUInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPUInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPUSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPUSize, allocator);
    }

    if (m_cPULoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPULoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPULoad.c_str(), allocator).Move(), allocator);
    }

    if (m_memorySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memorySize.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskSize.c_str(), allocator).Move(), allocator);
    }

    if (m_diskLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_accountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountCount.c_str(), allocator).Move(), allocator);
    }

    if (m_processCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processCount.c_str(), allocator).Move(), allocator);
    }

    if (m_appCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appCount.c_str(), allocator).Move(), allocator);
    }

    if (m_portCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portCount, allocator);
    }

    if (m_attackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attack, allocator);
    }

    if (m_accessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Access";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_access, allocator);
    }

    if (m_interceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intercept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intercept, allocator);
    }

    if (m_inBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inBandwidth.c_str(), allocator).Move(), allocator);
    }

    if (m_outBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outBandwidth.c_str(), allocator).Move(), allocator);
    }

    if (m_inFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inFlow.c_str(), allocator).Move(), allocator);
    }

    if (m_outFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outFlow.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_netWorkOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetWorkOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netWorkOut, allocator);
    }

    if (m_portRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portRisk, allocator);
    }

    if (m_vulnerabilityRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulnerabilityRisk, allocator);
    }

    if (m_configurationRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurationRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configurationRisk, allocator);
    }

    if (m_scanTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTask, allocator);
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

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberId.c_str(), allocator).Move(), allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_riskExposureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskExposure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskExposure, allocator);
    }

    if (m_bASAgentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BASAgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bASAgentStatus, allocator);
    }

    if (m_isNewAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAsset, allocator);
    }

    if (m_cVMAgentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMAgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVMAgentStatus, allocator);
    }

    if (m_cVMStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVMStatus, allocator);
    }

    if (m_defenseModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenseModel, allocator);
    }

    if (m_tatStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TatStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tatStatus, allocator);
    }

    if (m_cpuTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cpuTrend.begin(); itr != m_cpuTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_memoryTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_memoryTrend.begin(); itr != m_memoryTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentStatus, allocator);
    }

    if (m_closeDefenseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloseDefenseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_closeDefenseCount, allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_agentMemRssHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentMemRss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentMemRss, allocator);
    }

    if (m_agentCpuPerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCpuPer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentCpuPer, allocator);
    }

    if (m_realAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealAppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realAppid, allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

    if (m_protectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectStatus, allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

}


string CVMAssetVO::GetAssetId() const
{
    return m_assetId;
}

void CVMAssetVO::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool CVMAssetVO::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string CVMAssetVO::GetAssetName() const
{
    return m_assetName;
}

void CVMAssetVO::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool CVMAssetVO::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string CVMAssetVO::GetAssetType() const
{
    return m_assetType;
}

void CVMAssetVO::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool CVMAssetVO::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string CVMAssetVO::GetRegion() const
{
    return m_region;
}

void CVMAssetVO::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CVMAssetVO::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t CVMAssetVO::GetCWPStatus() const
{
    return m_cWPStatus;
}

void CVMAssetVO::SetCWPStatus(const uint64_t& _cWPStatus)
{
    m_cWPStatus = _cWPStatus;
    m_cWPStatusHasBeenSet = true;
}

bool CVMAssetVO::CWPStatusHasBeenSet() const
{
    return m_cWPStatusHasBeenSet;
}

string CVMAssetVO::GetAssetCreateTime() const
{
    return m_assetCreateTime;
}

void CVMAssetVO::SetAssetCreateTime(const string& _assetCreateTime)
{
    m_assetCreateTime = _assetCreateTime;
    m_assetCreateTimeHasBeenSet = true;
}

bool CVMAssetVO::AssetCreateTimeHasBeenSet() const
{
    return m_assetCreateTimeHasBeenSet;
}

string CVMAssetVO::GetPublicIp() const
{
    return m_publicIp;
}

void CVMAssetVO::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool CVMAssetVO::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string CVMAssetVO::GetPrivateIp() const
{
    return m_privateIp;
}

void CVMAssetVO::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool CVMAssetVO::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string CVMAssetVO::GetVpcId() const
{
    return m_vpcId;
}

void CVMAssetVO::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CVMAssetVO::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CVMAssetVO::GetVpcName() const
{
    return m_vpcName;
}

void CVMAssetVO::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool CVMAssetVO::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

uint64_t CVMAssetVO::GetAppId() const
{
    return m_appId;
}

void CVMAssetVO::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CVMAssetVO::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CVMAssetVO::GetUin() const
{
    return m_uin;
}

void CVMAssetVO::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CVMAssetVO::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string CVMAssetVO::GetNickName() const
{
    return m_nickName;
}

void CVMAssetVO::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool CVMAssetVO::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string CVMAssetVO::GetAvailableArea() const
{
    return m_availableArea;
}

void CVMAssetVO::SetAvailableArea(const string& _availableArea)
{
    m_availableArea = _availableArea;
    m_availableAreaHasBeenSet = true;
}

bool CVMAssetVO::AvailableAreaHasBeenSet() const
{
    return m_availableAreaHasBeenSet;
}

uint64_t CVMAssetVO::GetIsCore() const
{
    return m_isCore;
}

void CVMAssetVO::SetIsCore(const uint64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool CVMAssetVO::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

string CVMAssetVO::GetSubnetId() const
{
    return m_subnetId;
}

void CVMAssetVO::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CVMAssetVO::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CVMAssetVO::GetSubnetName() const
{
    return m_subnetName;
}

void CVMAssetVO::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool CVMAssetVO::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string CVMAssetVO::GetInstanceUuid() const
{
    return m_instanceUuid;
}

void CVMAssetVO::SetInstanceUuid(const string& _instanceUuid)
{
    m_instanceUuid = _instanceUuid;
    m_instanceUuidHasBeenSet = true;
}

bool CVMAssetVO::InstanceUuidHasBeenSet() const
{
    return m_instanceUuidHasBeenSet;
}

string CVMAssetVO::GetInstanceQUuid() const
{
    return m_instanceQUuid;
}

void CVMAssetVO::SetInstanceQUuid(const string& _instanceQUuid)
{
    m_instanceQUuid = _instanceQUuid;
    m_instanceQUuidHasBeenSet = true;
}

bool CVMAssetVO::InstanceQUuidHasBeenSet() const
{
    return m_instanceQUuidHasBeenSet;
}

string CVMAssetVO::GetOsName() const
{
    return m_osName;
}

void CVMAssetVO::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool CVMAssetVO::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

uint64_t CVMAssetVO::GetPartitionCount() const
{
    return m_partitionCount;
}

void CVMAssetVO::SetPartitionCount(const uint64_t& _partitionCount)
{
    m_partitionCount = _partitionCount;
    m_partitionCountHasBeenSet = true;
}

bool CVMAssetVO::PartitionCountHasBeenSet() const
{
    return m_partitionCountHasBeenSet;
}

string CVMAssetVO::GetCPUInfo() const
{
    return m_cPUInfo;
}

void CVMAssetVO::SetCPUInfo(const string& _cPUInfo)
{
    m_cPUInfo = _cPUInfo;
    m_cPUInfoHasBeenSet = true;
}

bool CVMAssetVO::CPUInfoHasBeenSet() const
{
    return m_cPUInfoHasBeenSet;
}

uint64_t CVMAssetVO::GetCPUSize() const
{
    return m_cPUSize;
}

void CVMAssetVO::SetCPUSize(const uint64_t& _cPUSize)
{
    m_cPUSize = _cPUSize;
    m_cPUSizeHasBeenSet = true;
}

bool CVMAssetVO::CPUSizeHasBeenSet() const
{
    return m_cPUSizeHasBeenSet;
}

string CVMAssetVO::GetCPULoad() const
{
    return m_cPULoad;
}

void CVMAssetVO::SetCPULoad(const string& _cPULoad)
{
    m_cPULoad = _cPULoad;
    m_cPULoadHasBeenSet = true;
}

bool CVMAssetVO::CPULoadHasBeenSet() const
{
    return m_cPULoadHasBeenSet;
}

string CVMAssetVO::GetMemorySize() const
{
    return m_memorySize;
}

void CVMAssetVO::SetMemorySize(const string& _memorySize)
{
    m_memorySize = _memorySize;
    m_memorySizeHasBeenSet = true;
}

bool CVMAssetVO::MemorySizeHasBeenSet() const
{
    return m_memorySizeHasBeenSet;
}

string CVMAssetVO::GetMemoryLoad() const
{
    return m_memoryLoad;
}

void CVMAssetVO::SetMemoryLoad(const string& _memoryLoad)
{
    m_memoryLoad = _memoryLoad;
    m_memoryLoadHasBeenSet = true;
}

bool CVMAssetVO::MemoryLoadHasBeenSet() const
{
    return m_memoryLoadHasBeenSet;
}

string CVMAssetVO::GetDiskSize() const
{
    return m_diskSize;
}

void CVMAssetVO::SetDiskSize(const string& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CVMAssetVO::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string CVMAssetVO::GetDiskLoad() const
{
    return m_diskLoad;
}

void CVMAssetVO::SetDiskLoad(const string& _diskLoad)
{
    m_diskLoad = _diskLoad;
    m_diskLoadHasBeenSet = true;
}

bool CVMAssetVO::DiskLoadHasBeenSet() const
{
    return m_diskLoadHasBeenSet;
}

string CVMAssetVO::GetAccountCount() const
{
    return m_accountCount;
}

void CVMAssetVO::SetAccountCount(const string& _accountCount)
{
    m_accountCount = _accountCount;
    m_accountCountHasBeenSet = true;
}

bool CVMAssetVO::AccountCountHasBeenSet() const
{
    return m_accountCountHasBeenSet;
}

string CVMAssetVO::GetProcessCount() const
{
    return m_processCount;
}

void CVMAssetVO::SetProcessCount(const string& _processCount)
{
    m_processCount = _processCount;
    m_processCountHasBeenSet = true;
}

bool CVMAssetVO::ProcessCountHasBeenSet() const
{
    return m_processCountHasBeenSet;
}

string CVMAssetVO::GetAppCount() const
{
    return m_appCount;
}

void CVMAssetVO::SetAppCount(const string& _appCount)
{
    m_appCount = _appCount;
    m_appCountHasBeenSet = true;
}

bool CVMAssetVO::AppCountHasBeenSet() const
{
    return m_appCountHasBeenSet;
}

uint64_t CVMAssetVO::GetPortCount() const
{
    return m_portCount;
}

void CVMAssetVO::SetPortCount(const uint64_t& _portCount)
{
    m_portCount = _portCount;
    m_portCountHasBeenSet = true;
}

bool CVMAssetVO::PortCountHasBeenSet() const
{
    return m_portCountHasBeenSet;
}

uint64_t CVMAssetVO::GetAttack() const
{
    return m_attack;
}

void CVMAssetVO::SetAttack(const uint64_t& _attack)
{
    m_attack = _attack;
    m_attackHasBeenSet = true;
}

bool CVMAssetVO::AttackHasBeenSet() const
{
    return m_attackHasBeenSet;
}

uint64_t CVMAssetVO::GetAccess() const
{
    return m_access;
}

void CVMAssetVO::SetAccess(const uint64_t& _access)
{
    m_access = _access;
    m_accessHasBeenSet = true;
}

bool CVMAssetVO::AccessHasBeenSet() const
{
    return m_accessHasBeenSet;
}

uint64_t CVMAssetVO::GetIntercept() const
{
    return m_intercept;
}

void CVMAssetVO::SetIntercept(const uint64_t& _intercept)
{
    m_intercept = _intercept;
    m_interceptHasBeenSet = true;
}

bool CVMAssetVO::InterceptHasBeenSet() const
{
    return m_interceptHasBeenSet;
}

string CVMAssetVO::GetInBandwidth() const
{
    return m_inBandwidth;
}

void CVMAssetVO::SetInBandwidth(const string& _inBandwidth)
{
    m_inBandwidth = _inBandwidth;
    m_inBandwidthHasBeenSet = true;
}

bool CVMAssetVO::InBandwidthHasBeenSet() const
{
    return m_inBandwidthHasBeenSet;
}

string CVMAssetVO::GetOutBandwidth() const
{
    return m_outBandwidth;
}

void CVMAssetVO::SetOutBandwidth(const string& _outBandwidth)
{
    m_outBandwidth = _outBandwidth;
    m_outBandwidthHasBeenSet = true;
}

bool CVMAssetVO::OutBandwidthHasBeenSet() const
{
    return m_outBandwidthHasBeenSet;
}

string CVMAssetVO::GetInFlow() const
{
    return m_inFlow;
}

void CVMAssetVO::SetInFlow(const string& _inFlow)
{
    m_inFlow = _inFlow;
    m_inFlowHasBeenSet = true;
}

bool CVMAssetVO::InFlowHasBeenSet() const
{
    return m_inFlowHasBeenSet;
}

string CVMAssetVO::GetOutFlow() const
{
    return m_outFlow;
}

void CVMAssetVO::SetOutFlow(const string& _outFlow)
{
    m_outFlow = _outFlow;
    m_outFlowHasBeenSet = true;
}

bool CVMAssetVO::OutFlowHasBeenSet() const
{
    return m_outFlowHasBeenSet;
}

string CVMAssetVO::GetLastScanTime() const
{
    return m_lastScanTime;
}

void CVMAssetVO::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool CVMAssetVO::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t CVMAssetVO::GetNetWorkOut() const
{
    return m_netWorkOut;
}

void CVMAssetVO::SetNetWorkOut(const uint64_t& _netWorkOut)
{
    m_netWorkOut = _netWorkOut;
    m_netWorkOutHasBeenSet = true;
}

bool CVMAssetVO::NetWorkOutHasBeenSet() const
{
    return m_netWorkOutHasBeenSet;
}

uint64_t CVMAssetVO::GetPortRisk() const
{
    return m_portRisk;
}

void CVMAssetVO::SetPortRisk(const uint64_t& _portRisk)
{
    m_portRisk = _portRisk;
    m_portRiskHasBeenSet = true;
}

bool CVMAssetVO::PortRiskHasBeenSet() const
{
    return m_portRiskHasBeenSet;
}

uint64_t CVMAssetVO::GetVulnerabilityRisk() const
{
    return m_vulnerabilityRisk;
}

void CVMAssetVO::SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk)
{
    m_vulnerabilityRisk = _vulnerabilityRisk;
    m_vulnerabilityRiskHasBeenSet = true;
}

bool CVMAssetVO::VulnerabilityRiskHasBeenSet() const
{
    return m_vulnerabilityRiskHasBeenSet;
}

uint64_t CVMAssetVO::GetConfigurationRisk() const
{
    return m_configurationRisk;
}

void CVMAssetVO::SetConfigurationRisk(const uint64_t& _configurationRisk)
{
    m_configurationRisk = _configurationRisk;
    m_configurationRiskHasBeenSet = true;
}

bool CVMAssetVO::ConfigurationRiskHasBeenSet() const
{
    return m_configurationRiskHasBeenSet;
}

uint64_t CVMAssetVO::GetScanTask() const
{
    return m_scanTask;
}

void CVMAssetVO::SetScanTask(const uint64_t& _scanTask)
{
    m_scanTask = _scanTask;
    m_scanTaskHasBeenSet = true;
}

bool CVMAssetVO::ScanTaskHasBeenSet() const
{
    return m_scanTaskHasBeenSet;
}

vector<Tag> CVMAssetVO::GetTag() const
{
    return m_tag;
}

void CVMAssetVO::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool CVMAssetVO::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string CVMAssetVO::GetMemberId() const
{
    return m_memberId;
}

void CVMAssetVO::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CVMAssetVO::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string CVMAssetVO::GetOs() const
{
    return m_os;
}

void CVMAssetVO::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool CVMAssetVO::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

int64_t CVMAssetVO::GetRiskExposure() const
{
    return m_riskExposure;
}

void CVMAssetVO::SetRiskExposure(const int64_t& _riskExposure)
{
    m_riskExposure = _riskExposure;
    m_riskExposureHasBeenSet = true;
}

bool CVMAssetVO::RiskExposureHasBeenSet() const
{
    return m_riskExposureHasBeenSet;
}

int64_t CVMAssetVO::GetBASAgentStatus() const
{
    return m_bASAgentStatus;
}

void CVMAssetVO::SetBASAgentStatus(const int64_t& _bASAgentStatus)
{
    m_bASAgentStatus = _bASAgentStatus;
    m_bASAgentStatusHasBeenSet = true;
}

bool CVMAssetVO::BASAgentStatusHasBeenSet() const
{
    return m_bASAgentStatusHasBeenSet;
}

uint64_t CVMAssetVO::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void CVMAssetVO::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool CVMAssetVO::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

int64_t CVMAssetVO::GetCVMAgentStatus() const
{
    return m_cVMAgentStatus;
}

void CVMAssetVO::SetCVMAgentStatus(const int64_t& _cVMAgentStatus)
{
    m_cVMAgentStatus = _cVMAgentStatus;
    m_cVMAgentStatusHasBeenSet = true;
}

bool CVMAssetVO::CVMAgentStatusHasBeenSet() const
{
    return m_cVMAgentStatusHasBeenSet;
}

int64_t CVMAssetVO::GetCVMStatus() const
{
    return m_cVMStatus;
}

void CVMAssetVO::SetCVMStatus(const int64_t& _cVMStatus)
{
    m_cVMStatus = _cVMStatus;
    m_cVMStatusHasBeenSet = true;
}

bool CVMAssetVO::CVMStatusHasBeenSet() const
{
    return m_cVMStatusHasBeenSet;
}

int64_t CVMAssetVO::GetDefenseModel() const
{
    return m_defenseModel;
}

void CVMAssetVO::SetDefenseModel(const int64_t& _defenseModel)
{
    m_defenseModel = _defenseModel;
    m_defenseModelHasBeenSet = true;
}

bool CVMAssetVO::DefenseModelHasBeenSet() const
{
    return m_defenseModelHasBeenSet;
}

int64_t CVMAssetVO::GetTatStatus() const
{
    return m_tatStatus;
}

void CVMAssetVO::SetTatStatus(const int64_t& _tatStatus)
{
    m_tatStatus = _tatStatus;
    m_tatStatusHasBeenSet = true;
}

bool CVMAssetVO::TatStatusHasBeenSet() const
{
    return m_tatStatusHasBeenSet;
}

vector<Element> CVMAssetVO::GetCpuTrend() const
{
    return m_cpuTrend;
}

void CVMAssetVO::SetCpuTrend(const vector<Element>& _cpuTrend)
{
    m_cpuTrend = _cpuTrend;
    m_cpuTrendHasBeenSet = true;
}

bool CVMAssetVO::CpuTrendHasBeenSet() const
{
    return m_cpuTrendHasBeenSet;
}

vector<Element> CVMAssetVO::GetMemoryTrend() const
{
    return m_memoryTrend;
}

void CVMAssetVO::SetMemoryTrend(const vector<Element>& _memoryTrend)
{
    m_memoryTrend = _memoryTrend;
    m_memoryTrendHasBeenSet = true;
}

bool CVMAssetVO::MemoryTrendHasBeenSet() const
{
    return m_memoryTrendHasBeenSet;
}

int64_t CVMAssetVO::GetAgentStatus() const
{
    return m_agentStatus;
}

void CVMAssetVO::SetAgentStatus(const int64_t& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool CVMAssetVO::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

int64_t CVMAssetVO::GetCloseDefenseCount() const
{
    return m_closeDefenseCount;
}

void CVMAssetVO::SetCloseDefenseCount(const int64_t& _closeDefenseCount)
{
    m_closeDefenseCount = _closeDefenseCount;
    m_closeDefenseCountHasBeenSet = true;
}

bool CVMAssetVO::CloseDefenseCountHasBeenSet() const
{
    return m_closeDefenseCountHasBeenSet;
}

string CVMAssetVO::GetInstanceState() const
{
    return m_instanceState;
}

void CVMAssetVO::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool CVMAssetVO::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

vector<string> CVMAssetVO::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CVMAssetVO::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CVMAssetVO::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

int64_t CVMAssetVO::GetAgentMemRss() const
{
    return m_agentMemRss;
}

void CVMAssetVO::SetAgentMemRss(const int64_t& _agentMemRss)
{
    m_agentMemRss = _agentMemRss;
    m_agentMemRssHasBeenSet = true;
}

bool CVMAssetVO::AgentMemRssHasBeenSet() const
{
    return m_agentMemRssHasBeenSet;
}

double CVMAssetVO::GetAgentCpuPer() const
{
    return m_agentCpuPer;
}

void CVMAssetVO::SetAgentCpuPer(const double& _agentCpuPer)
{
    m_agentCpuPer = _agentCpuPer;
    m_agentCpuPerHasBeenSet = true;
}

bool CVMAssetVO::AgentCpuPerHasBeenSet() const
{
    return m_agentCpuPerHasBeenSet;
}

int64_t CVMAssetVO::GetRealAppid() const
{
    return m_realAppid;
}

void CVMAssetVO::SetRealAppid(const int64_t& _realAppid)
{
    m_realAppid = _realAppid;
    m_realAppidHasBeenSet = true;
}

bool CVMAssetVO::RealAppidHasBeenSet() const
{
    return m_realAppidHasBeenSet;
}

int64_t CVMAssetVO::GetCloudType() const
{
    return m_cloudType;
}

void CVMAssetVO::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool CVMAssetVO::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

int64_t CVMAssetVO::GetProtectStatus() const
{
    return m_protectStatus;
}

void CVMAssetVO::SetProtectStatus(const int64_t& _protectStatus)
{
    m_protectStatus = _protectStatus;
    m_protectStatusHasBeenSet = true;
}

bool CVMAssetVO::ProtectStatusHasBeenSet() const
{
    return m_protectStatusHasBeenSet;
}

string CVMAssetVO::GetOfflineTime() const
{
    return m_offlineTime;
}

void CVMAssetVO::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool CVMAssetVO::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

