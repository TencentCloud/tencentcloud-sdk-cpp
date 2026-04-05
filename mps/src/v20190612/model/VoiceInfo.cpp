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

#include <tencentcloud/mps/v20190612/model/VoiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

VoiceInfo::VoiceInfo() :
    m_voiceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_languagesHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_scenesHasBeenSet(false)
{
}

CoreInternalOutcome VoiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceInfo.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceInfo.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Languages") && !value["Languages"].IsNull())
    {
        if (!value["Languages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceInfo.Languages` is not array type"));

        const rapidjson::Value &tmpValue = value["Languages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_languages.push_back((*itr).GetString());
        }
        m_languagesHasBeenSet = true;
    }

    if (value.HasMember("AudioUrl") && !value["AudioUrl"].IsNull())
    {
        if (!value["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceInfo.AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(value["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceInfo.Labels` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `VoiceInfo.Scenes` is not array type"));

        const rapidjson::Value &tmpValue = value["Scenes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scenes.push_back((*itr).GetString());
        }
        m_scenesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
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

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
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

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
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


string VoiceInfo::GetVoiceId() const
{
    return m_voiceId;
}

void VoiceInfo::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool VoiceInfo::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string VoiceInfo::GetName() const
{
    return m_name;
}

void VoiceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VoiceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VoiceInfo::GetDescription() const
{
    return m_description;
}

void VoiceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VoiceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VoiceInfo::GetCategory() const
{
    return m_category;
}

void VoiceInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool VoiceInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string VoiceInfo::GetGender() const
{
    return m_gender;
}

void VoiceInfo::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool VoiceInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

vector<string> VoiceInfo::GetLanguages() const
{
    return m_languages;
}

void VoiceInfo::SetLanguages(const vector<string>& _languages)
{
    m_languages = _languages;
    m_languagesHasBeenSet = true;
}

bool VoiceInfo::LanguagesHasBeenSet() const
{
    return m_languagesHasBeenSet;
}

string VoiceInfo::GetAudioUrl() const
{
    return m_audioUrl;
}

void VoiceInfo::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool VoiceInfo::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

vector<string> VoiceInfo::GetLabels() const
{
    return m_labels;
}

void VoiceInfo::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool VoiceInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<string> VoiceInfo::GetScenes() const
{
    return m_scenes;
}

void VoiceInfo::SetScenes(const vector<string>& _scenes)
{
    m_scenes = _scenes;
    m_scenesHasBeenSet = true;
}

bool VoiceInfo::ScenesHasBeenSet() const
{
    return m_scenesHasBeenSet;
}

