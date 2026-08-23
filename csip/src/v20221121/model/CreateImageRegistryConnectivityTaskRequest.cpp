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

#include <tencentcloud/csip/v20221121/model/CreateImageRegistryConnectivityTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateImageRegistryConnectivityTaskRequest::CreateImageRegistryConnectivityTaskRequest() :
    m_memberIdHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_apiVersionHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string CreateImageRegistryConnectivityTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_registryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryName.c_str(), allocator).Move(), allocator);
    }

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiVersion.c_str(), allocator).Move(), allocator);
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

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registryId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateImageRegistryConnectivityTaskRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateImageRegistryConnectivityTaskRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string CreateImageRegistryConnectivityTaskRequest::GetRegistryName() const
{
    return m_registryName;
}

void CreateImageRegistryConnectivityTaskRequest::SetRegistryName(const string& _registryName)
{
    m_registryName = _registryName;
    m_registryNameHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::RegistryNameHasBeenSet() const
{
    return m_registryNameHasBeenSet;
}

string CreateImageRegistryConnectivityTaskRequest::GetRegistryRegion() const
{
    return m_registryRegion;
}

void CreateImageRegistryConnectivityTaskRequest::SetRegistryRegion(const string& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

string CreateImageRegistryConnectivityTaskRequest::GetRegistryType() const
{
    return m_registryType;
}

void CreateImageRegistryConnectivityTaskRequest::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string CreateImageRegistryConnectivityTaskRequest::GetApiVersion() const
{
    return m_apiVersion;
}

void CreateImageRegistryConnectivityTaskRequest::SetApiVersion(const string& _apiVersion)
{
    m_apiVersion = _apiVersion;
    m_apiVersionHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::ApiVersionHasBeenSet() const
{
    return m_apiVersionHasBeenSet;
}

string CreateImageRegistryConnectivityTaskRequest::GetUserName() const
{
    return m_userName;
}

void CreateImageRegistryConnectivityTaskRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateImageRegistryConnectivityTaskRequest::GetPassword() const
{
    return m_password;
}

void CreateImageRegistryConnectivityTaskRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateImageRegistryConnectivityTaskRequest::GetUrl() const
{
    return m_url;
}

void CreateImageRegistryConnectivityTaskRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

vector<ImageRegistryDetectionHostParam> CreateImageRegistryConnectivityTaskRequest::GetParams() const
{
    return m_params;
}

void CreateImageRegistryConnectivityTaskRequest::SetParams(const vector<ImageRegistryDetectionHostParam>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

uint64_t CreateImageRegistryConnectivityTaskRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateImageRegistryConnectivityTaskRequest::SetRegistryId(const uint64_t& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CreateImageRegistryConnectivityTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateImageRegistryConnectivityTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateImageRegistryConnectivityTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


