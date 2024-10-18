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

#include <tencentcloud/es/v20180416/model/UpgradeInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpgradeInstanceRequest::UpgradeInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_esVersionHasBeenSet(false),
    m_checkOnlyHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_basicSecurityTypeHasBeenSet(false),
    m_upgradeModeHasBeenSet(false),
    m_cosBackupHasBeenSet(false),
    m_skipCheckForceRestartHasBeenSet(false),
    m_cvmDelayOnlineTimeHasBeenSet(false),
    m_shardAllocationConcurrentsHasBeenSet(false),
    m_shardAllocationBytesHasBeenSet(false),
    m_enableScheduleRecoverGroupHasBeenSet(false),
    m_enableScheduleOperationDurationHasBeenSet(false)
{
}

string UpgradeInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_esVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_esVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_checkOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkOnly, allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_basicSecurityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicSecurityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_basicSecurityType, allocator);
    }

    if (m_upgradeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBackup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cosBackup, allocator);
    }

    if (m_skipCheckForceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipCheckForceRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipCheckForceRestart, allocator);
    }

    if (m_cvmDelayOnlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmDelayOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cvmDelayOnlineTime, allocator);
    }

    if (m_shardAllocationConcurrentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardAllocationConcurrents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardAllocationConcurrents, allocator);
    }

    if (m_shardAllocationBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardAllocationBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardAllocationBytes, allocator);
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


string UpgradeInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeInstanceRequest::GetEsVersion() const
{
    return m_esVersion;
}

void UpgradeInstanceRequest::SetEsVersion(const string& _esVersion)
{
    m_esVersion = _esVersion;
    m_esVersionHasBeenSet = true;
}

bool UpgradeInstanceRequest::EsVersionHasBeenSet() const
{
    return m_esVersionHasBeenSet;
}

bool UpgradeInstanceRequest::GetCheckOnly() const
{
    return m_checkOnly;
}

void UpgradeInstanceRequest::SetCheckOnly(const bool& _checkOnly)
{
    m_checkOnly = _checkOnly;
    m_checkOnlyHasBeenSet = true;
}

bool UpgradeInstanceRequest::CheckOnlyHasBeenSet() const
{
    return m_checkOnlyHasBeenSet;
}

string UpgradeInstanceRequest::GetLicenseType() const
{
    return m_licenseType;
}

void UpgradeInstanceRequest::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool UpgradeInstanceRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

uint64_t UpgradeInstanceRequest::GetBasicSecurityType() const
{
    return m_basicSecurityType;
}

void UpgradeInstanceRequest::SetBasicSecurityType(const uint64_t& _basicSecurityType)
{
    m_basicSecurityType = _basicSecurityType;
    m_basicSecurityTypeHasBeenSet = true;
}

bool UpgradeInstanceRequest::BasicSecurityTypeHasBeenSet() const
{
    return m_basicSecurityTypeHasBeenSet;
}

string UpgradeInstanceRequest::GetUpgradeMode() const
{
    return m_upgradeMode;
}

void UpgradeInstanceRequest::SetUpgradeMode(const string& _upgradeMode)
{
    m_upgradeMode = _upgradeMode;
    m_upgradeModeHasBeenSet = true;
}

bool UpgradeInstanceRequest::UpgradeModeHasBeenSet() const
{
    return m_upgradeModeHasBeenSet;
}

bool UpgradeInstanceRequest::GetCosBackup() const
{
    return m_cosBackup;
}

void UpgradeInstanceRequest::SetCosBackup(const bool& _cosBackup)
{
    m_cosBackup = _cosBackup;
    m_cosBackupHasBeenSet = true;
}

bool UpgradeInstanceRequest::CosBackupHasBeenSet() const
{
    return m_cosBackupHasBeenSet;
}

bool UpgradeInstanceRequest::GetSkipCheckForceRestart() const
{
    return m_skipCheckForceRestart;
}

void UpgradeInstanceRequest::SetSkipCheckForceRestart(const bool& _skipCheckForceRestart)
{
    m_skipCheckForceRestart = _skipCheckForceRestart;
    m_skipCheckForceRestartHasBeenSet = true;
}

bool UpgradeInstanceRequest::SkipCheckForceRestartHasBeenSet() const
{
    return m_skipCheckForceRestartHasBeenSet;
}

uint64_t UpgradeInstanceRequest::GetCvmDelayOnlineTime() const
{
    return m_cvmDelayOnlineTime;
}

void UpgradeInstanceRequest::SetCvmDelayOnlineTime(const uint64_t& _cvmDelayOnlineTime)
{
    m_cvmDelayOnlineTime = _cvmDelayOnlineTime;
    m_cvmDelayOnlineTimeHasBeenSet = true;
}

bool UpgradeInstanceRequest::CvmDelayOnlineTimeHasBeenSet() const
{
    return m_cvmDelayOnlineTimeHasBeenSet;
}

uint64_t UpgradeInstanceRequest::GetShardAllocationConcurrents() const
{
    return m_shardAllocationConcurrents;
}

void UpgradeInstanceRequest::SetShardAllocationConcurrents(const uint64_t& _shardAllocationConcurrents)
{
    m_shardAllocationConcurrents = _shardAllocationConcurrents;
    m_shardAllocationConcurrentsHasBeenSet = true;
}

bool UpgradeInstanceRequest::ShardAllocationConcurrentsHasBeenSet() const
{
    return m_shardAllocationConcurrentsHasBeenSet;
}

uint64_t UpgradeInstanceRequest::GetShardAllocationBytes() const
{
    return m_shardAllocationBytes;
}

void UpgradeInstanceRequest::SetShardAllocationBytes(const uint64_t& _shardAllocationBytes)
{
    m_shardAllocationBytes = _shardAllocationBytes;
    m_shardAllocationBytesHasBeenSet = true;
}

bool UpgradeInstanceRequest::ShardAllocationBytesHasBeenSet() const
{
    return m_shardAllocationBytesHasBeenSet;
}

bool UpgradeInstanceRequest::GetEnableScheduleRecoverGroup() const
{
    return m_enableScheduleRecoverGroup;
}

void UpgradeInstanceRequest::SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup)
{
    m_enableScheduleRecoverGroup = _enableScheduleRecoverGroup;
    m_enableScheduleRecoverGroupHasBeenSet = true;
}

bool UpgradeInstanceRequest::EnableScheduleRecoverGroupHasBeenSet() const
{
    return m_enableScheduleRecoverGroupHasBeenSet;
}

EnableScheduleOperationDuration UpgradeInstanceRequest::GetEnableScheduleOperationDuration() const
{
    return m_enableScheduleOperationDuration;
}

void UpgradeInstanceRequest::SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration)
{
    m_enableScheduleOperationDuration = _enableScheduleOperationDuration;
    m_enableScheduleOperationDurationHasBeenSet = true;
}

bool UpgradeInstanceRequest::EnableScheduleOperationDurationHasBeenSet() const
{
    return m_enableScheduleOperationDurationHasBeenSet;
}


