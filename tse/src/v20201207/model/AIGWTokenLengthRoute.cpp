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

#include <tencentcloud/tse/v20201207/model/AIGWTokenLengthRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWTokenLengthRoute::AIGWTokenLengthRoute() :
    m_defaultEncodingNameHasBeenSet(false),
    m_defaultTargetHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

CoreInternalOutcome AIGWTokenLengthRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DefaultEncodingName") && !value["DefaultEncodingName"].IsNull())
    {
        if (!value["DefaultEncodingName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWTokenLengthRoute.DefaultEncodingName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultEncodingName = string(value["DefaultEncodingName"].GetString());
        m_defaultEncodingNameHasBeenSet = true;
    }

    if (value.HasMember("DefaultTarget") && !value["DefaultTarget"].IsNull())
    {
        if (!value["DefaultTarget"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWTokenLengthRoute.DefaultTarget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_defaultTarget.Deserialize(value["DefaultTarget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_defaultTargetHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWTokenLengthRoute.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWTokenLengthRouteRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWTokenLengthRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defaultEncodingNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultEncodingName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultEncodingName.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_defaultTarget.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AIGWTokenLengthRoute::GetDefaultEncodingName() const
{
    return m_defaultEncodingName;
}

void AIGWTokenLengthRoute::SetDefaultEncodingName(const string& _defaultEncodingName)
{
    m_defaultEncodingName = _defaultEncodingName;
    m_defaultEncodingNameHasBeenSet = true;
}

bool AIGWTokenLengthRoute::DefaultEncodingNameHasBeenSet() const
{
    return m_defaultEncodingNameHasBeenSet;
}

AIGWLLMModelServiceSubRoute AIGWTokenLengthRoute::GetDefaultTarget() const
{
    return m_defaultTarget;
}

void AIGWTokenLengthRoute::SetDefaultTarget(const AIGWLLMModelServiceSubRoute& _defaultTarget)
{
    m_defaultTarget = _defaultTarget;
    m_defaultTargetHasBeenSet = true;
}

bool AIGWTokenLengthRoute::DefaultTargetHasBeenSet() const
{
    return m_defaultTargetHasBeenSet;
}

vector<AIGWTokenLengthRouteRule> AIGWTokenLengthRoute::GetRules() const
{
    return m_rules;
}

void AIGWTokenLengthRoute::SetRules(const vector<AIGWTokenLengthRouteRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool AIGWTokenLengthRoute::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

