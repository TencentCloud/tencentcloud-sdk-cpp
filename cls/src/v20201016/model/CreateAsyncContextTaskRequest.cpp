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

#include <tencentcloud/cls/v20201016/model/CreateAsyncContextTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateAsyncContextTaskRequest::CreateAsyncContextTaskRequest() :
    m_topicIdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgLogIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_asyncSearchTaskIdHasBeenSet(false)
{
}

string CreateAsyncContextTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_time, allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncSearchTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncSearchTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_asyncSearchTaskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAsyncContextTaskRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateAsyncContextTaskRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateAsyncContextTaskRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t CreateAsyncContextTaskRequest::GetTime() const
{
    return m_time;
}

void CreateAsyncContextTaskRequest::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool CreateAsyncContextTaskRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string CreateAsyncContextTaskRequest::GetPkgId() const
{
    return m_pkgId;
}

void CreateAsyncContextTaskRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool CreateAsyncContextTaskRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string CreateAsyncContextTaskRequest::GetPkgLogId() const
{
    return m_pkgLogId;
}

void CreateAsyncContextTaskRequest::SetPkgLogId(const string& _pkgLogId)
{
    m_pkgLogId = _pkgLogId;
    m_pkgLogIdHasBeenSet = true;
}

bool CreateAsyncContextTaskRequest::PkgLogIdHasBeenSet() const
{
    return m_pkgLogIdHasBeenSet;
}

string CreateAsyncContextTaskRequest::GetLogsetId() const
{
    return m_logsetId;
}

void CreateAsyncContextTaskRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CreateAsyncContextTaskRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CreateAsyncContextTaskRequest::GetAsyncSearchTaskId() const
{
    return m_asyncSearchTaskId;
}

void CreateAsyncContextTaskRequest::SetAsyncSearchTaskId(const string& _asyncSearchTaskId)
{
    m_asyncSearchTaskId = _asyncSearchTaskId;
    m_asyncSearchTaskIdHasBeenSet = true;
}

bool CreateAsyncContextTaskRequest::AsyncSearchTaskIdHasBeenSet() const
{
    return m_asyncSearchTaskIdHasBeenSet;
}


