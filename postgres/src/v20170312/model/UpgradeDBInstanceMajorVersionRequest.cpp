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

#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceMajorVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

UpgradeDBInstanceMajorVersionRequest::UpgradeDBInstanceMajorVersionRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_targetDBKernelVersionHasBeenSet(false),
    m_upgradeCheckHasBeenSet(false),
    m_backupBeforeUpgradeHasBeenSet(false),
    m_statisticsRefreshOptionHasBeenSet(false),
    m_extensionUpgradeOptionHasBeenSet(false),
    m_upgradeTimeOptionHasBeenSet(false),
    m_upgradeTimeBeginHasBeenSet(false),
    m_upgradeTimeEndHasBeenSet(false)
{
}

string UpgradeDBInstanceMajorVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDBKernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDBKernelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetDBKernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeCheck, allocator);
    }

    if (m_backupBeforeUpgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupBeforeUpgrade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupBeforeUpgrade, allocator);
    }

    if (m_statisticsRefreshOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticsRefreshOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_statisticsRefreshOption, allocator);
    }

    if (m_extensionUpgradeOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionUpgradeOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_extensionUpgradeOption, allocator);
    }

    if (m_upgradeTimeOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeTimeOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeTimeOption, allocator);
    }

    if (m_upgradeTimeBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeTimeBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeTimeBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeTimeEnd.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDBInstanceMajorVersionRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void UpgradeDBInstanceMajorVersionRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool UpgradeDBInstanceMajorVersionRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string UpgradeDBInstanceMajorVersionRequest::GetTargetDBKernelVersion() const
{
    return m_targetDBKernelVersion;
}

void UpgradeDBInstanceMajorVersionRequest::SetTargetDBKernelVersion(const string& _targetDBKernelVersion)
{
    m_targetDBKernelVersion = _targetDBKernelVersion;
    m_targetDBKernelVersionHasBeenSet = true;
}

bool UpgradeDBInstanceMajorVersionRequest::TargetDBKernelVersionHasBeenSet() const
{
    return m_targetDBKernelVersionHasBeenSet;
}

bool UpgradeDBInstanceMajorVersionRequest::GetUpgradeCheck() const
{
    return m_upgradeCheck;
}

void UpgradeDBInstanceMajorVersionRequest::SetUpgradeCheck(const bool& _upgradeCheck)
{
    m_upgradeCheck = _upgradeCheck;
    m_upgradeCheckHasBeenSet = true;
}

bool UpgradeDBInstanceMajorVersionRequest::UpgradeCheckHasBeenSet() const
{
    return m_upgradeCheckHasBeenSet;
}

bool UpgradeDBInstanceMajorVersionRequest::GetBackupBeforeUpgrade() const
{
    return m_backupBeforeUpgrade;
}

void UpgradeDBInstanceMajorVersionRequest::SetBackupBeforeUpgrade(const bool& _backupBeforeUpgrade)
{
    m_backupBeforeUpgrade = _backupBeforeUpgrade;
    m_backupBeforeUpgradeHasBeenSet = true;
}

bool UpgradeDBInstanceMajorVersionRequest::BackupBeforeUpgradeHasBeenSet() const
{
    return m_backupBeforeUpgradeHasBeenSet;
}

int64_t UpgradeDBInstanceMajorVersionRequest::GetStatisticsRefreshOption() const
{
    return m_statisticsRefreshOption;
}

void UpgradeDBInstanceMajorVersionRequest::SetStatisticsRefreshOption(const int64_t& _statisticsRefreshOption)
{
    m_statisticsRefreshOption = _statisticsRefreshOption;
    m_statisticsRefreshOptionHasBeenSet = true;
}

bool UpgradeDBInstanceMajorVersionRequest::StatisticsRefreshOptionHasBeenSet() const
{
    return m_statisticsRefreshOptionHasBeenSet;
}

int64_t UpgradeDBInstanceMajorVersionRequest::GetExtensionUpgradeOption() const
{
    return m_extensionUpgradeOption;
}

void UpgradeDBInstanceMajorVersionRequest::SetExtensionUpgradeOption(const int64_t& _extensionUpgradeOption)
{
    m_extensionUpgradeOption = _extensionUpgradeOption;
    m_extensionUpgradeOptionHasBeenSet = true;
}

bool UpgradeDBInstanceMajorVersionRequest::ExtensionUpgradeOptionHasBeenSet() const
{
    return m_extensionUpgradeOptionHasBeenSet;
}

int64_t UpgradeDBInstanceMajorVersionRequest::GetUpgradeTimeOption() const
{
    return m_upgradeTimeOption;
}

void UpgradeDBInstanceMajorVersionRequest::SetUpgradeTimeOption(const int64_t& _upgradeTimeOption)
{
    m_upgradeTimeOption = _upgradeTimeOption;
    m_upgradeTimeOptionHasBeenSet = true;
}

bool UpgradeDBInstanceMajorVersionRequest::UpgradeTimeOptionHasBeenSet() const
{
    return m_upgradeTimeOptionHasBeenSet;
}

string UpgradeDBInstanceMajorVersionRequest::GetUpgradeTimeBegin() const
{
    return m_upgradeTimeBegin;
}

void UpgradeDBInstanceMajorVersionRequest::SetUpgradeTimeBegin(const string& _upgradeTimeBegin)
{
    m_upgradeTimeBegin = _upgradeTimeBegin;
    m_upgradeTimeBeginHasBeenSet = true;
}

bool UpgradeDBInstanceMajorVersionRequest::UpgradeTimeBeginHasBeenSet() const
{
    return m_upgradeTimeBeginHasBeenSet;
}

string UpgradeDBInstanceMajorVersionRequest::GetUpgradeTimeEnd() const
{
    return m_upgradeTimeEnd;
}

void UpgradeDBInstanceMajorVersionRequest::SetUpgradeTimeEnd(const string& _upgradeTimeEnd)
{
    m_upgradeTimeEnd = _upgradeTimeEnd;
    m_upgradeTimeEndHasBeenSet = true;
}

bool UpgradeDBInstanceMajorVersionRequest::UpgradeTimeEndHasBeenSet() const
{
    return m_upgradeTimeEndHasBeenSet;
}


