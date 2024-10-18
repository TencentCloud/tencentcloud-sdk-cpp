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

#include <tencentcloud/es/v20180416/model/CreateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CreateInstanceRequest::CreateInstanceRequest() :
    m_zoneHasBeenSet(false),
    m_esVersionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_chargePeriodHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_enableDedicatedMasterHasBeenSet(false),
    m_masterNodeNumHasBeenSet(false),
    m_masterNodeTypeHasBeenSet(false),
    m_masterNodeDiskSizeHasBeenSet(false),
    m_clusterNameInConfHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_multiZoneInfoHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_nodeInfoListHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_basicSecurityTypeHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_webNodeTypeInfoHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_operationDurationHasBeenSet(false),
    m_enableHybridStorageHasBeenSet(false),
    m_diskEnhanceHasBeenSet(false),
    m_enableDiagnoseHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_disasterRecoverGroupAffinityHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_readWriteModeHasBeenSet(false),
    m_enableScheduleRecoverGroupHasBeenSet(false),
    m_enableScheduleOperationDurationHasBeenSet(false)
{
}

string CreateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_esVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_esVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargePeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_chargePeriod, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableDedicatedMasterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDedicatedMaster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDedicatedMaster, allocator);
    }

    if (m_masterNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_masterNodeNum, allocator);
    }

    if (m_masterNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_masterNodeDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNodeDiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_masterNodeDiskSize, allocator);
    }

    if (m_clusterNameInConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNameInConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterNameInConf.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_multiZoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiZoneInfo.begin(); itr != m_multiZoneInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfoList.begin(); itr != m_nodeInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_basicSecurityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicSecurityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_basicSecurityType, allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneType, allocator);
    }

    if (m_webNodeTypeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebNodeTypeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webNodeTypeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_operationDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operationDuration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableHybridStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHybridStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableHybridStorage, allocator);
    }

    if (m_diskEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskEnhance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskEnhance, allocator);
    }

    if (m_enableDiagnoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDiagnose";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDiagnose, allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_disasterRecoverGroupAffinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupAffinity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disasterRecoverGroupAffinity, allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_readWriteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadWriteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readWriteMode, allocator);
    }

    if (m_enableScheduleRecoverGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScheduleRecoverGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableScheduleRecoverGroup, allocator);
    }

    if (m_enableScheduleOperationDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScheduleOperationDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enableScheduleOperationDuration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateInstanceRequest::GetEsVersion() const
{
    return m_esVersion;
}

void CreateInstanceRequest::SetEsVersion(const string& _esVersion)
{
    m_esVersion = _esVersion;
    m_esVersionHasBeenSet = true;
}

bool CreateInstanceRequest::EsVersionHasBeenSet() const
{
    return m_esVersionHasBeenSet;
}

string CreateInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateInstanceRequest::GetPassword() const
{
    return m_password;
}

void CreateInstanceRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateInstanceRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t CreateInstanceRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void CreateInstanceRequest::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool CreateInstanceRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

string CreateInstanceRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateInstanceRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateInstanceRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

uint64_t CreateInstanceRequest::GetChargePeriod() const
{
    return m_chargePeriod;
}

void CreateInstanceRequest::SetChargePeriod(const uint64_t& _chargePeriod)
{
    m_chargePeriod = _chargePeriod;
    m_chargePeriodHasBeenSet = true;
}

bool CreateInstanceRequest::ChargePeriodHasBeenSet() const
{
    return m_chargePeriodHasBeenSet;
}

string CreateInstanceRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void CreateInstanceRequest::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CreateInstanceRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string CreateInstanceRequest::GetNodeType() const
{
    return m_nodeType;
}

void CreateInstanceRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool CreateInstanceRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string CreateInstanceRequest::GetDiskType() const
{
    return m_diskType;
}

void CreateInstanceRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CreateInstanceRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t CreateInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateInstanceRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string CreateInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t CreateInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateInstanceRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateInstanceRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateInstanceRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateInstanceRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

bool CreateInstanceRequest::GetEnableDedicatedMaster() const
{
    return m_enableDedicatedMaster;
}

void CreateInstanceRequest::SetEnableDedicatedMaster(const bool& _enableDedicatedMaster)
{
    m_enableDedicatedMaster = _enableDedicatedMaster;
    m_enableDedicatedMasterHasBeenSet = true;
}

bool CreateInstanceRequest::EnableDedicatedMasterHasBeenSet() const
{
    return m_enableDedicatedMasterHasBeenSet;
}

uint64_t CreateInstanceRequest::GetMasterNodeNum() const
{
    return m_masterNodeNum;
}

void CreateInstanceRequest::SetMasterNodeNum(const uint64_t& _masterNodeNum)
{
    m_masterNodeNum = _masterNodeNum;
    m_masterNodeNumHasBeenSet = true;
}

bool CreateInstanceRequest::MasterNodeNumHasBeenSet() const
{
    return m_masterNodeNumHasBeenSet;
}

string CreateInstanceRequest::GetMasterNodeType() const
{
    return m_masterNodeType;
}

void CreateInstanceRequest::SetMasterNodeType(const string& _masterNodeType)
{
    m_masterNodeType = _masterNodeType;
    m_masterNodeTypeHasBeenSet = true;
}

bool CreateInstanceRequest::MasterNodeTypeHasBeenSet() const
{
    return m_masterNodeTypeHasBeenSet;
}

uint64_t CreateInstanceRequest::GetMasterNodeDiskSize() const
{
    return m_masterNodeDiskSize;
}

void CreateInstanceRequest::SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize)
{
    m_masterNodeDiskSize = _masterNodeDiskSize;
    m_masterNodeDiskSizeHasBeenSet = true;
}

