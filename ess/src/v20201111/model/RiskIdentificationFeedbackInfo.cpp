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

#include <tencentcloud/ess/v20201111/model/RiskIdentificationFeedbackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RiskIdentificationFeedbackInfo::RiskIdentificationFeedbackInfo() :
    m_riskIdHasBeenSet(false),
    m_feedbackResultHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome RiskIdentificationFeedbackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskIdentificationFeedbackInfo.RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(value["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("FeedbackResult") && !value["FeedbackResult"].IsNull())
    {
        if (!value["FeedbackResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskIdentificationFeedbackInfo.FeedbackResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feedbackResult = value["FeedbackResult"].GetInt64();
        m_feedbackResultHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskIdentificationFeedbackInfo.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskIdentificationFeedbackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_feedbackResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeedbackResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feedbackResult, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string RiskIdentificationFeedbackInfo::GetRiskId() const
{
    return m_riskId;
}

void RiskIdentificationFeedbackInfo::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool RiskIdentificationFeedbackInfo::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

int64_t RiskIdentificationFeedbackInfo::GetFeedbackResult() const
{
    return m_feedbackResult;
}

void RiskIdentificationFeedbackInfo::SetFeedbackResult(const int64_t& _feedbackResult)
{
    m_feedbackResult = _feedbackResult;
    m_feedbackResultHasBeenSet = true;
}

bool RiskIdentificationFeedbackInfo::FeedbackResultHasBeenSet() const
{
    return m_feedbackResultHasBeenSet;
}

string RiskIdentificationFeedbackInfo::GetReason() const
{
    return m_reason;
}

void RiskIdentificationFeedbackInfo::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool RiskIdentificationFeedbackInfo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

