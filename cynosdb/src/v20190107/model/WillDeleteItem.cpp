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

#include <tencentcloud/cynosdb/v20190107/model/WillDeleteItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

WillDeleteItem::WillDeleteItem() :
    m_backupIdHasBeenSet(false),
    m_backupNameHasBeenSet(false)
{
}

CoreInternalOutcome WillDeleteItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WillDeleteItem.BackupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = value["BackupId"].GetInt64();
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("BackupName") && !value["BackupName"].IsNull())
    {
        if (!value["BackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WillDeleteItem.BackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupName = string(value["BackupName"].GetString());
        m_backupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WillDeleteItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupId, allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

}


int64_t WillDeleteItem::GetBackupId() const
{
    return m_backupId;
}

void WillDeleteItem::SetBackupId(const int64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool WillDeleteItem::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string WillDeleteItem::GetBackupName() const
{
    return m_backupName;
}

void WillDeleteItem::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool WillDeleteItem::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

