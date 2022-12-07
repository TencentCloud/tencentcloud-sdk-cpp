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

#include <tencentcloud/tsf/v20180326/model/CreateApiGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateApiGroupRequest::CreateApiGroupRequest() :
    m_groupNameHasBeenSet(false),
    m_groupContextHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_gatewayInstanceIdHasBeenSet(false),
    m_namespaceNameKeyHasBeenSet(false),
    m_serviceNameKeyHasBeenSet(false),
    m_namespaceNameKeyPositionHasBeenSet(false),
    m_serviceNameKeyPositionHasBeenSet(false)
{
}

string CreateApiGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupContext.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceNameKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceNameKey.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNameKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceNameKey.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameKeyPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceNameKeyPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceNameKeyPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameKeyPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNameKeyPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceNameKeyPosition.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApiGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateApiGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateApiGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CreateApiGroupRequest::GetGroupContext() const
{
    return m_groupContext;
}

void CreateApiGroupRequest::SetGroupContext(const string& _groupContext)
{
    m_groupContext = _groupContext;
    m_groupContextHasBeenSet = true;
}

bool CreateApiGroupRequest::GroupContextHasBeenSet() const
{
    return m_groupContextHasBeenSet;
}

string CreateApiGroupRequest::GetAuthType() const
{
    return m_authType;
}

void CreateApiGroupRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CreateApiGroupRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string CreateApiGroupRequest::GetDescription() const
{
    return m_description;
}

void CreateApiGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateApiGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateApiGroupRequest::GetGroupType() const
{
    return m_groupType;
}

void CreateApiGroupRequest::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool CreateApiGroupRequest::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string CreateApiGroupRequest::GetGatewayInstanceId() const
{
    return m_gatewayInstanceId;
}

void CreateApiGroupRequest::SetGatewayInstanceId(const string& _gatewayInstanceId)
{
    m_gatewayInstanceId = _gatewayInstanceId;
    m_gatewayInstanceIdHasBeenSet = true;
}

bool CreateApiGroupRequest::GatewayInstanceIdHasBeenSet() const
{
    return m_gatewayInstanceIdHasBeenSet;
}

string CreateApiGroupRequest::GetNamespaceNameKey() const
{
    return m_namespaceNameKey;
}

void CreateApiGroupRequest::SetNamespaceNameKey(const string& _namespaceNameKey)
{
    m_namespaceNameKey = _namespaceNameKey;
    m_namespaceNameKeyHasBeenSet = true;
}

bool CreateApiGroupRequest::NamespaceNameKeyHasBeenSet() const
{
    return m_namespaceNameKeyHasBeenSet;
}

string CreateApiGroupRequest::GetServiceNameKey() const
{
    return m_serviceNameKey;
}

void CreateApiGroupRequest::SetServiceNameKey(const string& _serviceNameKey)
{
    m_serviceNameKey = _serviceNameKey;
    m_serviceNameKeyHasBeenSet = true;
}

bool CreateApiGroupRequest::ServiceNameKeyHasBeenSet() const
{
    return m_serviceNameKeyHasBeenSet;
}

string CreateApiGroupRequest::GetNamespaceNameKeyPosition() const
{
    return m_namespaceNameKeyPosition;
}

void CreateApiGroupRequest::SetNamespaceNameKeyPosition(const string& _namespaceNameKeyPosition)
{
    m_namespaceNameKeyPosition = _namespaceNameKeyPosition;
    m_namespaceNameKeyPositionHasBeenSet = true;
}

bool CreateApiGroupRequest::NamespaceNameKeyPositionHasBeenSet() const
{
    return m_namespaceNameKeyPositionHasBeenSet;
}

string CreateApiGroupRequest::GetServiceNameKeyPosition() const
{
    return m_serviceNameKeyPosition;
}

void CreateApiGroupRequest::SetServiceNameKeyPosition(const string& _serviceNameKeyPosition)
{
    m_serviceNameKeyPosition = _serviceNameKeyPosition;
    m_serviceNameKeyPositionHasBeenSet = true;
}

bool CreateApiGroupRequest::ServiceNameKeyPositionHasBeenSet() const
{
    return m_serviceNameKeyPositionHasBeenSet;
}


