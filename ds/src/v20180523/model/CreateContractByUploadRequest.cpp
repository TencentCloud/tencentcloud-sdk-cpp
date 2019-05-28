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

#include <tencentcloud/ds/v20180523/model/CreateContractByUploadRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ds::V20180523::Model;
using namespace rapidjson;
using namespace std;

CreateContractByUploadRequest::CreateContractByUploadRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_signInfosHasBeenSet(false),
    m_contractFileHasBeenSet(false),
    m_contractNameHasBeenSet(false),
    m_initiatorHasBeenSet(false),
    m_remarksHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

string CreateContractByUploadRequest::ToJsonString() const
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

    if (m_signInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SignInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_signInfos.begin(); itr != m_signInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_contractFileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContractFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_contractFile.c_str(), allocator).Move(), allocator);
    }

    if (m_contractNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContractName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_contractName.c_str(), allocator).Move(), allocator);
    }

    if (m_initiatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Initiator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_initiator.c_str(), allocator).Move(), allocator);
    }

    if (m_remarksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateContractByUploadRequest::GetModule() const
{
    return m_module;
}

void CreateContractByUploadRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateContractByUploadRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateContractByUploadRequest::GetOperation() const
{
    return m_operation;
}

void CreateContractByUploadRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool CreateContractByUploadRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

vector<SignInfo> CreateContractByUploadRequest::GetSignInfos() const
{
    return m_signInfos;
}

void CreateContractByUploadRequest::SetSignInfos(const vector<SignInfo>& _signInfos)
{
    m_signInfos = _signInfos;
    m_signInfosHasBeenSet = true;
}

bool CreateContractByUploadRequest::SignInfosHasBeenSet() const
{
    return m_signInfosHasBeenSet;
}

string CreateContractByUploadRequest::GetContractFile() const
{
    return m_contractFile;
}

void CreateContractByUploadRequest::SetContractFile(const string& _contractFile)
{
    m_contractFile = _contractFile;
    m_contractFileHasBeenSet = true;
}

bool CreateContractByUploadRequest::ContractFileHasBeenSet() const
{
    return m_contractFileHasBeenSet;
}

string CreateContractByUploadRequest::GetContractName() const
{
    return m_contractName;
}

void CreateContractByUploadRequest::SetContractName(const string& _contractName)
{
    m_contractName = _contractName;
    m_contractNameHasBeenSet = true;
}

bool CreateContractByUploadRequest::ContractNameHasBeenSet() const
{
    return m_contractNameHasBeenSet;
}

string CreateContractByUploadRequest::GetInitiator() const
{
    return m_initiator;
}

void CreateContractByUploadRequest::SetInitiator(const string& _initiator)
{
    m_initiator = _initiator;
    m_initiatorHasBeenSet = true;
}

bool CreateContractByUploadRequest::InitiatorHasBeenSet() const
{
    return m_initiatorHasBeenSet;
}

string CreateContractByUploadRequest::GetRemarks() const
{
    return m_remarks;
}

void CreateContractByUploadRequest::SetRemarks(const string& _remarks)
{
    m_remarks = _remarks;
    m_remarksHasBeenSet = true;
}

bool CreateContractByUploadRequest::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

string CreateContractByUploadRequest::GetExpireTime() const
{
    return m_expireTime;
}

void CreateContractByUploadRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CreateContractByUploadRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}


