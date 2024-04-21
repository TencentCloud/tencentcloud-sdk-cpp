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
    m_specifyTaskIdHasBeenSet(false),
    m_toUrlHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_backupSourceTypeHasBeenSet(false),
    m_backupSourceUrlHasBeenSet(false),
    m_watermarkListHasBeenSet(false),
    m_vodLocalModeHasBeenSet(false),
    m_backupToUrlHasBeenSet(false),
    m_backupVodUrlHasBeenSet(false)
{
}

string ModifyLivePullStreamTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUrls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceUrls.begin(); itr != m_sourceUrls.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_vodLoopTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodLoopTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vodLoopTimes, allocator);
    }

    if (m_vodRefreshTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodRefreshType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vodRefreshType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackEvents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callbackEvents.begin(); itr != m_callbackEvents.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileIndex, allocator);
    }

    if (m_offsetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offsetTime, allocator);
    }

    if (m_specifyTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifyTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specifyTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_toUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSourceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSourceUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupSourceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_watermarkListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_watermarkList.begin(); itr != m_watermarkList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vodLocalModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodLocalMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vodLocalMode, allocator);
    }

    if (m_backupToUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupToUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupToUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_backupVodUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupVodUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupVodUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

string ModifyLivePullStreamTaskRequest::GetSpecifyTaskId() const
{
    return m_specifyTaskId;
}

void ModifyLivePullStreamTaskRequest::SetSpecifyTaskId(const string& _specifyTaskId)
{
    m_specifyTaskId = _specifyTaskId;
    m_specifyTaskIdHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::SpecifyTaskIdHasBeenSet() const
{
    return m_specifyTaskIdHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetToUrl() const
{
    return m_toUrl;
}

void ModifyLivePullStreamTaskRequest::SetToUrl(const string& _toUrl)
{
    m_toUrl = _toUrl;
    m_toUrlHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::ToUrlHasBeenSet() const
{
    return m_toUrlHasBeenSet;
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

string ModifyLivePullStreamTaskRequest::GetBackupSourceType() const
{
    return m_backupSourceType;
}

void ModifyLivePullStreamTaskRequest::SetBackupSourceType(const string& _backupSourceType)
{
    m_backupSourceType = _backupSourceType;
    m_backupSourceTypeHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::BackupSourceTypeHasBeenSet() const
{
    return m_backupSourceTypeHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetBackupSourceUrl() const
{
    return m_backupSourceUrl;
}

void ModifyLivePullStreamTaskRequest::SetBackupSourceUrl(const string& _backupSourceUrl)
{
    m_backupSourceUrl = _backupSourceUrl;
    m_backupSourceUrlHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::BackupSourceUrlHasBeenSet() const
{
    return m_backupSourceUrlHasBeenSet;
}

vector<PullPushWatermarkInfo> ModifyLivePullStreamTaskRequest::GetWatermarkList() const
{
    return m_watermarkList;
}

void ModifyLivePullStreamTaskRequest::SetWatermarkList(const vector<PullPushWatermarkInfo>& _watermarkList)
{
    m_watermarkList = _watermarkList;
    m_watermarkListHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::WatermarkListHasBeenSet() const
{
    return m_watermarkListHasBeenSet;
}

int64_t ModifyLivePullStreamTaskRequest::GetVodLocalMode() const
{
    return m_vodLocalMode;
}

void ModifyLivePullStreamTaskRequest::SetVodLocalMode(const int64_t& _vodLocalMode)
{
    m_vodLocalMode = _vodLocalMode;
    m_vodLocalModeHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::VodLocalModeHasBeenSet() const
{
    return m_vodLocalModeHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetBackupToUrl() const
{
    return m_backupToUrl;
}

void ModifyLivePullStreamTaskRequest::SetBackupToUrl(const string& _backupToUrl)
{
    m_backupToUrl = _backupToUrl;
    m_backupToUrlHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::BackupToUrlHasBeenSet() const
{
    return m_backupToUrlHasBeenSet;
}

string ModifyLivePullStreamTaskRequest::GetBackupVodUrl() const
{
    return m_backupVodUrl;
}

void ModifyLivePullStreamTaskRequest::SetBackupVodUrl(const string& _backupVodUrl)
{
    m_backupVodUrl = _backupVodUrl;
    m_backupVodUrlHasBeenSet = true;
}

bool ModifyLivePullStreamTaskRequest::BackupVodUrlHasBeenSet() const
{
    return m_backupVodUrlHasBeenSet;
}


