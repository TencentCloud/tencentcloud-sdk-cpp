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

#include <tencentcloud/lke/v20231130/model/SandboxContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

SandboxContent::SandboxContent() :
    m_urlHasBeenSet(false),
    m_displayUrlHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome SandboxContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxContent.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("DisplayUrl") && !value["DisplayUrl"].IsNull())
    {
        if (!value["DisplayUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxContent.DisplayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayUrl = string(value["DisplayUrl"].GetString());
        m_displayUrlHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxContent.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SandboxContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_displayUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string SandboxContent::GetUrl() const
{
    return m_url;
}

void SandboxContent::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SandboxContent::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string SandboxContent::GetDisplayUrl() const
{
    return m_displayUrl;
}

void SandboxContent::SetDisplayUrl(const string& _displayUrl)
{
    m_displayUrl = _displayUrl;
    m_displayUrlHasBeenSet = true;
}

bool SandboxContent::DisplayUrlHasBeenSet() const
{
    return m_displayUrlHasBeenSet;
}

string SandboxContent::GetContent() const
{
    return m_content;
}

void SandboxContent::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool SandboxContent::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

