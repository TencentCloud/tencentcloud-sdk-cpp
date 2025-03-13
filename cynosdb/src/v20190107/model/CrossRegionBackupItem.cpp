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

#include <tencentcloud/cynosdb/v20190107/model/CrossRegionBackupItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CrossRegionBackupItem::CrossRegionBackupItem() :
    m_crossRegionHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_backupStatusHasBeenSet(false)
{
}

CoreInternalOutcome CrossRegionBackupItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CrossRegion") && !value["CrossRegion"].IsNull())
    {
        if (!value["CrossRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossRegionBackupItem.CrossRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossRegion = string(value["CrossRegion"].GetString());
        m_crossRegionHasBeenSet = true;
    }

    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossRegionBackupItem.BackupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = value["BackupId"].GetInt64();
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("BackupStatus") && !value["BackupStatus"].IsNull())
    {
        if (!value["BackupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossRegionBackupItem.BackupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupStatus = string(value["BackupStatus"].GetString());
        m_backupStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrossRegionBackupItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_crossRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupId, allocator);
    }

    if (m_backupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupStatus.c_str(), allocator).Move(), allocator);
    }

}


string CrossRegionBackupItem::GetCrossRegion() const
{
    return m_crossRegion;
}

void CrossRegionBackupItem::SetCrossRegion(const string& _crossRegion)
{
    m_crossRegion = _crossRegion;
    m_crossRegionHasBeenSet = true;
}

bool CrossRegionBackupItem::CrossRegionHasBeenSet() const
{
    return m_crossRegionHasBeenSet;
}

int64_t CrossRegionBackupItem::GetBackupId() const
{
    return m_backupId;
}

void CrossRegionBackupItem::SetBackupId(const int64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool CrossRegionBackupItem::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string CrossRegionBackupItem::GetBackupStatus() const
{
    return m_backupStatus;
}

void CrossRegionBackupItem::SetBackupStatus(const string& _backupStatus)
{
    m_backupStatus = _backupStatus;
    m_backupStatusHasBeenSet = true;
}

bool CrossRegionBackupItem::BackupStatusHasBeenSet() const
{
    return m_backupStatusHasBeenSet;
}

