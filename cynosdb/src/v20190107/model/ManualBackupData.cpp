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

#include <tencentcloud/cynosdb/v20190107/model/ManualBackupData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ManualBackupData::ManualBackupData() :
    m_backupTypeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_snapshotTimeHasBeenSet(false),
    m_crossRegionBackupInfosHasBeenSet(false)
{
}

CoreInternalOutcome ManualBackupData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualBackupData.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualBackupData.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTime") && !value["SnapshotTime"].IsNull())
    {
        if (!value["SnapshotTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManualBackupData.SnapshotTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTime = string(value["SnapshotTime"].GetString());
        m_snapshotTimeHasBeenSet = true;
    }

    if (value.HasMember("CrossRegionBackupInfos") && !value["CrossRegionBackupInfos"].IsNull())
    {
        if (!value["CrossRegionBackupInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManualBackupData.CrossRegionBackupInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["CrossRegionBackupInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CrossRegionBackupItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_crossRegionBackupInfos.push_back(item);
        }
        m_crossRegionBackupInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManualBackupData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_snapshotTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotTime.c_str(), allocator).Move(), allocator);
    }

    if (m_crossRegionBackupInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegionBackupInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_crossRegionBackupInfos.begin(); itr != m_crossRegionBackupInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ManualBackupData::GetBackupType() const
{
    return m_backupType;
}

void ManualBackupData::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool ManualBackupData::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string ManualBackupData::GetBackupMethod() const
{
    return m_backupMethod;
}

void ManualBackupData::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool ManualBackupData::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string ManualBackupData::GetSnapshotTime() const
{
    return m_snapshotTime;
}

void ManualBackupData::SetSnapshotTime(const string& _snapshotTime)
{
    m_snapshotTime = _snapshotTime;
    m_snapshotTimeHasBeenSet = true;
}

bool ManualBackupData::SnapshotTimeHasBeenSet() const
{
    return m_snapshotTimeHasBeenSet;
}

vector<CrossRegionBackupItem> ManualBackupData::GetCrossRegionBackupInfos() const
{
    return m_crossRegionBackupInfos;
}

void ManualBackupData::SetCrossRegionBackupInfos(const vector<CrossRegionBackupItem>& _crossRegionBackupInfos)
{
    m_crossRegionBackupInfos = _crossRegionBackupInfos;
    m_crossRegionBackupInfosHasBeenSet = true;
}

bool ManualBackupData::CrossRegionBackupInfosHasBeenSet() const
{
    return m_crossRegionBackupInfosHasBeenSet;
}

