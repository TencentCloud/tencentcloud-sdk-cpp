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

#include <tencentcloud/ims/v20200713/model/ImageModerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ims::V20200713::Model;
using namespace std;

ImageModerationRequest::ImageModerationRequest() :
    m_bizTypeHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_maxFramesHasBeenSet(false),
    m_userHasBeenSet(false),
    m_deviceHasBeenSet(false)
{
}

string ImageModerationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_maxFramesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFrames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFrames, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_user.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_device.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImageModerationRequest::GetBizType() const
{
    return m_bizType;
}

void ImageModerationRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool ImageModerationRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string ImageModerationRequest::GetDataId() const
{
    return m_dataId;
}

void ImageModerationRequest::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool ImageModerationRequest::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string ImageModerationRequest::GetFileContent() const
{
    return m_fileContent;
}

void ImageModerationRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool ImageModerationRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string ImageModerationRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void ImageModerationRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool ImageModerationRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

int64_t ImageModerationRequest::GetInterval() const
{
    return m_interval;
}

void ImageModerationRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ImageModerationRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

int64_t ImageModerationRequest::GetMaxFrames() const
{
    return m_maxFrames;
}

void ImageModerationRequest::SetMaxFrames(const int64_t& _maxFrames)
{
    m_maxFrames = _maxFrames;
    m_maxFramesHasBeenSet = true;
}

bool ImageModerationRequest::MaxFramesHasBeenSet() const
{
    return m_maxFramesHasBeenSet;
}

User ImageModerationRequest::GetUser() const
{
    return m_user;
}

void ImageModerationRequest::SetUser(const User& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool ImageModerationRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

Device ImageModerationRequest::GetDevice() const
{
    return m_device;
}

void ImageModerationRequest::SetDevice(const Device& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool ImageModerationRequest::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}


