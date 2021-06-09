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

#include <tencentcloud/tbaas/v20180416/model/GetTransByHashHandlerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetTransByHashHandlerRequest::GetTransByHashHandlerRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_groupPkHasBeenSet(false),
    m_transHashHasBeenSet(false)
{
}

string GetTransByHashHandlerRequest::ToJsonString() const
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

    if (m_transHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transHash.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTransByHashHandlerRequest::GetModule() const
{
    return m_module;
}

void GetTransByHashHandlerRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetTransByHashHandlerRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetTransByHashHandlerRequest::GetOperation() const
{
    return m_operation;
}

void GetTransByHashHandlerRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetTransByHashHandlerRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string GetTransByHashHandlerRequest::GetGroupPk() const
{
    return m_groupPk;
}

void GetTransByHashHandlerRequest::SetGroupPk(const string& _groupPk)
{
    m_groupPk = _groupPk;
    m_groupPkHasBeenSet = true;
}

bool GetTransByHashHandlerRequest::GroupPkHasBeenSet() const
{
    return m_groupPkHasBeenSet;
}

string GetTransByHashHandlerRequest::GetTransHash() const
{
    return m_transHash;
}

void GetTransByHashHandlerRequest::SetTransHash(const string& _transHash)
{
    m_transHash = _transHash;
    m_transHashHasBeenSet = true;
}

bool GetTransByHashHandlerRequest::TransHashHasBeenSet() const
{
    return m_transHashHasBeenSet;
}


