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

#include <tencentcloud/ess/v20201111/model/FeedbackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FeedbackInfo::FeedbackInfo() :
    m_resultHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome FeedbackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FeedbackInfo.Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FeedbackInfo.Reason` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reason.Deserialize(value["Reason"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FeedbackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reason.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t FeedbackInfo::GetResult() const
{
    return m_result;
}

void FeedbackInfo::SetResult(const int64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool FeedbackInfo::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

FeedbackInfoReason FeedbackInfo::GetReason() const
{
    return m_reason;
}

void FeedbackInfo::SetReason(const FeedbackInfoReason& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool FeedbackInfo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

