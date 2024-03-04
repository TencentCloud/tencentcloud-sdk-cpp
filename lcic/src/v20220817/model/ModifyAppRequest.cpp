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

#include <tencentcloud/lcic/v20220817/model/ModifyAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

ModifyAppRequest::ModifyAppRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_callbackKeyHasBeenSet(false),
    m_transferIdHasBeenSet(false),
    m_transferUrlHasBeenSet(false)
{
}

string ModifyAppRequest::ToJsonString() const
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

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callback.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackKey.c_str(), allocator).Move(), allocator);
    }

    if (m_transferIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transferId.c_str(), allocator).Move(), allocator);
    }

    if (m_transferUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transferUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyAppRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyAppRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyAppRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ModifyAppRequest::GetCallback() const
{
    return m_callback;
}

void ModifyAppRequest::SetCallback(const string& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool ModifyAppRequest::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

string ModifyAppRequest::GetCallbackKey() const
{
    return m_callbackKey;
}

void ModifyAppRequest::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool ModifyAppRequest::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}

string ModifyAppRequest::GetTransferId() const
{
    return m_transferId;
}

void ModifyAppRequest::SetTransferId(const string& _transferId)
{
    m_transferId = _transferId;
    m_transferIdHasBeenSet = true;
}

bool ModifyAppRequest::TransferIdHasBeenSet() const
{
    return m_transferIdHasBeenSet;
}

string ModifyAppRequest::GetTransferUrl() const
{
    return m_transferUrl;
}

void ModifyAppRequest::SetTransferUrl(const string& _transferUrl)
{
    m_transferUrl = _transferUrl;
    m_transferUrlHasBeenSet = true;
}

bool ModifyAppRequest::TransferUrlHasBeenSet() const
{
    return m_transferUrlHasBeenSet;
}


