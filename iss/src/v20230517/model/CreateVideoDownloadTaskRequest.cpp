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

#include <tencentcloud/iss/v20230517/model/CreateVideoDownloadTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

CreateVideoDownloadTaskRequest::CreateVideoDownloadTaskRequest() :
    m_channelIdHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_expireHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_completionPolicyHasBeenSet(false)
{
}

string CreateVideoDownloadTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scale, allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expire, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileType, allocator);
    }

    if (m_completionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletionPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_completionPolicy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVideoDownloadTaskRequest::GetChannelId() const
{
    return m_channelId;
}

void CreateVideoDownloadTaskRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool CreateVideoDownloadTaskRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t CreateVideoDownloadTaskRequest::GetBeginTime() const
{
    return m_beginTime;
}

void CreateVideoDownloadTaskRequest::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool CreateVideoDownloadTaskRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t CreateVideoDownloadTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateVideoDownloadTaskRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateVideoDownloadTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CreateVideoDownloadTaskRequest::GetScale() const
{
    return m_scale;
}

void CreateVideoDownloadTaskRequest::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool CreateVideoDownloadTaskRequest::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

int64_t CreateVideoDownloadTaskRequest::GetExpire() const
{
    return m_expire;
}

void CreateVideoDownloadTaskRequest::SetExpire(const int64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool CreateVideoDownloadTaskRequest::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}

int64_t CreateVideoDownloadTaskRequest::GetFileType() const
{
    return m_fileType;
}

void CreateVideoDownloadTaskRequest::SetFileType(const int64_t& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool CreateVideoDownloadTaskRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t CreateVideoDownloadTaskRequest::GetCompletionPolicy() const
{
    return m_completionPolicy;
}

void CreateVideoDownloadTaskRequest::SetCompletionPolicy(const int64_t& _completionPolicy)
{
    m_completionPolicy = _completionPolicy;
    m_completionPolicyHasBeenSet = true;
}

bool CreateVideoDownloadTaskRequest::CompletionPolicyHasBeenSet() const
{
    return m_completionPolicyHasBeenSet;
}


