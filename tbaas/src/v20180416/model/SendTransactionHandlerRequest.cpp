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

#include <tencentcloud/tbaas/v20180416/model/SendTransactionHandlerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

SendTransactionHandlerRequest::SendTransactionHandlerRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_groupPkHasBeenSet(false),
    m_contractIdHasBeenSet(false),
    m_funcNameHasBeenSet(false),
    m_funcParamHasBeenSet(false)
{
}

string SendTransactionHandlerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_groupPkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupPk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupPk.c_str(), allocator).Move(), allocator);
    }

    if (m_contractIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_contractId, allocator);
    }

    if (m_funcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuncName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_funcName.c_str(), allocator).Move(), allocator);
    }

    if (m_funcParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuncParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_funcParam.begin(); itr != m_funcParam.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendTransactionHandlerRequest::GetModule() const
{
    return m_module;
}

void SendTransactionHandlerRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool SendTransactionHandlerRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string SendTransactionHandlerRequest::GetOperation() const
{
    return m_operation;
}

void SendTransactionHandlerRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool SendTransactionHandlerRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string SendTransactionHandlerRequest::GetGroupPk() const
{
    return m_groupPk;
}

void SendTransactionHandlerRequest::SetGroupPk(const string& _groupPk)
{
    m_groupPk = _groupPk;
    m_groupPkHasBeenSet = true;
}

bool SendTransactionHandlerRequest::GroupPkHasBeenSet() const
{
    return m_groupPkHasBeenSet;
}

int64_t SendTransactionHandlerRequest::GetContractId() const
{
    return m_contractId;
}

void SendTransactionHandlerRequest::SetContractId(const int64_t& _contractId)
{
    m_contractId = _contractId;
    m_contractIdHasBeenSet = true;
}

bool SendTransactionHandlerRequest::ContractIdHasBeenSet() const
{
    return m_contractIdHasBeenSet;
}

string SendTransactionHandlerRequest::GetFuncName() const
{
    return m_funcName;
}

void SendTransactionHandlerRequest::SetFuncName(const string& _funcName)
{
    m_funcName = _funcName;
    m_funcNameHasBeenSet = true;
}

bool SendTransactionHandlerRequest::FuncNameHasBeenSet() const
{
    return m_funcNameHasBeenSet;
}

vector<string> SendTransactionHandlerRequest::GetFuncParam() const
{
    return m_funcParam;
}

void SendTransactionHandlerRequest::SetFuncParam(const vector<string>& _funcParam)
{
    m_funcParam = _funcParam;
    m_funcParamHasBeenSet = true;
}

bool SendTransactionHandlerRequest::FuncParamHasBeenSet() const
{
    return m_funcParamHasBeenSet;
}


