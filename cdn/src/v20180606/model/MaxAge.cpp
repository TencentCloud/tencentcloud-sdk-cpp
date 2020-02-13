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

#include <tencentcloud/cdn/v20180606/model/MaxAge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

MaxAge::MaxAge() :
    m_switchHasBeenSet(false),
    m_maxAgeRulesHasBeenSet(false)
{
}

CoreInternalOutcome MaxAge::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `MaxAge.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("MaxAgeRules") && !value["MaxAgeRules"].IsNull())
    {
        if (!value["MaxAgeRules"].IsArray())
            return CoreInternalOutcome(Error("response `MaxAge.MaxAgeRules` is not array type"));

        const Value &tmpValue = value["MaxAgeRules"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MaxAgeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_maxAgeRules.push_back(item);
        }
        m_maxAgeRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaxAge::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_maxAgeRulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxAgeRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_maxAgeRules.begin(); itr != m_maxAgeRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MaxAge::GetSwitch() const
{
    return m_switch;
}

void MaxAge::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool MaxAge::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<MaxAgeRule> MaxAge::GetMaxAgeRules() const
{
    return m_maxAgeRules;
}

void MaxAge::SetMaxAgeRules(const vector<MaxAgeRule>& _maxAgeRules)
{
    m_maxAgeRules = _maxAgeRules;
    m_maxAgeRulesHasBeenSet = true;
}

bool MaxAge::MaxAgeRulesHasBeenSet() const
{
    return m_maxAgeRulesHasBeenSet;
}

