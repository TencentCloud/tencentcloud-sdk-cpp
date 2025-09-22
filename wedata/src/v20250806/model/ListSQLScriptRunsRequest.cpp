/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/ListSQLScriptRunsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListSQLScriptRunsRequest::ListSQLScriptRunsRequest() :
    m_projectIdHasBeenSet(false),
    m_scriptIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_executeUserUinHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string ListSQLScriptRunsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_executeUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteUserUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executeUserUin.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListSQLScriptRunsRequest::GetProjectId() const
{
    return m_projectId;
}

void ListSQLScriptRunsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListSQLScriptRunsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ListSQLScriptRunsRequest::GetScriptId() const
{
    return m_scriptId;
}

void ListSQLScriptRunsRequest::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool ListSQLScriptRunsRequest::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

string ListSQLScriptRunsRequest::GetJobId() const
{
    return m_jobId;
}

void ListSQLScriptRunsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ListSQLScriptRunsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ListSQLScriptRunsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void ListSQLScriptRunsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool ListSQLScriptRunsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

string ListSQLScriptRunsRequest::GetExecuteUserUin() const
{
    return m_executeUserUin;
}

void ListSQLScriptRunsRequest::SetExecuteUserUin(const string& _executeUserUin)
{
    m_executeUserUin = _executeUserUin;
    m_executeUserUinHasBeenSet = true;
}

bool ListSQLScriptRunsRequest::ExecuteUserUinHasBeenSet() const
{
    return m_executeUserUinHasBeenSet;
}

string ListSQLScriptRunsRequest::GetStartTime() const
{
    return m_startTime;
}

void ListSQLScriptRunsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ListSQLScriptRunsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ListSQLScriptRunsRequest::GetEndTime() const
{
    return m_endTime;
}

void ListSQLScriptRunsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ListSQLScriptRunsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


