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

#include <tencentcloud/cwp/v20180228/model/AssetWebAppPluginInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetWebAppPluginInfo::AssetWebAppPluginInfo() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_linkHasBeenSet(false)
{
}

CoreInternalOutcome AssetWebAppPluginInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppPluginInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppPluginInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppPluginInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Link") && !value["Link"].IsNull())
    {
        if (!value["Link"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppPluginInfo.Link` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_link = string(value["Link"].GetString());
        m_linkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetWebAppPluginInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_linkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Link";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_link.c_str(), allocator).Move(), allocator);
    }

}


string AssetWebAppPluginInfo::GetName() const
{
    return m_name;
}

void AssetWebAppPluginInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetWebAppPluginInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetWebAppPluginInfo::GetDesc() const
{
    return m_desc;
}

void AssetWebAppPluginInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AssetWebAppPluginInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string AssetWebAppPluginInfo::GetVersion() const
{
    return m_version;
}

void AssetWebAppPluginInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AssetWebAppPluginInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string AssetWebAppPluginInfo::GetLink() const
{
    return m_link;
}

void AssetWebAppPluginInfo::SetLink(const string& _link)
{
    m_link = _link;
    m_linkHasBeenSet = true;
}

bool AssetWebAppPluginInfo::LinkHasBeenSet() const
{
    return m_linkHasBeenSet;
}

