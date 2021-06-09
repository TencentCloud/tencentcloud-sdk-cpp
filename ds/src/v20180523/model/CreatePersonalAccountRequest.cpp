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

#include <tencentcloud/ds/v20180523/model/CreatePersonalAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

CreatePersonalAccountRequest::CreatePersonalAccountRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_identTypeHasBeenSet(false),
    m_identNoHasBeenSet(false),
    m_mobilePhoneHasBeenSet(false)
{
}

string CreatePersonalAccountRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePersonalAccountRequest::GetModule() const
{
    return m_module;
}

void CreatePersonalAccountRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreatePersonalAccountRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreatePersonalAccountRequest::GetOperation() const
{
    return m_operation;
}

void CreatePersonalAccountRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool CreatePersonalAccountRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string CreatePersonalAccountRequest::GetName() const
{
    return m_name;
}

void CreatePersonalAccountRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreatePersonalAccountRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreatePersonalAccountRequest::GetIdentType() const
{
    return m_identType;
}

void CreatePersonalAccountRequest::SetIdentType(const int64_t& _identType)
{
    m_identType = _identType;
    m_identTypeHasBeenSet = true;
}

bool CreatePersonalAccountRequest::IdentTypeHasBeenSet() const
{
    return m_identTypeHasBeenSet;
}

string CreatePersonalAccountRequest::GetIdentNo() const
{
    return m_identNo;
}

void CreatePersonalAccountRequest::SetIdentNo(const string& _identNo)
{
    m_identNo = _identNo;
    m_identNoHasBeenSet = true;
}

bool CreatePersonalAccountRequest::IdentNoHasBeenSet() const
{
    return m_identNoHasBeenSet;
}

string CreatePersonalAccountRequest::GetMobilePhone() const
{
    return m_mobilePhone;
}

void CreatePersonalAccountRequest::SetMobilePhone(const string& _mobilePhone)
{
    m_mobilePhone = _mobilePhone;
    m_mobilePhoneHasBeenSet = true;
}

bool CreatePersonalAccountRequest::MobilePhoneHasBeenSet() const
{
    return m_mobilePhoneHasBeenSet;
}


