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

#include <tencentcloud/workbuddyenterprise/v20260709/model/A2ASkillInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

A2ASkillInput::A2ASkillInput() :
    m_a2ASkillIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_examplesHasBeenSet(false)
{
}

CoreInternalOutcome A2ASkillInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("A2ASkillId") && !value["A2ASkillId"].IsNull())
    {
        if (!value["A2ASkillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2ASkillInput.A2ASkillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2ASkillId = string(value["A2ASkillId"].GetString());
        m_a2ASkillIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2ASkillInput.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2ASkillInput.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `A2ASkillInput.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Examples") && !value["Examples"].IsNull())
    {
        if (!value["Examples"].IsArray())
            return CoreInternalOutcome(Core::Error("response `A2ASkillInput.Examples` is not array type"));

        const rapidjson::Value &tmpValue = value["Examples"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_examples.push_back((*itr).GetString());
        }
        m_examplesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void A2ASkillInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_a2ASkillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2ASkillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2ASkillId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_examplesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Examples";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_examples.begin(); itr != m_examples.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string A2ASkillInput::GetA2ASkillId() const
{
    return m_a2ASkillId;
}

void A2ASkillInput::SetA2ASkillId(const string& _a2ASkillId)
{
    m_a2ASkillId = _a2ASkillId;
    m_a2ASkillIdHasBeenSet = true;
}

bool A2ASkillInput::A2ASkillIdHasBeenSet() const
{
    return m_a2ASkillIdHasBeenSet;
}

string A2ASkillInput::GetName() const
{
    return m_name;
}

void A2ASkillInput::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool A2ASkillInput::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string A2ASkillInput::GetDescription() const
{
    return m_description;
}

void A2ASkillInput::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool A2ASkillInput::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> A2ASkillInput::GetTags() const
{
    return m_tags;
}

void A2ASkillInput::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool A2ASkillInput::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> A2ASkillInput::GetExamples() const
{
    return m_examples;
}

void A2ASkillInput::SetExamples(const vector<string>& _examples)
{
    m_examples = _examples;
    m_examplesHasBeenSet = true;
}

bool A2ASkillInput::ExamplesHasBeenSet() const
{
    return m_examplesHasBeenSet;
}

