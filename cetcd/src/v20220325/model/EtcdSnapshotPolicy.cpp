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

#include <tencentcloud/cetcd/v20220325/model/EtcdSnapshotPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

EtcdSnapshotPolicy::EtcdSnapshotPolicy() :
    m_nameHasBeenSet(false),
    m_backupSettingsHasBeenSet(false)
{
}

CoreInternalOutcome EtcdSnapshotPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdSnapshotPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BackupSettings") && !value["BackupSettings"].IsNull())
    {
        if (!value["BackupSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdSnapshotPolicy.BackupSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupSettings.Deserialize(value["BackupSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EtcdSnapshotPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EtcdSnapshotPolicy::GetName() const
{
    return m_name;
}

void EtcdSnapshotPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EtcdSnapshotPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

EtcdBackupSettings EtcdSnapshotPolicy::GetBackupSettings() const
{
    return m_backupSettings;
}

void EtcdSnapshotPolicy::SetBackupSettings(const EtcdBackupSettings& _backupSettings)
{
    m_backupSettings = _backupSettings;
    m_backupSettingsHasBeenSet = true;
}

bool EtcdSnapshotPolicy::BackupSettingsHasBeenSet() const
{
    return m_backupSettingsHasBeenSet;
}

