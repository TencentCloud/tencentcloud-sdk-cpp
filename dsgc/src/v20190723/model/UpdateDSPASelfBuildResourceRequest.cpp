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

#include <tencentcloud/dsgc/v20190723/model/UpdateDSPASelfBuildResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

UpdateDSPASelfBuildResourceRequest::UpdateDSPASelfBuildResourceRequest() :
    m_dspaIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceVPortHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_authRangeHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

string UpdateDSPASelfBuildResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceVPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceVPort, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_authRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authRange.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDSPASelfBuildResourceRequest::GetDspaId() const
{
    return m_dspaId;
}

void UpdateDSPASelfBuildResourceRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool UpdateDSPASelfBuildResourceRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string UpdateDSPASelfBuildResourceRequest::GetResourceId() const
{
    return m_resourceId;
}

void UpdateDSPASelfBuildResourceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool UpdateDSPASelfBuildResourceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t UpdateDSPASelfBuildResourceRequest::GetResourceVPort() const
{
    return m_resourceVPort;
}

void UpdateDSPASelfBuildResourceRequest::SetResourceVPort(const uint64_t& _resourceVPort)
{
    m_resourceVPort = _resourceVPort;
    m_resourceVPortHasBeenSet = true;
}

bool UpdateDSPASelfBuildResourceRequest::ResourceVPortHasBeenSet() const
{
    return m_resourceVPortHasBeenSet;
}

string UpdateDSPASelfBuildResourceRequest::GetUserName() const
{
    return m_userName;
}

void UpdateDSPASelfBuildResourceRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UpdateDSPASelfBuildResourceRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UpdateDSPASelfBuildResourceRequest::GetPassword() const
{
    return m_password;
}

void UpdateDSPASelfBuildResourceRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool UpdateDSPASelfBuildResourceRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string UpdateDSPASelfBuildResourceRequest::GetAuthRange() const
{
    return m_authRange;
}

void UpdateDSPASelfBuildResourceRequest::SetAuthRange(const string& _authRange)
{
    m_authRange = _authRange;
    m_authRangeHasBeenSet = true;
}

bool UpdateDSPASelfBuildResourceRequest::AuthRangeHasBeenSet() const
{
    return m_authRangeHasBeenSet;
}

string UpdateDSPASelfBuildResourceRequest::GetResourceName() const
{
    return m_resourceName;
}

void UpdateDSPASelfBuildResourceRequest::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool UpdateDSPASelfBuildResourceRequest::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}


