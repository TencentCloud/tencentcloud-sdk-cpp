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

#include <tencentcloud/apm/v20210622/model/Selectors.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

Selectors::Selectors() :
    m_componentHasBeenSet(false)
{
}

CoreInternalOutcome Selectors::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Selectors.Component` is not array type"));

        const rapidjson::Value &tmpValue = value["Component"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_component.push_back((*itr).GetString());
        }
        m_componentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Selectors::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_component.begin(); itr != m_component.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> Selectors::GetComponent() const
{
    return m_component;
}

void Selectors::SetComponent(const vector<string>& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool Selectors::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

