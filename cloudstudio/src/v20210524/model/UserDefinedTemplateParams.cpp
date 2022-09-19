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

#include <tencentcloud/cloudstudio/v20210524/model/UserDefinedTemplateParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

UserDefinedTemplateParams::UserDefinedTemplateParams() :
    m_nameHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionControlTypeHasBeenSet(false),
    m_versionControlUrlHasBeenSet(false)
{
}

CoreInternalOutcome UserDefinedTemplateParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefinedTemplateParams.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefinedTemplateParams.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserDefinedTemplateParams.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefinedTemplateParams.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefinedTemplateParams.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("VersionControlType") && !value["VersionControlType"].IsNull())
    {
        if (!value["VersionControlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefinedTemplateParams.VersionControlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlType = string(value["VersionControlType"].GetString());
        m_versionControlTypeHasBeenSet = true;
    }

    if (value.HasMember("VersionControlUrl") && !value["VersionControlUrl"].IsNull())
    {
        if (!value["VersionControlUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDefinedTemplateParams.VersionControlUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlUrl = string(value["VersionControlUrl"].GetString());
        m_versionControlUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserDefinedTemplateParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlType.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlUrl.c_str(), allocator).Move(), allocator);
    }

}


string UserDefinedTemplateParams::GetName() const
{
    return m_name;
}

void UserDefinedTemplateParams::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UserDefinedTemplateParams::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UserDefinedTemplateParams::GetIcon() const
{
    return m_icon;
}

void UserDefinedTemplateParams::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool UserDefinedTemplateParams::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

vector<string> UserDefinedTemplateParams::GetTags() const
{
    return m_tags;
}

void UserDefinedTemplateParams::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool UserDefinedTemplateParams::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string UserDefinedTemplateParams::GetSource() const
{
    return m_source;
}

void UserDefinedTemplateParams::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool UserDefinedTemplateParams::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string UserDefinedTemplateParams::GetDescription() const
{
    return m_description;
}

void UserDefinedTemplateParams::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UserDefinedTemplateParams::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UserDefinedTemplateParams::GetVersionControlType() const
{
    return m_versionControlType;
}

void UserDefinedTemplateParams::SetVersionControlType(const string& _versionControlType)
{
    m_versionControlType = _versionControlType;
    m_versionControlTypeHasBeenSet = true;
}

bool UserDefinedTemplateParams::VersionControlTypeHasBeenSet() const
{
    return m_versionControlTypeHasBeenSet;
}

string UserDefinedTemplateParams::GetVersionControlUrl() const
{
    return m_versionControlUrl;
}

void UserDefinedTemplateParams::SetVersionControlUrl(const string& _versionControlUrl)
{
    m_versionControlUrl = _versionControlUrl;
    m_versionControlUrlHasBeenSet = true;
}

bool UserDefinedTemplateParams::VersionControlUrlHasBeenSet() const
{
    return m_versionControlUrlHasBeenSet;
}

