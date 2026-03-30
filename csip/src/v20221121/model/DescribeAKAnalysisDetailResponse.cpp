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

#include <tencentcloud/csip/v20221121/model/DescribeAKAnalysisDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAKAnalysisDetailResponse::DescribeAKAnalysisDetailResponse() :
    m_aIStatusHasBeenSet(false),
    m_aITaskIDHasBeenSet(false),
    m_aIResultHasBeenSet(false),
    m_feedbackHasBeenSet(false),
    m_feedbackResultHasBeenSet(false),
    m_failedReasonHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAKAnalysisDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AIStatus") && !rsp["AIStatus"].IsNull())
    {
        if (!rsp["AIStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aIStatus = rsp["AIStatus"].GetInt64();
        m_aIStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AITaskID") && !rsp["AITaskID"].IsNull())
    {
        if (!rsp["AITaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aITaskID = string(rsp["AITaskID"].GetString());
        m_aITaskIDHasBeenSet = true;
    }

    if (rsp.HasMember("AIResult") && !rsp["AIResult"].IsNull())
    {
        if (!rsp["AIResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aIResult = string(rsp["AIResult"].GetString());
        m_aIResultHasBeenSet = true;
    }

    if (rsp.HasMember("Feedback") && !rsp["Feedback"].IsNull())
    {
        if (!rsp["Feedback"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Feedback` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feedback = string(rsp["Feedback"].GetString());
        m_feedbackHasBeenSet = true;
    }

    if (rsp.HasMember("FeedbackResult") && !rsp["FeedbackResult"].IsNull())
    {
        if (!rsp["FeedbackResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FeedbackResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feedbackResult = rsp["FeedbackResult"].GetInt64();
        m_feedbackResultHasBeenSet = true;
    }

    if (rsp.HasMember("FailedReason") && !rsp["FailedReason"].IsNull())
    {
        if (!rsp["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(rsp["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAKAnalysisDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_aIStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aIStatus, allocator);
    }

    if (m_aITaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AITaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aITaskID.c_str(), allocator).Move(), allocator);
    }

    if (m_aIResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aIResult.c_str(), allocator).Move(), allocator);
    }

    if (m_feedbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Feedback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feedback.c_str(), allocator).Move(), allocator);
    }

    if (m_feedbackResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeedbackResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feedbackResult, allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAKAnalysisDetailResponse::GetAIStatus() const
{
    return m_aIStatus;
}

bool DescribeAKAnalysisDetailResponse::AIStatusHasBeenSet() const
{
    return m_aIStatusHasBeenSet;
}

string DescribeAKAnalysisDetailResponse::GetAITaskID() const
{
    return m_aITaskID;
}

bool DescribeAKAnalysisDetailResponse::AITaskIDHasBeenSet() const
{
    return m_aITaskIDHasBeenSet;
}

string DescribeAKAnalysisDetailResponse::GetAIResult() const
{
    return m_aIResult;
}

bool DescribeAKAnalysisDetailResponse::AIResultHasBeenSet() const
{
    return m_aIResultHasBeenSet;
}

string DescribeAKAnalysisDetailResponse::GetFeedback() const
{
    return m_feedback;
}

bool DescribeAKAnalysisDetailResponse::FeedbackHasBeenSet() const
{
    return m_feedbackHasBeenSet;
}

int64_t DescribeAKAnalysisDetailResponse::GetFeedbackResult() const
{
    return m_feedbackResult;
}

bool DescribeAKAnalysisDetailResponse::FeedbackResultHasBeenSet() const
{
    return m_feedbackResultHasBeenSet;
}

string DescribeAKAnalysisDetailResponse::GetFailedReason() const
{
    return m_failedReason;
}

bool DescribeAKAnalysisDetailResponse::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}


