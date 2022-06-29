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

#include <tencentcloud/ciam/v20220331/model/Filter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

Filter::Filter() :
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_logicHasBeenSet(false)
{
}

CoreInternalOutcome Filter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Filter.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("Logic") && !value["Logic"].IsNull())
    {
        if (!value["Logic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Logic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_logic = value["Logic"].GetBool();
        m_logicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Filter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logic, allocator);
    }

}


string Filter::GetKey() const
{
    return m_key;
}

void Filter::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool Filter::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

vector<string> Filter::GetValues() const
{
    return m_values;
}

void Filter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool Filter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

bool Filter::GetLogic() const
{
    return m_logic;
}

void Filter::SetLogic(const bool& _logic)
{
    m_logic = _logic;
    m_logicHasBeenSet = true;
}

bool Filter::LogicHasBeenSet() const
{
    return m_logicHasBeenSet;
}

