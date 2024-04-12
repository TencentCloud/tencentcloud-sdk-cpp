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

#include <tencentcloud/lke/v20231130/model/CreateRejectedQuestionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CreateRejectedQuestionRequest::CreateRejectedQuestionRequest() :
    m_botBizIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_businessSourceHasBeenSet(false),
    m_businessIdHasBeenSet(false)
{
}

string CreateRejectedQuestionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_businessSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_businessSource, allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRejectedQuestionRequest::GetBotBizId() const
{
    return m_botBizId;
}

void CreateRejectedQuestionRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool CreateRejectedQuestionRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string CreateRejectedQuestionRequest::GetQuestion() const
{
    return m_question;
}

void CreateRejectedQuestionRequest::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool CreateRejectedQuestionRequest::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

uint64_t CreateRejectedQuestionRequest::GetBusinessSource() const
{
    return m_businessSource;
}

void CreateRejectedQuestionRequest::SetBusinessSource(const uint64_t& _businessSource)
{
    m_businessSource = _businessSource;
    m_businessSourceHasBeenSet = true;
}

bool CreateRejectedQuestionRequest::BusinessSourceHasBeenSet() const
{
    return m_businessSourceHasBeenSet;
}

string CreateRejectedQuestionRequest::GetBusinessId() const
{
    return m_businessId;
}

void CreateRejectedQuestionRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CreateRejectedQuestionRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}


