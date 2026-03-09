/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cetcd/v20220325/model/ModifyEtcdAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

ModifyEtcdAttributeRequest::ModifyEtcdAttributeRequest() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_enableAuthHasBeenSet(false),
    m_enableDeleteCosHasBeenSet(false),
    m_subnetIdsHasBeenSet(false)
{
}

string ModifyEtcdAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_enableAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAuth, allocator);
    }

    if (m_enableDeleteCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeleteCos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeleteCos, allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyEtcdAttributeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyEtcdAttributeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyEtcdAttributeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyEtcdAttributeRequest::GetName() const
{
    return m_name;
}

void ModifyEtcdAttributeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyEtcdAttributeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyEtcdAttributeRequest::GetDescription() const
{
    return m_description;
}

void ModifyEtcdAttributeRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyEtcdAttributeRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyEtcdAttributeRequest::GetPassword() const
{
    return m_password;
}

void ModifyEtcdAttributeRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ModifyEtcdAttributeRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

bool ModifyEtcdAttributeRequest::GetEnableAuth() const
{
    return m_enableAuth;
}

void ModifyEtcdAttributeRequest::SetEnableAuth(const bool& _enableAuth)
{
    m_enableAuth = _enableAuth;
    m_enableAuthHasBeenSet = true;
}

bool ModifyEtcdAttributeRequest::EnableAuthHasBeenSet() const
{
    return m_enableAuthHasBeenSet;
}

bool ModifyEtcdAttributeRequest::GetEnableDeleteCos() const
{
    return m_enableDeleteCos;
}

void ModifyEtcdAttributeRequest::SetEnableDeleteCos(const bool& _enableDeleteCos)
{
    m_enableDeleteCos = _enableDeleteCos;
    m_enableDeleteCosHasBeenSet = true;
}

bool ModifyEtcdAttributeRequest::EnableDeleteCosHasBeenSet() const
{
    return m_enableDeleteCosHasBeenSet;
}

vector<string> ModifyEtcdAttributeRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void ModifyEtcdAttributeRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool ModifyEtcdAttributeRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}


