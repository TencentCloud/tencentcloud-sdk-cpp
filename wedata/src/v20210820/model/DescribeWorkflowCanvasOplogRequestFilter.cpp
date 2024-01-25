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

#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasOplogRequestFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeWorkflowCanvasOplogRequestFilter::DescribeWorkflowCanvasOplogRequestFilter() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_operatorIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWorkflowCanvasOplogRequestFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWorkflowCanvasOplogRequestFilter.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWorkflowCanvasOplogRequestFilter.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("OrderType") && !value["OrderType"].IsNull())
    {
        if (!value["OrderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeWorkflowCanvasOplogRequestFilter.OrderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = string(value["OrderType"].GetString());
        m_orderTypeHasBeenSet = true;
    }

    if (value.HasMember("OperatorIds") && !value["OperatorIds"].IsNull())
    {
        if (!value["OperatorIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeWorkflowCanvasOplogRequestFilter.OperatorIds` is not array type"));

        const rapidjson::Value &tmpValue = value["OperatorIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operatorIds.push_back((*itr).GetInt64());
        }
        m_operatorIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeWorkflowCanvasOplogRequestFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operatorIds.begin(); itr != m_operatorIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


uint64_t DescribeWorkflowCanvasOplogRequestFilter::GetStartTime() const
{
    return m_startTime;
}

void DescribeWorkflowCanvasOplogRequestFilter::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeWorkflowCanvasOplogRequestFilter::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeWorkflowCanvasOplogRequestFilter::GetEndTime() const
{
    return m_endTime;
}

void DescribeWorkflowCanvasOplogRequestFilter::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeWorkflowCanvasOplogRequestFilter::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeWorkflowCanvasOplogRequestFilter::GetOrderType() const
{
    return m_orderType;
}

void DescribeWorkflowCanvasOplogRequestFilter::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeWorkflowCanvasOplogRequestFilter::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

vector<int64_t> DescribeWorkflowCanvasOplogRequestFilter::GetOperatorIds() const
{
    return m_operatorIds;
}

void DescribeWorkflowCanvasOplogRequestFilter::SetOperatorIds(const vector<int64_t>& _operatorIds)
{
    m_operatorIds = _operatorIds;
    m_operatorIdsHasBeenSet = true;
}

bool DescribeWorkflowCanvasOplogRequestFilter::OperatorIdsHasBeenSet() const
{
    return m_operatorIdsHasBeenSet;
}

