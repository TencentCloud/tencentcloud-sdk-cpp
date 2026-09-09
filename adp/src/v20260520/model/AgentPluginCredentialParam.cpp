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

#include <tencentcloud/adp/v20260520/model/AgentPluginCredentialParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentPluginCredentialParam::AgentPluginCredentialParam() :
    m_keyLocationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

CoreInternalOutcome AgentPluginCredentialParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyLocation") && !value["KeyLocation"].IsNull())
    {
        if (!value["KeyLocation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginCredentialParam.KeyLocation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyLocation = value["KeyLocation"].GetInt64();
        m_keyLocationHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginCredentialParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginCredentialParam.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentPluginCredentialParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyLocation, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AgentPluginCredentialParam::GetKeyLocation() const
{
    return m_keyLocation;
}

void AgentPluginCredentialParam::SetKeyLocation(const int64_t& _keyLocation)
{
    m_keyLocation = _keyLocation;
    m_keyLocationHasBeenSet = true;
}

bool AgentPluginCredentialParam::KeyLocationHasBeenSet() const
{
    return m_keyLocationHasBeenSet;
}

string AgentPluginCredentialParam::GetName() const
{
    return m_name;
}

void AgentPluginCredentialParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentPluginCredentialParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

AgentInput AgentPluginCredentialParam::GetInput() const
{
    return m_input;
}

void AgentPluginCredentialParam::SetInput(const AgentInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AgentPluginCredentialParam::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

