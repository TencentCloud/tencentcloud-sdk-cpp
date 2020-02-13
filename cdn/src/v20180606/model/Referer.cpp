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

#include <tencentcloud/cdn/v20180606/model/Referer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

Referer::Referer() :
    m_switchHasBeenSet(false),
    m_refererRulesHasBeenSet(false)
{
}

CoreInternalOutcome Referer::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `Referer.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("RefererRules") && !value["RefererRules"].IsNull())
    {
        if (!value["RefererRules"].IsArray())
            return CoreInternalOutcome(Error("response `Referer.RefererRules` is not array type"));

        const Value &tmpValue = value["RefererRules"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RefererRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_refererRules.push_back(item);
        }
        m_refererRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Referer::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_refererRulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RefererRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_refererRules.begin(); itr != m_refererRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Referer::GetSwitch() const
{
    return m_switch;
}

void Referer::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool Referer::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<RefererRule> Referer::GetRefererRules() const
{
    return m_refererRules;
}

void Referer::SetRefererRules(const vector<RefererRule>& _refererRules)
{
    m_refererRules = _refererRules;
    m_refererRulesHasBeenSet = true;
}

bool Referer::RefererRulesHasBeenSet() const
{
    return m_refererRulesHasBeenSet;
}

