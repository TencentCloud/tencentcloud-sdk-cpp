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

#include <tencentcloud/adp/v20260520/model/PluginProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PluginProfile::PluginProfile() :
    m_authorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pluginClassHasBeenSet(false),
    m_pluginKindHasBeenSet(false),
    m_pluginSourceHasBeenSet(false)
{
}

CoreInternalOutcome PluginProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginProfile.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginProfile.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginProfile.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginProfile.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PluginClass") && !value["PluginClass"].IsNull())
    {
        if (!value["PluginClass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginProfile.PluginClass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pluginClass = value["PluginClass"].GetInt64();
        m_pluginClassHasBeenSet = true;
    }

    if (value.HasMember("PluginKind") && !value["PluginKind"].IsNull())
    {
        if (!value["PluginKind"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginProfile.PluginKind` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pluginKind = value["PluginKind"].GetInt64();
        m_pluginKindHasBeenSet = true;
    }

    if (value.HasMember("PluginSource") && !value["PluginSource"].IsNull())
    {
        if (!value["PluginSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginProfile.PluginSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pluginSource = value["PluginSource"].GetInt64();
        m_pluginSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pluginClass, allocator);
    }

    if (m_pluginKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pluginKind, allocator);
    }

    if (m_pluginSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pluginSource, allocator);
    }

}


string PluginProfile::GetAuthor() const
{
    return m_author;
}

void PluginProfile::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool PluginProfile::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string PluginProfile::GetDescription() const
{
    return m_description;
}

void PluginProfile::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PluginProfile::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string PluginProfile::GetIconUrl() const
{
    return m_iconUrl;
}

void PluginProfile::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool PluginProfile::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string PluginProfile::GetName() const
{
    return m_name;
}

void PluginProfile::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PluginProfile::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t PluginProfile::GetPluginClass() const
{
    return m_pluginClass;
}

void PluginProfile::SetPluginClass(const int64_t& _pluginClass)
{
    m_pluginClass = _pluginClass;
    m_pluginClassHasBeenSet = true;
}

bool PluginProfile::PluginClassHasBeenSet() const
{
    return m_pluginClassHasBeenSet;
}

int64_t PluginProfile::GetPluginKind() const
{
    return m_pluginKind;
}

void PluginProfile::SetPluginKind(const int64_t& _pluginKind)
{
    m_pluginKind = _pluginKind;
    m_pluginKindHasBeenSet = true;
}

bool PluginProfile::PluginKindHasBeenSet() const
{
    return m_pluginKindHasBeenSet;
}

int64_t PluginProfile::GetPluginSource() const
{
    return m_pluginSource;
}

void PluginProfile::SetPluginSource(const int64_t& _pluginSource)
{
    m_pluginSource = _pluginSource;
    m_pluginSourceHasBeenSet = true;
}

bool PluginProfile::PluginSourceHasBeenSet() const
{
    return m_pluginSourceHasBeenSet;
}