bool CreateInstanceRequest::MasterNodeDiskSizeHasBeenSet() const
{
    return m_masterNodeDiskSizeHasBeenSet;
}

string CreateInstanceRequest::GetClusterNameInConf() const
{
    return m_clusterNameInConf;
}

void CreateInstanceRequest::SetClusterNameInConf(const string& _clusterNameInConf)
{
    m_clusterNameInConf = _clusterNameInConf;
    m_clusterNameInConfHasBeenSet = true;
}

bool CreateInstanceRequest::ClusterNameInConfHasBeenSet() const
{
    return m_clusterNameInConfHasBeenSet;
}

uint64_t CreateInstanceRequest::GetDeployMode() const
{
    return m_deployMode;
}

void CreateInstanceRequest::SetDeployMode(const uint64_t& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool CreateInstanceRequest::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

vector<ZoneDetail> CreateInstanceRequest::GetMultiZoneInfo() const
{
    return m_multiZoneInfo;
}

void CreateInstanceRequest::SetMultiZoneInfo(const vector<ZoneDetail>& _multiZoneInfo)
{
    m_multiZoneInfo = _multiZoneInfo;
    m_multiZoneInfoHasBeenSet = true;
}

bool CreateInstanceRequest::MultiZoneInfoHasBeenSet() const
{
    return m_multiZoneInfoHasBeenSet;
}

string CreateInstanceRequest::GetLicenseType() const
{
    return m_licenseType;
}

void CreateInstanceRequest::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool CreateInstanceRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

vector<NodeInfo> CreateInstanceRequest::GetNodeInfoList() const
{
    return m_nodeInfoList;
}

void CreateInstanceRequest::SetNodeInfoList(const vector<NodeInfo>& _nodeInfoList)
{
    m_nodeInfoList = _nodeInfoList;
    m_nodeInfoListHasBeenSet = true;
}

bool CreateInstanceRequest::NodeInfoListHasBeenSet() const
{
    return m_nodeInfoListHasBeenSet;
}

vector<TagInfo> CreateInstanceRequest::GetTagList() const
{
    return m_tagList;
}

void CreateInstanceRequest::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateInstanceRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

uint64_t CreateInstanceRequest::GetBasicSecurityType() const
{
    return m_basicSecurityType;
}

void CreateInstanceRequest::SetBasicSecurityType(const uint64_t& _basicSecurityType)
{
    m_basicSecurityType = _basicSecurityType;
    m_basicSecurityTypeHasBeenSet = true;
}

bool CreateInstanceRequest::BasicSecurityTypeHasBeenSet() const
{
    return m_basicSecurityTypeHasBeenSet;
}

int64_t CreateInstanceRequest::GetSceneType() const
{
    return m_sceneType;
}

void CreateInstanceRequest::SetSceneType(const int64_t& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool CreateInstanceRequest::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

WebNodeTypeInfo CreateInstanceRequest::GetWebNodeTypeInfo() const
{
    return m_webNodeTypeInfo;
}

void CreateInstanceRequest::SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo)
{
    m_webNodeTypeInfo = _webNodeTypeInfo;
    m_webNodeTypeInfoHasBeenSet = true;
}

bool CreateInstanceRequest::WebNodeTypeInfoHasBeenSet() const
{
    return m_webNodeTypeInfoHasBeenSet;
}

string CreateInstanceRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateInstanceRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateInstanceRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

OperationDuration CreateInstanceRequest::GetOperationDuration() const
{
    return m_operationDuration;
}

void CreateInstanceRequest::SetOperationDuration(const OperationDuration& _operationDuration)
{
    m_operationDuration = _operationDuration;
    m_operationDurationHasBeenSet = true;
}

bool CreateInstanceRequest::OperationDurationHasBeenSet() const
{
    return m_operationDurationHasBeenSet;
}

bool CreateInstanceRequest::GetEnableHybridStorage() const
{
    return m_enableHybridStorage;
}

void CreateInstanceRequest::SetEnableHybridStorage(const bool& _enableHybridStorage)
{
    m_enableHybridStorage = _enableHybridStorage;
    m_enableHybridStorageHasBeenSet = true;
}

bool CreateInstanceRequest::EnableHybridStorageHasBeenSet() const
{
    return m_enableHybridStorageHasBeenSet;
}

uint64_t CreateInstanceRequest::GetDiskEnhance() const
{
    return m_diskEnhance;
}

void CreateInstanceRequest::SetDiskEnhance(const uint64_t& _diskEnhance)
{
    m_diskEnhance = _diskEnhance;
    m_diskEnhanceHasBeenSet = true;
}

bool CreateInstanceRequest::DiskEnhanceHasBeenSet() const
{
    return m_diskEnhanceHasBeenSet;
}

bool CreateInstanceRequest::GetEnableDiagnose() const
{
    return m_enableDiagnose;
}

void CreateInstanceRequest::SetEnableDiagnose(const bool& _enableDiagnose)
{
    m_enableDiagnose = _enableDiagnose;
    m_enableDiagnoseHasBeenSet = true;
}

bool CreateInstanceRequest::EnableDiagnoseHasBeenSet() const
{
    return m_enableDiagnoseHasBeenSet;
}

string CreateInstanceRequest::GetCdcId() const
{
    return m_cdcId;
}

void CreateInstanceRequest::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool CreateInstanceRequest::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

uint64_t CreateInstanceRequest::GetDisasterRecoverGroupAffinity() const
{
    return m_disasterRecoverGroupAffinity;
}

void CreateInstanceRequest::SetDisasterRecoverGroupAffinity(const uint64_t& _disasterRecoverGroupAffinity)
{
    m_disasterRecoverGroupAffinity = _disasterRecoverGroupAffinity;
    m_disasterRecoverGroupAffinityHasBeenSet = true;
}

bool CreateInstanceRequest::DisasterRecoverGroupAffinityHasBeenSet() const
{
    return m_disasterRecoverGroupAffinityHasBeenSet;
}

string CreateInstanceRequest::GetSubProductCode() const
{
    return m_subProductCode;
}

void CreateInstanceRequest::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool CreateInstanceRequest::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

int64_t CreateInstanceRequest::GetReadWriteMode() const
{
    return m_readWriteMode;
}

void CreateInstanceRequest::SetReadWriteMode(const int64_t& _readWriteMode)
{
    m_readWriteMode = _readWriteMode;
    m_readWriteModeHasBeenSet = true;
}

bool CreateInstanceRequest::ReadWriteModeHasBeenSet() const
{
    return m_readWriteModeHasBeenSet;
}

bool CreateInstanceRequest::GetEnableScheduleRecoverGroup() const
{
    return m_enableScheduleRecoverGroup;
}

void CreateInstanceRequest::SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup)
{
    m_enableScheduleRecoverGroup = _enableScheduleRecoverGroup;
    m_enableScheduleRecoverGroupHasBeenSet = true;
}

bool CreateInstanceRequest::EnableScheduleRecoverGroupHasBeenSet() const
{
    return m_enableScheduleRecoverGroupHasBeenSet;
}

EnableScheduleOperationDuration CreateInstanceRequest::GetEnableScheduleOperationDuration() const
{
    return m_enableScheduleOperationDuration;
}

void CreateInstanceRequest::SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration)
{
    m_enableScheduleOperationDuration = _enableScheduleOperationDuration;
    m_enableScheduleOperationDurationHasBeenSet = true;
}

bool CreateInstanceRequest::EnableScheduleOperationDurationHasBeenSet() const
{
    return m_enableScheduleOperationDurationHasBeenSet;
}


