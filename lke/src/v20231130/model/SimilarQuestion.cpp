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

#include <tencentcloud/lke/v20231130/model/SimilarQuestion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

SimilarQuestion::SimilarQuestion() :
    m_simBizIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_auditStatusHasBeenSet(false)
{
}

CoreInternalOutcome SimilarQuestion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SimBizId") && !value["SimBizId"].IsNull())
    {
        if (!value["SimBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestion.SimBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_simBizId = string(value["SimBizId"].GetString());
        m_simBizIdHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestion.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestion.AuditStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetUint64();
        m_auditStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimilarQuestion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_simBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_simBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

}


string SimilarQuestion::GetSimBizId() const
{
    return m_simBizId;
}

void SimilarQuestion::SetSimBizId(const string& _simBizId)
{
    m_simBizId = _simBizId;
    m_simBizIdHasBeenSet = true;
}

bool SimilarQuestion::SimBizIdHasBeenSet() const
{
    return m_simBizIdHasBeenSet;
}

string SimilarQuestion::GetQuestion() const
{
    return m_question;
}

void SimilarQuestion::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool SimilarQuestion::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

uint64_t SimilarQuestion::GetAuditStatus() const
{
    return m_auditStatus;
}

void SimilarQuestion::SetAuditStatus(const uint64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool SimilarQuestion::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

