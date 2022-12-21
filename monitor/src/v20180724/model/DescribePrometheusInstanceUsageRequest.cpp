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

#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceUsageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePrometheusInstanceUsageRequest::DescribePrometheusInstanceUsageRequest() :
    m_instanceIdsHasBeenSet(false),
    m_startCalcDateHasBeenSet(false),
    m_endCalcDateHasBeenSet(false)
{
}

string DescribePrometheusInstanceUsageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startCalcDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartCalcDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startCalcDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endCalcDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndCalcDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endCalcDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribePrometheusInstanceUsageRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribePrometheusInstanceUsageRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribePrometheusInstanceUsageRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string DescribePrometheusInstanceUsageRequest::GetStartCalcDate() const
{
    return m_startCalcDate;
}

void DescribePrometheusInstanceUsageRequest::SetStartCalcDate(const string& _startCalcDate)
{
    m_startCalcDate = _startCalcDate;
    m_startCalcDateHasBeenSet = true;
}

bool DescribePrometheusInstanceUsageRequest::StartCalcDateHasBeenSet() const
{
    return m_startCalcDateHasBeenSet;
}

string DescribePrometheusInstanceUsageRequest::GetEndCalcDate() const
{
    return m_endCalcDate;
}

void DescribePrometheusInstanceUsageRequest::SetEndCalcDate(const string& _endCalcDate)
{
    m_endCalcDate = _endCalcDate;
    m_endCalcDateHasBeenSet = true;
}

bool DescribePrometheusInstanceUsageRequest::EndCalcDateHasBeenSet() const
{
    return m_endCalcDateHasBeenSet;
}


