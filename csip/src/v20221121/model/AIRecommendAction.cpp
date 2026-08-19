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

#include <tencentcloud/csip/v20221121/model/AIRecommendAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AIRecommendAction::AIRecommendAction() :
    m_actionHasBeenSet(false),
    m_questionHasBeenSet(false)
{
}

CoreInternalOutcome AIRecommendAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecommendAction.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecommendAction.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIRecommendAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

}


string AIRecommendAction::GetAction() const
{
    return m_action;
}

void AIRecommendAction::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AIRecommendAction::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string AIRecommendAction::GetQuestion() const
{
    return m_question;
}

void AIRecommendAction::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool AIRecommendAction::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

