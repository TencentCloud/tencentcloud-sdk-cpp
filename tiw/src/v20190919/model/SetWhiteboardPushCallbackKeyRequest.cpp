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

#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

SetWhiteboardPushCallbackKeyRequest::SetWhiteboardPushCallbackKeyRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_callbackKeyHasBeenSet(false)
{
}

string SetWhiteboardPushCallbackKeyRequest::ToJsonString() const
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

    if (m_callbackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SetWhiteboardPushCallbackKeyRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SetWhiteboardPushCallbackKeyRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SetWhiteboardPushCallbackKeyRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string SetWhiteboardPushCallbackKeyRequest::GetCallbackKey() const
{
    return m_callbackKey;
}

void SetWhiteboardPushCallbackKeyRequest::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool SetWhiteboardPushCallbackKeyRequest::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}


