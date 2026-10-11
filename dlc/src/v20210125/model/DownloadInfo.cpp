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

#include <tencentcloud/dlc/v20210125/model/DownloadInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DownloadInfo::DownloadInfo() :
    m_urlHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_expireSecondsHasBeenSet(false)
{
}

CoreInternalOutcome DownloadInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ExpireSeconds") && !value["ExpireSeconds"].IsNull())
    {
        if (!value["ExpireSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadInfo.ExpireSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireSeconds = value["ExpireSeconds"].GetInt64();
        m_expireSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DownloadInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_expireSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireSeconds, allocator);
    }

}


string DownloadInfo::GetUrl() const
{
    return m_url;
}

void DownloadInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DownloadInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DownloadInfo::GetFormat() const
{
    return m_format;
}

void DownloadInfo::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool DownloadInfo::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

int64_t DownloadInfo::GetSize() const
{
    return m_size;
}

void DownloadInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DownloadInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t DownloadInfo::GetExpireSeconds() const
{
    return m_expireSeconds;
}

void DownloadInfo::SetExpireSeconds(const int64_t& _expireSeconds)
{
    m_expireSeconds = _expireSeconds;
    m_expireSecondsHasBeenSet = true;
}

bool DownloadInfo::ExpireSecondsHasBeenSet() const
{
    return m_expireSecondsHasBeenSet;
}

