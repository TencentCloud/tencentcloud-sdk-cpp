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

#include <tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeVoucherUsageDetailsRequest::DescribeVoucherUsageDetailsRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_voucherIdHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string DescribeVoucherUsageDetailsRequest::ToJsonString() const
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

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voucherId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeVoucherUsageDetailsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeVoucherUsageDetailsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeVoucherUsageDetailsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeVoucherUsageDetailsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeVoucherUsageDetailsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeVoucherUsageDetailsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeVoucherUsageDetailsRequest::GetVoucherId() const
{
    return m_voucherId;
}

void DescribeVoucherUsageDetailsRequest::SetVoucherId(const string& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool DescribeVoucherUsageDetailsRequest::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

string DescribeVoucherUsageDetailsRequest::GetOperator() const
{
    return m_operator;
}

void DescribeVoucherUsageDetailsRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeVoucherUsageDetailsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


