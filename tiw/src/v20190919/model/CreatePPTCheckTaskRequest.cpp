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

#include <tencentcloud/tiw/v20190919/model/CreatePPTCheckTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

CreatePPTCheckTaskRequest::CreatePPTCheckTaskRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_autoHandleUnsupportedElementHasBeenSet(false),
    m_autoHandleUnsupportedElementTypesHasBeenSet(false)
{
}

string CreatePPTCheckTaskRequest::ToJsonString() const
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

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_autoHandleUnsupportedElementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoHandleUnsupportedElement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoHandleUnsupportedElement, allocator);
    }

    if (m_autoHandleUnsupportedElementTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoHandleUnsupportedElementTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoHandleUnsupportedElementTypes.begin(); itr != m_autoHandleUnsupportedElementTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreatePPTCheckTaskRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreatePPTCheckTaskRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreatePPTCheckTaskRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreatePPTCheckTaskRequest::GetUrl() const
{
    return m_url;
}

void CreatePPTCheckTaskRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreatePPTCheckTaskRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

bool CreatePPTCheckTaskRequest::GetAutoHandleUnsupportedElement() const
{
    return m_autoHandleUnsupportedElement;
}

void CreatePPTCheckTaskRequest::SetAutoHandleUnsupportedElement(const bool& _autoHandleUnsupportedElement)
{
    m_autoHandleUnsupportedElement = _autoHandleUnsupportedElement;
    m_autoHandleUnsupportedElementHasBeenSet = true;
}

bool CreatePPTCheckTaskRequest::AutoHandleUnsupportedElementHasBeenSet() const
{
    return m_autoHandleUnsupportedElementHasBeenSet;
}

vector<int64_t> CreatePPTCheckTaskRequest::GetAutoHandleUnsupportedElementTypes() const
{
    return m_autoHandleUnsupportedElementTypes;
}

void CreatePPTCheckTaskRequest::SetAutoHandleUnsupportedElementTypes(const vector<int64_t>& _autoHandleUnsupportedElementTypes)
{
    m_autoHandleUnsupportedElementTypes = _autoHandleUnsupportedElementTypes;
    m_autoHandleUnsupportedElementTypesHasBeenSet = true;
}

bool CreatePPTCheckTaskRequest::AutoHandleUnsupportedElementTypesHasBeenSet() const
{
    return m_autoHandleUnsupportedElementTypesHasBeenSet;
}


