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
using namespace rapidjson;
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
    m_basicSecurityTypeHasBeenSet(false)
{
}

string CreateInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_esVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_esVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargePeriodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargePeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_chargePeriod, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableDedicatedMasterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableDedicatedMaster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDedicatedMaster, allocator);
    }

    if (m_masterNodeNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_masterNodeNum, allocator);
    }

    if (m_masterNodeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterNodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_masterNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_masterNodeDiskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterNodeDiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_masterNodeDiskSize, allocator);
    }

    if (m_clusterNameInConfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterNameInConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterNameInConf.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_multiZoneInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MultiZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiZoneInfo.begin(); itr != m_multiZoneInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_licenseTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInfoListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfoList.begin(); itr != m_nodeInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_basicSecurityTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BasicSecurityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_basicSecurityType, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


