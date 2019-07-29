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

#include <tencentcloud/tci/v20190318/model/CheckAttendanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

CheckAttendanceRequest::CheckAttendanceRequest() :
    m_fileContentHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_libraryIdHasBeenSet(false),
    m_personIdSetHasBeenSet(false),
    m_attendanceThresholdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
}

string CheckAttendanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_personIdSet.begin(); itr != m_personIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attendanceThresholdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttendanceThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attendanceThreshold, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_threshold, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckAttendanceRequest::GetFileContent() const
{
    return m_fileContent;
}

void CheckAttendanceRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool CheckAttendanceRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string CheckAttendanceRequest::GetFileType() const
{
    return m_fileType;
}

void CheckAttendanceRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool CheckAttendanceRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string CheckAttendanceRequest::GetLibraryId() const
{
    return m_libraryId;
}

void CheckAttendanceRequest::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool CheckAttendanceRequest::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

vector<string> CheckAttendanceRequest::GetPersonIdSet() const
{
    return m_personIdSet;
}

void CheckAttendanceRequest::SetPersonIdSet(const vector<string>& _personIdSet)
{
    m_personIdSet = _personIdSet;
    m_personIdSetHasBeenSet = true;
}

bool CheckAttendanceRequest::PersonIdSetHasBeenSet() const
{
    return m_personIdSetHasBeenSet;
}

double CheckAttendanceRequest::GetAttendanceThreshold() const
{
    return m_attendanceThreshold;
}

void CheckAttendanceRequest::SetAttendanceThreshold(const double& _attendanceThreshold)
{
    m_attendanceThreshold = _attendanceThreshold;
    m_attendanceThresholdHasBeenSet = true;
}

bool CheckAttendanceRequest::AttendanceThresholdHasBeenSet() const
{
    return m_attendanceThresholdHasBeenSet;
}

int64_t CheckAttendanceRequest::GetEndTime() const
{
    return m_endTime;
}

void CheckAttendanceRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CheckAttendanceRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CheckAttendanceRequest::GetStartTime() const
{
    return m_startTime;
}

void CheckAttendanceRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CheckAttendanceRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

double CheckAttendanceRequest::GetThreshold() const
{
    return m_threshold;
}

void CheckAttendanceRequest::SetThreshold(const double& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool CheckAttendanceRequest::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}


