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

#include <tencentcloud/postgres/v20170312/model/CreateInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

CreateInstancesRequest::CreateInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_specCodeHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_adminNameHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_dBMajorVersionHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_dBKernelVersionHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dBNodeSetHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_needSupportTDEHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_kMSRegionHasBeenSet(false),
    m_kMSClusterIdHasBeenSet(false),
    m_dBEngineHasBeenSet(false),
    m_dBEngineConfigHasBeenSet(false),
    m_syncModeHasBeenSet(false),
    m_needSupportIpv6HasBeenSet(false)
{
}

string CreateInstancesRequest::ToJsonString() const
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

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_charsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Charset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_charset.c_str(), allocator).Move(), allocator);
    }

    if (m_adminNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_dBMajorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBMajorVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBMajorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBKernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBKernelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBKernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
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

    if (m_dBNodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBNodeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBNodeSet.begin(); itr != m_dBNodeSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_activityId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_needSupportTDEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSupportTDE";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSupportTDE, allocator);
    }

    if (m_kMSKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KMSKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kMSKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_kMSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KMSRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kMSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_kMSClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KMSClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kMSClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBEngine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_dBEngineConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBEngineConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBEngineConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_syncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_syncMode.c_str(), allocator).Move(), allocator);
    }

    if (m_needSupportIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSupportIpv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSupportIpv6, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstancesRequest::GetZone() const
{
    return m_zone;
}

void CreateInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateInstancesRequest::GetSpecCode() const
{
    return m_specCode;
}

void CreateInstancesRequest::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool CreateInstancesRequest::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

uint64_t CreateInstancesRequest::GetStorage() const
{
    return m_storage;
}

void CreateInstancesRequest::SetStorage(const uint64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateInstancesRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

uint64_t CreateInstancesRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateInstancesRequest::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

uint64_t CreateInstancesRequest::GetPeriod() const
{
    return m_period;
}

void CreateInstancesRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateInstancesRequest::GetCharset() const
{
    return m_charset;
}

void CreateInstancesRequest::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool CreateInstancesRequest::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}

string CreateInstancesRequest::GetAdminName() const
{
    return m_adminName;
}

void CreateInstancesRequest::SetAdminName(const string& _adminName)
{
    m_adminName = _adminName;
    m_adminNameHasBeenSet = true;
}

bool CreateInstancesRequest::AdminNameHasBeenSet() const
{
    return m_adminNameHasBeenSet;
}

string CreateInstancesRequest::GetAdminPassword() const
{
    return m_adminPassword;
}

void CreateInstancesRequest::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool CreateInstancesRequest::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

string CreateInstancesRequest::GetDBMajorVersion() const
{
    return m_dBMajorVersion;
}

void CreateInstancesRequest::SetDBMajorVersion(const string& _dBMajorVersion)
{
    m_dBMajorVersion = _dBMajorVersion;
    m_dBMajorVersionHasBeenSet = true;
}

bool CreateInstancesRequest::DBMajorVersionHasBeenSet() const
{
    return m_dBMajorVersionHasBeenSet;
}

string CreateInstancesRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void CreateInstancesRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool CreateInstancesRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string CreateInstancesRequest::GetDBKernelVersion() const
{
    return m_dBKernelVersion;
}

void CreateInstancesRequest::SetDBKernelVersion(const string& _dBKernelVersion)
{
    m_dBKernelVersion = _dBKernelVersion;
    m_dBKernelVersionHasBeenSet = true;
}

bool CreateInstancesRequest::DBKernelVersionHasBeenSet() const
{
    return m_dBKernelVersionHasBeenSet;
}

string CreateInstancesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateInstancesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string CreateInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<DBNode> CreateInstancesRequest::GetDBNodeSet() const
{
    return m_dBNodeSet;
}

void CreateInstancesRequest::SetDBNodeSet(const vector<DBNode>& _dBNodeSet)
{
    m_dBNodeSet = _dBNodeSet;
    m_dBNodeSetHasBeenSet = true;
}

bool CreateInstancesRequest::DBNodeSetHasBeenSet() const
{
    return m_dBNodeSetHasBeenSet;
}

int64_t CreateInstancesRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateInstancesRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateInstancesRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t CreateInstancesRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateInstancesRequest::SetAutoVoucher(const uint64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateInstancesRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateInstancesRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateInstancesRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateInstancesRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

int64_t CreateInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateInstancesRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateInstancesRequest::GetActivityId() const
{
    return m_activityId;
}

void CreateInstancesRequest::SetActivityId(const int64_t& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool CreateInstancesRequest::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string CreateInstancesRequest::GetName() const
{
    return m_name;
}

void CreateInstancesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateInstancesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Tag> CreateInstancesRequest::GetTagList() const
{
    return m_tagList;
}

void CreateInstancesRequest::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateInstancesRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

vector<string> CreateInstancesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateInstancesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateInstancesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

uint64_t CreateInstancesRequest::GetNeedSupportTDE() const
{
    return m_needSupportTDE;
}

void CreateInstancesRequest::SetNeedSupportTDE(const uint64_t& _needSupportTDE)
{
    m_needSupportTDE = _needSupportTDE;
    m_needSupportTDEHasBeenSet = true;
}

bool CreateInstancesRequest::NeedSupportTDEHasBeenSet() const
{
    return m_needSupportTDEHasBeenSet;
}

string CreateInstancesRequest::GetKMSKeyId() const
{
    return m_kMSKeyId;
}

void CreateInstancesRequest::SetKMSKeyId(const string& _kMSKeyId)
{
    m_kMSKeyId = _kMSKeyId;
    m_kMSKeyIdHasBeenSet = true;
}

bool CreateInstancesRequest::KMSKeyIdHasBeenSet() const
{
    return m_kMSKeyIdHasBeenSet;
}

string CreateInstancesRequest::GetKMSRegion() const
{
    return m_kMSRegion;
}

void CreateInstancesRequest::SetKMSRegion(const string& _kMSRegion)
{
    m_kMSRegion = _kMSRegion;
    m_kMSRegionHasBeenSet = true;
}

bool CreateInstancesRequest::KMSRegionHasBeenSet() const
{
    return m_kMSRegionHasBeenSet;
}

string CreateInstancesRequest::GetKMSClusterId() const
{
    return m_kMSClusterId;
}

void CreateInstancesRequest::SetKMSClusterId(const string& _kMSClusterId)
{
    m_kMSClusterId = _kMSClusterId;
    m_kMSClusterIdHasBeenSet = true;
}

bool CreateInstancesRequest::KMSClusterIdHasBeenSet() const
{
    return m_kMSClusterIdHasBeenSet;
}

string CreateInstancesRequest::GetDBEngine() const
{
    return m_dBEngine;
}

void CreateInstancesRequest::SetDBEngine(const string& _dBEngine)
{
    m_dBEngine = _dBEngine;
    m_dBEngineHasBeenSet = true;
}

bool CreateInstancesRequest::DBEngineHasBeenSet() const
{
    return m_dBEngineHasBeenSet;
}

string CreateInstancesRequest::GetDBEngineConfig() const
{
    return m_dBEngineConfig;
}

void CreateInstancesRequest::SetDBEngineConfig(const string& _dBEngineConfig)
{
    m_dBEngineConfig = _dBEngineConfig;
    m_dBEngineConfigHasBeenSet = true;
}

bool CreateInstancesRequest::DBEngineConfigHasBeenSet() const
{
    return m_dBEngineConfigHasBeenSet;
}

string CreateInstancesRequest::GetSyncMode() const
{
    return m_syncMode;
}

void CreateInstancesRequest::SetSyncMode(const string& _syncMode)
{
    m_syncMode = _syncMode;
    m_syncModeHasBeenSet = true;
}

bool CreateInstancesRequest::SyncModeHasBeenSet() const
{
    return m_syncModeHasBeenSet;
}

uint64_t CreateInstancesRequest::GetNeedSupportIpv6() const
{
    return m_needSupportIpv6;
}

void CreateInstancesRequest::SetNeedSupportIpv6(const uint64_t& _needSupportIpv6)
{
    m_needSupportIpv6 = _needSupportIpv6;
    m_needSupportIpv6HasBeenSet = true;
}

bool CreateInstancesRequest::NeedSupportIpv6HasBeenSet() const
{
    return m_needSupportIpv6HasBeenSet;
}


