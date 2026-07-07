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

#include <tencentcloud/alb/v20251030/model/FixedResponseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

FixedResponseInfo::FixedResponseInfo() :
    m_httpCodeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

CoreInternalOutcome FixedResponseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpCode") && !value["HttpCode"].IsNull())
    {
        if (!value["HttpCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FixedResponseInfo.HttpCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_httpCode = value["HttpCode"].GetInt64();
        m_httpCodeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FixedResponseInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FixedResponseInfo.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FixedResponseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpCode, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

}


int64_t FixedResponseInfo::GetHttpCode() const
{
    return m_httpCode;
}

void FixedResponseInfo::SetHttpCode(const int64_t& _httpCode)
{
    m_httpCode = _httpCode;
    m_httpCodeHasBeenSet = true;
}

bool FixedResponseInfo::HttpCodeHasBeenSet() const
{
    return m_httpCodeHasBeenSet;
}

string FixedResponseInfo::GetContent() const
{
    return m_content;
}

void FixedResponseInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool FixedResponseInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string FixedResponseInfo::GetContentType() const
{
    return m_contentType;
}

void FixedResponseInfo::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool FixedResponseInfo::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

