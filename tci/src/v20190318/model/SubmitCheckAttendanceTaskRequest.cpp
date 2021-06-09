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

#include <tencentcloud/tci/v20190318/model/SubmitCheckAttendanceTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

SubmitCheckAttendanceTaskRequest::SubmitCheckAttendanceTaskRequest() :
    m_fileContentHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_libraryIdsHasBeenSet(false),
    m_attendanceThresholdHasBeenSet(false),
    m_enableStrangerHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_noticeUrlHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
}

string SubmitCheckAttendanceTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_libraryIds.begin(); itr != m_libraryIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attendanceThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttendanceThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attendanceThreshold, allocator);
    }

    if (m_enableStrangerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStranger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableStranger, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_noticeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_noticeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_threshold, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitCheckAttendanceTaskRequest::GetFileContent() const
{
    return m_fileContent;
}

void SubmitCheckAttendanceTaskRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool SubmitCheckAttendanceTaskRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string SubmitCheckAttendanceTaskRequest::GetFileType() const
{
    return m_fileType;
}

void SubmitCheckAttendanceTaskRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool SubmitCheckAttendanceTaskRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

vector<string> SubmitCheckAttendanceTaskRequest::GetLibraryIds() const
{
    return m_libraryIds;
}

void SubmitCheckAttendanceTaskRequest::SetLibraryIds(const vector<string>& _libraryIds)
{
    m_libraryIds = _libraryIds;
    m_libraryIdsHasBeenSet = true;
}

bool SubmitCheckAttendanceTaskRequest::LibraryIdsHasBeenSet() const
{
    return m_libraryIdsHasBeenSet;
}

double SubmitCheckAttendanceTaskRequest::GetAttendanceThreshold() const
{
    return m_attendanceThreshold;
}

void SubmitCheckAttendanceTaskRequest::SetAttendanceThreshold(const double& _attendanceThreshold)
{
    m_attendanceThreshold = _attendanceThreshold;
    m_attendanceThresholdHasBeenSet = true;
}

bool SubmitCheckAttendanceTaskRequest::AttendanceThresholdHasBeenSet() const
{
    return m_attendanceThresholdHasBeenSet;
}

bool SubmitCheckAttendanceTaskRequest::GetEnableStranger() const
{
    return m_enableStranger;
}

void SubmitCheckAttendanceTaskRequest::SetEnableStranger(const bool& _enableStranger)
{
    m_enableStranger = _enableStranger;
    m_enableStrangerHasBeenSet = true;
}

bool SubmitCheckAttendanceTaskRequest::EnableStrangerHasBeenSet() const
{
    return m_enableStrangerHasBeenSet;
}

int64_t SubmitCheckAttendanceTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void SubmitCheckAttendanceTaskRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SubmitCheckAttendanceTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SubmitCheckAttendanceTaskRequest::GetNoticeUrl() const
{
    return m_noticeUrl;
}

void SubmitCheckAttendanceTaskRequest::SetNoticeUrl(const string& _noticeUrl)
{
    m_noticeUrl = _noticeUrl;
    m_noticeUrlHasBeenSet = true;
}

bool SubmitCheckAttendanceTaskRequest::NoticeUrlHasBeenSet() const
{
    return m_noticeUrlHasBeenSet;
}

int64_t SubmitCheckAttendanceTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void SubmitCheckAttendanceTaskRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SubmitCheckAttendanceTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

double SubmitCheckAttendanceTaskRequest::GetThreshold() const
{
    return m_threshold;
}

void SubmitCheckAttendanceTaskRequest::SetThreshold(const double& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool SubmitCheckAttendanceTaskRequest::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}


