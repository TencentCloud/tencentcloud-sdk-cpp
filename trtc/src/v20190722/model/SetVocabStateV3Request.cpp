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

#include <tencentcloud/trtc/v20190722/model/SetVocabStateV3Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SetVocabStateV3Request::SetVocabStateV3Request() :
    m_vocabIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false)
{
}

string SetVocabStateV3Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vocabIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VocabId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vocabId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_state, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetVocabStateV3Request::GetVocabId() const
{
    return m_vocabId;
}

void SetVocabStateV3Request::SetVocabId(const string& _vocabId)
{
    m_vocabId = _vocabId;
    m_vocabIdHasBeenSet = true;
}

bool SetVocabStateV3Request::VocabIdHasBeenSet() const
{
    return m_vocabIdHasBeenSet;
}

int64_t SetVocabStateV3Request::GetState() const
{
    return m_state;
}

void SetVocabStateV3Request::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SetVocabStateV3Request::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t SetVocabStateV3Request::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SetVocabStateV3Request::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SetVocabStateV3Request::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}


