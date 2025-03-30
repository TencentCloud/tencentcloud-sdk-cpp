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

#include <tencentcloud/ccc/v20200210/model/DescribeAgentCruiseDialingCampaignResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeAgentCruiseDialingCampaignResponse::DescribeAgentCruiseDialingCampaignResponse() :
    m_nameHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_concurrencyNumberHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_callOrderHasBeenSet(false),
    m_uUIHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_totalCalleeCountHasBeenSet(false),
    m_calledCalleeCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentCruiseDialingCampaignResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Agent") && !rsp["Agent"].IsNull())
    {
        if (!rsp["Agent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agent = string(rsp["Agent"].GetString());
        m_agentHasBeenSet = true;
    }

    if (rsp.HasMember("ConcurrencyNumber") && !rsp["ConcurrencyNumber"].IsNull())
    {
        if (!rsp["ConcurrencyNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcurrencyNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrencyNumber = rsp["ConcurrencyNumber"].GetInt64();
        m_concurrencyNumberHasBeenSet = true;
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

    if (rsp.HasMember("CallOrder") && !rsp["CallOrder"].IsNull())
    {
        if (!rsp["CallOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callOrder = rsp["CallOrder"].GetInt64();
        m_callOrderHasBeenSet = true;
    }

    if (rsp.HasMember("UUI") && !rsp["UUI"].IsNull())
    {
        if (!rsp["UUI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UUI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUI = string(rsp["UUI"].GetString());
        m_uUIHasBeenSet = true;
    }

    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = rsp["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCalleeCount") && !rsp["TotalCalleeCount"].IsNull())
    {
        if (!rsp["TotalCalleeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCalleeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCalleeCount = rsp["TotalCalleeCount"].GetInt64();
        m_totalCalleeCountHasBeenSet = true;
    }

    if (rsp.HasMember("CalledCalleeCount") && !rsp["CalledCalleeCount"].IsNull())
    {
        if (!rsp["CalledCalleeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CalledCalleeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_calledCalleeCount = rsp["CalledCalleeCount"].GetInt64();
        m_calledCalleeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAgentCruiseDialingCampaignResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agent.c_str(), allocator).Move(), allocator);
    }

    if (m_concurrencyNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrencyNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrencyNumber, allocator);
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

    if (m_callOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callOrder, allocator);
    }

    if (m_uUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUI.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_totalCalleeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCalleeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCalleeCount, allocator);
    }

    if (m_calledCalleeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalledCalleeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_calledCalleeCount, allocator);
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


string DescribeAgentCruiseDialingCampaignResponse::GetName() const
{
    return m_name;
}

bool DescribeAgentCruiseDialingCampaignResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAgentCruiseDialingCampaignResponse::GetAgent() const
{
    return m_agent;
}

bool DescribeAgentCruiseDialingCampaignResponse::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t DescribeAgentCruiseDialingCampaignResponse::GetConcurrencyNumber() const
{
    return m_concurrencyNumber;
}

bool DescribeAgentCruiseDialingCampaignResponse::ConcurrencyNumberHasBeenSet() const
{
    return m_concurrencyNumberHasBeenSet;
}

int64_t DescribeAgentCruiseDialingCampaignResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeAgentCruiseDialingCampaignResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeAgentCruiseDialingCampaignResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeAgentCruiseDialingCampaignResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeAgentCruiseDialingCampaignResponse::GetCallOrder() const
{
    return m_callOrder;
}

bool DescribeAgentCruiseDialingCampaignResponse::CallOrderHasBeenSet() const
{
    return m_callOrderHasBeenSet;
}

string DescribeAgentCruiseDialingCampaignResponse::GetUUI() const
{
    return m_uUI;
}

bool DescribeAgentCruiseDialingCampaignResponse::UUIHasBeenSet() const
{
    return m_uUIHasBeenSet;
}

int64_t DescribeAgentCruiseDialingCampaignResponse::GetState() const
{
    return m_state;
}

bool DescribeAgentCruiseDialingCampaignResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t DescribeAgentCruiseDialingCampaignResponse::GetTotalCalleeCount() const
{
    return m_totalCalleeCount;
}

bool DescribeAgentCruiseDialingCampaignResponse::TotalCalleeCountHasBeenSet() const
{
    return m_totalCalleeCountHasBeenSet;
}

int64_t DescribeAgentCruiseDialingCampaignResponse::GetCalledCalleeCount() const
{
    return m_calledCalleeCount;
}

bool DescribeAgentCruiseDialingCampaignResponse::CalledCalleeCountHasBeenSet() const
{
    return m_calledCalleeCountHasBeenSet;
}


