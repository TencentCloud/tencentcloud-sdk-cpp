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

#include <tencentcloud/gse/v20191112/model/UpdateBucketCORSOptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

UpdateBucketCORSOptRequest::UpdateBucketCORSOptRequest() :
    m_allowedOriginsHasBeenSet(false),
    m_allowedMethodsHasBeenSet(false),
    m_allowedHeadersHasBeenSet(false),
    m_maxAgeSecondsHasBeenSet(false),
    m_exposeHeadersHasBeenSet(false)
{
}

string UpdateBucketCORSOptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allowedOriginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedOrigins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedOrigins.begin(); itr != m_allowedOrigins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowedMethodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedMethods";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedMethods.begin(); itr != m_allowedMethods.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowedHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedHeaders.begin(); itr != m_allowedHeaders.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxAgeSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxAgeSeconds, allocator);
    }

    if (m_exposeHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposeHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exposeHeaders.begin(); itr != m_exposeHeaders.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UpdateBucketCORSOptRequest::GetAllowedOrigins() const
{
    return m_allowedOrigins;
}

void UpdateBucketCORSOptRequest::SetAllowedOrigins(const vector<string>& _allowedOrigins)
{
    m_allowedOrigins = _allowedOrigins;
    m_allowedOriginsHasBeenSet = true;
}

bool UpdateBucketCORSOptRequest::AllowedOriginsHasBeenSet() const
{
    return m_allowedOriginsHasBeenSet;
}

vector<string> UpdateBucketCORSOptRequest::GetAllowedMethods() const
{
    return m_allowedMethods;
}

void UpdateBucketCORSOptRequest::SetAllowedMethods(const vector<string>& _allowedMethods)
{
    m_allowedMethods = _allowedMethods;
    m_allowedMethodsHasBeenSet = true;
}

bool UpdateBucketCORSOptRequest::AllowedMethodsHasBeenSet() const
{
    return m_allowedMethodsHasBeenSet;
}

vector<string> UpdateBucketCORSOptRequest::GetAllowedHeaders() const
{
    return m_allowedHeaders;
}

void UpdateBucketCORSOptRequest::SetAllowedHeaders(const vector<string>& _allowedHeaders)
{
    m_allowedHeaders = _allowedHeaders;
    m_allowedHeadersHasBeenSet = true;
}

bool UpdateBucketCORSOptRequest::AllowedHeadersHasBeenSet() const
{
    return m_allowedHeadersHasBeenSet;
}

int64_t UpdateBucketCORSOptRequest::GetMaxAgeSeconds() const
{
    return m_maxAgeSeconds;
}

void UpdateBucketCORSOptRequest::SetMaxAgeSeconds(const int64_t& _maxAgeSeconds)
{
    m_maxAgeSeconds = _maxAgeSeconds;
    m_maxAgeSecondsHasBeenSet = true;
}

bool UpdateBucketCORSOptRequest::MaxAgeSecondsHasBeenSet() const
{
    return m_maxAgeSecondsHasBeenSet;
}

vector<string> UpdateBucketCORSOptRequest::GetExposeHeaders() const
{
    return m_exposeHeaders;
}

void UpdateBucketCORSOptRequest::SetExposeHeaders(const vector<string>& _exposeHeaders)
{
    m_exposeHeaders = _exposeHeaders;
    m_exposeHeadersHasBeenSet = true;
}

bool UpdateBucketCORSOptRequest::ExposeHeadersHasBeenSet() const
{
    return m_exposeHeadersHasBeenSet;
}


