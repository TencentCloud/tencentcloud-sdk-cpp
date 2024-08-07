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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeMetricsFileReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeMetricsFileReq::DescribeMetricsFileReq() :
    m_instanceTypeHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_ifAttentionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMetricsFileReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMetricsFileReq.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("MetricType") && !value["MetricType"].IsNull())
    {
        if (!value["MetricType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMetricsFileReq.MetricType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricType = string(value["MetricType"].GetString());
        m_metricTypeHasBeenSet = true;
    }

    if (value.HasMember("IfAttention") && !value["IfAttention"].IsNull())
    {
        if (!value["IfAttention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMetricsFileReq.IfAttention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ifAttention = value["IfAttention"].GetInt64();
        m_ifAttentionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMetricsFileReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricType.c_str(), allocator).Move(), allocator);
    }

    if (m_ifAttentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IfAttention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ifAttention, allocator);
    }

}


string DescribeMetricsFileReq::GetInstanceType() const
{
    return m_instanceType;
}

void DescribeMetricsFileReq::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DescribeMetricsFileReq::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeMetricsFileReq::GetMetricType() const
{
    return m_metricType;
}

void DescribeMetricsFileReq::SetMetricType(const string& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool DescribeMetricsFileReq::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

int64_t DescribeMetricsFileReq::GetIfAttention() const
{
    return m_ifAttention;
}

void DescribeMetricsFileReq::SetIfAttention(const int64_t& _ifAttention)
{
    m_ifAttention = _ifAttention;
    m_ifAttentionHasBeenSet = true;
}

bool DescribeMetricsFileReq::IfAttentionHasBeenSet() const
{
    return m_ifAttentionHasBeenSet;
}

