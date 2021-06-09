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

#include <tencentcloud/waf/v20180125/model/DescribeFlowTrendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeFlowTrendRequest::DescribeFlowTrendRequest() :
    m_domainHasBeenSet(false),
    m_startTsHasBeenSet(false),
    m_endTsHasBeenSet(false)
{
}

string DescribeFlowTrendRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_startTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTs, allocator);
    }

    if (m_endTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTs, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFlowTrendRequest::GetDomain() const
{
    return m_domain;
}

void DescribeFlowTrendRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeFlowTrendRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t DescribeFlowTrendRequest::GetStartTs() const
{
    return m_startTs;
}

void DescribeFlowTrendRequest::SetStartTs(const int64_t& _startTs)
{
    m_startTs = _startTs;
    m_startTsHasBeenSet = true;
}

bool DescribeFlowTrendRequest::StartTsHasBeenSet() const
{
    return m_startTsHasBeenSet;
}

int64_t DescribeFlowTrendRequest::GetEndTs() const
{
    return m_endTs;
}

void DescribeFlowTrendRequest::SetEndTs(const int64_t& _endTs)
{
    m_endTs = _endTs;
    m_endTsHasBeenSet = true;
}

bool DescribeFlowTrendRequest::EndTsHasBeenSet() const
{
    return m_endTsHasBeenSet;
}


