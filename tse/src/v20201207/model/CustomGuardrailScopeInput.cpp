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

#include <tencentcloud/tse/v20201207/model/CustomGuardrailScopeInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CustomGuardrailScopeInput::CustomGuardrailScopeInput() :
    m_bindTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailScopeInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BindType") && !value["BindType"].IsNull())
    {
        if (!value["BindType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailScopeInput.BindType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindType = string(value["BindType"].GetString());
        m_bindTypeHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailScopeInput.Resources` is not array type"));

        const rapidjson::Value &tmpValue = value["Resources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomGuardrailResourceRefInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resources.push_back(item);
        }
        m_resourcesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailScopeInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CustomGuardrailScopeInput::GetBindType() const
{
    return m_bindType;
}

void CustomGuardrailScopeInput::SetBindType(const string& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool CustomGuardrailScopeInput::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

vector<CustomGuardrailResourceRefInput> CustomGuardrailScopeInput::GetResources() const
{
    return m_resources;
}

void CustomGuardrailScopeInput::SetResources(const vector<CustomGuardrailResourceRefInput>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool CustomGuardrailScopeInput::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

