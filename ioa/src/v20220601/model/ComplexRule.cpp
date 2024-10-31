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

#include <tencentcloud/ioa/v20220601/model/ComplexRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

ComplexRule::ComplexRule() :
    m_simpleRulesHasBeenSet(false),
    m_relationHasBeenSet(false)
{
}

CoreInternalOutcome ComplexRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SimpleRules") && !value["SimpleRules"].IsNull())
    {
        if (!value["SimpleRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplexRule.SimpleRules` is not array type"));

        const rapidjson::Value &tmpValue = value["SimpleRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SimpleRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_simpleRules.push_back(item);
        }
        m_simpleRulesHasBeenSet = true;
    }

    if (value.HasMember("Relation") && !value["Relation"].IsNull())
    {
        if (!value["Relation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexRule.Relation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relation = string(value["Relation"].GetString());
        m_relationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplexRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_simpleRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimpleRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_simpleRules.begin(); itr != m_simpleRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relation.c_str(), allocator).Move(), allocator);
    }

}


vector<SimpleRule> ComplexRule::GetSimpleRules() const
{
    return m_simpleRules;
}

void ComplexRule::SetSimpleRules(const vector<SimpleRule>& _simpleRules)
{
    m_simpleRules = _simpleRules;
    m_simpleRulesHasBeenSet = true;
}

bool ComplexRule::SimpleRulesHasBeenSet() const
{
    return m_simpleRulesHasBeenSet;
}

string ComplexRule::GetRelation() const
{
    return m_relation;
}

void ComplexRule::SetRelation(const string& _relation)
{
    m_relation = _relation;
    m_relationHasBeenSet = true;
}

bool ComplexRule::RelationHasBeenSet() const
{
    return m_relationHasBeenSet;
}

