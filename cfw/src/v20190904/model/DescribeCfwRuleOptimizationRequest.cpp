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

#include <tencentcloud/cfw/v20190904/model/DescribeCfwRuleOptimizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeCfwRuleOptimizationRequest::DescribeCfwRuleOptimizationRequest() :
    m_ruleTypeHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_idleDaysHasBeenSet(false),
    m_ipAggMinHasBeenSet(false),
    m_iocSampleHasBeenSet(false)
{
}

string DescribeCfwRuleOptimizationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idleDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idleDays, allocator);
    }

    if (m_ipAggMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAggMin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipAggMin, allocator);
    }

    if (m_iocSampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IocSample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iocSample, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCfwRuleOptimizationRequest::GetRuleType() const
{
    return m_ruleType;
}

void DescribeCfwRuleOptimizationRequest::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DescribeCfwRuleOptimizationRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> DescribeCfwRuleOptimizationRequest::GetDimensions() const
{
    return m_dimensions;
}

void DescribeCfwRuleOptimizationRequest::SetDimensions(const vector<string>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribeCfwRuleOptimizationRequest::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

int64_t DescribeCfwRuleOptimizationRequest::GetIdleDays() const
{
    return m_idleDays;
}

void DescribeCfwRuleOptimizationRequest::SetIdleDays(const int64_t& _idleDays)
{
    m_idleDays = _idleDays;
    m_idleDaysHasBeenSet = true;
}

bool DescribeCfwRuleOptimizationRequest::IdleDaysHasBeenSet() const
{
    return m_idleDaysHasBeenSet;
}

int64_t DescribeCfwRuleOptimizationRequest::GetIpAggMin() const
{
    return m_ipAggMin;
}

void DescribeCfwRuleOptimizationRequest::SetIpAggMin(const int64_t& _ipAggMin)
{
    m_ipAggMin = _ipAggMin;
    m_ipAggMinHasBeenSet = true;
}

bool DescribeCfwRuleOptimizationRequest::IpAggMinHasBeenSet() const
{
    return m_ipAggMinHasBeenSet;
}

int64_t DescribeCfwRuleOptimizationRequest::GetIocSample() const
{
    return m_iocSample;
}

void DescribeCfwRuleOptimizationRequest::SetIocSample(const int64_t& _iocSample)
{
    m_iocSample = _iocSample;
    m_iocSampleHasBeenSet = true;
}

bool DescribeCfwRuleOptimizationRequest::IocSampleHasBeenSet() const
{
    return m_iocSampleHasBeenSet;
}


