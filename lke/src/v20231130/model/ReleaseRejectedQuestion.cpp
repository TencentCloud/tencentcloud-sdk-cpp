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

#include <tencentcloud/lke/v20231130/model/ReleaseRejectedQuestion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ReleaseRejectedQuestion::ReleaseRejectedQuestion() :
    m_questionHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_actionDescHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseRejectedQuestion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRejectedQuestion.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRejectedQuestion.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRejectedQuestion.Action` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetUint64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("ActionDesc") && !value["ActionDesc"].IsNull())
    {
        if (!value["ActionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRejectedQuestion.ActionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionDesc = string(value["ActionDesc"].GetString());
        m_actionDescHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseRejectedQuestion.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseRejectedQuestion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_actionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string ReleaseRejectedQuestion::GetQuestion() const
{
    return m_question;
}

void ReleaseRejectedQuestion::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ReleaseRejectedQuestion::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string ReleaseRejectedQuestion::GetUpdateTime() const
{
    return m_updateTime;
}

void ReleaseRejectedQuestion::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ReleaseRejectedQuestion::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t ReleaseRejectedQuestion::GetAction() const
{
    return m_action;
}

void ReleaseRejectedQuestion::SetAction(const uint64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool ReleaseRejectedQuestion::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string ReleaseRejectedQuestion::GetActionDesc() const
{
    return m_actionDesc;
}

void ReleaseRejectedQuestion::SetActionDesc(const string& _actionDesc)
{
    m_actionDesc = _actionDesc;
    m_actionDescHasBeenSet = true;
}

bool ReleaseRejectedQuestion::ActionDescHasBeenSet() const
{
    return m_actionDescHasBeenSet;
}

string ReleaseRejectedQuestion::GetMessage() const
{
    return m_message;
}

void ReleaseRejectedQuestion::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ReleaseRejectedQuestion::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

