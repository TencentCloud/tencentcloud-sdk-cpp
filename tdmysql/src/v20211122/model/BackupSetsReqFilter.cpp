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

#include <tencentcloud/tdmysql/v20211122/model/BackupSetsReqFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

BackupSetsReqFilter::BackupSetsReqFilter() :
    m_backupMethodHasBeenSet(false),
    m_backupStatusHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_manualBackupHasBeenSet(false)
{
}

CoreInternalOutcome BackupSetsReqFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetsReqFilter.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("BackupStatus") && !value["BackupStatus"].IsNull())
    {
        if (!value["BackupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetsReqFilter.BackupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupStatus = string(value["BackupStatus"].GetString());
        m_backupStatusHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetsReqFilter.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("ManualBackup") && !value["ManualBackup"].IsNull())
    {
        if (!value["ManualBackup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetsReqFilter.ManualBackup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackup = string(value["ManualBackup"].GetString());
        m_manualBackupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupSetsReqFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_backupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_manualBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manualBackup.c_str(), allocator).Move(), allocator);
    }

}


string BackupSetsReqFilter::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupSetsReqFilter::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupSetsReqFilter::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string BackupSetsReqFilter::GetBackupStatus() const
{
    return m_backupStatus;
}

void BackupSetsReqFilter::SetBackupStatus(const string& _backupStatus)
{
    m_backupStatus = _backupStatus;
    m_backupStatusHasBeenSet = true;
}

bool BackupSetsReqFilter::BackupStatusHasBeenSet() const
{
    return m_backupStatusHasBeenSet;
}

string BackupSetsReqFilter::GetBackupType() const
{
    return m_backupType;
}

void BackupSetsReqFilter::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool BackupSetsReqFilter::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string BackupSetsReqFilter::GetManualBackup() const
{
    return m_manualBackup;
}

void BackupSetsReqFilter::SetManualBackup(const string& _manualBackup)
{
    m_manualBackup = _manualBackup;
    m_manualBackupHasBeenSet = true;
}

bool BackupSetsReqFilter::ManualBackupHasBeenSet() const
{
    return m_manualBackupHasBeenSet;
}

