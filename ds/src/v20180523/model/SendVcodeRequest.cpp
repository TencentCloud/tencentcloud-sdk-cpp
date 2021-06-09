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

#include <tencentcloud/ds/v20180523/model/SendVcodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

SendVcodeRequest::SendVcodeRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_contractResIdHasBeenSet(false),
    m_accountResIdHasBeenSet(false)
{
}

string SendVcodeRequest::ToJsonString() const
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

    if (m_contractResIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractResId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountResIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountResId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountResId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendVcodeRequest::GetModule() const
{
    return m_module;
}

void SendVcodeRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool SendVcodeRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string SendVcodeRequest::GetOperation() const
{
    return m_operation;
}

void SendVcodeRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool SendVcodeRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string SendVcodeRequest::GetContractResId() const
{
    return m_contractResId;
}

void SendVcodeRequest::SetContractResId(const string& _contractResId)
{
    m_contractResId = _contractResId;
    m_contractResIdHasBeenSet = true;
}

bool SendVcodeRequest::ContractResIdHasBeenSet() const
{
    return m_contractResIdHasBeenSet;
}

string SendVcodeRequest::GetAccountResId() const
{
    return m_accountResId;
}

void SendVcodeRequest::SetAccountResId(const string& _accountResId)
{
    m_accountResId = _accountResId;
    m_accountResIdHasBeenSet = true;
}

bool SendVcodeRequest::AccountResIdHasBeenSet() const
{
    return m_accountResIdHasBeenSet;
}


