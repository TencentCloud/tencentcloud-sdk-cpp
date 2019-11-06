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

#include <tencentcloud/tbaas/v20180416/model/BlockByNumberHandlerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

BlockByNumberHandlerRequest::BlockByNumberHandlerRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_groupPkHasBeenSet(false),
    m_blockNumberHasBeenSet(false)
{
}

string BlockByNumberHandlerRequest::ToJsonString() const
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

    if (m_groupPkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupPk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupPk.c_str(), allocator).Move(), allocator);
    }

    if (m_blockNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlockNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blockNumber, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BlockByNumberHandlerRequest::GetModule() const
{
    return m_module;
}

void BlockByNumberHandlerRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool BlockByNumberHandlerRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string BlockByNumberHandlerRequest::GetOperation() const
{
    return m_operation;
}

void BlockByNumberHandlerRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool BlockByNumberHandlerRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string BlockByNumberHandlerRequest::GetGroupPk() const
{
    return m_groupPk;
}

void BlockByNumberHandlerRequest::SetGroupPk(const string& _groupPk)
{
    m_groupPk = _groupPk;
    m_groupPkHasBeenSet = true;
}

bool BlockByNumberHandlerRequest::GroupPkHasBeenSet() const
{
    return m_groupPkHasBeenSet;
}

int64_t BlockByNumberHandlerRequest::GetBlockNumber() const
{
    return m_blockNumber;
}

void BlockByNumberHandlerRequest::SetBlockNumber(const int64_t& _blockNumber)
{
    m_blockNumber = _blockNumber;
    m_blockNumberHasBeenSet = true;
}

bool BlockByNumberHandlerRequest::BlockNumberHasBeenSet() const
{
    return m_blockNumberHasBeenSet;
}


