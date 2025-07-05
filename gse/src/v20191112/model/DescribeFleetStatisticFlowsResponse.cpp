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

#include <tencentcloud/gse/v20191112/model/DescribeFleetStatisticFlowsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

DescribeFleetStatisticFlowsResponse::DescribeFleetStatisticFlowsResponse() :
    m_usedFlowListHasBeenSet(false),
    m_usedTimeListHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_timeTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFleetStatisticFlowsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UsedFlowList") && !rsp["UsedFlowList"].IsNull())
    {
        if (!rsp["UsedFlowList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsedFlowList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UsedFlowList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FleetStatisticFlows item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usedFlowList.push_back(item);
        }
        m_usedFlowListHasBeenSet = true;
    }

    if (rsp.HasMember("UsedTimeList") && !rsp["UsedTimeList"].IsNull())
    {
        if (!rsp["UsedTimeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsedTimeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UsedTimeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FleetStatisticTimes item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usedTimeList.push_back(item);
        }
        m_usedTimeListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("TimeType") && !rsp["TimeType"].IsNull())
    {
        if (!rsp["TimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeType = string(rsp["TimeType"].GetString());
        m_timeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFleetStatisticFlowsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_usedFlowListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedFlowList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usedFlowList.begin(); itr != m_usedFlowList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_usedTimeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTimeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usedTimeList.begin(); itr != m_usedTimeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeType.c_str(), allocator).Move(), allocator);
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


vector<FleetStatisticFlows> DescribeFleetStatisticFlowsResponse::GetUsedFlowList() const
{
    return m_usedFlowList;
}

bool DescribeFleetStatisticFlowsResponse::UsedFlowListHasBeenSet() const
{
    return m_usedFlowListHasBeenSet;
}

vector<FleetStatisticTimes> DescribeFleetStatisticFlowsResponse::GetUsedTimeList() const
{
    return m_usedTimeList;
}

bool DescribeFleetStatisticFlowsResponse::UsedTimeListHasBeenSet() const
{
    return m_usedTimeListHasBeenSet;
}

uint64_t DescribeFleetStatisticFlowsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeFleetStatisticFlowsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string DescribeFleetStatisticFlowsResponse::GetTimeType() const
{
    return m_timeType;
}

bool DescribeFleetStatisticFlowsResponse::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}


