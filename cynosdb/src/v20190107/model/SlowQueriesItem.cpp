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

#include <tencentcloud/cynosdb/v20190107/model/SlowQueriesItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SlowQueriesItem::SlowQueriesItem() :
    m_timestampHasBeenSet(false),
    m_queryTimeHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_userHostHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_lockTimeHasBeenSet(false),
    m_rowsExaminedHasBeenSet(false),
    m_rowsSentHasBeenSet(false),
    m_sqlTemplateHasBeenSet(false),
    m_sqlMd5HasBeenSet(false),
    m_syncReadCountRemoteHasBeenSet(false),
    m_syncReadBytesRemoteHasBeenSet(false),
    m_syncReadTimeRemoteHasBeenSet(false),
    m_syncWriteCountRemoteHasBeenSet(false),
    m_syncWriteBytesRemoteHasBeenSet(false),
    m_syncWriteTimeRemoteHasBeenSet(false),
    m_trxCommitDelayHasBeenSet(false)
{
}

CoreInternalOutcome SlowQueriesItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("QueryTime") && !value["QueryTime"].IsNull())
    {
        if (!value["QueryTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.QueryTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTime = value["QueryTime"].GetDouble();
        m_queryTimeHasBeenSet = true;
    }

    if (value.HasMember("SqlText") && !value["SqlText"].IsNull())
    {
        if (!value["SqlText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.SqlText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlText = string(value["SqlText"].GetString());
        m_sqlTextHasBeenSet = true;
    }

    if (value.HasMember("UserHost") && !value["UserHost"].IsNull())
    {
        if (!value["UserHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.UserHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userHost = string(value["UserHost"].GetString());
        m_userHostHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("LockTime") && !value["LockTime"].IsNull())
    {
        if (!value["LockTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.LockTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockTime = value["LockTime"].GetDouble();
        m_lockTimeHasBeenSet = true;
    }

    if (value.HasMember("RowsExamined") && !value["RowsExamined"].IsNull())
    {
        if (!value["RowsExamined"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.RowsExamined` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsExamined = value["RowsExamined"].GetInt64();
        m_rowsExaminedHasBeenSet = true;
    }

    if (value.HasMember("RowsSent") && !value["RowsSent"].IsNull())
    {
        if (!value["RowsSent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.RowsSent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsSent = value["RowsSent"].GetInt64();
        m_rowsSentHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplate") && !value["SqlTemplate"].IsNull())
    {
        if (!value["SqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.SqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplate = string(value["SqlTemplate"].GetString());
        m_sqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("SqlMd5") && !value["SqlMd5"].IsNull())
    {
        if (!value["SqlMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.SqlMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlMd5 = string(value["SqlMd5"].GetString());
        m_sqlMd5HasBeenSet = true;
    }

    if (value.HasMember("SyncReadCountRemote") && !value["SyncReadCountRemote"].IsNull())
    {
        if (!value["SyncReadCountRemote"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.SyncReadCountRemote` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncReadCountRemote = value["SyncReadCountRemote"].GetInt64();
        m_syncReadCountRemoteHasBeenSet = true;
    }

    if (value.HasMember("SyncReadBytesRemote") && !value["SyncReadBytesRemote"].IsNull())
    {
        if (!value["SyncReadBytesRemote"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.SyncReadBytesRemote` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncReadBytesRemote = value["SyncReadBytesRemote"].GetInt64();
        m_syncReadBytesRemoteHasBeenSet = true;
    }

    if (value.HasMember("SyncReadTimeRemote") && !value["SyncReadTimeRemote"].IsNull())
    {
        if (!value["SyncReadTimeRemote"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.SyncReadTimeRemote` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncReadTimeRemote = value["SyncReadTimeRemote"].GetInt64();
        m_syncReadTimeRemoteHasBeenSet = true;
    }

    if (value.HasMember("SyncWriteCountRemote") && !value["SyncWriteCountRemote"].IsNull())
    {
        if (!value["SyncWriteCountRemote"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.SyncWriteCountRemote` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncWriteCountRemote = value["SyncWriteCountRemote"].GetInt64();
        m_syncWriteCountRemoteHasBeenSet = true;
    }

    if (value.HasMember("SyncWriteBytesRemote") && !value["SyncWriteBytesRemote"].IsNull())
    {
        if (!value["SyncWriteBytesRemote"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.SyncWriteBytesRemote` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncWriteBytesRemote = value["SyncWriteBytesRemote"].GetInt64();
        m_syncWriteBytesRemoteHasBeenSet = true;
    }

    if (value.HasMember("SyncWriteTimeRemote") && !value["SyncWriteTimeRemote"].IsNull())
    {
        if (!value["SyncWriteTimeRemote"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.SyncWriteTimeRemote` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncWriteTimeRemote = value["SyncWriteTimeRemote"].GetInt64();
        m_syncWriteTimeRemoteHasBeenSet = true;
    }

    if (value.HasMember("TrxCommitDelay") && !value["TrxCommitDelay"].IsNull())
    {
        if (!value["TrxCommitDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueriesItem.TrxCommitDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trxCommitDelay = value["TrxCommitDelay"].GetInt64();
        m_trxCommitDelayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowQueriesItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_queryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTime, allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_userHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userHost.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_lockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTime, allocator);
    }

    if (m_rowsExaminedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsExamined";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsExamined, allocator);
    }

    if (m_rowsSentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsSent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsSent, allocator);
    }

    if (m_sqlTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_syncReadCountRemoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncReadCountRemote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncReadCountRemote, allocator);
    }

    if (m_syncReadBytesRemoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncReadBytesRemote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncReadBytesRemote, allocator);
    }

    if (m_syncReadTimeRemoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncReadTimeRemote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncReadTimeRemote, allocator);
    }

    if (m_syncWriteCountRemoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncWriteCountRemote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncWriteCountRemote, allocator);
    }

    if (m_syncWriteBytesRemoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncWriteBytesRemote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncWriteBytesRemote, allocator);
    }

    if (m_syncWriteTimeRemoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncWriteTimeRemote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncWriteTimeRemote, allocator);
    }

    if (m_trxCommitDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrxCommitDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trxCommitDelay, allocator);
    }

}


int64_t SlowQueriesItem::GetTimestamp() const
{
    return m_timestamp;
}

void SlowQueriesItem::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool SlowQueriesItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

double SlowQueriesItem::GetQueryTime() const
{
    return m_queryTime;
}

void SlowQueriesItem::SetQueryTime(const double& _queryTime)
{
    m_queryTime = _queryTime;
    m_queryTimeHasBeenSet = true;
}

bool SlowQueriesItem::QueryTimeHasBeenSet() const
{
    return m_queryTimeHasBeenSet;
}

string SlowQueriesItem::GetSqlText() const
{
    return m_sqlText;
}

void SlowQueriesItem::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool SlowQueriesItem::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string SlowQueriesItem::GetUserHost() const
{
    return m_userHost;
}

void SlowQueriesItem::SetUserHost(const string& _userHost)
{
    m_userHost = _userHost;
    m_userHostHasBeenSet = true;
}

bool SlowQueriesItem::UserHostHasBeenSet() const
{
    return m_userHostHasBeenSet;
}

string SlowQueriesItem::GetUserName() const
{
    return m_userName;
}

void SlowQueriesItem::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SlowQueriesItem::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SlowQueriesItem::GetDatabase() const
{
    return m_database;
}

void SlowQueriesItem::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool SlowQueriesItem::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

double SlowQueriesItem::GetLockTime() const
{
    return m_lockTime;
}

void SlowQueriesItem::SetLockTime(const double& _lockTime)
{
    m_lockTime = _lockTime;
    m_lockTimeHasBeenSet = true;
}

bool SlowQueriesItem::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}

int64_t SlowQueriesItem::GetRowsExamined() const
{
    return m_rowsExamined;
}

void SlowQueriesItem::SetRowsExamined(const int64_t& _rowsExamined)
{
    m_rowsExamined = _rowsExamined;
    m_rowsExaminedHasBeenSet = true;
}

bool SlowQueriesItem::RowsExaminedHasBeenSet() const
{
    return m_rowsExaminedHasBeenSet;
}

int64_t SlowQueriesItem::GetRowsSent() const
{
    return m_rowsSent;
}

void SlowQueriesItem::SetRowsSent(const int64_t& _rowsSent)
{
    m_rowsSent = _rowsSent;
    m_rowsSentHasBeenSet = true;
}

bool SlowQueriesItem::RowsSentHasBeenSet() const
{
    return m_rowsSentHasBeenSet;
}

string SlowQueriesItem::GetSqlTemplate() const
{
    return m_sqlTemplate;
}

void SlowQueriesItem::SetSqlTemplate(const string& _sqlTemplate)
{
    m_sqlTemplate = _sqlTemplate;
    m_sqlTemplateHasBeenSet = true;
}

bool SlowQueriesItem::SqlTemplateHasBeenSet() const
{
    return m_sqlTemplateHasBeenSet;
}

string SlowQueriesItem::GetSqlMd5() const
{
    return m_sqlMd5;
}

void SlowQueriesItem::SetSqlMd5(const string& _sqlMd5)
{
    m_sqlMd5 = _sqlMd5;
    m_sqlMd5HasBeenSet = true;
}

bool SlowQueriesItem::SqlMd5HasBeenSet() const
{
    return m_sqlMd5HasBeenSet;
}

int64_t SlowQueriesItem::GetSyncReadCountRemote() const
{
    return m_syncReadCountRemote;
}

void SlowQueriesItem::SetSyncReadCountRemote(const int64_t& _syncReadCountRemote)
{
    m_syncReadCountRemote = _syncReadCountRemote;
    m_syncReadCountRemoteHasBeenSet = true;
}

bool SlowQueriesItem::SyncReadCountRemoteHasBeenSet() const
{
    return m_syncReadCountRemoteHasBeenSet;
}

int64_t SlowQueriesItem::GetSyncReadBytesRemote() const
{
    return m_syncReadBytesRemote;
}

void SlowQueriesItem::SetSyncReadBytesRemote(const int64_t& _syncReadBytesRemote)
{
    m_syncReadBytesRemote = _syncReadBytesRemote;
    m_syncReadBytesRemoteHasBeenSet = true;
}

bool SlowQueriesItem::SyncReadBytesRemoteHasBeenSet() const
{
    return m_syncReadBytesRemoteHasBeenSet;
}

int64_t SlowQueriesItem::GetSyncReadTimeRemote() const
{
    return m_syncReadTimeRemote;
}

void SlowQueriesItem::SetSyncReadTimeRemote(const int64_t& _syncReadTimeRemote)
{
    m_syncReadTimeRemote = _syncReadTimeRemote;
    m_syncReadTimeRemoteHasBeenSet = true;
}

bool SlowQueriesItem::SyncReadTimeRemoteHasBeenSet() const
{
    return m_syncReadTimeRemoteHasBeenSet;
}

int64_t SlowQueriesItem::GetSyncWriteCountRemote() const
{
    return m_syncWriteCountRemote;
}

void SlowQueriesItem::SetSyncWriteCountRemote(const int64_t& _syncWriteCountRemote)
{
    m_syncWriteCountRemote = _syncWriteCountRemote;
    m_syncWriteCountRemoteHasBeenSet = true;
}

bool SlowQueriesItem::SyncWriteCountRemoteHasBeenSet() const
{
    return m_syncWriteCountRemoteHasBeenSet;
}

int64_t SlowQueriesItem::GetSyncWriteBytesRemote() const
{
    return m_syncWriteBytesRemote;
}

void SlowQueriesItem::SetSyncWriteBytesRemote(const int64_t& _syncWriteBytesRemote)
{
    m_syncWriteBytesRemote = _syncWriteBytesRemote;
    m_syncWriteBytesRemoteHasBeenSet = true;
}

bool SlowQueriesItem::SyncWriteBytesRemoteHasBeenSet() const
{
    return m_syncWriteBytesRemoteHasBeenSet;
}

int64_t SlowQueriesItem::GetSyncWriteTimeRemote() const
{
    return m_syncWriteTimeRemote;
}

void SlowQueriesItem::SetSyncWriteTimeRemote(const int64_t& _syncWriteTimeRemote)
{
    m_syncWriteTimeRemote = _syncWriteTimeRemote;
    m_syncWriteTimeRemoteHasBeenSet = true;
}

bool SlowQueriesItem::SyncWriteTimeRemoteHasBeenSet() const
{
    return m_syncWriteTimeRemoteHasBeenSet;
}

int64_t SlowQueriesItem::GetTrxCommitDelay() const
{
    return m_trxCommitDelay;
}

void SlowQueriesItem::SetTrxCommitDelay(const int64_t& _trxCommitDelay)
{
    m_trxCommitDelay = _trxCommitDelay;
    m_trxCommitDelayHasBeenSet = true;
}

bool SlowQueriesItem::TrxCommitDelayHasBeenSet() const
{
    return m_trxCommitDelayHasBeenSet;
}

