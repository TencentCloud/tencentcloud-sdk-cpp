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

#include <tencentcloud/ess/v20201111/model/Intention.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

Intention::Intention() :
    m_intentionTypeHasBeenSet(false),
    m_intentionQuestionsHasBeenSet(false),
    m_intentionActionsHasBeenSet(false)
{
}

CoreInternalOutcome Intention::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntentionType") && !value["IntentionType"].IsNull())
    {
        if (!value["IntentionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Intention.IntentionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intentionType = value["IntentionType"].GetInt64();
        m_intentionTypeHasBeenSet = true;
    }

    if (value.HasMember("IntentionQuestions") && !value["IntentionQuestions"].IsNull())
    {
        if (!value["IntentionQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Intention.IntentionQuestions` is not array type"));

        const rapidjson::Value &tmpValue = value["IntentionQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntentionQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_intentionQuestions.push_back(item);
        }
        m_intentionQuestionsHasBeenSet = true;
    }

    if (value.HasMember("IntentionActions") && !value["IntentionActions"].IsNull())
    {
        if (!value["IntentionActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Intention.IntentionActions` is not array type"));

        const rapidjson::Value &tmpValue = value["IntentionActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntentionAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_intentionActions.push_back(item);
        }
        m_intentionActionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Intention::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intentionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intentionType, allocator);
    }

    if (m_intentionQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intentionQuestions.begin(); itr != m_intentionQuestions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_intentionActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intentionActions.begin(); itr != m_intentionActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t Intention::GetIntentionType() const
{
    return m_intentionType;
}

void Intention::SetIntentionType(const int64_t& _intentionType)
{
    m_intentionType = _intentionType;
    m_intentionTypeHasBeenSet = true;
}

bool Intention::IntentionTypeHasBeenSet() const
{
    return m_intentionTypeHasBeenSet;
}

vector<IntentionQuestion> Intention::GetIntentionQuestions() const
{
    return m_intentionQuestions;
}

void Intention::SetIntentionQuestions(const vector<IntentionQuestion>& _intentionQuestions)
{
    m_intentionQuestions = _intentionQuestions;
    m_intentionQuestionsHasBeenSet = true;
}

bool Intention::IntentionQuestionsHasBeenSet() const
{
    return m_intentionQuestionsHasBeenSet;
}

vector<IntentionAction> Intention::GetIntentionActions() const
{
    return m_intentionActions;
}

void Intention::SetIntentionActions(const vector<IntentionAction>& _intentionActions)
{
    m_intentionActions = _intentionActions;
    m_intentionActionsHasBeenSet = true;
}

bool Intention::IntentionActionsHasBeenSet() const
{
    return m_intentionActionsHasBeenSet;
}

