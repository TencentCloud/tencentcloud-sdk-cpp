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

#include <tencentcloud/partners/v20180321/model/DescribeAgentDealsPriceDetailByDealNameRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeAgentDealsPriceDetailByDealNameRequest::DescribeAgentDealsPriceDetailByDealNameRequest() :
    m_dealCreatYearHasBeenSet(false),
    m_dealNamesHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

string DescribeAgentDealsPriceDetailByDealNameRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dealCreatYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealCreatYear";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealCreatYear, allocator);
    }

    if (m_dealNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dealNames.begin(); itr != m_dealNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAgentDealsPriceDetailByDealNameRequest::GetDealCreatYear() const
{
    return m_dealCreatYear;
}

void DescribeAgentDealsPriceDetailByDealNameRequest::SetDealCreatYear(const uint64_t& _dealCreatYear)
{
    m_dealCreatYear = _dealCreatYear;
    m_dealCreatYearHasBeenSet = true;
}

bool DescribeAgentDealsPriceDetailByDealNameRequest::DealCreatYearHasBeenSet() const
{
    return m_dealCreatYearHasBeenSet;
}

vector<string> DescribeAgentDealsPriceDetailByDealNameRequest::GetDealNames() const
{
    return m_dealNames;
}

void DescribeAgentDealsPriceDetailByDealNameRequest::SetDealNames(const vector<string>& _dealNames)
{
    m_dealNames = _dealNames;
    m_dealNamesHasBeenSet = true;
}

bool DescribeAgentDealsPriceDetailByDealNameRequest::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

string DescribeAgentDealsPriceDetailByDealNameRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void DescribeAgentDealsPriceDetailByDealNameRequest::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DescribeAgentDealsPriceDetailByDealNameRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}


