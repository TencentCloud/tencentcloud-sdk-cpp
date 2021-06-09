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

#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

StartMCUMixTranscodeByStrRoomIdRequest::StartMCUMixTranscodeByStrRoomIdRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_strRoomIdHasBeenSet(false),
    m_outputParamsHasBeenSet(false),
    m_encodeParamsHasBeenSet(false),
    m_layoutParamsHasBeenSet(false),
    m_publishCdnParamsHasBeenSet(false)
{
}

string StartMCUMixTranscodeByStrRoomIdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_strRoomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrRoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strRoomId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_encodeParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodeParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encodeParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_layoutParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_layoutParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_publishCdnParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishCdnParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publishCdnParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t StartMCUMixTranscodeByStrRoomIdRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void StartMCUMixTranscodeByStrRoomIdRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool StartMCUMixTranscodeByStrRoomIdRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string StartMCUMixTranscodeByStrRoomIdRequest::GetStrRoomId() const
{
    return m_strRoomId;
}

void StartMCUMixTranscodeByStrRoomIdRequest::SetStrRoomId(const string& _strRoomId)
{
    m_strRoomId = _strRoomId;
    m_strRoomIdHasBeenSet = true;
}

bool StartMCUMixTranscodeByStrRoomIdRequest::StrRoomIdHasBeenSet() const
{
    return m_strRoomIdHasBeenSet;
}

OutputParams StartMCUMixTranscodeByStrRoomIdRequest::GetOutputParams() const
{
    return m_outputParams;
}

void StartMCUMixTranscodeByStrRoomIdRequest::SetOutputParams(const OutputParams& _outputParams)
{
    m_outputParams = _outputParams;
    m_outputParamsHasBeenSet = true;
}

bool StartMCUMixTranscodeByStrRoomIdRequest::OutputParamsHasBeenSet() const
{
    return m_outputParamsHasBeenSet;
}

EncodeParams StartMCUMixTranscodeByStrRoomIdRequest::GetEncodeParams() const
{
    return m_encodeParams;
}

void StartMCUMixTranscodeByStrRoomIdRequest::SetEncodeParams(const EncodeParams& _encodeParams)
{
    m_encodeParams = _encodeParams;
    m_encodeParamsHasBeenSet = true;
}

bool StartMCUMixTranscodeByStrRoomIdRequest::EncodeParamsHasBeenSet() const
{
    return m_encodeParamsHasBeenSet;
}

LayoutParams StartMCUMixTranscodeByStrRoomIdRequest::GetLayoutParams() const
{
    return m_layoutParams;
}

void StartMCUMixTranscodeByStrRoomIdRequest::SetLayoutParams(const LayoutParams& _layoutParams)
{
    m_layoutParams = _layoutParams;
    m_layoutParamsHasBeenSet = true;
}

bool StartMCUMixTranscodeByStrRoomIdRequest::LayoutParamsHasBeenSet() const
{
    return m_layoutParamsHasBeenSet;
}

PublishCdnParams StartMCUMixTranscodeByStrRoomIdRequest::GetPublishCdnParams() const
{
    return m_publishCdnParams;
}

void StartMCUMixTranscodeByStrRoomIdRequest::SetPublishCdnParams(const PublishCdnParams& _publishCdnParams)
{
    m_publishCdnParams = _publishCdnParams;
    m_publishCdnParamsHasBeenSet = true;
}

bool StartMCUMixTranscodeByStrRoomIdRequest::PublishCdnParamsHasBeenSet() const
{
    return m_publishCdnParamsHasBeenSet;
}


