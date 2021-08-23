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

#include <tencentcloud/cfw/v20190904/model/DescribeRuleOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeRuleOverviewResponse::DescribeRuleOverviewResponse() :
    m_allTotalHasBeenSet(false),
    m_strategyNumHasBeenSet(false),
    m_startRuleNumHasBeenSet(false),
    m_stopRuleNumHasBeenSet(false),
    m_remainingNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRuleOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AllTotal") && !rsp["AllTotal"].IsNull())
    {
        if (!rsp["AllTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allTotal = rsp["AllTotal"].GetUint64();
        m_allTotalHasBeenSet = true;
    }

    if (rsp.HasMember("StrategyNum") && !rsp["StrategyNum"].IsNull())
    {
        if (!rsp["StrategyNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyNum = rsp["StrategyNum"].GetUint64();
        m_strategyNumHasBeenSet = true;
    }

    if (rsp.HasMember("StartRuleNum") && !rsp["StartRuleNum"].IsNull())
    {
        if (!rsp["StartRuleNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StartRuleNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startRuleNum = rsp["StartRuleNum"].GetUint64();
        m_startRuleNumHasBeenSet = true;
    }

    if (rsp.HasMember("StopRuleNum") && !rsp["StopRuleNum"].IsNull())
    {
        if (!rsp["StopRuleNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StopRuleNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopRuleNum = rsp["StopRuleNum"].GetUint64();
        m_stopRuleNumHasBeenSet = true;
    }

    if (rsp.HasMember("RemainingNum") && !rsp["RemainingNum"].IsNull())
    {
        if (!rsp["RemainingNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemainingNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingNum = rsp["RemainingNum"].GetInt64();
        m_remainingNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRuleOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_allTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allTotal, allocator);
    }

    if (m_strategyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyNum, allocator);
    }

    if (m_startRuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartRuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startRuleNum, allocator);
    }

    if (m_stopRuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopRuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopRuleNum, allocator);
    }

    if (m_remainingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingNum, allocator);
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


uint64_t DescribeRuleOverviewResponse::GetAllTotal() const
{
    return m_allTotal;
}

bool DescribeRuleOverviewResponse::AllTotalHasBeenSet() const
{
    return m_allTotalHasBeenSet;
}

uint64_t DescribeRuleOverviewResponse::GetStrategyNum() const
{
    return m_strategyNum;
}

bool DescribeRuleOverviewResponse::StrategyNumHasBeenSet() const
{
    return m_strategyNumHasBeenSet;
}

uint64_t DescribeRuleOverviewResponse::GetStartRuleNum() const
{
    return m_startRuleNum;
}

bool DescribeRuleOverviewResponse::StartRuleNumHasBeenSet() const
{
    return m_startRuleNumHasBeenSet;
}

uint64_t DescribeRuleOverviewResponse::GetStopRuleNum() const
{
    return m_stopRuleNum;
}

bool DescribeRuleOverviewResponse::StopRuleNumHasBeenSet() const
{
    return m_stopRuleNumHasBeenSet;
}

int64_t DescribeRuleOverviewResponse::GetRemainingNum() const
{
    return m_remainingNum;
}

bool DescribeRuleOverviewResponse::RemainingNumHasBeenSet() const
{
    return m_remainingNumHasBeenSet;
}


