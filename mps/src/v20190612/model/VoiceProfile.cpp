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

#include <tencentcloud/mps/v20190612/model/VoiceProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

VoiceProfile::VoiceProfile() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_languagesHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_scenesHasBeenSet(false)
{
}

CoreInternalOutcome VoiceProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceProfile.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceProfile.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceProfile.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceProfile.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Languages") && !value["Languages"].IsNull())
    {
        if (!value["Languages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceProfile.Languages` is not array type"));

        const rapidjson::Value &tmpValue = value["Languages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_languages.push_back((*itr).GetString());
        }
        m_languagesHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceProfile.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labels.push_back((*itr).GetString());
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Scenes") && !value["Scenes"].IsNull())
    {
        if (!value["Scenes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceProfile.Scenes` is not array type"));

        const rapidjson::Value &tmpValue = value["Scenes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scenes.push_back((*itr).GetString());
        }
        m_scenesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_age.c_str(), allocator).Move(), allocator);
    }

    if (m_languagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Languages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_languages.begin(); itr != m_languages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scenesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scenes.begin(); itr != m_scenes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string VoiceProfile::GetName() const
{
    return m_name;
}

void VoiceProfile::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VoiceProfile::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VoiceProfile::GetDescription() const
{
    return m_description;
}

void VoiceProfile::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VoiceProfile::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VoiceProfile::GetGender() const
{
    return m_gender;
}

void VoiceProfile::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool VoiceProfile::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string VoiceProfile::GetAge() const
{
    return m_age;
}

void VoiceProfile::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool VoiceProfile::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

vector<string> VoiceProfile::GetLanguages() const
{
    return m_languages;
}

void VoiceProfile::SetLanguages(const vector<string>& _languages)
{
    m_languages = _languages;
    m_languagesHasBeenSet = true;
}

bool VoiceProfile::LanguagesHasBeenSet() const
{
    return m_languagesHasBeenSet;
}

vector<string> VoiceProfile::GetLabels() const
{
    return m_labels;
}

void VoiceProfile::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool VoiceProfile::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<string> VoiceProfile::GetScenes() const
{
    return m_scenes;
}

void VoiceProfile::SetScenes(const vector<string>& _scenes)
{
    m_scenes = _scenes;
    m_scenesHasBeenSet = true;
}

bool VoiceProfile::ScenesHasBeenSet() const
{
    return m_scenesHasBeenSet;
}

