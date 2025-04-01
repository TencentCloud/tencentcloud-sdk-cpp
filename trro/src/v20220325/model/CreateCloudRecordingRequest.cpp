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

#include <tencentcloud/trro/v20220325/model/CreateCloudRecordingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

CreateCloudRecordingRequest::CreateCloudRecordingRequest() :
    m_projectIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_videoStreamIdHasBeenSet(false),
    m_cloudStorageHasBeenSet(false),
    m_maxMediaFileDurationHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false)
{
}

string CreateCloudRecordingRequest::ToJsonString() const
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

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_videoStreamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoStreamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_videoStreamId, allocator);
    }

    if (m_cloudStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cloudStorage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxMediaFileDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMediaFileDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMediaFileDuration, allocator);
    }

    if (m_outputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputFormat, allocator);
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxIdleTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudRecordingRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateCloudRecordingRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateCloudRecordingRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateCloudRecordingRequest::GetDeviceId() const
{
    return m_deviceId;
}

void CreateCloudRecordingRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool CreateCloudRecordingRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t CreateCloudRecordingRequest::GetVideoStreamId() const
{
    return m_videoStreamId;
}

void CreateCloudRecordingRequest::SetVideoStreamId(const int64_t& _videoStreamId)
{
    m_videoStreamId = _videoStreamId;
    m_videoStreamIdHasBeenSet = true;
}

bool CreateCloudRecordingRequest::VideoStreamIdHasBeenSet() const
{
    return m_videoStreamIdHasBeenSet;
}

CloudStorage CreateCloudRecordingRequest::GetCloudStorage() const
{
    return m_cloudStorage;
}

void CreateCloudRecordingRequest::SetCloudStorage(const CloudStorage& _cloudStorage)
{
    m_cloudStorage = _cloudStorage;
    m_cloudStorageHasBeenSet = true;
}

bool CreateCloudRecordingRequest::CloudStorageHasBeenSet() const
{
    return m_cloudStorageHasBeenSet;
}

int64_t CreateCloudRecordingRequest::GetMaxMediaFileDuration() const
{
    return m_maxMediaFileDuration;
}

void CreateCloudRecordingRequest::SetMaxMediaFileDuration(const int64_t& _maxMediaFileDuration)
{
    m_maxMediaFileDuration = _maxMediaFileDuration;
    m_maxMediaFileDurationHasBeenSet = true;
}

bool CreateCloudRecordingRequest::MaxMediaFileDurationHasBeenSet() const
{
    return m_maxMediaFileDurationHasBeenSet;
}

int64_t CreateCloudRecordingRequest::GetOutputFormat() const
{
    return m_outputFormat;
}

void CreateCloudRecordingRequest::SetOutputFormat(const int64_t& _outputFormat)
{
    m_outputFormat = _outputFormat;
    m_outputFormatHasBeenSet = true;
}

bool CreateCloudRecordingRequest::OutputFormatHasBeenSet() const
{
    return m_outputFormatHasBeenSet;
}

int64_t CreateCloudRecordingRequest::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void CreateCloudRecordingRequest::SetMaxIdleTime(const int64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool CreateCloudRecordingRequest::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}


