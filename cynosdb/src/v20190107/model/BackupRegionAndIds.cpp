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

#include <tencentcloud/cynosdb/v20190107/model/BackupRegionAndIds.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BackupRegionAndIds::BackupRegionAndIds() :
    m_backupRegionHasBeenSet(false),
    m_backupIdHasBeenSet(false)
{
}

CoreInternalOutcome BackupRegionAndIds::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupRegion") && !value["BackupRegion"].IsNull())
    {
        if (!value["BackupRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRegionAndIds.BackupRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupRegion = string(value["BackupRegion"].GetString());
        m_backupRegionHasBeenSet = true;
    }

    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRegionAndIds.BackupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = value["BackupId"].GetInt64();
        m_backupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupRegionAndIds::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupId, allocator);
    }

}


string BackupRegionAndIds::GetBackupRegion() const
{
    return m_backupRegion;
}

void BackupRegionAndIds::SetBackupRegion(const string& _backupRegion)
{
    m_backupRegion = _backupRegion;
    m_backupRegionHasBeenSet = true;
}

bool BackupRegionAndIds::BackupRegionHasBeenSet() const
{
    return m_backupRegionHasBeenSet;
}

int64_t BackupRegionAndIds::GetBackupId() const
{
    return m_backupId;
}

void BackupRegionAndIds::SetBackupId(const int64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool BackupRegionAndIds::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

