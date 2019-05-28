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

#include <tencentcloud/billing/v20180709/model/DescribeDosageDetailByDateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeDosageDetailByDateRequest::DescribeDosageDetailByDateRequest() :
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_instanceIDHasBeenSet(false)
{
}

string DescribeDosageDetailByDateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_productCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDosageDetailByDateRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeDosageDetailByDateRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeDosageDetailByDateRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeDosageDetailByDateRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeDosageDetailByDateRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeDosageDetailByDateRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string DescribeDosageDetailByDateRequest::GetProductCode() const
{
    return m_productCode;
}

void DescribeDosageDetailByDateRequest::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool DescribeDosageDetailByDateRequest::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string DescribeDosageDetailByDateRequest::GetDomain() const
{
    return m_domain;
}

void DescribeDosageDetailByDateRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeDosageDetailByDateRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeDosageDetailByDateRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeDosageDetailByDateRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeDosageDetailByDateRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}


