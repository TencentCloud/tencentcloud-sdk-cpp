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

#include <tencentcloud/cr/v20180321/model/DescribeCreditResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud;
using namespace TencentCloud::Cr::V20180321;
using namespace TencentCloud::Cr::V20180321::Model;
using namespace rapidjson;
using namespace std;

DescribeCreditResultRequest::DescribeCreditResultRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_instIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_caseIdHasBeenSet(false),
    m_requestDateHasBeenSet(false)
{
}

string DescribeCreditResultRequest::ToJsonString()
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

    if (m_instIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_caseIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_caseId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_requestDate.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCreditResultRequest::GetModule() const
{
    return m_module;
}

void DescribeCreditResultRequest::SetModule(const string& module)
{
    m_module = module;
    m_moduleHasBeenSet = true;
}

bool DescribeCreditResultRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string DescribeCreditResultRequest::GetOperation() const
{
    return m_operation;
}

void DescribeCreditResultRequest::SetOperation(const string& operation)
{
    m_operation = operation;
    m_operationHasBeenSet = true;
}

bool DescribeCreditResultRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string DescribeCreditResultRequest::GetInstId() const
{
    return m_instId;
}

void DescribeCreditResultRequest::SetInstId(const string& instId)
{
    m_instId = instId;
    m_instIdHasBeenSet = true;
}

bool DescribeCreditResultRequest::InstIdHasBeenSet() const
{
    return m_instIdHasBeenSet;
}

string DescribeCreditResultRequest::GetProductId() const
{
    return m_productId;
}

void DescribeCreditResultRequest::SetProductId(const string& productId)
{
    m_productId = productId;
    m_productIdHasBeenSet = true;
}

bool DescribeCreditResultRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeCreditResultRequest::GetCaseId() const
{
    return m_caseId;
}

void DescribeCreditResultRequest::SetCaseId(const string& caseId)
{
    m_caseId = caseId;
    m_caseIdHasBeenSet = true;
}

bool DescribeCreditResultRequest::CaseIdHasBeenSet() const
{
    return m_caseIdHasBeenSet;
}

string DescribeCreditResultRequest::GetRequestDate() const
{
    return m_requestDate;
}

void DescribeCreditResultRequest::SetRequestDate(const string& requestDate)
{
    m_requestDate = requestDate;
    m_requestDateHasBeenSet = true;
}

bool DescribeCreditResultRequest::RequestDateHasBeenSet() const
{
    return m_requestDateHasBeenSet;
}


