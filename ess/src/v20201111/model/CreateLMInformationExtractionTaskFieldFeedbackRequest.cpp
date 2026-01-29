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

#include <tencentcloud/ess/v20201111/model/CreateLMInformationExtractionTaskFieldFeedbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateLMInformationExtractionTaskFieldFeedbackRequest::CreateLMInformationExtractionTaskFieldFeedbackRequest() :
    m_operatorHasBeenSet(false),
    m_idHasBeenSet(false),
    m_feedbackHasBeenSet(false)
{
}

string CreateLMInformationExtractionTaskFieldFeedbackRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_feedbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Feedback";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_feedback.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateLMInformationExtractionTaskFieldFeedbackRequest::GetOperator() const
{
    return m_operator;
}

void CreateLMInformationExtractionTaskFieldFeedbackRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateLMInformationExtractionTaskFieldFeedbackRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateLMInformationExtractionTaskFieldFeedbackRequest::GetId() const
{
    return m_id;
}

void CreateLMInformationExtractionTaskFieldFeedbackRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateLMInformationExtractionTaskFieldFeedbackRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

FeedbackInfo CreateLMInformationExtractionTaskFieldFeedbackRequest::GetFeedback() const
{
    return m_feedback;
}

void CreateLMInformationExtractionTaskFieldFeedbackRequest::SetFeedback(const FeedbackInfo& _feedback)
{
    m_feedback = _feedback;
    m_feedbackHasBeenSet = true;
}

bool CreateLMInformationExtractionTaskFieldFeedbackRequest::FeedbackHasBeenSet() const
{
    return m_feedbackHasBeenSet;
}


