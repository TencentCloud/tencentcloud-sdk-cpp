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

#include <tencentcloud/dbbrain/v20210527/model/SQLFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

SQLFilter::SQLFilter() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_originKeysHasBeenSet(false),
    m_originRuleHasBeenSet(false),
    m_rejectedSqlCountHasBeenSet(false),
    m_currentConcurrencyHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_currentTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome SQLFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(value["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginKeys") && !value["OriginKeys"].IsNull())
    {
        if (!value["OriginKeys"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.OriginKeys` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originKeys = string(value["OriginKeys"].GetString());
        m_originKeysHasBeenSet = true;
    }

    if (value.HasMember("OriginRule") && !value["OriginRule"].IsNull())
    {
        if (!value["OriginRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.OriginRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originRule = string(value["OriginRule"].GetString());
        m_originRuleHasBeenSet = true;
    }

    if (value.HasMember("RejectedSqlCount") && !value["RejectedSqlCount"].IsNull())
    {
        if (!value["RejectedSqlCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.RejectedSqlCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rejectedSqlCount = value["RejectedSqlCount"].GetInt64();
        m_rejectedSqlCountHasBeenSet = true;
    }

    if (value.HasMember("CurrentConcurrency") && !value["CurrentConcurrency"].IsNull())
    {
        if (!value["CurrentConcurrency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.CurrentConcurrency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentConcurrency = value["CurrentConcurrency"].GetInt64();
        m_currentConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrency") && !value["MaxConcurrency"].IsNull())
    {
        if (!value["MaxConcurrency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.MaxConcurrency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = value["MaxConcurrency"].GetInt64();
        m_maxConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CurrentTime") && !value["CurrentTime"].IsNull())
    {
        if (!value["CurrentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.CurrentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentTime = string(value["CurrentTime"].GetString());
        m_currentTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLFilter.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SQLFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_originKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originKeys.c_str(), allocator).Move(), allocator);
    }

    if (m_originRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originRule.c_str(), allocator).Move(), allocator);
    }

    if (m_rejectedSqlCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectedSqlCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rejectedSqlCount, allocator);
    }

    if (m_currentConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentConcurrency, allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_currentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t SQLFilter::GetId() const
{
    return m_id;
}

void SQLFilter::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SQLFilter::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SQLFilter::GetStatus() const
{
    return m_status;
}

void SQLFilter::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SQLFilter::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SQLFilter::GetSqlType() const
{
    return m_sqlType;
}

void SQLFilter::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool SQLFilter::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

string SQLFilter::GetOriginKeys() const
{
    return m_originKeys;
}

void SQLFilter::SetOriginKeys(const string& _originKeys)
{
    m_originKeys = _originKeys;
    m_originKeysHasBeenSet = true;
}

bool SQLFilter::OriginKeysHasBeenSet() const
{
    return m_originKeysHasBeenSet;
}

string SQLFilter::GetOriginRule() const
{
    return m_originRule;
}

void SQLFilter::SetOriginRule(const string& _originRule)
{
    m_originRule = _originRule;
    m_originRuleHasBeenSet = true;
}

bool SQLFilter::OriginRuleHasBeenSet() const
{
    return m_originRuleHasBeenSet;
}

int64_t SQLFilter::GetRejectedSqlCount() const
{
    return m_rejectedSqlCount;
}

void SQLFilter::SetRejectedSqlCount(const int64_t& _rejectedSqlCount)
{
    m_rejectedSqlCount = _rejectedSqlCount;
    m_rejectedSqlCountHasBeenSet = true;
}

bool SQLFilter::RejectedSqlCountHasBeenSet() const
{
    return m_rejectedSqlCountHasBeenSet;
}

int64_t SQLFilter::GetCurrentConcurrency() const
{
    return m_currentConcurrency;
}

void SQLFilter::SetCurrentConcurrency(const int64_t& _currentConcurrency)
{
    m_currentConcurrency = _currentConcurrency;
    m_currentConcurrencyHasBeenSet = true;
}

bool SQLFilter::CurrentConcurrencyHasBeenSet() const
{
    return m_currentConcurrencyHasBeenSet;
}

int64_t SQLFilter::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void SQLFilter::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool SQLFilter::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

string SQLFilter::GetCreateTime() const
{
    return m_createTime;
}

void SQLFilter::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SQLFilter::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SQLFilter::GetCurrentTime() const
{
    return m_currentTime;
}

void SQLFilter::SetCurrentTime(const string& _currentTime)
{
    m_currentTime = _currentTime;
    m_currentTimeHasBeenSet = true;
}

bool SQLFilter::CurrentTimeHasBeenSet() const
{
    return m_currentTimeHasBeenSet;
}

string SQLFilter::GetExpireTime() const
{
    return m_expireTime;
}

void SQLFilter::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool SQLFilter::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

