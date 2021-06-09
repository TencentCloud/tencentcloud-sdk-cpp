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

#include <tencentcloud/ds/v20180523/model/CreateEnterpriseAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

CreateEnterpriseAccountRequest::CreateEnterpriseAccountRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_identTypeHasBeenSet(false),
    m_identNoHasBeenSet(false),
    m_mobilePhoneHasBeenSet(false),
    m_transactorNameHasBeenSet(false),
    m_transactorIdentTypeHasBeenSet(false),
    m_transactorIdentNoHasBeenSet(false),
    m_transactorPhoneHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

string CreateEnterpriseAccountRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_identTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_identType, allocator);
    }

    if (m_identNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identNo.c_str(), allocator).Move(), allocator);
    }

    if (m_mobilePhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MobilePhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobilePhone.c_str(), allocator).Move(), allocator);
    }

    if (m_transactorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transactorName.c_str(), allocator).Move(), allocator);
    }

    if (m_transactorIdentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactorIdentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transactorIdentType, allocator);
    }

    if (m_transactorIdentNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactorIdentNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transactorIdentNo.c_str(), allocator).Move(), allocator);
    }

    if (m_transactorPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactorPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transactorPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEnterpriseAccountRequest::GetModule() const
{
    return m_module;
}

void CreateEnterpriseAccountRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateEnterpriseAccountRequest::GetOperation() const
{
    return m_operation;
}

void CreateEnterpriseAccountRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string CreateEnterpriseAccountRequest::GetName() const
{
    return m_name;
}

void CreateEnterpriseAccountRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateEnterpriseAccountRequest::GetIdentType() const
{
    return m_identType;
}

void CreateEnterpriseAccountRequest::SetIdentType(const int64_t& _identType)
{
    m_identType = _identType;
    m_identTypeHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::IdentTypeHasBeenSet() const
{
    return m_identTypeHasBeenSet;
}

string CreateEnterpriseAccountRequest::GetIdentNo() const
{
    return m_identNo;
}

void CreateEnterpriseAccountRequest::SetIdentNo(const string& _identNo)
{
    m_identNo = _identNo;
    m_identNoHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::IdentNoHasBeenSet() const
{
    return m_identNoHasBeenSet;
}

string CreateEnterpriseAccountRequest::GetMobilePhone() const
{
    return m_mobilePhone;
}

void CreateEnterpriseAccountRequest::SetMobilePhone(const string& _mobilePhone)
{
    m_mobilePhone = _mobilePhone;
    m_mobilePhoneHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::MobilePhoneHasBeenSet() const
{
    return m_mobilePhoneHasBeenSet;
}

string CreateEnterpriseAccountRequest::GetTransactorName() const
{
    return m_transactorName;
}

void CreateEnterpriseAccountRequest::SetTransactorName(const string& _transactorName)
{
    m_transactorName = _transactorName;
    m_transactorNameHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::TransactorNameHasBeenSet() const
{
    return m_transactorNameHasBeenSet;
}

int64_t CreateEnterpriseAccountRequest::GetTransactorIdentType() const
{
    return m_transactorIdentType;
}

void CreateEnterpriseAccountRequest::SetTransactorIdentType(const int64_t& _transactorIdentType)
{
    m_transactorIdentType = _transactorIdentType;
    m_transactorIdentTypeHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::TransactorIdentTypeHasBeenSet() const
{
    return m_transactorIdentTypeHasBeenSet;
}

string CreateEnterpriseAccountRequest::GetTransactorIdentNo() const
{
    return m_transactorIdentNo;
}

void CreateEnterpriseAccountRequest::SetTransactorIdentNo(const string& _transactorIdentNo)
{
    m_transactorIdentNo = _transactorIdentNo;
    m_transactorIdentNoHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::TransactorIdentNoHasBeenSet() const
{
    return m_transactorIdentNoHasBeenSet;
}

string CreateEnterpriseAccountRequest::GetTransactorPhone() const
{
    return m_transactorPhone;
}

void CreateEnterpriseAccountRequest::SetTransactorPhone(const string& _transactorPhone)
{
    m_transactorPhone = _transactorPhone;
    m_transactorPhoneHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::TransactorPhoneHasBeenSet() const
{
    return m_transactorPhoneHasBeenSet;
}

string CreateEnterpriseAccountRequest::GetEmail() const
{
    return m_email;
}

void CreateEnterpriseAccountRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateEnterpriseAccountRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}


