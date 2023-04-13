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

#include <tencentcloud/tcaplusdb/v20190823/model/BackupRecords.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

BackupRecords::BackupRecords() :
    m_zoneIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_fileTagHasBeenSet(false),
    m_shardCountHasBeenSet(false),
    m_backupBatchTimeHasBeenSet(false),
    m_backupFileSizeHasBeenSet(false),
    m_backupSuccRateHasBeenSet(false),
    m_backupExpireTimeHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome BackupRecords::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("FileTag") && !value["FileTag"].IsNull())
    {
        if (!value["FileTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.FileTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileTag = string(value["FileTag"].GetString());
        m_fileTagHasBeenSet = true;
    }

    if (value.HasMember("ShardCount") && !value["ShardCount"].IsNull())
    {
        if (!value["ShardCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.ShardCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shardCount = value["ShardCount"].GetUint64();
        m_shardCountHasBeenSet = true;
    }

    if (value.HasMember("BackupBatchTime") && !value["BackupBatchTime"].IsNull())
    {
        if (!value["BackupBatchTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.BackupBatchTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupBatchTime = string(value["BackupBatchTime"].GetString());
        m_backupBatchTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupFileSize") && !value["BackupFileSize"].IsNull())
    {
        if (!value["BackupFileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.BackupFileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupFileSize = value["BackupFileSize"].GetUint64();
        m_backupFileSizeHasBeenSet = true;
    }

    if (value.HasMember("BackupSuccRate") && !value["BackupSuccRate"].IsNull())
    {
        if (!value["BackupSuccRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.BackupSuccRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSuccRate = string(value["BackupSuccRate"].GetString());
        m_backupSuccRateHasBeenSet = true;
    }

    if (value.HasMember("BackupExpireTime") && !value["BackupExpireTime"].IsNull())
    {
        if (!value["BackupExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.BackupExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupExpireTime = string(value["BackupExpireTime"].GetString());
        m_backupExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupRecords.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupRecords::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileTag.c_str(), allocator).Move(), allocator);
    }

    if (m_shardCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardCount, allocator);
    }

    if (m_backupBatchTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupBatchTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupBatchTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupFileSize, allocator);
    }

    if (m_backupSuccRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSuccRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSuccRate.c_str(), allocator).Move(), allocator);
    }

    if (m_backupExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

}


uint64_t BackupRecords::GetZoneId() const
{
    return m_zoneId;
}

void BackupRecords::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool BackupRecords::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string BackupRecords::GetTableName() const
{
    return m_tableName;
}

void BackupRecords::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool BackupRecords::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string BackupRecords::GetBackupType() const
{
    return m_backupType;
}

void BackupRecords::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool BackupRecords::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string BackupRecords::GetFileTag() const
{
    return m_fileTag;
}

void BackupRecords::SetFileTag(const string& _fileTag)
{
    m_fileTag = _fileTag;
    m_fileTagHasBeenSet = true;
}

bool BackupRecords::FileTagHasBeenSet() const
{
    return m_fileTagHasBeenSet;
}

uint64_t BackupRecords::GetShardCount() const
{
    return m_shardCount;
}

void BackupRecords::SetShardCount(const uint64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool BackupRecords::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

string BackupRecords::GetBackupBatchTime() const
{
    return m_backupBatchTime;
}

void BackupRecords::SetBackupBatchTime(const string& _backupBatchTime)
{
    m_backupBatchTime = _backupBatchTime;
    m_backupBatchTimeHasBeenSet = true;
}

bool BackupRecords::BackupBatchTimeHasBeenSet() const
{
    return m_backupBatchTimeHasBeenSet;
}

uint64_t BackupRecords::GetBackupFileSize() const
{
    return m_backupFileSize;
}

void BackupRecords::SetBackupFileSize(const uint64_t& _backupFileSize)
{
    m_backupFileSize = _backupFileSize;
    m_backupFileSizeHasBeenSet = true;
}

bool BackupRecords::BackupFileSizeHasBeenSet() const
{
    return m_backupFileSizeHasBeenSet;
}

string BackupRecords::GetBackupSuccRate() const
{
    return m_backupSuccRate;
}

void BackupRecords::SetBackupSuccRate(const string& _backupSuccRate)
{
    m_backupSuccRate = _backupSuccRate;
    m_backupSuccRateHasBeenSet = true;
}

bool BackupRecords::BackupSuccRateHasBeenSet() const
{
    return m_backupSuccRateHasBeenSet;
}

string BackupRecords::GetBackupExpireTime() const
{
    return m_backupExpireTime;
}

void BackupRecords::SetBackupExpireTime(const string& _backupExpireTime)
{
    m_backupExpireTime = _backupExpireTime;
    m_backupExpireTimeHasBeenSet = true;
}

bool BackupRecords::BackupExpireTimeHasBeenSet() const
{
    return m_backupExpireTimeHasBeenSet;
}

uint64_t BackupRecords::GetAppId() const
{
    return m_appId;
}

void BackupRecords::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BackupRecords::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

