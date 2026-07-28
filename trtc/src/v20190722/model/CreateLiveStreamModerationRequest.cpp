/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/trtc/v20190722/model/CreateLiveStreamModerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateLiveStreamModerationRequest::CreateLiveStreamModerationRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_liveModerationParamsHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_liveModerationStorageParamsHasBeenSet(false),
    m_resourceExpiredHourHasBeenSet(false)
{
}

string CreateLiveStreamModerationRequest::ToJsonString() const
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

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_liveModerationParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveModerationParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveModerationParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_liveModerationStorageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveModerationStorageParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveModerationStorageParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourceExpiredHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceExpiredHour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceExpiredHour, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateLiveStreamModerationRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateLiveStreamModerationRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateLiveStreamModerationRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

Input CreateLiveStreamModerationRequest::GetInput() const
{
    return m_input;
}

void CreateLiveStreamModerationRequest::SetInput(const Input& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool CreateLiveStreamModerationRequest::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

LiveModerationParams CreateLiveStreamModerationRequest::GetLiveModerationParams() const
{
    return m_liveModerationParams;
}

void CreateLiveStreamModerationRequest::SetLiveModerationParams(const LiveModerationParams& _liveModerationParams)
{
    m_liveModerationParams = _liveModerationParams;
    m_liveModerationParamsHasBeenSet = true;
}

bool CreateLiveStreamModerationRequest::LiveModerationParamsHasBeenSet() const
{
    return m_liveModerationParamsHasBeenSet;
}

string CreateLiveStreamModerationRequest::GetDataId() const
{
    return m_dataId;
}

void CreateLiveStreamModerationRequest::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool CreateLiveStreamModerationRequest::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

SourceInfo CreateLiveStreamModerationRequest::GetSourceInfo() const
{
    return m_sourceInfo;
}

void CreateLiveStreamModerationRequest::SetSourceInfo(const SourceInfo& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool CreateLiveStreamModerationRequest::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

LiveModerationStorageParams CreateLiveStreamModerationRequest::GetLiveModerationStorageParams() const
{
    return m_liveModerationStorageParams;
}

void CreateLiveStreamModerationRequest::SetLiveModerationStorageParams(const LiveModerationStorageParams& _liveModerationStorageParams)
{
    m_liveModerationStorageParams = _liveModerationStorageParams;
    m_liveModerationStorageParamsHasBeenSet = true;
}

bool CreateLiveStreamModerationRequest::LiveModerationStorageParamsHasBeenSet() const
{
    return m_liveModerationStorageParamsHasBeenSet;
}

uint64_t CreateLiveStreamModerationRequest::GetResourceExpiredHour() const
{
    return m_resourceExpiredHour;
}

void CreateLiveStreamModerationRequest::SetResourceExpiredHour(const uint64_t& _resourceExpiredHour)
{
    m_resourceExpiredHour = _resourceExpiredHour;
    m_resourceExpiredHourHasBeenSet = true;
}

bool CreateLiveStreamModerationRequest::ResourceExpiredHourHasBeenSet() const
{
    return m_resourceExpiredHourHasBeenSet;
}


