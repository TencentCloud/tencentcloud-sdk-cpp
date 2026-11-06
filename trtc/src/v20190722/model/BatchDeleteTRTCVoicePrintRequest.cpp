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

#include <tencentcloud/trtc/v20190722/model/BatchDeleteTRTCVoicePrintRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

BatchDeleteTRTCVoicePrintRequest::BatchDeleteTRTCVoicePrintRequest() :
    m_voicePrintIdsHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false)
{
}

string BatchDeleteTRTCVoicePrintRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_voicePrintIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voicePrintIds.begin(); itr != m_voicePrintIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchDeleteTRTCVoicePrintRequest::GetVoicePrintIds() const
{
    return m_voicePrintIds;
}

void BatchDeleteTRTCVoicePrintRequest::SetVoicePrintIds(const vector<string>& _voicePrintIds)
{
    m_voicePrintIds = _voicePrintIds;
    m_voicePrintIdsHasBeenSet = true;
}

bool BatchDeleteTRTCVoicePrintRequest::VoicePrintIdsHasBeenSet() const
{
    return m_voicePrintIdsHasBeenSet;
}

string BatchDeleteTRTCVoicePrintRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void BatchDeleteTRTCVoicePrintRequest::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool BatchDeleteTRTCVoicePrintRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}


