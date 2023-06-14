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

#include <tencentcloud/organization/v20210331/model/DescribeOrganizationFinancialByMonthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DescribeOrganizationFinancialByMonthRequest::DescribeOrganizationFinancialByMonthRequest() :
    m_limitHasBeenSet(false),
    m_endMonthHasBeenSet(false),
    m_memberUinsHasBeenSet(false),
    m_productCodesHasBeenSet(false)
{
}

string DescribeOrganizationFinancialByMonthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_endMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_memberUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberUins.begin(); itr != m_memberUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_productCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productCodes.begin(); itr != m_productCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeOrganizationFinancialByMonthRequest::GetLimit() const
{
    return m_limit;
}

void DescribeOrganizationFinancialByMonthRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeOrganizationFinancialByMonthRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeOrganizationFinancialByMonthRequest::GetEndMonth() const
{
    return m_endMonth;
}

void DescribeOrganizationFinancialByMonthRequest::SetEndMonth(const string& _endMonth)
{
    m_endMonth = _endMonth;
    m_endMonthHasBeenSet = true;
}

bool DescribeOrganizationFinancialByMonthRequest::EndMonthHasBeenSet() const
{
    return m_endMonthHasBeenSet;
}

vector<int64_t> DescribeOrganizationFinancialByMonthRequest::GetMemberUins() const
{
    return m_memberUins;
}

void DescribeOrganizationFinancialByMonthRequest::SetMemberUins(const vector<int64_t>& _memberUins)
{
    m_memberUins = _memberUins;
    m_memberUinsHasBeenSet = true;
}

bool DescribeOrganizationFinancialByMonthRequest::MemberUinsHasBeenSet() const
{
    return m_memberUinsHasBeenSet;
}

vector<string> DescribeOrganizationFinancialByMonthRequest::GetProductCodes() const
{
    return m_productCodes;
}

void DescribeOrganizationFinancialByMonthRequest::SetProductCodes(const vector<string>& _productCodes)
{
    m_productCodes = _productCodes;
    m_productCodesHasBeenSet = true;
}

bool DescribeOrganizationFinancialByMonthRequest::ProductCodesHasBeenSet() const
{
    return m_productCodesHasBeenSet;
}


