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

#include <tencentcloud/scf/v20180416/model/ListAsyncEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

ListAsyncEventsRequest::ListAsyncEventsRequest() :
    m_functionNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_invokeTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeIntervalHasBeenSet(false),
    m_endTimeIntervalHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderbyHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_invokeRequestIdHasBeenSet(false)
{
}

string ListAsyncEventsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_invokeType.begin(); itr != m_invokeType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_startTimeInterval.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_endTimeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_endTimeInterval.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderbyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Orderby";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderby.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_invokeRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeRequestId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invokeRequestId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListAsyncEventsRequest::GetFunctionName() const
{
    return m_functionName;
}

void ListAsyncEventsRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool ListAsyncEventsRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string ListAsyncEventsRequest::GetNamespace() const
{
    return m_namespace;
}

void ListAsyncEventsRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ListAsyncEventsRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ListAsyncEventsRequest::GetQualifier() const
{
    return m_qualifier;
}

void ListAsyncEventsRequest::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool ListAsyncEventsRequest::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

vector<string> ListAsyncEventsRequest::GetInvokeType() const
{
    return m_invokeType;
}

void ListAsyncEventsRequest::SetInvokeType(const vector<string>& _invokeType)
{
    m_invokeType = _invokeType;
    m_invokeTypeHasBeenSet = true;
}

bool ListAsyncEventsRequest::InvokeTypeHasBeenSet() const
{
    return m_invokeTypeHasBeenSet;
}

vector<string> ListAsyncEventsRequest::GetStatus() const
{
    return m_status;
}

void ListAsyncEventsRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListAsyncEventsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

TimeInterval ListAsyncEventsRequest::GetStartTimeInterval() const
{
    return m_startTimeInterval;
}

void ListAsyncEventsRequest::SetStartTimeInterval(const TimeInterval& _startTimeInterval)
{
    m_startTimeInterval = _startTimeInterval;
    m_startTimeIntervalHasBeenSet = true;
}

bool ListAsyncEventsRequest::StartTimeIntervalHasBeenSet() const
{
    return m_startTimeIntervalHasBeenSet;
}

TimeInterval ListAsyncEventsRequest::GetEndTimeInterval() const
{
    return m_endTimeInterval;
}

void ListAsyncEventsRequest::SetEndTimeInterval(const TimeInterval& _endTimeInterval)
{
    m_endTimeInterval = _endTimeInterval;
    m_endTimeIntervalHasBeenSet = true;
}

bool ListAsyncEventsRequest::EndTimeIntervalHasBeenSet() const
{
    return m_endTimeIntervalHasBeenSet;
}

string ListAsyncEventsRequest::GetOrder() const
{
    return m_order;
}

void ListAsyncEventsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ListAsyncEventsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string ListAsyncEventsRequest::GetOrderby() const
{
    return m_orderby;
}

void ListAsyncEventsRequest::SetOrderby(const string& _orderby)
{
    m_orderby = _orderby;
    m_orderbyHasBeenSet = true;
}

bool ListAsyncEventsRequest::OrderbyHasBeenSet() const
{
    return m_orderbyHasBeenSet;
}

int64_t ListAsyncEventsRequest::GetOffset() const
{
    return m_offset;
}

void ListAsyncEventsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListAsyncEventsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t ListAsyncEventsRequest::GetLimit() const
{
    return m_limit;
}

void ListAsyncEventsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListAsyncEventsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string ListAsyncEventsRequest::GetInvokeRequestId() const
{
    return m_invokeRequestId;
}

void ListAsyncEventsRequest::SetInvokeRequestId(const string& _invokeRequestId)
{
    m_invokeRequestId = _invokeRequestId;
    m_invokeRequestIdHasBeenSet = true;
}

bool ListAsyncEventsRequest::InvokeRequestIdHasBeenSet() const
{
    return m_invokeRequestIdHasBeenSet;
}


