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

#include <tencentcloud/cpdp/v20190820/model/QueryFlexPaymentOrderListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryFlexPaymentOrderListRequest::QueryFlexPaymentOrderListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_payeeIdHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryFlexPaymentOrderListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageNumber.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryFlexPaymentOrderListRequest::GetStartTime() const
{
    return m_startTime;
}

void QueryFlexPaymentOrderListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool QueryFlexPaymentOrderListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string QueryFlexPaymentOrderListRequest::GetEndTime() const
{
    return m_endTime;
}

void QueryFlexPaymentOrderListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool QueryFlexPaymentOrderListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

Paging QueryFlexPaymentOrderListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void QueryFlexPaymentOrderListRequest::SetPageNumber(const Paging& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool QueryFlexPaymentOrderListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string QueryFlexPaymentOrderListRequest::GetPayeeId() const
{
    return m_payeeId;
}

void QueryFlexPaymentOrderListRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool QueryFlexPaymentOrderListRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string QueryFlexPaymentOrderListRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryFlexPaymentOrderListRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryFlexPaymentOrderListRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


