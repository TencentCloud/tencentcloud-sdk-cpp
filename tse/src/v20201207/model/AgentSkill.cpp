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

#include <tencentcloud/tse/v20201207/model/AgentSkill.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AgentSkill::AgentSkill() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_examplesHasBeenSet(false),
    m_inputModesHasBeenSet(false),
    m_outputModesHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome AgentSkill::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentSkill.Tags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AgentSkill.Examples` is not array type"));

        const rapidjson::Value &tmpValue = value["Examples"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_examples.push_back((*itr).GetString());
        }
        m_examplesHasBeenSet = true;
    }

    if (value.HasMember("InputModes") && !value["InputModes"].IsNull())
    {
        if (!value["InputModes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentSkill.InputModes` is not array type"));

        const rapidjson::Value &tmpValue = value["InputModes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputModes.push_back((*itr).GetString());
        }
        m_inputModesHasBeenSet = true;
    }

    if (value.HasMember("OutputModes") && !value["OutputModes"].IsNull())
    {
        if (!value["OutputModes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentSkill.OutputModes` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputModes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outputModes.push_back((*itr).GetString());
        }
        m_outputModesHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentSkill::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_inputModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputModes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputModes.begin(); itr != m_inputModes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_outputModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputModes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outputModes.begin(); itr != m_outputModes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string AgentSkill::GetId() const
{
    return m_id;
}

void AgentSkill::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AgentSkill::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AgentSkill::GetName() const
{
    return m_name;
}

void AgentSkill::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentSkill::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentSkill::GetDescription() const
{
    return m_description;
}

void AgentSkill::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentSkill::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> AgentSkill::GetTags() const
{
    return m_tags;
}

void AgentSkill::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AgentSkill::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> AgentSkill::GetExamples() const
{
    return m_examples;
}

void AgentSkill::SetExamples(const vector<string>& _examples)
{
    m_examples = _examples;
    m_examplesHasBeenSet = true;
}

bool AgentSkill::ExamplesHasBeenSet() const
{
    return m_examplesHasBeenSet;
}

vector<string> AgentSkill::GetInputModes() const
{
    return m_inputModes;
}

void AgentSkill::SetInputModes(const vector<string>& _inputModes)
{
    m_inputModes = _inputModes;
    m_inputModesHasBeenSet = true;
}

bool AgentSkill::InputModesHasBeenSet() const
{
    return m_inputModesHasBeenSet;
}

vector<string> AgentSkill::GetOutputModes() const
{
    return m_outputModes;
}

void AgentSkill::SetOutputModes(const vector<string>& _outputModes)
{
    m_outputModes = _outputModes;
    m_outputModesHasBeenSet = true;
}

bool AgentSkill::OutputModesHasBeenSet() const
{
    return m_outputModesHasBeenSet;
}

string AgentSkill::GetVersion() const
{
    return m_version;
}

void AgentSkill::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AgentSkill::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

