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

#include <tencentcloud/ess/v20201111/model/FeedbackInfoReason.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FeedbackInfoReason::FeedbackInfoReason() :
    m_reasonTypeHasBeenSet(false),
    m_reasonContentHasBeenSet(false)
{
}

CoreInternalOutcome FeedbackInfoReason::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReasonType") && !value["ReasonType"].IsNull())
    {
        if (!value["ReasonType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FeedbackInfoReason.ReasonType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reasonType = value["ReasonType"].GetInt64();
        m_reasonTypeHasBeenSet = true;
    }

    if (value.HasMember("ReasonContent") && !value["ReasonContent"].IsNull())
    {
        if (!value["ReasonContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedbackInfoReason.ReasonContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasonContent = string(value["ReasonContent"].GetString());
        m_reasonContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FeedbackInfoReason::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reasonTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasonType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reasonType, allocator);
    }

    if (m_reasonContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasonContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasonContent.c_str(), allocator).Move(), allocator);
    }

}


int64_t FeedbackInfoReason::GetReasonType() const
{
    return m_reasonType;
}

void FeedbackInfoReason::SetReasonType(const int64_t& _reasonType)
{
    m_reasonType = _reasonType;
    m_reasonTypeHasBeenSet = true;
}

bool FeedbackInfoReason::ReasonTypeHasBeenSet() const
{
    return m_reasonTypeHasBeenSet;
}

string FeedbackInfoReason::GetReasonContent() const
{
    return m_reasonContent;
}

void FeedbackInfoReason::SetReasonContent(const string& _reasonContent)
{
    m_reasonContent = _reasonContent;
    m_reasonContentHasBeenSet = true;
}

bool FeedbackInfoReason::ReasonContentHasBeenSet() const
{
    return m_reasonContentHasBeenSet;
}

