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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeDatabaseAuditRecordsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeDatabaseAuditRecordsRequest::DescribeDatabaseAuditRecordsRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_userHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_dbNamesHasBeenSet(false),
    m_sqlTypesHasBeenSet(false),
    m_catalogsHasBeenSet(false),
    m_isQueryHasBeenSet(false),
    m_computeGroupsHasBeenSet(false)
{
}

string DescribeDatabaseAuditRecordsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dbNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dbNames.begin(); itr != m_dbNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sqlTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sqlTypes.begin(); itr != m_sqlTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_catalogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalogs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_catalogs.begin(); itr != m_catalogs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQuery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isQuery.begin(); itr != m_isQuery.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetBool(*itr), allocator);
        }
    }

    if (m_computeGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_computeGroups.begin(); itr != m_computeGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDatabaseAuditRecordsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDatabaseAuditRecordsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDatabaseAuditRecordsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDatabaseAuditRecordsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDatabaseAuditRecordsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDatabaseAuditRecordsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDatabaseAuditRecordsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDatabaseAuditRecordsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeDatabaseAuditRecordsRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeDatabaseAuditRecordsRequest::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

string DescribeDatabaseAuditRecordsRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeDatabaseAuditRecordsRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeDatabaseAuditRecordsRequest::GetUser() const
{
    return m_user;
}

void DescribeDatabaseAuditRecordsRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string DescribeDatabaseAuditRecordsRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeDatabaseAuditRecordsRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DescribeDatabaseAuditRecordsRequest::GetSqlType() const
{
    return m_sqlType;
}

void DescribeDatabaseAuditRecordsRequest::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

string DescribeDatabaseAuditRecordsRequest::GetSql() const
{
    return m_sql;
}

void DescribeDatabaseAuditRecordsRequest::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

vector<string> DescribeDatabaseAuditRecordsRequest::GetUsers() const
{
    return m_users;
}

void DescribeDatabaseAuditRecordsRequest::SetUsers(const vector<string>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

vector<string> DescribeDatabaseAuditRecordsRequest::GetDbNames() const
{
    return m_dbNames;
}

void DescribeDatabaseAuditRecordsRequest::SetDbNames(const vector<string>& _dbNames)
{
    m_dbNames = _dbNames;
    m_dbNamesHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::DbNamesHasBeenSet() const
{
    return m_dbNamesHasBeenSet;
}

vector<string> DescribeDatabaseAuditRecordsRequest::GetSqlTypes() const
{
    return m_sqlTypes;
}

void DescribeDatabaseAuditRecordsRequest::SetSqlTypes(const vector<string>& _sqlTypes)
{
    m_sqlTypes = _sqlTypes;
    m_sqlTypesHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::SqlTypesHasBeenSet() const
{
    return m_sqlTypesHasBeenSet;
}

vector<string> DescribeDatabaseAuditRecordsRequest::GetCatalogs() const
{
    return m_catalogs;
}

void DescribeDatabaseAuditRecordsRequest::SetCatalogs(const vector<string>& _catalogs)
{
    m_catalogs = _catalogs;
    m_catalogsHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::CatalogsHasBeenSet() const
{
    return m_catalogsHasBeenSet;
}

vector<bool> DescribeDatabaseAuditRecordsRequest::GetIsQuery() const
{
    return m_isQuery;
}

void DescribeDatabaseAuditRecordsRequest::SetIsQuery(const vector<bool>& _isQuery)
{
    m_isQuery = _isQuery;
    m_isQueryHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::IsQueryHasBeenSet() const
{
    return m_isQueryHasBeenSet;
}

vector<string> DescribeDatabaseAuditRecordsRequest::GetComputeGroups() const
{
    return m_computeGroups;
}

void DescribeDatabaseAuditRecordsRequest::SetComputeGroups(const vector<string>& _computeGroups)
{
    m_computeGroups = _computeGroups;
    m_computeGroupsHasBeenSet = true;
}

bool DescribeDatabaseAuditRecordsRequest::ComputeGroupsHasBeenSet() const
{
    return m_computeGroupsHasBeenSet;
}


