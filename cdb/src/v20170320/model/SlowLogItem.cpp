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

#include <tencentcloud/cdb/v20170320/model/SlowLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

SlowLogItem::SlowLogItem() :
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
    m_md5HasBeenSet(false)
{
}

CoreInternalOutcome SlowLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("QueryTime") && !value["QueryTime"].IsNull())
    {
        if (!value["QueryTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.QueryTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTime = value["QueryTime"].GetDouble();
        m_queryTimeHasBeenSet = true;
    }

    if (value.HasMember("SqlText") && !value["SqlText"].IsNull())
    {
        if (!value["SqlText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.SqlText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlText = string(value["SqlText"].GetString());
        m_sqlTextHasBeenSet = true;
    }

    if (value.HasMember("UserHost") && !value["UserHost"].IsNull())
    {
        if (!value["UserHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.UserHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userHost = string(value["UserHost"].GetString());
        m_userHostHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("LockTime") && !value["LockTime"].IsNull())
    {
        if (!value["LockTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.LockTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockTime = value["LockTime"].GetDouble();
        m_lockTimeHasBeenSet = true;
    }

    if (value.HasMember("RowsExamined") && !value["RowsExamined"].IsNull())
    {
        if (!value["RowsExamined"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.RowsExamined` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsExamined = value["RowsExamined"].GetInt64();
        m_rowsExaminedHasBeenSet = true;
    }

    if (value.HasMember("RowsSent") && !value["RowsSent"].IsNull())
    {
        if (!value["RowsSent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.RowsSent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsSent = value["RowsSent"].GetInt64();
        m_rowsSentHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplate") && !value["SqlTemplate"].IsNull())
    {
        if (!value["SqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.SqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplate = string(value["SqlTemplate"].GetString());
        m_sqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SlowLogItem::GetTimestamp() const
{
    return m_timestamp;
}

void SlowLogItem::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool SlowLogItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

double SlowLogItem::GetQueryTime() const
{
    return m_queryTime;
}

void SlowLogItem::SetQueryTime(const double& _queryTime)
{
    m_queryTime = _queryTime;
    m_queryTimeHasBeenSet = true;
}

bool SlowLogItem::QueryTimeHasBeenSet() const
{
    return m_queryTimeHasBeenSet;
}

string SlowLogItem::GetSqlText() const
{
    return m_sqlText;
}

void SlowLogItem::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool SlowLogItem::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string SlowLogItem::GetUserHost() const
{
    return m_userHost;
}

void SlowLogItem::SetUserHost(const string& _userHost)
{
    m_userHost = _userHost;
    m_userHostHasBeenSet = true;
}

bool SlowLogItem::UserHostHasBeenSet() const
{
    return m_userHostHasBeenSet;
}

string SlowLogItem::GetUserName() const
{
    return m_userName;
}

void SlowLogItem::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SlowLogItem::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SlowLogItem::GetDatabase() const
{
    return m_database;
}

void SlowLogItem::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool SlowLogItem::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

double SlowLogItem::GetLockTime() const
{
    return m_lockTime;
}

void SlowLogItem::SetLockTime(const double& _lockTime)
{
    m_lockTime = _lockTime;
    m_lockTimeHasBeenSet = true;
}

bool SlowLogItem::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}

int64_t SlowLogItem::GetRowsExamined() const
{
    return m_rowsExamined;
}

void SlowLogItem::SetRowsExamined(const int64_t& _rowsExamined)
{
    m_rowsExamined = _rowsExamined;
    m_rowsExaminedHasBeenSet = true;
}

bool SlowLogItem::RowsExaminedHasBeenSet() const
{
    return m_rowsExaminedHasBeenSet;
}

int64_t SlowLogItem::GetRowsSent() const
{
    return m_rowsSent;
}

void SlowLogItem::SetRowsSent(const int64_t& _rowsSent)
{
    m_rowsSent = _rowsSent;
    m_rowsSentHasBeenSet = true;
}

bool SlowLogItem::RowsSentHasBeenSet() const
{
    return m_rowsSentHasBeenSet;
}

string SlowLogItem::GetSqlTemplate() const
{
    return m_sqlTemplate;
}

void SlowLogItem::SetSqlTemplate(const string& _sqlTemplate)
{
    m_sqlTemplate = _sqlTemplate;
    m_sqlTemplateHasBeenSet = true;
}

bool SlowLogItem::SqlTemplateHasBeenSet() const
{
    return m_sqlTemplateHasBeenSet;
}

string SlowLogItem::GetMd5() const
{
    return m_md5;
}

void SlowLogItem::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool SlowLogItem::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

