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

#include <tencentcloud/es/v20180416/model/UpdateServerlessInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpdateServerlessInstanceRequest::UpdateServerlessInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_updateMetaJsonHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_kibanaPrivateAccessHasBeenSet(false),
    m_kibanaPublicAccessHasBeenSet(false),
    m_kibanaPublicAclHasBeenSet(false)
{
}

string UpdateServerlessInstanceRequest::ToJsonString() const
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

    if (m_updateMetaJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMetaJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateMetaJson.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kibanaPrivateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPublicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPublicAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kibanaPublicAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPublicAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPublicAcl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kibanaPublicAcl.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateServerlessInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateServerlessInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateServerlessInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdateServerlessInstanceRequest::GetUpdateMetaJson() const
{
    return m_updateMetaJson;
}

void UpdateServerlessInstanceRequest::SetUpdateMetaJson(const string& _updateMetaJson)
{
    m_updateMetaJson = _updateMetaJson;
    m_updateMetaJsonHasBeenSet = true;
}

bool UpdateServerlessInstanceRequest::UpdateMetaJsonHasBeenSet() const
{
    return m_updateMetaJsonHasBeenSet;
}

string UpdateServerlessInstanceRequest::GetPassword() const
{
    return m_password;
}

void UpdateServerlessInstanceRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool UpdateServerlessInstanceRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string UpdateServerlessInstanceRequest::GetKibanaPrivateAccess() const
{
    return m_kibanaPrivateAccess;
}

void UpdateServerlessInstanceRequest::SetKibanaPrivateAccess(const string& _kibanaPrivateAccess)
{
    m_kibanaPrivateAccess = _kibanaPrivateAccess;
    m_kibanaPrivateAccessHasBeenSet = true;
}

bool UpdateServerlessInstanceRequest::KibanaPrivateAccessHasBeenSet() const
{
    return m_kibanaPrivateAccessHasBeenSet;
}

string UpdateServerlessInstanceRequest::GetKibanaPublicAccess() const
{
    return m_kibanaPublicAccess;
}

void UpdateServerlessInstanceRequest::SetKibanaPublicAccess(const string& _kibanaPublicAccess)
{
    m_kibanaPublicAccess = _kibanaPublicAccess;
    m_kibanaPublicAccessHasBeenSet = true;
}

bool UpdateServerlessInstanceRequest::KibanaPublicAccessHasBeenSet() const
{
    return m_kibanaPublicAccessHasBeenSet;
}

KibanaPublicAcl UpdateServerlessInstanceRequest::GetKibanaPublicAcl() const
{
    return m_kibanaPublicAcl;
}

void UpdateServerlessInstanceRequest::SetKibanaPublicAcl(const KibanaPublicAcl& _kibanaPublicAcl)
{
    m_kibanaPublicAcl = _kibanaPublicAcl;
    m_kibanaPublicAclHasBeenSet = true;
}

bool UpdateServerlessInstanceRequest::KibanaPublicAclHasBeenSet() const
{
    return m_kibanaPublicAclHasBeenSet;
}


