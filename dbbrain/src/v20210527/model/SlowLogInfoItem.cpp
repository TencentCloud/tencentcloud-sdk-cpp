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

#include <tencentcloud/dbbrain/v20210527/model/SlowLogInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

SlowLogInfoItem::SlowLogInfoItem() :
    m_timestampHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userHostHasBeenSet(false),
    m_queryTimeHasBeenSet(false),
    m_lockTimeHasBeenSet(false),
    m_rowsExaminedHasBeenSet(false),
    m_rowsSentHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfoItem.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("SqlText") && !value["SqlText"].IsNull())
    {
        if (!value["SqlText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfoItem.SqlText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlText = string(value["SqlText"].GetString());
        m_sqlTextHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfoItem.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfoItem.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserHost") && !value["UserHost"].IsNull())
    {
        if (!value["UserHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfoItem.UserHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userHost = string(value["UserHost"].GetString());
        m_userHostHasBeenSet = true;
    }

    if (value.HasMember("QueryTime") && !value["QueryTime"].IsNull())
    {
        if (!value["QueryTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfoItem.QueryTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTime = value["QueryTime"].GetDouble();
        m_queryTimeHasBeenSet = true;
    }

    if (value.HasMember("LockTime") && !value["LockTime"].IsNull())
    {
        if (!value["LockTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfoItem.LockTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockTime = value["LockTime"].GetDouble();
        m_lockTimeHasBeenSet = true;
    }

    if (value.HasMember("RowsExamined") && !value["RowsExamined"].IsNull())
    {
        if (!value["RowsExamined"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfoItem.RowsExamined` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsExamined = value["RowsExamined"].GetInt64();
        m_rowsExaminedHasBeenSet = true;
    }

    if (value.HasMember("RowsSent") && !value["RowsSent"].IsNull())
    {
        if (!value["RowsSent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfoItem.RowsSent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsSent = value["RowsSent"].GetInt64();
        m_rowsSentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userHost.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTime, allocator);
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

}


string SlowLogInfoItem::GetTimestamp() const
{
    return m_timestamp;
}

void SlowLogInfoItem::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool SlowLogInfoItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string SlowLogInfoItem::GetSqlText() const
{
    return m_sqlText;
}

void SlowLogInfoItem::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool SlowLogInfoItem::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string SlowLogInfoItem::GetDatabase() const
{
    return m_database;
}

void SlowLogInfoItem::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool SlowLogInfoItem::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string SlowLogInfoItem::GetUserName() const
{
    return m_userName;
}

void SlowLogInfoItem::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SlowLogInfoItem::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SlowLogInfoItem::GetUserHost() const
{
    return m_userHost;
}

void SlowLogInfoItem::SetUserHost(const string& _userHost)
{
    m_userHost = _userHost;
    m_userHostHasBeenSet = true;
}

bool SlowLogInfoItem::UserHostHasBeenSet() const
{
    return m_userHostHasBeenSet;
}

double SlowLogInfoItem::GetQueryTime() const
{
    return m_queryTime;
}

void SlowLogInfoItem::SetQueryTime(const double& _queryTime)
{
    m_queryTime = _queryTime;
    m_queryTimeHasBeenSet = true;
}

bool SlowLogInfoItem::QueryTimeHasBeenSet() const
{
    return m_queryTimeHasBeenSet;
}

double SlowLogInfoItem::GetLockTime() const
{
    return m_lockTime;
}

void SlowLogInfoItem::SetLockTime(const double& _lockTime)
{
    m_lockTime = _lockTime;
    m_lockTimeHasBeenSet = true;
}

bool SlowLogInfoItem::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}

int64_t SlowLogInfoItem::GetRowsExamined() const
{
    return m_rowsExamined;
}

void SlowLogInfoItem::SetRowsExamined(const int64_t& _rowsExamined)
{
    m_rowsExamined = _rowsExamined;
    m_rowsExaminedHasBeenSet = true;
}

bool SlowLogInfoItem::RowsExaminedHasBeenSet() const
{
    return m_rowsExaminedHasBeenSet;
}

int64_t SlowLogInfoItem::GetRowsSent() const
{
    return m_rowsSent;
}

void SlowLogInfoItem::SetRowsSent(const int64_t& _rowsSent)
{
    m_rowsSent = _rowsSent;
    m_rowsSentHasBeenSet = true;
}

bool SlowLogInfoItem::RowsSentHasBeenSet() const
{
    return m_rowsSentHasBeenSet;
}

