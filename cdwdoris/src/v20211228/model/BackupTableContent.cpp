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

#include <tencentcloud/cdwdoris/v20211228/model/BackupTableContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

BackupTableContent::BackupTableContent() :
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_totalBytesHasBeenSet(false),
    m_singleReplicaBytesHasBeenSet(false),
    m_backupStatusHasBeenSet(false),
    m_backupErrorMsgHasBeenSet(false),
    m_isOpenCoolDownHasBeenSet(false)
{
}

CoreInternalOutcome BackupTableContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("TotalBytes") && !value["TotalBytes"].IsNull())
    {
        if (!value["TotalBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.TotalBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBytes = value["TotalBytes"].GetInt64();
        m_totalBytesHasBeenSet = true;
    }

    if (value.HasMember("SingleReplicaBytes") && !value["SingleReplicaBytes"].IsNull())
    {
        if (!value["SingleReplicaBytes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.SingleReplicaBytes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singleReplicaBytes = string(value["SingleReplicaBytes"].GetString());
        m_singleReplicaBytesHasBeenSet = true;
    }

    if (value.HasMember("BackupStatus") && !value["BackupStatus"].IsNull())
    {
        if (!value["BackupStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.BackupStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupStatus = value["BackupStatus"].GetInt64();
        m_backupStatusHasBeenSet = true;
    }

    if (value.HasMember("BackupErrorMsg") && !value["BackupErrorMsg"].IsNull())
    {
        if (!value["BackupErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.BackupErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupErrorMsg = string(value["BackupErrorMsg"].GetString());
        m_backupErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("IsOpenCoolDown") && !value["IsOpenCoolDown"].IsNull())
    {
        if (!value["IsOpenCoolDown"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.IsOpenCoolDown` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOpenCoolDown = value["IsOpenCoolDown"].GetBool();
        m_isOpenCoolDownHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupTableContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_totalBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBytes, allocator);
    }

    if (m_singleReplicaBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleReplicaBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singleReplicaBytes.c_str(), allocator).Move(), allocator);
    }

    if (m_backupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupStatus, allocator);
    }

    if (m_backupErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_isOpenCoolDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpenCoolDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpenCoolDown, allocator);
    }

}


string BackupTableContent::GetDatabase() const
{
    return m_database;
}

void BackupTableContent::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool BackupTableContent::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string BackupTableContent::GetTable() const
{
    return m_table;
}

void BackupTableContent::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool BackupTableContent::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

int64_t BackupTableContent::GetTotalBytes() const
{
    return m_totalBytes;
}

void BackupTableContent::SetTotalBytes(const int64_t& _totalBytes)
{
    m_totalBytes = _totalBytes;
    m_totalBytesHasBeenSet = true;
}

bool BackupTableContent::TotalBytesHasBeenSet() const
{
    return m_totalBytesHasBeenSet;
}

string BackupTableContent::GetSingleReplicaBytes() const
{
    return m_singleReplicaBytes;
}

void BackupTableContent::SetSingleReplicaBytes(const string& _singleReplicaBytes)
{
    m_singleReplicaBytes = _singleReplicaBytes;
    m_singleReplicaBytesHasBeenSet = true;
}

bool BackupTableContent::SingleReplicaBytesHasBeenSet() const
{
    return m_singleReplicaBytesHasBeenSet;
}

int64_t BackupTableContent::GetBackupStatus() const
{
    return m_backupStatus;
}

void BackupTableContent::SetBackupStatus(const int64_t& _backupStatus)
{
    m_backupStatus = _backupStatus;
    m_backupStatusHasBeenSet = true;
}

bool BackupTableContent::BackupStatusHasBeenSet() const
{
    return m_backupStatusHasBeenSet;
}

string BackupTableContent::GetBackupErrorMsg() const
{
    return m_backupErrorMsg;
}

void BackupTableContent::SetBackupErrorMsg(const string& _backupErrorMsg)
{
    m_backupErrorMsg = _backupErrorMsg;
    m_backupErrorMsgHasBeenSet = true;
}

bool BackupTableContent::BackupErrorMsgHasBeenSet() const
{
    return m_backupErrorMsgHasBeenSet;
}

bool BackupTableContent::GetIsOpenCoolDown() const
{
    return m_isOpenCoolDown;
}

void BackupTableContent::SetIsOpenCoolDown(const bool& _isOpenCoolDown)
{
    m_isOpenCoolDown = _isOpenCoolDown;
    m_isOpenCoolDownHasBeenSet = true;
}

bool BackupTableContent::IsOpenCoolDownHasBeenSet() const
{
    return m_isOpenCoolDownHasBeenSet;
}

