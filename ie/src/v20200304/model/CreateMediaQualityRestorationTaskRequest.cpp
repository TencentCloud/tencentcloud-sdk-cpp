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

#include <tencentcloud/ie/v20200304/model/CreateMediaQualityRestorationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

CreateMediaQualityRestorationTaskRequest::CreateMediaQualityRestorationTaskRequest() :
    m_downInfoHasBeenSet(false),
    m_transInfoHasBeenSet(false),
    m_saveInfoHasBeenSet(false),
    m_callbackInfoHasBeenSet(false),
    m_topSpeedCodecChannelHasBeenSet(false)
{
}

string CreateMediaQualityRestorationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_downInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_downInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_transInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transInfo.begin(); itr != m_transInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_saveInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_saveInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_callbackInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callbackInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_topSpeedCodecChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopSpeedCodecChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topSpeedCodecChannel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


DownInfo CreateMediaQualityRestorationTaskRequest::GetDownInfo() const
{
    return m_downInfo;
}

void CreateMediaQualityRestorationTaskRequest::SetDownInfo(const DownInfo& _downInfo)
{
    m_downInfo = _downInfo;
    m_downInfoHasBeenSet = true;
}

bool CreateMediaQualityRestorationTaskRequest::DownInfoHasBeenSet() const
{
    return m_downInfoHasBeenSet;
}

vector<SubTaskTranscodeInfo> CreateMediaQualityRestorationTaskRequest::GetTransInfo() const
{
    return m_transInfo;
}

void CreateMediaQualityRestorationTaskRequest::SetTransInfo(const vector<SubTaskTranscodeInfo>& _transInfo)
{
    m_transInfo = _transInfo;
    m_transInfoHasBeenSet = true;
}

bool CreateMediaQualityRestorationTaskRequest::TransInfoHasBeenSet() const
{
    return m_transInfoHasBeenSet;
}

SaveInfo CreateMediaQualityRestorationTaskRequest::GetSaveInfo() const
{
    return m_saveInfo;
}

void CreateMediaQualityRestorationTaskRequest::SetSaveInfo(const SaveInfo& _saveInfo)
{
    m_saveInfo = _saveInfo;
    m_saveInfoHasBeenSet = true;
}

bool CreateMediaQualityRestorationTaskRequest::SaveInfoHasBeenSet() const
{
    return m_saveInfoHasBeenSet;
}

CallbackInfo CreateMediaQualityRestorationTaskRequest::GetCallbackInfo() const
{
    return m_callbackInfo;
}

void CreateMediaQualityRestorationTaskRequest::SetCallbackInfo(const CallbackInfo& _callbackInfo)
{
    m_callbackInfo = _callbackInfo;
    m_callbackInfoHasBeenSet = true;
}

bool CreateMediaQualityRestorationTaskRequest::CallbackInfoHasBeenSet() const
{
    return m_callbackInfoHasBeenSet;
}

uint64_t CreateMediaQualityRestorationTaskRequest::GetTopSpeedCodecChannel() const
{
    return m_topSpeedCodecChannel;
}

void CreateMediaQualityRestorationTaskRequest::SetTopSpeedCodecChannel(const uint64_t& _topSpeedCodecChannel)
{
    m_topSpeedCodecChannel = _topSpeedCodecChannel;
    m_topSpeedCodecChannelHasBeenSet = true;
}

bool CreateMediaQualityRestorationTaskRequest::TopSpeedCodecChannelHasBeenSet() const
{
    return m_topSpeedCodecChannelHasBeenSet;
}


