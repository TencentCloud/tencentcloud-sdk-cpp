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

#include <tencentcloud/iot/v20180123/model/GetDeviceStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace rapidjson;
using namespace std;

GetDeviceStatisticsRequest::GetDeviceStatisticsRequest() :
    m_productsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

string GetDeviceStatisticsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Products";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_products.begin(); itr != m_products.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endDate.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> GetDeviceStatisticsRequest::GetProducts() const
{
    return m_products;
}

void GetDeviceStatisticsRequest::SetProducts(const vector<string>& _products)
{
    m_products = _products;
    m_productsHasBeenSet = true;
}

bool GetDeviceStatisticsRequest::ProductsHasBeenSet() const
{
    return m_productsHasBeenSet;
}

string GetDeviceStatisticsRequest::GetStartDate() const
{
    return m_startDate;
}

void GetDeviceStatisticsRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool GetDeviceStatisticsRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string GetDeviceStatisticsRequest::GetEndDate() const
{
    return m_endDate;
}

void GetDeviceStatisticsRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool GetDeviceStatisticsRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}


