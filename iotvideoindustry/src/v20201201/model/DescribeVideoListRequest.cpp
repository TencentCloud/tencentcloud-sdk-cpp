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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeVideoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeVideoListRequest::DescribeVideoListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_startRecordTimeHasBeenSet(false),
    m_endRecordTimeHasBeenSet(false),
    m_startExpireTimeHasBeenSet(false),
    m_endExpireTimeHasBeenSet(false),
    m_startFileSizeHasBeenSet(false),
    m_endFileSizeHasBeenSet(false),
    m_isRecordingHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_warnIdHasBeenSet(false),
    m_recordTypeHasBeenSet(false)
{
}

string DescribeVideoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startRecordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartRecordTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startRecordTime, allocator);
    }

    if (m_endRecordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndRecordTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endRecordTime, allocator);
    }

    if (m_startExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startExpireTime, allocator);
    }

    if (m_endExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endExpireTime, allocator);
    }

    if (m_startFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartFileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startFileSize, allocator);
    }

    if (m_endFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endFileSize, allocator);
    }

    if (m_isRecordingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRecording";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRecording, allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneId, allocator);
    }

    if (m_warnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_warnId, allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordType.begin(); itr != m_recordType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeVideoListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeVideoListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeVideoListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeVideoListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeVideoListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeVideoListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeVideoListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeVideoListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeVideoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeVideoListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeVideoListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeVideoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeVideoListRequest::GetDeviceId() const
{
    return m_deviceId;
}

void DescribeVideoListRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DescribeVideoListRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t DescribeVideoListRequest::GetStartRecordTime() const
{
    return m_startRecordTime;
}

void DescribeVideoListRequest::SetStartRecordTime(const int64_t& _startRecordTime)
{
    m_startRecordTime = _startRecordTime;
    m_startRecordTimeHasBeenSet = true;
}

bool DescribeVideoListRequest::StartRecordTimeHasBeenSet() const
{
    return m_startRecordTimeHasBeenSet;
}

int64_t DescribeVideoListRequest::GetEndRecordTime() const
{
    return m_endRecordTime;
}

void DescribeVideoListRequest::SetEndRecordTime(const int64_t& _endRecordTime)
{
    m_endRecordTime = _endRecordTime;
    m_endRecordTimeHasBeenSet = true;
}

bool DescribeVideoListRequest::EndRecordTimeHasBeenSet() const
{
    return m_endRecordTimeHasBeenSet;
}

int64_t DescribeVideoListRequest::GetStartExpireTime() const
{
    return m_startExpireTime;
}

void DescribeVideoListRequest::SetStartExpireTime(const int64_t& _startExpireTime)
{
    m_startExpireTime = _startExpireTime;
    m_startExpireTimeHasBeenSet = true;
}

bool DescribeVideoListRequest::StartExpireTimeHasBeenSet() const
{
    return m_startExpireTimeHasBeenSet;
}

int64_t DescribeVideoListRequest::GetEndExpireTime() const
{
    return m_endExpireTime;
}

void DescribeVideoListRequest::SetEndExpireTime(const int64_t& _endExpireTime)
{
    m_endExpireTime = _endExpireTime;
    m_endExpireTimeHasBeenSet = true;
}

bool DescribeVideoListRequest::EndExpireTimeHasBeenSet() const
{
    return m_endExpireTimeHasBeenSet;
}

int64_t DescribeVideoListRequest::GetStartFileSize() const
{
    return m_startFileSize;
}

void DescribeVideoListRequest::SetStartFileSize(const int64_t& _startFileSize)
{
    m_startFileSize = _startFileSize;
    m_startFileSizeHasBeenSet = true;
}

bool DescribeVideoListRequest::StartFileSizeHasBeenSet() const
{
    return m_startFileSizeHasBeenSet;
}

int64_t DescribeVideoListRequest::GetEndFileSize() const
{
    return m_endFileSize;
}

void DescribeVideoListRequest::SetEndFileSize(const int64_t& _endFileSize)
{
    m_endFileSize = _endFileSize;
    m_endFileSizeHasBeenSet = true;
}

bool DescribeVideoListRequest::EndFileSizeHasBeenSet() const
{
    return m_endFileSizeHasBeenSet;
}

int64_t DescribeVideoListRequest::GetIsRecording() const
{
    return m_isRecording;
}

void DescribeVideoListRequest::SetIsRecording(const int64_t& _isRecording)
{
    m_isRecording = _isRecording;
    m_isRecordingHasBeenSet = true;
}

bool DescribeVideoListRequest::IsRecordingHasBeenSet() const
{
    return m_isRecordingHasBeenSet;
}

string DescribeVideoListRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeVideoListRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeVideoListRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DescribeVideoListRequest::GetPlanId() const
{
    return m_planId;
}

void DescribeVideoListRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool DescribeVideoListRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

int64_t DescribeVideoListRequest::GetSceneId() const
{
    return m_sceneId;
}

void DescribeVideoListRequest::SetSceneId(const int64_t& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DescribeVideoListRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

int64_t DescribeVideoListRequest::GetWarnId() const
{
    return m_warnId;
}

void DescribeVideoListRequest::SetWarnId(const int64_t& _warnId)
{
    m_warnId = _warnId;
    m_warnIdHasBeenSet = true;
}

bool DescribeVideoListRequest::WarnIdHasBeenSet() const
{
    return m_warnIdHasBeenSet;
}

vector<int64_t> DescribeVideoListRequest::GetRecordType() const
{
    return m_recordType;
}

void DescribeVideoListRequest::SetRecordType(const vector<int64_t>& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool DescribeVideoListRequest::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}


