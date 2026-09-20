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

#include <tencentcloud/adp/v20260520/model/DescribeAppStatisticsOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeAppStatisticsOverviewResponse::DescribeAppStatisticsOverviewResponse() :
    m_avgFirstTokenTimeHasBeenSet(false),
    m_avgTotalTokenTimeHasBeenSet(false),
    m_callSuccessRateHasBeenSet(false),
    m_replyTypeDistributionListHasBeenSet(false),
    m_totalCallCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAppStatisticsOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AvgFirstTokenTime") && !rsp["AvgFirstTokenTime"].IsNull())
    {
        if (!rsp["AvgFirstTokenTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvgFirstTokenTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgFirstTokenTime = string(rsp["AvgFirstTokenTime"].GetString());
        m_avgFirstTokenTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AvgTotalTokenTime") && !rsp["AvgTotalTokenTime"].IsNull())
    {
        if (!rsp["AvgTotalTokenTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvgTotalTokenTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgTotalTokenTime = string(rsp["AvgTotalTokenTime"].GetString());
        m_avgTotalTokenTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CallSuccessRate") && !rsp["CallSuccessRate"].IsNull())
    {
        if (!rsp["CallSuccessRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CallSuccessRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_callSuccessRate = rsp["CallSuccessRate"].GetDouble();
        m_callSuccessRateHasBeenSet = true;
    }

    if (rsp.HasMember("ReplyTypeDistributionList") && !rsp["ReplyTypeDistributionList"].IsNull())
    {
        if (!rsp["ReplyTypeDistributionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReplyTypeDistributionList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReplyTypeDistributionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Distribution item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_replyTypeDistributionList.push_back(item);
        }
        m_replyTypeDistributionListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCallCount") && !rsp["TotalCallCount"].IsNull())
    {
        if (!rsp["TotalCallCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCallCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCallCount = string(rsp["TotalCallCount"].GetString());
        m_totalCallCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAppStatisticsOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_avgFirstTokenTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgFirstTokenTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgFirstTokenTime.c_str(), allocator).Move(), allocator);
    }

    if (m_avgTotalTokenTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgTotalTokenTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgTotalTokenTime.c_str(), allocator).Move(), allocator);
    }

    if (m_callSuccessRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallSuccessRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callSuccessRate, allocator);
    }

    if (m_replyTypeDistributionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyTypeDistributionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_replyTypeDistributionList.begin(); itr != m_replyTypeDistributionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCallCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCallCount.c_str(), allocator).Move(), allocator);
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


string DescribeAppStatisticsOverviewResponse::GetAvgFirstTokenTime() const
{
    return m_avgFirstTokenTime;
}

bool DescribeAppStatisticsOverviewResponse::AvgFirstTokenTimeHasBeenSet() const
{
    return m_avgFirstTokenTimeHasBeenSet;
}

string DescribeAppStatisticsOverviewResponse::GetAvgTotalTokenTime() const
{
    return m_avgTotalTokenTime;
}

bool DescribeAppStatisticsOverviewResponse::AvgTotalTokenTimeHasBeenSet() const
{
    return m_avgTotalTokenTimeHasBeenSet;
}

double DescribeAppStatisticsOverviewResponse::GetCallSuccessRate() const
{
    return m_callSuccessRate;
}

bool DescribeAppStatisticsOverviewResponse::CallSuccessRateHasBeenSet() const
{
    return m_callSuccessRateHasBeenSet;
}

vector<Distribution> DescribeAppStatisticsOverviewResponse::GetReplyTypeDistributionList() const
{
    return m_replyTypeDistributionList;
}

bool DescribeAppStatisticsOverviewResponse::ReplyTypeDistributionListHasBeenSet() const
{
    return m_replyTypeDistributionListHasBeenSet;
}

string DescribeAppStatisticsOverviewResponse::GetTotalCallCount() const
{
    return m_totalCallCount;
}

bool DescribeAppStatisticsOverviewResponse::TotalCallCountHasBeenSet() const
{
    return m_totalCallCountHasBeenSet;
}


