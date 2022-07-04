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

#include <tencentcloud/cpdp/v20190820/model/QueryFlexOrderSummaryListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryFlexOrderSummaryListRequest::QueryFlexOrderSummaryListRequest() :
    m_summaryDateHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_payeeIdHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryFlexOrderSummaryListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_summaryDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_summaryDate.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageNumber.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
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


string QueryFlexOrderSummaryListRequest::GetSummaryDate() const
{
    return m_summaryDate;
}

void QueryFlexOrderSummaryListRequest::SetSummaryDate(const string& _summaryDate)
{
    m_summaryDate = _summaryDate;
    m_summaryDateHasBeenSet = true;
}

bool QueryFlexOrderSummaryListRequest::SummaryDateHasBeenSet() const
{
    return m_summaryDateHasBeenSet;
}

Paging QueryFlexOrderSummaryListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void QueryFlexOrderSummaryListRequest::SetPageNumber(const Paging& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool QueryFlexOrderSummaryListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string QueryFlexOrderSummaryListRequest::GetOrderType() const
{
    return m_orderType;
}

void QueryFlexOrderSummaryListRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool QueryFlexOrderSummaryListRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string QueryFlexOrderSummaryListRequest::GetPayeeId() const
{
    return m_payeeId;
}

void QueryFlexOrderSummaryListRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool QueryFlexOrderSummaryListRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string QueryFlexOrderSummaryListRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryFlexOrderSummaryListRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryFlexOrderSummaryListRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


