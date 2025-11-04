/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cynosdb/v20190107/model/CreateIntegrateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateIntegrateClusterRequest::CreateIntegrateClusterRequest() :
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_portHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_storagePayModeHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_alarmPolicyIdsHasBeenSet(false),
    m_clusterParamsHasBeenSet(false),
    m_dealModeHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_instanceInitInfosHasBeenSet(false),
    m_gdnIdHasBeenSet(false),
    m_proxyConfigHasBeenSet(false),
    m_autoArchiveHasBeenSet(false),
    m_autoArchiveDelayHoursHasBeenSet(false),
    m_encryptMethodHasBeenSet(false),
    m_integrateCreateClusterConfigHasBeenSet(false),
    m_storageVersionHasBeenSet(false)
{
}

string CreateIntegrateClusterRequest::ToJsonString() const
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

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
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

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_storagePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storagePayMode, allocator);
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

    if (m_alarmPolicyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmPolicyIds.begin(); itr != m_alarmPolicyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterParams.begin(); itr != m_clusterParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dealModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealMode, allocator);
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_paramTemplateId, allocator);
    }

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceInitInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceInitInfos.begin(); itr != m_instanceInitInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_gdnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GdnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gdnId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_proxyConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoArchiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoArchive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoArchive.c_str(), allocator).Move(), allocator);
    }

    if (m_autoArchiveDelayHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoArchiveDelayHours";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoArchiveDelayHours, allocator);
    }

    if (m_encryptMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_integrateCreateClusterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrateCreateClusterConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_integrateCreateClusterConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_storageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateIntegrateClusterRequest::GetZone() const
{
    return m_zone;
}

void CreateIntegrateClusterRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateIntegrateClusterRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateIntegrateClusterRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateIntegrateClusterRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateIntegrateClusterRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateIntegrateClusterRequest::GetDbVersion() const
{
    return m_dbVersion;
}

void CreateIntegrateClusterRequest::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateIntegrateClusterRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateIntegrateClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateIntegrateClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CreateIntegrateClusterRequest::GetAdminPassword() const
{
    return m_adminPassword;
}

void CreateIntegrateClusterRequest::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetPort() const
{
    return m_port;
}

void CreateIntegrateClusterRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateIntegrateClusterRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetCount() const
{
    return m_count;
}

void CreateIntegrateClusterRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetStorageLimit() const
{
    return m_storageLimit;
}

void CreateIntegrateClusterRequest::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateIntegrateClusterRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateIntegrateClusterRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateIntegrateClusterRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateIntegrateClusterRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateIntegrateClusterRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<Tag> CreateIntegrateClusterRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateIntegrateClusterRequest::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void CreateIntegrateClusterRequest::SetStoragePayMode(const int64_t& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

vector<string> CreateIntegrateClusterRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateIntegrateClusterRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<string> CreateIntegrateClusterRequest::GetAlarmPolicyIds() const
{
    return m_alarmPolicyIds;
}

void CreateIntegrateClusterRequest::SetAlarmPolicyIds(const vector<string>& _alarmPolicyIds)
{
    m_alarmPolicyIds = _alarmPolicyIds;
    m_alarmPolicyIdsHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::AlarmPolicyIdsHasBeenSet() const
{
    return m_alarmPolicyIdsHasBeenSet;
}

vector<ParamItem> CreateIntegrateClusterRequest::GetClusterParams() const
{
    return m_clusterParams;
}

void CreateIntegrateClusterRequest::SetClusterParams(const vector<ParamItem>& _clusterParams)
{
    m_clusterParams = _clusterParams;
    m_clusterParamsHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::ClusterParamsHasBeenSet() const
{
    return m_clusterParamsHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetDealMode() const
{
    return m_dealMode;
}

void CreateIntegrateClusterRequest::SetDealMode(const int64_t& _dealMode)
{
    m_dealMode = _dealMode;
    m_dealModeHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::DealModeHasBeenSet() const
{
    return m_dealModeHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void CreateIntegrateClusterRequest::SetParamTemplateId(const int64_t& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

string CreateIntegrateClusterRequest::GetSlaveZone() const
{
    return m_slaveZone;
}

void CreateIntegrateClusterRequest::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

vector<IntegrateInstanceInfo> CreateIntegrateClusterRequest::GetInstanceInitInfos() const
{
    return m_instanceInitInfos;
}

void CreateIntegrateClusterRequest::SetInstanceInitInfos(const vector<IntegrateInstanceInfo>& _instanceInitInfos)
{
    m_instanceInitInfos = _instanceInitInfos;
    m_instanceInitInfosHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::InstanceInitInfosHasBeenSet() const
{
    return m_instanceInitInfosHasBeenSet;
}

string CreateIntegrateClusterRequest::GetGdnId() const
{
    return m_gdnId;
}

void CreateIntegrateClusterRequest::SetGdnId(const string& _gdnId)
{
    m_gdnId = _gdnId;
    m_gdnIdHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::GdnIdHasBeenSet() const
{
    return m_gdnIdHasBeenSet;
}

ProxyConfigInfo CreateIntegrateClusterRequest::GetProxyConfig() const
{
    return m_proxyConfig;
}

void CreateIntegrateClusterRequest::SetProxyConfig(const ProxyConfigInfo& _proxyConfig)
{
    m_proxyConfig = _proxyConfig;
    m_proxyConfigHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::ProxyConfigHasBeenSet() const
{
    return m_proxyConfigHasBeenSet;
}

string CreateIntegrateClusterRequest::GetAutoArchive() const
{
    return m_autoArchive;
}

void CreateIntegrateClusterRequest::SetAutoArchive(const string& _autoArchive)
{
    m_autoArchive = _autoArchive;
    m_autoArchiveHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::AutoArchiveHasBeenSet() const
{
    return m_autoArchiveHasBeenSet;
}

int64_t CreateIntegrateClusterRequest::GetAutoArchiveDelayHours() const
{
    return m_autoArchiveDelayHours;
}

void CreateIntegrateClusterRequest::SetAutoArchiveDelayHours(const int64_t& _autoArchiveDelayHours)
{
    m_autoArchiveDelayHours = _autoArchiveDelayHours;
    m_autoArchiveDelayHoursHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::AutoArchiveDelayHoursHasBeenSet() const
{
    return m_autoArchiveDelayHoursHasBeenSet;
}

string CreateIntegrateClusterRequest::GetEncryptMethod() const
{
    return m_encryptMethod;
}

void CreateIntegrateClusterRequest::SetEncryptMethod(const string& _encryptMethod)
{
    m_encryptMethod = _encryptMethod;
    m_encryptMethodHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::EncryptMethodHasBeenSet() const
{
    return m_encryptMethodHasBeenSet;
}

IntegrateCreateClusterConfig CreateIntegrateClusterRequest::GetIntegrateCreateClusterConfig() const
{
    return m_integrateCreateClusterConfig;
}

void CreateIntegrateClusterRequest::SetIntegrateCreateClusterConfig(const IntegrateCreateClusterConfig& _integrateCreateClusterConfig)
{
    m_integrateCreateClusterConfig = _integrateCreateClusterConfig;
    m_integrateCreateClusterConfigHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::IntegrateCreateClusterConfigHasBeenSet() const
{
    return m_integrateCreateClusterConfigHasBeenSet;
}

string CreateIntegrateClusterRequest::GetStorageVersion() const
{
    return m_storageVersion;
}

void CreateIntegrateClusterRequest::SetStorageVersion(const string& _storageVersion)
{
    m_storageVersion = _storageVersion;
    m_storageVersionHasBeenSet = true;
}

bool CreateIntegrateClusterRequest::StorageVersionHasBeenSet() const
{
    return m_storageVersionHasBeenSet;
}


