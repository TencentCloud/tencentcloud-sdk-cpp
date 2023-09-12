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

#include <tencentcloud/essbasic/v20210526/model/ComponentLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ComponentLimit::ComponentLimit() :
    m_componentTypeHasBeenSet(false),
    m_componentValueHasBeenSet(false)
{
}

CoreInternalOutcome ComponentLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentType") && !value["ComponentType"].IsNull())
    {
        if (!value["ComponentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentLimit.ComponentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentType = string(value["ComponentType"].GetString());
        m_componentTypeHasBeenSet = true;
    }

    if (value.HasMember("ComponentValue") && !value["ComponentValue"].IsNull())
    {
        if (!value["ComponentValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComponentLimit.ComponentValue` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_componentValue.push_back((*itr).GetString());
        }
        m_componentValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentType.c_str(), allocator).Move(), allocator);
    }

    if (m_componentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_componentValue.begin(); itr != m_componentValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ComponentLimit::GetComponentType() const
{
    return m_componentType;
}

void ComponentLimit::SetComponentType(const string& _componentType)
{
    m_componentType = _componentType;
    m_componentTypeHasBeenSet = true;
}

bool ComponentLimit::ComponentTypeHasBeenSet() const
{
    return m_componentTypeHasBeenSet;
}

vector<string> ComponentLimit::GetComponentValue() const
{
    return m_componentValue;
}

void ComponentLimit::SetComponentValue(const vector<string>& _componentValue)
{
    m_componentValue = _componentValue;
    m_componentValueHasBeenSet = true;
}

bool ComponentLimit::ComponentValueHasBeenSet() const
{
    return m_componentValueHasBeenSet;
}

