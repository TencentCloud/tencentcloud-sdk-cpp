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

#include <tencentcloud/es/v20180416/model/DescribeServerlessMetricsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeServerlessMetricsRequest::DescribeServerlessMetricsRequest() :
    m_spaceIdHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_durationTypeHasBeenSet(false),
    m_batchIndexListHasBeenSet(false)
{
}

string DescribeServerlessMetricsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metricType.begin(); itr != m_metricType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_durationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durationType, allocator);
    }

    if (m_batchIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchIndexList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_batchIndexList.begin(); itr != m_batchIndexList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeServerlessMetricsRequest::GetSpaceId() const
{
    return m_spaceId;
}

void DescribeServerlessMetricsRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool DescribeServerlessMetricsRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string DescribeServerlessMetricsRequest::GetIndexId() const
{
    return m_indexId;
}

void DescribeServerlessMetricsRequest::SetIndexId(const string& _indexId)
{
    m_indexId = _indexId;
    m_indexIdHasBeenSet = true;
}

bool DescribeServerlessMetricsRequest::IndexIdHasBeenSet() const
{
    return m_indexIdHasBeenSet;
}

vector<string> DescribeServerlessMetricsRequest::GetMetricType() const
{
    return m_metricType;
}

void DescribeServerlessMetricsRequest::SetMetricType(const vector<string>& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool DescribeServerlessMetricsRequest::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

int64_t DescribeServerlessMetricsRequest::GetDurationType() const
{
    return m_durationType;
}

void DescribeServerlessMetricsRequest::SetDurationType(const int64_t& _durationType)
{
    m_durationType = _durationType;
    m_durationTypeHasBeenSet = true;
}

bool DescribeServerlessMetricsRequest::DurationTypeHasBeenSet() const
{
    return m_durationTypeHasBeenSet;
}

vector<string> DescribeServerlessMetricsRequest::GetBatchIndexList() const
{
    return m_batchIndexList;
}

void DescribeServerlessMetricsRequest::SetBatchIndexList(const vector<string>& _batchIndexList)
{
    m_batchIndexList = _batchIndexList;
    m_batchIndexListHasBeenSet = true;
}

bool DescribeServerlessMetricsRequest::BatchIndexListHasBeenSet() const
{
    return m_batchIndexListHasBeenSet;
}


