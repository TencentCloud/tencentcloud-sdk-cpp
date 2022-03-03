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

#include <tencentcloud/oceanus/v20190422/model/DeleteTableConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DeleteTableConfigRequest::DeleteTableConfigRequest() :
    m_jobIdHasBeenSet(false),
    m_debugIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string DeleteTableConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_debugIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DebugId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_debugId, allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTableConfigRequest::GetJobId() const
{
    return m_jobId;
}

void DeleteTableConfigRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DeleteTableConfigRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t DeleteTableConfigRequest::GetDebugId() const
{
    return m_debugId;
}

void DeleteTableConfigRequest::SetDebugId(const int64_t& _debugId)
{
    m_debugId = _debugId;
    m_debugIdHasBeenSet = true;
}

bool DeleteTableConfigRequest::DebugIdHasBeenSet() const
{
    return m_debugIdHasBeenSet;
}

string DeleteTableConfigRequest::GetTableName() const
{
    return m_tableName;
}

void DeleteTableConfigRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DeleteTableConfigRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DeleteTableConfigRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void DeleteTableConfigRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool DeleteTableConfigRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


