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

#include <tencentcloud/tcr/v20190924/model/ModifyServiceAccountPasswordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ModifyServiceAccountPasswordRequest::ModifyServiceAccountPasswordRequest() :
    m_registryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_randomHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

string ModifyServiceAccountPasswordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_randomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Random";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_random, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyServiceAccountPasswordRequest::GetRegistryId() const
{
    return m_registryId;
}

void ModifyServiceAccountPasswordRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ModifyServiceAccountPasswordRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ModifyServiceAccountPasswordRequest::GetName() const
{
    return m_name;
}

void ModifyServiceAccountPasswordRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyServiceAccountPasswordRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool ModifyServiceAccountPasswordRequest::GetRandom() const
{
    return m_random;
}

void ModifyServiceAccountPasswordRequest::SetRandom(const bool& _random)
{
    m_random = _random;
    m_randomHasBeenSet = true;
}

bool ModifyServiceAccountPasswordRequest::RandomHasBeenSet() const
{
    return m_randomHasBeenSet;
}

string ModifyServiceAccountPasswordRequest::GetPassword() const
{
    return m_password;
}

void ModifyServiceAccountPasswordRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ModifyServiceAccountPasswordRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}


