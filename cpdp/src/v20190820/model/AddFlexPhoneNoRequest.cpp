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

#include <tencentcloud/cpdp/v20190820/model/AddFlexPhoneNoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AddFlexPhoneNoRequest::AddFlexPhoneNoRequest() :
    m_phoneNoHasBeenSet(false),
    m_payeeIdHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string AddFlexPhoneNoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_phoneNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNo.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddFlexPhoneNoRequest::GetPhoneNo() const
{
    return m_phoneNo;
}

void AddFlexPhoneNoRequest::SetPhoneNo(const string& _phoneNo)
{
    m_phoneNo = _phoneNo;
    m_phoneNoHasBeenSet = true;
}

bool AddFlexPhoneNoRequest::PhoneNoHasBeenSet() const
{
    return m_phoneNoHasBeenSet;
}

string AddFlexPhoneNoRequest::GetPayeeId() const
{
    return m_payeeId;
}

void AddFlexPhoneNoRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool AddFlexPhoneNoRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string AddFlexPhoneNoRequest::GetEnvironment() const
{
    return m_environment;
}

void AddFlexPhoneNoRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool AddFlexPhoneNoRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


