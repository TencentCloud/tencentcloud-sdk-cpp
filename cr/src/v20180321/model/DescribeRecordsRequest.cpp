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

#include <tencentcloud/cr/v20180321/model/DescribeRecordsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace rapidjson;
using namespace std;

DescribeRecordsRequest::DescribeRecordsRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_accountNumHasBeenSet(false),
    m_calledPhoneHasBeenSet(false),
    m_startBizDateHasBeenSet(false),
    m_endBizDateHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_instIdHasBeenSet(false)
{
}

string DescribeRecordsRequest::ToJsonString()
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accountNum.c_str(), allocator).Move(), allocator);
    }

    if (m_calledPhoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CalledPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_calledPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_startBizDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartBizDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startBizDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endBizDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndBizDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endBizDate.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_limit.c_str(), allocator).Move(), allocator);
    }

    if (m_instIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRecordsRequest::GetModule() const
{
    return m_module;
}

void DescribeRecordsRequest::SetModule(const string& module)
{
    m_module = module;
    m_moduleHasBeenSet = true;
}

bool DescribeRecordsRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string DescribeRecordsRequest::GetOperation() const
{
    return m_operation;
}

void DescribeRecordsRequest::SetOperation(const string& operation)
{
    m_operation = operation;
    m_operationHasBeenSet = true;
}

bool DescribeRecordsRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string DescribeRecordsRequest::GetProductId() const
{
    return m_productId;
}

void DescribeRecordsRequest::SetProductId(const string& productId)
{
    m_productId = productId;
    m_productIdHasBeenSet = true;
}

bool DescribeRecordsRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeRecordsRequest::GetAccountNum() const
{
    return m_accountNum;
}

void DescribeRecordsRequest::SetAccountNum(const string& accountNum)
{
    m_accountNum = accountNum;
    m_accountNumHasBeenSet = true;
}

bool DescribeRecordsRequest::AccountNumHasBeenSet() const
{
    return m_accountNumHasBeenSet;
}

string DescribeRecordsRequest::GetCalledPhone() const
{
    return m_calledPhone;
}

void DescribeRecordsRequest::SetCalledPhone(const string& calledPhone)
{
    m_calledPhone = calledPhone;
    m_calledPhoneHasBeenSet = true;
}

bool DescribeRecordsRequest::CalledPhoneHasBeenSet() const
{
    return m_calledPhoneHasBeenSet;
}

string DescribeRecordsRequest::GetStartBizDate() const
{
    return m_startBizDate;
}

void DescribeRecordsRequest::SetStartBizDate(const string& startBizDate)
{
    m_startBizDate = startBizDate;
    m_startBizDateHasBeenSet = true;
}

bool DescribeRecordsRequest::StartBizDateHasBeenSet() const
{
    return m_startBizDateHasBeenSet;
}

string DescribeRecordsRequest::GetEndBizDate() const
{
    return m_endBizDate;
}

void DescribeRecordsRequest::SetEndBizDate(const string& endBizDate)
{
    m_endBizDate = endBizDate;
    m_endBizDateHasBeenSet = true;
}

bool DescribeRecordsRequest::EndBizDateHasBeenSet() const
{
    return m_endBizDateHasBeenSet;
}

string DescribeRecordsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRecordsRequest::SetOffset(const string& offset)
{
    m_offset = offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRecordsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeRecordsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRecordsRequest::SetLimit(const string& limit)
{
    m_limit = limit;
    m_limitHasBeenSet = true;
}

bool DescribeRecordsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRecordsRequest::GetInstId() const
{
    return m_instId;
}

void DescribeRecordsRequest::SetInstId(const string& instId)
{
    m_instId = instId;
    m_instIdHasBeenSet = true;
}

bool DescribeRecordsRequest::InstIdHasBeenSet() const
{
    return m_instIdHasBeenSet;
}


