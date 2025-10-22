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

#include <tencentcloud/lke/v20231130/model/AgentKnowledgeAttrLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentKnowledgeAttrLabel::AgentKnowledgeAttrLabel() :
    m_attributeBizIdHasBeenSet(false),
    m_inputsHasBeenSet(false)
{
}

CoreInternalOutcome AgentKnowledgeAttrLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttributeBizId") && !value["AttributeBizId"].IsNull())
    {
        if (!value["AttributeBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeAttrLabel.AttributeBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeBizId = string(value["AttributeBizId"].GetString());
        m_attributeBizIdHasBeenSet = true;
    }

    if (value.HasMember("Inputs") && !value["Inputs"].IsNull())
    {
        if (!value["Inputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeAttrLabel.Inputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Inputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputs.push_back(item);
        }
        m_inputsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentKnowledgeAttrLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attributeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputs.begin(); itr != m_inputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AgentKnowledgeAttrLabel::GetAttributeBizId() const
{
    return m_attributeBizId;
}

void AgentKnowledgeAttrLabel::SetAttributeBizId(const string& _attributeBizId)
{
    m_attributeBizId = _attributeBizId;
    m_attributeBizIdHasBeenSet = true;
}

bool AgentKnowledgeAttrLabel::AttributeBizIdHasBeenSet() const
{
    return m_attributeBizIdHasBeenSet;
}

vector<AgentInput> AgentKnowledgeAttrLabel::GetInputs() const
{
    return m_inputs;
}

void AgentKnowledgeAttrLabel::SetInputs(const vector<AgentInput>& _inputs)
{
    m_inputs = _inputs;
    m_inputsHasBeenSet = true;
}

bool AgentKnowledgeAttrLabel::InputsHasBeenSet() const
{
    return m_inputsHasBeenSet;
}

