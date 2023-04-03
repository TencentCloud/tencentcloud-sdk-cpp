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

#include <tencentcloud/lcic/v20220817/model/AnswerStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

AnswerStat::AnswerStat() :
    m_answerHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome AnswerStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerStat.Answer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_answer = value["Answer"].GetInt64();
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerStat.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnswerStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_answer, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


int64_t AnswerStat::GetAnswer() const
{
    return m_answer;
}

void AnswerStat::SetAnswer(const int64_t& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool AnswerStat::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

int64_t AnswerStat::GetCount() const
{
    return m_count;
}

void AnswerStat::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool AnswerStat::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

