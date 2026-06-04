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

#include <tencentcloud/adp/v20260520/model/AgentUserInputValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentUserInputValue::AgentUserInputValue() :
    m_valueListHasBeenSet(false)
{
}

CoreInternalOutcome AgentUserInputValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ValueList") && !value["ValueList"].IsNull())
    {
        if (!value["ValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentUserInputValue.ValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_valueList.push_back((*itr).GetString());
        }
        m_valueListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentUserInputValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_valueList.begin(); itr != m_valueList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> AgentUserInputValue::GetValueList() const
{
    return m_valueList;
}

void AgentUserInputValue::SetValueList(const vector<string>& _valueList)
{
    m_valueList = _valueList;
    m_valueListHasBeenSet = true;
}

bool AgentUserInputValue::ValueListHasBeenSet() const
{
    return m_valueListHasBeenSet;
}

