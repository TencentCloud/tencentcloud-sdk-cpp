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

#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribePredictiveDialingCampaignResponse::DescribePredictiveDialingCampaignResponse() :
    m_campaignIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_callOrderHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false),
    m_iVRIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_expectedAbandonRateHasBeenSet(false),
    m_retryTimesHasBeenSet(false),
    m_retryIntervalHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePredictiveDialingCampaignResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CampaignId") && !rsp["CampaignId"].IsNull())
    {
        if (!rsp["CampaignId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CampaignId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_campaignId = rsp["CampaignId"].GetInt64();
        m_campaignIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("CallOrder") && !rsp["CallOrder"].IsNull())
    {
        if (!rsp["CallOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callOrder = rsp["CallOrder"].GetInt64();
        m_callOrderHasBeenSet = true;
    }

    if (rsp.HasMember("SkillGroupId") && !rsp["SkillGroupId"].IsNull())
    {
        if (!rsp["SkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = rsp["SkillGroupId"].GetInt64();
        m_skillGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("IVRId") && !rsp["IVRId"].IsNull())
    {
        if (!rsp["IVRId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IVRId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iVRId = rsp["IVRId"].GetInt64();
        m_iVRIdHasBeenSet = true;
    }

    if (rsp.HasMember("Priority") && !rsp["Priority"].IsNull())
    {
        if (!rsp["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = rsp["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (rsp.HasMember("ExpectedAbandonRate") && !rsp["ExpectedAbandonRate"].IsNull())
    {
        if (!rsp["ExpectedAbandonRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpectedAbandonRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expectedAbandonRate = rsp["ExpectedAbandonRate"].GetInt64();
        m_expectedAbandonRateHasBeenSet = true;
    }

    if (rsp.HasMember("RetryTimes") && !rsp["RetryTimes"].IsNull())
    {
        if (!rsp["RetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryTimes = rsp["RetryTimes"].GetInt64();
        m_retryTimesHasBeenSet = true;
    }

    if (rsp.HasMember("RetryInterval") && !rsp["RetryInterval"].IsNull())
    {
        if (!rsp["RetryInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetryInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryInterval = rsp["RetryInterval"].GetInt64();
        m_retryIntervalHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = rsp["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePredictiveDialingCampaignResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_campaignIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampaignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_campaignId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_callOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callOrder, allocator);
    }

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillGroupId, allocator);
    }

    if (m_iVRIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IVRId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iVRId, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_expectedAbandonRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedAbandonRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expectedAbandonRate, allocator);
    }

    if (m_retryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryTimes, allocator);
    }

    if (m_retryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryInterval, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
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


int64_t DescribePredictiveDialingCampaignResponse::GetCampaignId() const
{
    return m_campaignId;
}

bool DescribePredictiveDialingCampaignResponse::CampaignIdHasBeenSet() const
{
    return m_campaignIdHasBeenSet;
}

string DescribePredictiveDialingCampaignResponse::GetName() const
{
    return m_name;
}

bool DescribePredictiveDialingCampaignResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignResponse::GetCallOrder() const
{
    return m_callOrder;
}

bool DescribePredictiveDialingCampaignResponse::CallOrderHasBeenSet() const
{
    return m_callOrderHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignResponse::GetSkillGroupId() const
{
    return m_skillGroupId;
}

bool DescribePredictiveDialingCampaignResponse::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignResponse::GetIVRId() const
{
    return m_iVRId;
}

bool DescribePredictiveDialingCampaignResponse::IVRIdHasBeenSet() const
{
    return m_iVRIdHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignResponse::GetPriority() const
{
    return m_priority;
}

bool DescribePredictiveDialingCampaignResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignResponse::GetExpectedAbandonRate() const
{
    return m_expectedAbandonRate;
}

bool DescribePredictiveDialingCampaignResponse::ExpectedAbandonRateHasBeenSet() const
{
    return m_expectedAbandonRateHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignResponse::GetRetryTimes() const
{
    return m_retryTimes;
}

bool DescribePredictiveDialingCampaignResponse::RetryTimesHasBeenSet() const
{
    return m_retryTimesHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignResponse::GetRetryInterval() const
{
    return m_retryInterval;
}

bool DescribePredictiveDialingCampaignResponse::RetryIntervalHasBeenSet() const
{
    return m_retryIntervalHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribePredictiveDialingCampaignResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribePredictiveDialingCampaignResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribePredictiveDialingCampaignResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


