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

#include <tencentcloud/ess/v20201111/model/CreateRiskIdentificationTaskFeedbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateRiskIdentificationTaskFeedbackRequest::CreateRiskIdentificationTaskFeedbackRequest() :
    m_operatorHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_feedbackResultHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

string CreateRiskIdentificationTaskFeedbackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_feedbackResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeedbackResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_feedbackResult, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateRiskIdentificationTaskFeedbackRequest::GetOperator() const
{
    return m_operator;
}

void CreateRiskIdentificationTaskFeedbackRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateRiskIdentificationTaskFeedbackRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateRiskIdentificationTaskFeedbackRequest::GetRiskId() const
{
    return m_riskId;
}

void CreateRiskIdentificationTaskFeedbackRequest::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool CreateRiskIdentificationTaskFeedbackRequest::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

int64_t CreateRiskIdentificationTaskFeedbackRequest::GetFeedbackResult() const
{
    return m_feedbackResult;
}

void CreateRiskIdentificationTaskFeedbackRequest::SetFeedbackResult(const int64_t& _feedbackResult)
{
    m_feedbackResult = _feedbackResult;
    m_feedbackResultHasBeenSet = true;
}

bool CreateRiskIdentificationTaskFeedbackRequest::FeedbackResultHasBeenSet() const
{
    return m_feedbackResultHasBeenSet;
}

string CreateRiskIdentificationTaskFeedbackRequest::GetReason() const
{
    return m_reason;
}

void CreateRiskIdentificationTaskFeedbackRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool CreateRiskIdentificationTaskFeedbackRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}


