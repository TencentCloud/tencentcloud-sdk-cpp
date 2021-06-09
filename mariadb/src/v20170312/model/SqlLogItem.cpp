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

#include <tencentcloud/mariadb/v20170312/model/SqlLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

SqlLogItem::SqlLogItem() :
    m_offsetHasBeenSet(false),
    m_userHasBeenSet(false),
    m_clientHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_selectRowNumHasBeenSet(false),
    m_affectRowNumHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_timeCostMsHasBeenSet(false),
    m_resultCodeHasBeenSet(false)
{
}

CoreInternalOutcome SqlLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Client") && !value["Client"].IsNull())
    {
        if (!value["Client"].IsString())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.Client` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_client = string(value["Client"].GetString());
        m_clientHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("SelectRowNum") && !value["SelectRowNum"].IsNull())
    {
        if (!value["SelectRowNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.SelectRowNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_selectRowNum = value["SelectRowNum"].GetUint64();
        m_selectRowNumHasBeenSet = true;
    }

    if (value.HasMember("AffectRowNum") && !value["AffectRowNum"].IsNull())
    {
        if (!value["AffectRowNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.AffectRowNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRowNum = value["AffectRowNum"].GetUint64();
        m_affectRowNumHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("TimeCostMs") && !value["TimeCostMs"].IsNull())
    {
        if (!value["TimeCostMs"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.TimeCostMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeCostMs = value["TimeCostMs"].GetUint64();
        m_timeCostMsHasBeenSet = true;
    }

    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SqlLogItem.ResultCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = value["ResultCode"].GetUint64();
        m_resultCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_clientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Client";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_client.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_selectRowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectRowNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selectRowNum, allocator);
    }

    if (m_affectRowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRowNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRowNum, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_timeCostMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeCostMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeCostMs, allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCode, allocator);
    }

}


uint64_t SqlLogItem::GetOffset() const
{
    return m_offset;
}

void SqlLogItem::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SqlLogItem::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string SqlLogItem::GetUser() const
{
    return m_user;
}

void SqlLogItem::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool SqlLogItem::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string SqlLogItem::GetClient() const
{
    return m_client;
}

void SqlLogItem::SetClient(const string& _client)
{
    m_client = _client;
    m_clientHasBeenSet = true;
}

bool SqlLogItem::ClientHasBeenSet() const
{
    return m_clientHasBeenSet;
}

string SqlLogItem::GetDbName() const
{
    return m_dbName;
}

void SqlLogItem::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool SqlLogItem::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string SqlLogItem::GetSql() const
{
    return m_sql;
}

void SqlLogItem::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool SqlLogItem::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

uint64_t SqlLogItem::GetSelectRowNum() const
{
    return m_selectRowNum;
}

void SqlLogItem::SetSelectRowNum(const uint64_t& _selectRowNum)
{
    m_selectRowNum = _selectRowNum;
    m_selectRowNumHasBeenSet = true;
}

bool SqlLogItem::SelectRowNumHasBeenSet() const
{
    return m_selectRowNumHasBeenSet;
}

uint64_t SqlLogItem::GetAffectRowNum() const
{
    return m_affectRowNum;
}

void SqlLogItem::SetAffectRowNum(const uint64_t& _affectRowNum)
{
    m_affectRowNum = _affectRowNum;
    m_affectRowNumHasBeenSet = true;
}

bool SqlLogItem::AffectRowNumHasBeenSet() const
{
    return m_affectRowNumHasBeenSet;
}

uint64_t SqlLogItem::GetTimestamp() const
{
    return m_timestamp;
}

void SqlLogItem::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool SqlLogItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

uint64_t SqlLogItem::GetTimeCostMs() const
{
    return m_timeCostMs;
}

void SqlLogItem::SetTimeCostMs(const uint64_t& _timeCostMs)
{
    m_timeCostMs = _timeCostMs;
    m_timeCostMsHasBeenSet = true;
}

bool SqlLogItem::TimeCostMsHasBeenSet() const
{
    return m_timeCostMsHasBeenSet;
}

uint64_t SqlLogItem::GetResultCode() const
{
    return m_resultCode;
}

void SqlLogItem::SetResultCode(const uint64_t& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool SqlLogItem::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

