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

#include <tencentcloud/tbaas/v20180416/model/DeployDynamicContractHandlerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

DeployDynamicContractHandlerRequest::DeployDynamicContractHandlerRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_groupPkHasBeenSet(false),
    m_contractNameHasBeenSet(false),
    m_abiInfoHasBeenSet(false),
    m_byteCodeBinHasBeenSet(false),
    m_constructorParamsHasBeenSet(false)
{
}

string DeployDynamicContractHandlerRequest::ToJsonString() const
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

    if (m_byteCodeBinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByteCodeBin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_byteCodeBin.c_str(), allocator).Move(), allocator);
    }

    if (m_constructorParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConstructorParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_constructorParams.begin(); itr != m_constructorParams.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployDynamicContractHandlerRequest::GetModule() const
{
    return m_module;
}

void DeployDynamicContractHandlerRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DeployDynamicContractHandlerRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string DeployDynamicContractHandlerRequest::GetOperation() const
{
    return m_operation;
}

void DeployDynamicContractHandlerRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool DeployDynamicContractHandlerRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string DeployDynamicContractHandlerRequest::GetGroupPk() const
{
    return m_groupPk;
}

void DeployDynamicContractHandlerRequest::SetGroupPk(const string& _groupPk)
{
    m_groupPk = _groupPk;
    m_groupPkHasBeenSet = true;
}

bool DeployDynamicContractHandlerRequest::GroupPkHasBeenSet() const
{
    return m_groupPkHasBeenSet;
}

string DeployDynamicContractHandlerRequest::GetContractName() const
{
    return m_contractName;
}

void DeployDynamicContractHandlerRequest::SetContractName(const string& _contractName)
{
    m_contractName = _contractName;
    m_contractNameHasBeenSet = true;
}

bool DeployDynamicContractHandlerRequest::ContractNameHasBeenSet() const
{
    return m_contractNameHasBeenSet;
}

string DeployDynamicContractHandlerRequest::GetAbiInfo() const
{
    return m_abiInfo;
}

void DeployDynamicContractHandlerRequest::SetAbiInfo(const string& _abiInfo)
{
    m_abiInfo = _abiInfo;
    m_abiInfoHasBeenSet = true;
}

bool DeployDynamicContractHandlerRequest::AbiInfoHasBeenSet() const
{
    return m_abiInfoHasBeenSet;
}

string DeployDynamicContractHandlerRequest::GetByteCodeBin() const
{
    return m_byteCodeBin;
}

void DeployDynamicContractHandlerRequest::SetByteCodeBin(const string& _byteCodeBin)
{
    m_byteCodeBin = _byteCodeBin;
    m_byteCodeBinHasBeenSet = true;
}

bool DeployDynamicContractHandlerRequest::ByteCodeBinHasBeenSet() const
{
    return m_byteCodeBinHasBeenSet;
}

vector<string> DeployDynamicContractHandlerRequest::GetConstructorParams() const
{
    return m_constructorParams;
}

void DeployDynamicContractHandlerRequest::SetConstructorParams(const vector<string>& _constructorParams)
{
    m_constructorParams = _constructorParams;
    m_constructorParamsHasBeenSet = true;
}

bool DeployDynamicContractHandlerRequest::ConstructorParamsHasBeenSet() const
{
    return m_constructorParamsHasBeenSet;
}


