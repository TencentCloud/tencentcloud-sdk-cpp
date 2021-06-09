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

#include <tencentcloud/scf/v20180416/model/GetFunctionLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

GetFunctionLogsRequest::GetFunctionLogsRequest() :
    m_functionNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_functionRequestIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_searchContextHasBeenSet(false)
{
}

string GetFunctionLogsRequest::ToJsonString() const
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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_functionRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionRequestId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionRequestId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_searchContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchContext.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetFunctionLogsRequest::GetFunctionName() const
{
    return m_functionName;
}

void GetFunctionLogsRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool GetFunctionLogsRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

int64_t GetFunctionLogsRequest::GetOffset() const
{
    return m_offset;
}

void GetFunctionLogsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetFunctionLogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t GetFunctionLogsRequest::GetLimit() const
{
    return m_limit;
}

void GetFunctionLogsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetFunctionLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetFunctionLogsRequest::GetOrder() const
{
    return m_order;
}

void GetFunctionLogsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool GetFunctionLogsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string GetFunctionLogsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void GetFunctionLogsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool GetFunctionLogsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

LogFilter GetFunctionLogsRequest::GetFilter() const
{
    return m_filter;
}

void GetFunctionLogsRequest::SetFilter(const LogFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool GetFunctionLogsRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string GetFunctionLogsRequest::GetNamespace() const
{
    return m_namespace;
}

void GetFunctionLogsRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GetFunctionLogsRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GetFunctionLogsRequest::GetQualifier() const
{
    return m_qualifier;
}

void GetFunctionLogsRequest::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool GetFunctionLogsRequest::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

string GetFunctionLogsRequest::GetFunctionRequestId() const
{
    return m_functionRequestId;
}

void GetFunctionLogsRequest::SetFunctionRequestId(const string& _functionRequestId)
{
    m_functionRequestId = _functionRequestId;
    m_functionRequestIdHasBeenSet = true;
}

bool GetFunctionLogsRequest::FunctionRequestIdHasBeenSet() const
{
    return m_functionRequestIdHasBeenSet;
}

string GetFunctionLogsRequest::GetStartTime() const
{
    return m_startTime;
}

void GetFunctionLogsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GetFunctionLogsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GetFunctionLogsRequest::GetEndTime() const
{
    return m_endTime;
}

void GetFunctionLogsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetFunctionLogsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

LogSearchContext GetFunctionLogsRequest::GetSearchContext() const
{
    return m_searchContext;
}

void GetFunctionLogsRequest::SetSearchContext(const LogSearchContext& _searchContext)
{
    m_searchContext = _searchContext;
    m_searchContextHasBeenSet = true;
}

bool GetFunctionLogsRequest::SearchContextHasBeenSet() const
{
    return m_searchContextHasBeenSet;
}


