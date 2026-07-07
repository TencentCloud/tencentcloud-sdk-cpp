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

#include <tencentcloud/cynosdb/v20190107/model/BackupVolumeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BackupVolumeInfo::BackupVolumeInfo() :
    m_backupVolumeHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_backupMethodHasBeenSet(false)
{
}

CoreInternalOutcome BackupVolumeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupVolume") && !value["BackupVolume"].IsNull())
    {
        if (!value["BackupVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVolumeInfo.BackupVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_backupVolume = value["BackupVolume"].GetDouble();
        m_backupVolumeHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVolumeInfo.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVolumeInfo.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupVolumeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupVolume, allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

}


double BackupVolumeInfo::GetBackupVolume() const
{
    return m_backupVolume;
}

void BackupVolumeInfo::SetBackupVolume(const double& _backupVolume)
{
    m_backupVolume = _backupVolume;
    m_backupVolumeHasBeenSet = true;
}

bool BackupVolumeInfo::BackupVolumeHasBeenSet() const
{
    return m_backupVolumeHasBeenSet;
}

string BackupVolumeInfo::GetBackupType() const
{
    return m_backupType;
}

void BackupVolumeInfo::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool BackupVolumeInfo::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string BackupVolumeInfo::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupVolumeInfo::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupVolumeInfo::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

