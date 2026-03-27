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

#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRocketMQRoleRequest::CreateRocketMQRoleRequest() :
    m_roleNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_permTypeHasBeenSet(false),
    m_roleGenerateModeHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false)
{
}

string CreateRocketMQRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_permTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_permType.c_str(), allocator).Move(), allocator);
    }

    if (m_roleGenerateModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleGenerateMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleGenerateMode.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRocketMQRoleRequest::GetRoleName() const
{
    return m_roleName;
}

void CreateRocketMQRoleRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool CreateRocketMQRoleRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string CreateRocketMQRoleRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateRocketMQRoleRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateRocketMQRoleRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateRocketMQRoleRequest::GetRemark() const
{
    return m_remark;
}

void CreateRocketMQRoleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateRocketMQRoleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateRocketMQRoleRequest::GetPermType() const
{
    return m_permType;
}

void CreateRocketMQRoleRequest::SetPermType(const string& _permType)
{
    m_permType = _permType;
    m_permTypeHasBeenSet = true;
}

bool CreateRocketMQRoleRequest::PermTypeHasBeenSet() const
{
    return m_permTypeHasBeenSet;
}

string CreateRocketMQRoleRequest::GetRoleGenerateMode() const
{
    return m_roleGenerateMode;
}

void CreateRocketMQRoleRequest::SetRoleGenerateMode(const string& _roleGenerateMode)
{
    m_roleGenerateMode = _roleGenerateMode;
    m_roleGenerateModeHasBeenSet = true;
}

bool CreateRocketMQRoleRequest::RoleGenerateModeHasBeenSet() const
{
    return m_roleGenerateModeHasBeenSet;
}

string CreateRocketMQRoleRequest::GetAccessKey() const
{
    return m_accessKey;
}

void CreateRocketMQRoleRequest::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool CreateRocketMQRoleRequest::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string CreateRocketMQRoleRequest::GetSecretKey() const
{
    return m_secretKey;
}

void CreateRocketMQRoleRequest::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool CreateRocketMQRoleRequest::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}


