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

#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeApiKeyRequest::DescribeApiKeyRequest() :
    m_platformHasBeenSet(false),
    m_apiKeyIdHasBeenSet(false),
    m_apiKeyHasBeenSet(false)
{
}

string DescribeApiKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApiKeyRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeApiKeyRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeApiKeyRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeApiKeyRequest::GetApiKeyId() const
{
    return m_apiKeyId;
}

void DescribeApiKeyRequest::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool DescribeApiKeyRequest::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string DescribeApiKeyRequest::GetApiKey() const
{
    return m_apiKey;
}

void DescribeApiKeyRequest::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool DescribeApiKeyRequest::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}


