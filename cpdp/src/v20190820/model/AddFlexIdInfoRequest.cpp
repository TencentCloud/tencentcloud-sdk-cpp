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

#include <tencentcloud/cpdp/v20190820/model/AddFlexIdInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AddFlexIdInfoRequest::AddFlexIdInfoRequest() :
    m_idTypeHasBeenSet(false),
    m_idNoHasBeenSet(false),
    m_payeeIdHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string AddFlexIdInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idType, allocator);
    }

    if (m_idNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idNo.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t AddFlexIdInfoRequest::GetIdType() const
{
    return m_idType;
}

void AddFlexIdInfoRequest::SetIdType(const int64_t& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool AddFlexIdInfoRequest::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string AddFlexIdInfoRequest::GetIdNo() const
{
    return m_idNo;
}

void AddFlexIdInfoRequest::SetIdNo(const string& _idNo)
{
    m_idNo = _idNo;
    m_idNoHasBeenSet = true;
}

bool AddFlexIdInfoRequest::IdNoHasBeenSet() const
{
    return m_idNoHasBeenSet;
}

string AddFlexIdInfoRequest::GetPayeeId() const
{
    return m_payeeId;
}

void AddFlexIdInfoRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool AddFlexIdInfoRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string AddFlexIdInfoRequest::GetEnvironment() const
{
    return m_environment;
}

void AddFlexIdInfoRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool AddFlexIdInfoRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string AddFlexIdInfoRequest::GetName() const
{
    return m_name;
}

void AddFlexIdInfoRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddFlexIdInfoRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


