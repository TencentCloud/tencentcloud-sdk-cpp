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

#include <tencentcloud/iss/v20230517/model/ControlDeviceStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ControlDeviceStreamRequest::ControlDeviceStreamRequest() :
    m_channelIdHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_isInternalHasBeenSet(false)
{
}

string ControlDeviceStreamRequest::ToJsonString() const
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

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamType.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_isInternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInternal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInternal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlDeviceStreamRequest::GetChannelId() const
{
    return m_channelId;
}

void ControlDeviceStreamRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ControlDeviceStreamRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string ControlDeviceStreamRequest::GetStreamType() const
{
    return m_streamType;
}

void ControlDeviceStreamRequest::SetStreamType(const string& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool ControlDeviceStreamRequest::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

string ControlDeviceStreamRequest::GetResolution() const
{
    return m_resolution;
}

void ControlDeviceStreamRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool ControlDeviceStreamRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

bool ControlDeviceStreamRequest::GetIsInternal() const
{
    return m_isInternal;
}

void ControlDeviceStreamRequest::SetIsInternal(const bool& _isInternal)
{
    m_isInternal = _isInternal;
    m_isInternalHasBeenSet = true;
}

bool ControlDeviceStreamRequest::IsInternalHasBeenSet() const
{
    return m_isInternalHasBeenSet;
}


