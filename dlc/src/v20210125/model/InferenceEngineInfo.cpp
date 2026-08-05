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

#include <tencentcloud/dlc/v20210125/model/InferenceEngineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

InferenceEngineInfo::InferenceEngineInfo() :
    m_engineIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelTypesHasBeenSet(false),
    m_exclusiveHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_capabilitiesHasBeenSet(false)
{
}

CoreInternalOutcome InferenceEngineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineId") && !value["EngineId"].IsNull())
    {
        if (!value["EngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceEngineInfo.EngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineId = string(value["EngineId"].GetString());
        m_engineIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceEngineInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceEngineInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceEngineInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceEngineInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ModelTypes") && !value["ModelTypes"].IsNull())
    {
        if (!value["ModelTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceEngineInfo.ModelTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_modelTypes.push_back((*itr).GetString());
        }
        m_modelTypesHasBeenSet = true;
    }

    if (value.HasMember("Exclusive") && !value["Exclusive"].IsNull())
    {
        if (!value["Exclusive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceEngineInfo.Exclusive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_exclusive = value["Exclusive"].GetBool();
        m_exclusiveHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceEngineInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Capabilities") && !value["Capabilities"].IsNull())
    {
        if (!value["Capabilities"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceEngineInfo.Capabilities` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_capabilities.Deserialize(value["Capabilities"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_capabilitiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceEngineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
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

    if (m_modelTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelTypes.begin(); itr != m_modelTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusive, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_capabilitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capabilities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capabilities.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InferenceEngineInfo::GetEngineId() const
{
    return m_engineId;
}

void InferenceEngineInfo::SetEngineId(const string& _engineId)
{
    m_engineId = _engineId;
    m_engineIdHasBeenSet = true;
}

bool InferenceEngineInfo::EngineIdHasBeenSet() const
{
    return m_engineIdHasBeenSet;
}

string InferenceEngineInfo::GetName() const
{
    return m_name;
}

void InferenceEngineInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InferenceEngineInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InferenceEngineInfo::GetVersion() const
{
    return m_version;
}

void InferenceEngineInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InferenceEngineInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string InferenceEngineInfo::GetDescription() const
{
    return m_description;
}

void InferenceEngineInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool InferenceEngineInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> InferenceEngineInfo::GetTags() const
{
    return m_tags;
}

void InferenceEngineInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InferenceEngineInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> InferenceEngineInfo::GetModelTypes() const
{
    return m_modelTypes;
}

void InferenceEngineInfo::SetModelTypes(const vector<string>& _modelTypes)
{
    m_modelTypes = _modelTypes;
    m_modelTypesHasBeenSet = true;
}

bool InferenceEngineInfo::ModelTypesHasBeenSet() const
{
    return m_modelTypesHasBeenSet;
}

bool InferenceEngineInfo::GetExclusive() const
{
    return m_exclusive;
}

void InferenceEngineInfo::SetExclusive(const bool& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool InferenceEngineInfo::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

bool InferenceEngineInfo::GetEnabled() const
{
    return m_enabled;
}

void InferenceEngineInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool InferenceEngineInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

EngineCapabilities InferenceEngineInfo::GetCapabilities() const
{
    return m_capabilities;
}

void InferenceEngineInfo::SetCapabilities(const EngineCapabilities& _capabilities)
{
    m_capabilities = _capabilities;
    m_capabilitiesHasBeenSet = true;
}

bool InferenceEngineInfo::CapabilitiesHasBeenSet() const
{
    return m_capabilitiesHasBeenSet;
}

