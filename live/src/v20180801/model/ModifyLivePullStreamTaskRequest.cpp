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

#include <tencentcloud/live/v20180801/model/ModifyLivePullStreamTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

ModifyLivePullStreamTaskRequest::ModifyLivePullStreamTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_sourceUrlsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_vodLoopTimesHasBeenSet(false),
    m_vodRefreshTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_callbackEventsHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_fileIndexHasBeenSet(false),
    m_offsetTimeHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string ModifyLivePullStreamTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUrlsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceUrls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_sourceUrls.begin(); itr != m_sourceUrls.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vodLoopTimesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VodLoopTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vodLoopTimes, allocator);
    }

    if (m_vodRefreshTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VodRefreshType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vodRefreshType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackEventsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallbackEvents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_callbackEvents.begin(); itr != m_callbackEvents.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callbackUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIndexHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileIndex, allocator);
    }

    if (m_offsetTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OffsetTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offsetTime, allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLivePullStreamTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyLivePullStreamTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetOperator() const
{
    return m_operator;
}

void ModifyLivePullStreamTaskRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> ModifyLivePullStreamTaskRequest::GetSourceUrls() const
{
    return m_sourceUrls;
}

void ModifyLivePullStreamTaskRequest::SetSourceUrls(const vector<string>& _sourceUrls)
{
    m_sourceUrls = _sourceUrls;
    m_sourceUrlsHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::SourceUrlsHasBeenSet() const
{
    return m_sourceUrlsHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyLivePullStreamTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyLivePullStreamTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t ModifyLivePullStreamTaskRequest::GetVodLoopTimes() const
{
    return m_vodLoopTimes;
}

void ModifyLivePullStreamTaskRequest::SetVodLoopTimes(const int64_t& _vodLoopTimes)
{
    m_vodLoopTimes = _vodLoopTimes;
    m_vodLoopTimesHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::VodLoopTimesHasBeenSet() const
{
    return m_vodLoopTimesHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetVodRefreshType() const
{
    return m_vodRefreshType;
}

void ModifyLivePullStreamTaskRequest::SetVodRefreshType(const string& _vodRefreshType)
{
    m_vodRefreshType = _vodRefreshType;
    m_vodRefreshTypeHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::VodRefreshTypeHasBeenSet() const
{
    return m_vodRefreshTypeHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetStatus() const
{
    return m_status;
}

void ModifyLivePullStreamTaskRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ModifyLivePullStreamTaskRequest::GetCallbackEvents() const
{
    return m_callbackEvents;
}

void ModifyLivePullStreamTaskRequest::SetCallbackEvents(const vector<string>& _callbackEvents)
{
    m_callbackEvents = _callbackEvents;
    m_callbackEventsHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::CallbackEventsHasBeenSet() const
{
    return m_callbackEventsHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ModifyLivePullStreamTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

int64_t ModifyLivePullStreamTaskRequest::GetFileIndex() const
{
    return m_fileIndex;
}

void ModifyLivePullStreamTaskRequest::SetFileIndex(const int64_t& _fileIndex)
{
    m_fileIndex = _fileIndex;
    m_fileIndexHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::FileIndexHasBeenSet() const
{
    return m_fileIndexHasBeenSet;
}

int64_t ModifyLivePullStreamTaskRequest::GetOffsetTime() const
{
    return m_offsetTime;
}

void ModifyLivePullStreamTaskRequest::SetOffsetTime(const int64_t& _offsetTime)
{
    m_offsetTime = _offsetTime;
    m_offsetTimeHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::OffsetTimeHasBeenSet() const
{
    return m_offsetTimeHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetComment() const
{
    return m_comment;
}

void ModifyLivePullStreamTaskRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


