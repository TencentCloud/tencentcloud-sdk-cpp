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

#include <tencentcloud/cynosdb/v20190107/model/ExportInstanceSlowQueriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ExportInstanceSlowQueriesRequest::ExportInstanceSlowQueriesRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false)
{
}

string ExportInstanceSlowQueriesRequest::ToJsonString() const
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportInstanceSlowQueriesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ExportInstanceSlowQueriesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ExportInstanceSlowQueriesRequest::GetStartTime() const
{
    return m_startTime;
}

void ExportInstanceSlowQueriesRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ExportInstanceSlowQueriesRequest::GetEndTime() const
{
    return m_endTime;
}

void ExportInstanceSlowQueriesRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t ExportInstanceSlowQueriesRequest::GetLimit() const
{
    return m_limit;
}

void ExportInstanceSlowQueriesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t ExportInstanceSlowQueriesRequest::GetOffset() const
{
    return m_offset;
}

void ExportInstanceSlowQueriesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string ExportInstanceSlowQueriesRequest::GetUsername() const
{
    return m_username;
}

void ExportInstanceSlowQueriesRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ExportInstanceSlowQueriesRequest::GetHost() const
{
    return m_host;
}

void ExportInstanceSlowQueriesRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string ExportInstanceSlowQueriesRequest::GetDatabase() const
{
    return m_database;
}

void ExportInstanceSlowQueriesRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ExportInstanceSlowQueriesRequest::GetFileType() const
{
    return m_fileType;
}

void ExportInstanceSlowQueriesRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string ExportInstanceSlowQueriesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void ExportInstanceSlowQueriesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string ExportInstanceSlowQueriesRequest::GetOrderByType() const
{
    return m_orderByType;
}

void ExportInstanceSlowQueriesRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool ExportInstanceSlowQueriesRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}


