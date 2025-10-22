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

#include <tencentcloud/tms/v20201229/model/GetFinancialLLMTaskResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

GetFinancialLLMTaskResultResponse::GetFinancialLLMTaskResultResponse() :
    m_statusHasBeenSet(false),
    m_moderationResultHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_reviewedLabelsHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome GetFinancialLLMTaskResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ModerationResult") && !rsp["ModerationResult"].IsNull())
    {
        if (!rsp["ModerationResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moderationResult = string(rsp["ModerationResult"].GetString());
        m_moderationResultHasBeenSet = true;
    }

    if (rsp.HasMember("FailureReason") && !rsp["FailureReason"].IsNull())
    {
        if (!rsp["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(rsp["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ReviewedLabels") && !rsp["ReviewedLabels"].IsNull())
    {
        if (!rsp["ReviewedLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReviewedLabels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReviewedLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reviewedLabels.push_back((*itr).GetString());
        }
        m_reviewedLabelsHasBeenSet = true;
    }

    if (rsp.HasMember("Details") && !rsp["Details"].IsNull())
    {
        if (!rsp["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Details` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FinancialLLMViolationDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetFinancialLLMTaskResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_moderationResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModerationResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moderationResult.c_str(), allocator).Move(), allocator);
    }

    if (m_failureReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureReason.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewedLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewedLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reviewedLabels.begin(); itr != m_reviewedLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string GetFinancialLLMTaskResultResponse::GetStatus() const
{
    return m_status;
}

bool GetFinancialLLMTaskResultResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GetFinancialLLMTaskResultResponse::GetModerationResult() const
{
    return m_moderationResult;
}

bool GetFinancialLLMTaskResultResponse::ModerationResultHasBeenSet() const
{
    return m_moderationResultHasBeenSet;
}

string GetFinancialLLMTaskResultResponse::GetFailureReason() const
{
    return m_failureReason;
}

bool GetFinancialLLMTaskResultResponse::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string GetFinancialLLMTaskResultResponse::GetStartTime() const
{
    return m_startTime;
}

bool GetFinancialLLMTaskResultResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<string> GetFinancialLLMTaskResultResponse::GetReviewedLabels() const
{
    return m_reviewedLabels;
}

bool GetFinancialLLMTaskResultResponse::ReviewedLabelsHasBeenSet() const
{
    return m_reviewedLabelsHasBeenSet;
}

vector<FinancialLLMViolationDetail> GetFinancialLLMTaskResultResponse::GetDetails() const
{
    return m_details;
}

bool GetFinancialLLMTaskResultResponse::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}


