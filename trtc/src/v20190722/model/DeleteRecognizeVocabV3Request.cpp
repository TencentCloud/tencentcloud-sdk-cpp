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

#include <tencentcloud/trtc/v20190722/model/DeleteRecognizeVocabV3Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

DeleteRecognizeVocabV3Request::DeleteRecognizeVocabV3Request() :
    m_vocabIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false)
{
}

string DeleteRecognizeVocabV3Request::ToJsonString() const
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


string DeleteRecognizeVocabV3Request::GetVocabId() const
{
    return m_vocabId;
}

void DeleteRecognizeVocabV3Request::SetVocabId(const string& _vocabId)
{
    m_vocabId = _vocabId;
    m_vocabIdHasBeenSet = true;
}

bool DeleteRecognizeVocabV3Request::VocabIdHasBeenSet() const
{
    return m_vocabIdHasBeenSet;
}

uint64_t DeleteRecognizeVocabV3Request::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DeleteRecognizeVocabV3Request::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DeleteRecognizeVocabV3Request::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}


