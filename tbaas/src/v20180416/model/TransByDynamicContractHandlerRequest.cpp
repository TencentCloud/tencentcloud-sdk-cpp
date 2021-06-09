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

#include <tencentcloud/tbaas/v20180416/model/TransByDynamicContractHandlerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

TransByDynamicContractHandlerRequest::TransByDynamicContractHandlerRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_groupPkHasBeenSet(false),
    m_contractAddressHasBeenSet(false),
    m_contractNameHasBeenSet(false),
    m_abiInfoHasBeenSet(false),
    m_funcNameHasBeenSet(false),
    m_funcParamHasBeenSet(false)
{
}

string TransByDynamicContractHandlerRequest::ToJsonString() const
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

    if (m_contractAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_contractNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractName.c_str(), allocator).Move(), allocator);
    }

    if (m_abiInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbiInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_abiInfo.c_str(), allocator).Move(), allocator);
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


string TransByDynamicContractHandlerRequest::GetModule() const
{
    return m_module;
}

void TransByDynamicContractHandlerRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool TransByDynamicContractHandlerRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string TransByDynamicContractHandlerRequest::GetOperation() const
{
    return m_operation;
}

void TransByDynamicContractHandlerRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool TransByDynamicContractHandlerRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string TransByDynamicContractHandlerRequest::GetGroupPk() const
{
    return m_groupPk;
}

void TransByDynamicContractHandlerRequest::SetGroupPk(const string& _groupPk)
{
    m_groupPk = _groupPk;
    m_groupPkHasBeenSet = true;
}

bool TransByDynamicContractHandlerRequest::GroupPkHasBeenSet() const
{
    return m_groupPkHasBeenSet;
}

string TransByDynamicContractHandlerRequest::GetContractAddress() const
{
    return m_contractAddress;
}

void TransByDynamicContractHandlerRequest::SetContractAddress(const string& _contractAddress)
{
    m_contractAddress = _contractAddress;
    m_contractAddressHasBeenSet = true;
}

bool TransByDynamicContractHandlerRequest::ContractAddressHasBeenSet() const
{
    return m_contractAddressHasBeenSet;
}

string TransByDynamicContractHandlerRequest::GetContractName() const
{
    return m_contractName;
}

void TransByDynamicContractHandlerRequest::SetContractName(const string& _contractName)
{
    m_contractName = _contractName;
    m_contractNameHasBeenSet = true;
}

bool TransByDynamicContractHandlerRequest::ContractNameHasBeenSet() const
{
    return m_contractNameHasBeenSet;
}

string TransByDynamicContractHandlerRequest::GetAbiInfo() const
{
    return m_abiInfo;
}

void TransByDynamicContractHandlerRequest::SetAbiInfo(const string& _abiInfo)
{
    m_abiInfo = _abiInfo;
    m_abiInfoHasBeenSet = true;
}

bool TransByDynamicContractHandlerRequest::AbiInfoHasBeenSet() const
{
    return m_abiInfoHasBeenSet;
}

string TransByDynamicContractHandlerRequest::GetFuncName() const
{
    return m_funcName;
}

void TransByDynamicContractHandlerRequest::SetFuncName(const string& _funcName)
{
    m_funcName = _funcName;
    m_funcNameHasBeenSet = true;
}

bool TransByDynamicContractHandlerRequest::FuncNameHasBeenSet() const
{
    return m_funcNameHasBeenSet;
}

vector<string> TransByDynamicContractHandlerRequest::GetFuncParam() const
{
    return m_funcParam;
}

void TransByDynamicContractHandlerRequest::SetFuncParam(const vector<string>& _funcParam)
{
    m_funcParam = _funcParam;
    m_funcParamHasBeenSet = true;
}

bool TransByDynamicContractHandlerRequest::FuncParamHasBeenSet() const
{
    return m_funcParamHasBeenSet;
}


