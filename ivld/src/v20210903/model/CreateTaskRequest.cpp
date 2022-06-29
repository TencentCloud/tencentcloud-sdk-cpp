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

#include <tencentcloud/ivld/v20210903/model/CreateTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

CreateTaskRequest::CreateTaskRequest() :
    m_mediaIdHasBeenSet(false),
    m_mediaPreknownInfoHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_uploadVideoHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_callbackURLHasBeenSet(false)
{
}

string CreateTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mediaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mediaId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaPreknownInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaPreknownInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaPreknownInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadVideo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uploadVideo, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackURL.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskRequest::GetMediaId() const
{
    return m_mediaId;
}

void CreateTaskRequest::SetMediaId(const string& _mediaId)
{
    m_mediaId = _mediaId;
    m_mediaIdHasBeenSet = true;
}

bool CreateTaskRequest::MediaIdHasBeenSet() const
{
    return m_mediaIdHasBeenSet;
}

MediaPreknownInfo CreateTaskRequest::GetMediaPreknownInfo() const
{
    return m_mediaPreknownInfo;
}

void CreateTaskRequest::SetMediaPreknownInfo(const MediaPreknownInfo& _mediaPreknownInfo)
{
    m_mediaPreknownInfo = _mediaPreknownInfo;
    m_mediaPreknownInfoHasBeenSet = true;
}

bool CreateTaskRequest::MediaPreknownInfoHasBeenSet() const
{
    return m_mediaPreknownInfoHasBeenSet;
}

string CreateTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

bool CreateTaskRequest::GetUploadVideo() const
{
    return m_uploadVideo;
}

void CreateTaskRequest::SetUploadVideo(const bool& _uploadVideo)
{
    m_uploadVideo = _uploadVideo;
    m_uploadVideoHasBeenSet = true;
}

bool CreateTaskRequest::UploadVideoHasBeenSet() const
{
    return m_uploadVideoHasBeenSet;
}

string CreateTaskRequest::GetLabel() const
{
    return m_label;
}

void CreateTaskRequest::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool CreateTaskRequest::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string CreateTaskRequest::GetCallbackURL() const
{
    return m_callbackURL;
}

void CreateTaskRequest::SetCallbackURL(const string& _callbackURL)
{
    m_callbackURL = _callbackURL;
    m_callbackURLHasBeenSet = true;
}

bool CreateTaskRequest::CallbackURLHasBeenSet() const
{
    return m_callbackURLHasBeenSet;
}


