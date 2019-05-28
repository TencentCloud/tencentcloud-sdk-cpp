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

#include <tencentcloud/ds/v20180523/model/DeleteAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ds::V20180523::Model;
using namespace rapidjson;
using namespace std;

DeleteAccountRequest::DeleteAccountRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_accountListHasBeenSet(false)
{
}

string DeleteAccountRequest::ToJsonString() const
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

    if (m_accountListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_accountList.begin(); itr != m_accountList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteAccountRequest::GetModule() const
{
    return m_module;
}

void DeleteAccountRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DeleteAccountRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string DeleteAccountRequest::GetOperation() const
{
    return m_operation;
}

void DeleteAccountRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool DeleteAccountRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

vector<string> DeleteAccountRequest::GetAccountList() const
{
    return m_accountList;
}

void DeleteAccountRequest::SetAccountList(const vector<string>& _accountList)
{
    m_accountList = _accountList;
    m_accountListHasBeenSet = true;
}

bool DeleteAccountRequest::AccountListHasBeenSet() const
{
    return m_accountListHasBeenSet;
}


