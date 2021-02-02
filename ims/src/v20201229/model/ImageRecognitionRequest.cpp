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

#include <tencentcloud/ims/v20201229/model/ImageRecognitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ims::V20201229::Model;
using namespace rapidjson;
using namespace std;

ImageRecognitionRequest::ImageRecognitionRequest() :
    m_channelHasBeenSet(false),
    m_customAppIdHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_maxFramesHasBeenSet(false),
    m_userHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_customUinHasBeenSet(false),
    m_customSubAccountUinHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

string ImageRecognitionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channel, allocator);
    }

    if (m_customAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_maxFramesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxFrames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFrames, allocator);
    }

    if (m_userHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_user.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deviceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_device.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_customUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customUin.c_str(), allocator).Move(), allocator);
    }

    if (m_customSubAccountUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_streamIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_streamId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ImageRecognitionRequest::GetChannel() const
{
    return m_channel;
}

void ImageRecognitionRequest::SetChannel(const uint64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool ImageRecognitionRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string ImageRecognitionRequest::GetCustomAppId() const
{
    return m_customAppId;
}

void ImageRecognitionRequest::SetCustomAppId(const string& _customAppId)
{
    m_customAppId = _customAppId;
    m_customAppIdHasBeenSet = true;
}

bool ImageRecognitionRequest::CustomAppIdHasBeenSet() const
{
    return m_customAppIdHasBeenSet;
}

string ImageRecognitionRequest::GetBizType() const
{
    return m_bizType;
}

void ImageRecognitionRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool ImageRecognitionRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string ImageRecognitionRequest::GetDataId() const
{
    return m_dataId;
}

void ImageRecognitionRequest::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool ImageRecognitionRequest::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string ImageRecognitionRequest::GetFileContent() const
{
    return m_fileContent;
}

void ImageRecognitionRequest::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool ImageRecognitionRequest::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string ImageRecognitionRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void ImageRecognitionRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool ImageRecognitionRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

int64_t ImageRecognitionRequest::GetInterval() const
{
    return m_interval;
}

void ImageRecognitionRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ImageRecognitionRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

int64_t ImageRecognitionRequest::GetMaxFrames() const
{
    return m_maxFrames;
}

void ImageRecognitionRequest::SetMaxFrames(const int64_t& _maxFrames)
{
    m_maxFrames = _maxFrames;
    m_maxFramesHasBeenSet = true;
}

bool ImageRecognitionRequest::MaxFramesHasBeenSet() const
{
    return m_maxFramesHasBeenSet;
}

User ImageRecognitionRequest::GetUser() const
{
    return m_user;
}

void ImageRecognitionRequest::SetUser(const User& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool ImageRecognitionRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

Device ImageRecognitionRequest::GetDevice() const
{
    return m_device;
}

void ImageRecognitionRequest::SetDevice(const Device& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool ImageRecognitionRequest::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string ImageRecognitionRequest::GetCustomUin() const
{
    return m_customUin;
}

void ImageRecognitionRequest::SetCustomUin(const string& _customUin)
{
    m_customUin = _customUin;
    m_customUinHasBeenSet = true;
}

bool ImageRecognitionRequest::CustomUinHasBeenSet() const
{
    return m_customUinHasBeenSet;
}

string ImageRecognitionRequest::GetCustomSubAccountUin() const
{
    return m_customSubAccountUin;
}

void ImageRecognitionRequest::SetCustomSubAccountUin(const string& _customSubAccountUin)
{
    m_customSubAccountUin = _customSubAccountUin;
    m_customSubAccountUinHasBeenSet = true;
}

bool ImageRecognitionRequest::CustomSubAccountUinHasBeenSet() const
{
    return m_customSubAccountUinHasBeenSet;
}

string ImageRecognitionRequest::GetStreamId() const
{
    return m_streamId;
}

void ImageRecognitionRequest::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool ImageRecognitionRequest::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}


