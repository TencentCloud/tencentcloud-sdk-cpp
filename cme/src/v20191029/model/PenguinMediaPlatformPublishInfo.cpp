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

#include <tencentcloud/cme/v20191029/model/PenguinMediaPlatformPublishInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

PenguinMediaPlatformPublishInfo::PenguinMediaPlatformPublishInfo() :
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

CoreInternalOutcome PenguinMediaPlatformPublishInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PenguinMediaPlatformPublishInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PenguinMediaPlatformPublishInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PenguinMediaPlatformPublishInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PenguinMediaPlatformPublishInfo.Category` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_category = value["Category"].GetInt64();
        m_categoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PenguinMediaPlatformPublishInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_category, allocator);
    }

}


string PenguinMediaPlatformPublishInfo::GetTitle() const
{
    return m_title;
}

void PenguinMediaPlatformPublishInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool PenguinMediaPlatformPublishInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string PenguinMediaPlatformPublishInfo::GetDescription() const
{
    return m_description;
}

void PenguinMediaPlatformPublishInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PenguinMediaPlatformPublishInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> PenguinMediaPlatformPublishInfo::GetTags() const
{
    return m_tags;
}

void PenguinMediaPlatformPublishInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool PenguinMediaPlatformPublishInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t PenguinMediaPlatformPublishInfo::GetCategory() const
{
    return m_category;
}

void PenguinMediaPlatformPublishInfo::SetCategory(const int64_t& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool PenguinMediaPlatformPublishInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

