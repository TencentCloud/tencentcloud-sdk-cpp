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

#include <tencentcloud/tbaas/v20180416/model/GetTransListHandlerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetTransListHandlerRequest::GetTransListHandlerRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_groupPkHasBeenSet(false),
    m_transHashHasBeenSet(false)
{
}

string GetTransListHandlerRequest::ToJsonString() const
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

    if (m_groupPkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupPk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupPk.c_str(), allocator).Move(), allocator);
    }

    if (m_transHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TransHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_transHash.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTransListHandlerRequest::GetModule() const
{
    return m_module;
}

void GetTransListHandlerRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetTransListHandlerRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetTransListHandlerRequest::GetOperation() const
{
    return m_operation;
}

void GetTransListHandlerRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetTransListHandlerRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

int64_t GetTransListHandlerRequest::GetOffset() const
{
    return m_offset;
}

void GetTransListHandlerRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetTransListHandlerRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t GetTransListHandlerRequest::GetLimit() const
{
    return m_limit;
}

void GetTransListHandlerRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetTransListHandlerRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetTransListHandlerRequest::GetGroupPk() const
{
    return m_groupPk;
}

void GetTransListHandlerRequest::SetGroupPk(const string& _groupPk)
{
    m_groupPk = _groupPk;
    m_groupPkHasBeenSet = true;
}

bool GetTransListHandlerRequest::GroupPkHasBeenSet() const
{
    return m_groupPkHasBeenSet;
}

string GetTransListHandlerRequest::GetTransHash() const
{
    return m_transHash;
}

void GetTransListHandlerRequest::SetTransHash(const string& _transHash)
{
    m_transHash = _transHash;
    m_transHashHasBeenSet = true;
}

bool GetTransListHandlerRequest::TransHashHasBeenSet() const
{
    return m_transHashHasBeenSet;
}


