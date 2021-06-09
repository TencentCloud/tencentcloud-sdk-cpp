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

#include <tencentcloud/domain/v20180808/model/DescribeDomainPriceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribeDomainPriceListRequest::DescribeDomainPriceListRequest() :
    m_tldListHasBeenSet(false),
    m_yearHasBeenSet(false),
    m_operationHasBeenSet(false)
{
}

string DescribeDomainPriceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tldListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TldList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tldList.begin(); itr != m_tldList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_yearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Year";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_year.begin(); itr != m_year.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operation.begin(); itr != m_operation.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDomainPriceListRequest::GetTldList() const
{
    return m_tldList;
}

void DescribeDomainPriceListRequest::SetTldList(const vector<string>& _tldList)
{
    m_tldList = _tldList;
    m_tldListHasBeenSet = true;
}

bool DescribeDomainPriceListRequest::TldListHasBeenSet() const
{
    return m_tldListHasBeenSet;
}

vector<int64_t> DescribeDomainPriceListRequest::GetYear() const
{
    return m_year;
}

void DescribeDomainPriceListRequest::SetYear(const vector<int64_t>& _year)
{
    m_year = _year;
    m_yearHasBeenSet = true;
}

bool DescribeDomainPriceListRequest::YearHasBeenSet() const
{
    return m_yearHasBeenSet;
}

vector<string> DescribeDomainPriceListRequest::GetOperation() const
{
    return m_operation;
}

void DescribeDomainPriceListRequest::SetOperation(const vector<string>& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool DescribeDomainPriceListRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}


