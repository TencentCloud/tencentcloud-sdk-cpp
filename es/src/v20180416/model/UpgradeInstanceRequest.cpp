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
    m_skipCheckForceRestartHasBeenSet(false)
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


