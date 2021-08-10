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

#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigAssociateListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeCustomizedConfigAssociateListRequest::DescribeCustomizedConfigAssociateListRequest() :
    m_uconfigIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

string DescribeCustomizedConfigAssociateListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uconfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UconfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uconfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCustomizedConfigAssociateListRequest::GetUconfigId() const
{
    return m_uconfigId;
}

void DescribeCustomizedConfigAssociateListRequest::SetUconfigId(const string& _uconfigId)
{
    m_uconfigId = _uconfigId;
    m_uconfigIdHasBeenSet = true;
}

bool DescribeCustomizedConfigAssociateListRequest::UconfigIdHasBeenSet() const
{
    return m_uconfigIdHasBeenSet;
}

int64_t DescribeCustomizedConfigAssociateListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCustomizedConfigAssociateListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCustomizedConfigAssociateListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeCustomizedConfigAssociateListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCustomizedConfigAssociateListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCustomizedConfigAssociateListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCustomizedConfigAssociateListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeCustomizedConfigAssociateListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCustomizedConfigAssociateListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}


