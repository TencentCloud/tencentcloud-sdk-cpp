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

#include <tencentcloud/cpdp/v20190820/model/QueryInvoiceForManagementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryInvoiceForManagementRequest::QueryInvoiceForManagementRequest() :
    m_invoicePlatformIdHasBeenSet(false),
    m_invoiceStatusHasBeenSet(false),
    m_redInvoiceStatusHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_invoiceIdHasBeenSet(false),
    m_orderSnHasBeenSet(false),
    m_invoiceSnHasBeenSet(false),
    m_invoiceCodeHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryInvoiceForManagementRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invoicePlatformIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoicePlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoicePlatformId, allocator);
    }

    if (m_invoiceStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoiceStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoiceStatus, allocator);
    }

    if (m_redInvoiceStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RedInvoiceStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redInvoiceStatus, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_invoiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderSn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderSn.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceSnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoiceSn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_invoiceSn.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvoiceCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_invoiceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t QueryInvoiceForManagementRequest::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void QueryInvoiceForManagementRequest::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

int64_t QueryInvoiceForManagementRequest::GetInvoiceStatus() const
{
    return m_invoiceStatus;
}

void QueryInvoiceForManagementRequest::SetInvoiceStatus(const int64_t& _invoiceStatus)
{
    m_invoiceStatus = _invoiceStatus;
    m_invoiceStatusHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::InvoiceStatusHasBeenSet() const
{
    return m_invoiceStatusHasBeenSet;
}

int64_t QueryInvoiceForManagementRequest::GetRedInvoiceStatus() const
{
    return m_redInvoiceStatus;
}

void QueryInvoiceForManagementRequest::SetRedInvoiceStatus(const int64_t& _redInvoiceStatus)
{
    m_redInvoiceStatus = _redInvoiceStatus;
    m_redInvoiceStatusHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::RedInvoiceStatusHasBeenSet() const
{
    return m_redInvoiceStatusHasBeenSet;
}

string QueryInvoiceForManagementRequest::GetBeginTime() const
{
    return m_beginTime;
}

void QueryInvoiceForManagementRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string QueryInvoiceForManagementRequest::GetEndTime() const
{
    return m_endTime;
}

void QueryInvoiceForManagementRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t QueryInvoiceForManagementRequest::GetOffset() const
{
    return m_offset;
}

void QueryInvoiceForManagementRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t QueryInvoiceForManagementRequest::GetLimit() const
{
    return m_limit;
}

void QueryInvoiceForManagementRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string QueryInvoiceForManagementRequest::GetOrderId() const
{
    return m_orderId;
}

void QueryInvoiceForManagementRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string QueryInvoiceForManagementRequest::GetInvoiceId() const
{
    return m_invoiceId;
}

void QueryInvoiceForManagementRequest::SetInvoiceId(const string& _invoiceId)
{
    m_invoiceId = _invoiceId;
    m_invoiceIdHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::InvoiceIdHasBeenSet() const
{
    return m_invoiceIdHasBeenSet;
}

string QueryInvoiceForManagementRequest::GetOrderSn() const
{
    return m_orderSn;
}

void QueryInvoiceForManagementRequest::SetOrderSn(const string& _orderSn)
{
    m_orderSn = _orderSn;
    m_orderSnHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::OrderSnHasBeenSet() const
{
    return m_orderSnHasBeenSet;
}

string QueryInvoiceForManagementRequest::GetInvoiceSn() const
{
    return m_invoiceSn;
}

void QueryInvoiceForManagementRequest::SetInvoiceSn(const string& _invoiceSn)
{
    m_invoiceSn = _invoiceSn;
    m_invoiceSnHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::InvoiceSnHasBeenSet() const
{
    return m_invoiceSnHasBeenSet;
}

string QueryInvoiceForManagementRequest::GetInvoiceCode() const
{
    return m_invoiceCode;
}

void QueryInvoiceForManagementRequest::SetInvoiceCode(const string& _invoiceCode)
{
    m_invoiceCode = _invoiceCode;
    m_invoiceCodeHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::InvoiceCodeHasBeenSet() const
{
    return m_invoiceCodeHasBeenSet;
}

string QueryInvoiceForManagementRequest::GetProfile() const
{
    return m_profile;
}

void QueryInvoiceForManagementRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryInvoiceForManagementRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


