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

#include <tencentcloud/cloudstudio/v20210524/model/CustomizeTemplatesPresetsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

CustomizeTemplatesPresetsInfo::CustomizeTemplatesPresetsInfo() :
    m_tagsHasBeenSet(false),
    m_iconsHasBeenSet(false),
    m_templatesHasBeenSet(false)
{
}

CoreInternalOutcome CustomizeTemplatesPresetsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomizeTemplatesPresetsInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Icons") && !value["Icons"].IsNull())
    {
        if (!value["Icons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomizeTemplatesPresetsInfo.Icons` is not array type"));

        const rapidjson::Value &tmpValue = value["Icons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_icons.push_back((*itr).GetString());
        }
        m_iconsHasBeenSet = true;
    }

    if (value.HasMember("Templates") && !value["Templates"].IsNull())
    {
        if (!value["Templates"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizeTemplatesPresetsInfo.Templates` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templates.Deserialize(value["Templates"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomizeTemplatesPresetsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_iconsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_icons.begin(); itr != m_icons.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Templates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templates.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> CustomizeTemplatesPresetsInfo::GetTags() const
{
    return m_tags;
}

void CustomizeTemplatesPresetsInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CustomizeTemplatesPresetsInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> CustomizeTemplatesPresetsInfo::GetIcons() const
{
    return m_icons;
}

void CustomizeTemplatesPresetsInfo::SetIcons(const vector<string>& _icons)
{
    m_icons = _icons;
    m_iconsHasBeenSet = true;
}

bool CustomizeTemplatesPresetsInfo::IconsHasBeenSet() const
{
    return m_iconsHasBeenSet;
}

UserDefinedTemplateParams CustomizeTemplatesPresetsInfo::GetTemplates() const
{
    return m_templates;
}

void CustomizeTemplatesPresetsInfo::SetTemplates(const UserDefinedTemplateParams& _templates)
{
    m_templates = _templates;
    m_templatesHasBeenSet = true;
}

bool CustomizeTemplatesPresetsInfo::TemplatesHasBeenSet() const
{
    return m_templatesHasBeenSet;
}

