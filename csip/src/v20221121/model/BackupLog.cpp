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

#include <tencentcloud/csip/v20221121/model/BackupLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BackupLog::BackupLog() :
    m_idHasBeenSet(false),
    m_indexStartTimeHasBeenSet(false),
    m_indexEndTimeHasBeenSet(false),
    m_backupSizeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_restoreProcessRemindTimeHasBeenSet(false),
    m_restoreRemindTimeHasBeenSet(false),
    m_restoreIndexSizeHasBeenSet(false),
    m_restoreEndTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome BackupLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IndexStartTime") && !value["IndexStartTime"].IsNull())
    {
        if (!value["IndexStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.IndexStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexStartTime = value["IndexStartTime"].GetInt64();
        m_indexStartTimeHasBeenSet = true;
    }

    if (value.HasMember("IndexEndTime") && !value["IndexEndTime"].IsNull())
    {
        if (!value["IndexEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.IndexEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexEndTime = value["IndexEndTime"].GetInt64();
        m_indexEndTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupSize") && !value["BackupSize"].IsNull())
    {
        if (!value["BackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.BackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSize = value["BackupSize"].GetInt64();
        m_backupSizeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RestoreProcessRemindTime") && !value["RestoreProcessRemindTime"].IsNull())
    {
        if (!value["RestoreProcessRemindTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.RestoreProcessRemindTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreProcessRemindTime = value["RestoreProcessRemindTime"].GetInt64();
        m_restoreProcessRemindTimeHasBeenSet = true;
    }

    if (value.HasMember("RestoreRemindTime") && !value["RestoreRemindTime"].IsNull())
    {
        if (!value["RestoreRemindTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.RestoreRemindTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreRemindTime = value["RestoreRemindTime"].GetInt64();
        m_restoreRemindTimeHasBeenSet = true;
    }

    if (value.HasMember("RestoreIndexSize") && !value["RestoreIndexSize"].IsNull())
    {
        if (!value["RestoreIndexSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.RestoreIndexSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreIndexSize = value["RestoreIndexSize"].GetInt64();
        m_restoreIndexSizeHasBeenSet = true;
    }

    if (value.HasMember("RestoreEndTime") && !value["RestoreEndTime"].IsNull())
    {
        if (!value["RestoreEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.RestoreEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreEndTime = value["RestoreEndTime"].GetInt64();
        m_restoreEndTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.AssetId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = value["AssetId"].GetUint64();
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLog.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_indexStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexStartTime, allocator);
    }

    if (m_indexEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexEndTime, allocator);
    }

    if (m_backupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSize, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_restoreProcessRemindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreProcessRemindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreProcessRemindTime, allocator);
    }

    if (m_restoreRemindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreRemindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreRemindTime, allocator);
    }

    if (m_restoreIndexSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreIndexSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreIndexSize, allocator);
    }

    if (m_restoreEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreEndTime, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetId, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


int64_t BackupLog::GetId() const
{
    return m_id;
}

void BackupLog::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BackupLog::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t BackupLog::GetIndexStartTime() const
{
    return m_indexStartTime;
}

void BackupLog::SetIndexStartTime(const int64_t& _indexStartTime)
{
    m_indexStartTime = _indexStartTime;
    m_indexStartTimeHasBeenSet = true;
}

bool BackupLog::IndexStartTimeHasBeenSet() const
{
    return m_indexStartTimeHasBeenSet;
}

int64_t BackupLog::GetIndexEndTime() const
{
    return m_indexEndTime;
}

void BackupLog::SetIndexEndTime(const int64_t& _indexEndTime)
{
    m_indexEndTime = _indexEndTime;
    m_indexEndTimeHasBeenSet = true;
}

bool BackupLog::IndexEndTimeHasBeenSet() const
{
    return m_indexEndTimeHasBeenSet;
}

int64_t BackupLog::GetBackupSize() const
{
    return m_backupSize;
}

void BackupLog::SetBackupSize(const int64_t& _backupSize)
{
    m_backupSize = _backupSize;
    m_backupSizeHasBeenSet = true;
}

bool BackupLog::BackupSizeHasBeenSet() const
{
    return m_backupSizeHasBeenSet;
}

int64_t BackupLog::GetStatus() const
{
    return m_status;
}

void BackupLog::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t BackupLog::GetRestoreProcessRemindTime() const
{
    return m_restoreProcessRemindTime;
}

void BackupLog::SetRestoreProcessRemindTime(const int64_t& _restoreProcessRemindTime)
{
    m_restoreProcessRemindTime = _restoreProcessRemindTime;
    m_restoreProcessRemindTimeHasBeenSet = true;
}

bool BackupLog::RestoreProcessRemindTimeHasBeenSet() const
{
    return m_restoreProcessRemindTimeHasBeenSet;
}

int64_t BackupLog::GetRestoreRemindTime() const
{
    return m_restoreRemindTime;
}

void BackupLog::SetRestoreRemindTime(const int64_t& _restoreRemindTime)
{
    m_restoreRemindTime = _restoreRemindTime;
    m_restoreRemindTimeHasBeenSet = true;
}

bool BackupLog::RestoreRemindTimeHasBeenSet() const
{
    return m_restoreRemindTimeHasBeenSet;
}

int64_t BackupLog::GetRestoreIndexSize() const
{
    return m_restoreIndexSize;
}

void BackupLog::SetRestoreIndexSize(const int64_t& _restoreIndexSize)
{
    m_restoreIndexSize = _restoreIndexSize;
    m_restoreIndexSizeHasBeenSet = true;
}

bool BackupLog::RestoreIndexSizeHasBeenSet() const
{
    return m_restoreIndexSizeHasBeenSet;
}

int64_t BackupLog::GetRestoreEndTime() const
{
    return m_restoreEndTime;
}

void BackupLog::SetRestoreEndTime(const int64_t& _restoreEndTime)
{
    m_restoreEndTime = _restoreEndTime;
    m_restoreEndTimeHasBeenSet = true;
}

bool BackupLog::RestoreEndTimeHasBeenSet() const
{
    return m_restoreEndTimeHasBeenSet;
}

uint64_t BackupLog::GetAppId() const
{
    return m_appId;
}

void BackupLog::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BackupLog::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t BackupLog::GetAssetId() const
{
    return m_assetId;
}

void BackupLog::SetAssetId(const uint64_t& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool BackupLog::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string BackupLog::GetNickName() const
{
    return m_nickName;
}

void BackupLog::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool BackupLog::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string BackupLog::GetUin() const
{
    return m_uin;
}

void BackupLog::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool BackupLog::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

