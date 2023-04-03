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

#include <tencentcloud/lcic/v20220817/model/AnswerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

AnswerInfo::AnswerInfo() :
    m_nameHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_isCorrectHasBeenSet(false)
{
}

CoreInternalOutcome AnswerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.Answer` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_answer = value["Answer"].GetUint64();
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.CostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetUint64();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("IsCorrect") && !value["IsCorrect"].IsNull())
    {
        if (!value["IsCorrect"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerInfo.IsCorrect` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCorrect = value["IsCorrect"].GetUint64();
        m_isCorrectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnswerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_answer, allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_isCorrectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCorrect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCorrect, allocator);
    }

}


string AnswerInfo::GetName() const
{
    return m_name;
}

void AnswerInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AnswerInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AnswerInfo::GetAnswer() const
{
    return m_answer;
}

void AnswerInfo::SetAnswer(const uint64_t& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool AnswerInfo::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

uint64_t AnswerInfo::GetCostTime() const
{
    return m_costTime;
}

void AnswerInfo::SetCostTime(const uint64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool AnswerInfo::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string AnswerInfo::GetUserId() const
{
    return m_userId;
}

void AnswerInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool AnswerInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t AnswerInfo::GetIsCorrect() const
{
    return m_isCorrect;
}

void AnswerInfo::SetIsCorrect(const uint64_t& _isCorrect)
{
    m_isCorrect = _isCorrect;
    m_isCorrectHasBeenSet = true;
}

bool AnswerInfo::IsCorrectHasBeenSet() const
{
    return m_isCorrectHasBeenSet;
}

