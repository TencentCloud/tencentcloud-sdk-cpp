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

#include <tencentcloud/csip/v20221121/model/DescribeMandatoryVulSetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeMandatoryVulSetRequest::DescribeMandatoryVulSetRequest() :
    m_yearHasBeenSet(false),
    m_monthHasBeenSet(false)
{
}

string DescribeMandatoryVulSetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_yearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Year";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_year, allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_month, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeMandatoryVulSetRequest::GetYear() const
{
    return m_year;
}

void DescribeMandatoryVulSetRequest::SetYear(const int64_t& _year)
{
    m_year = _year;
    m_yearHasBeenSet = true;
}

bool DescribeMandatoryVulSetRequest::YearHasBeenSet() const
{
    return m_yearHasBeenSet;
}

int64_t DescribeMandatoryVulSetRequest::GetMonth() const
{
    return m_month;
}

void DescribeMandatoryVulSetRequest::SetMonth(const int64_t& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeMandatoryVulSetRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}


