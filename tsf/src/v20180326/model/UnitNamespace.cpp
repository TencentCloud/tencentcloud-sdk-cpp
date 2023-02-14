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

#include <tencentcloud/tsf/v20180326/model/UnitNamespace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

UnitNamespace::UnitNamespace() :
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_gatewayInstanceIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome UnitNamespace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitNamespace.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitNamespace.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitNamespace.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("GatewayInstanceId") && !value["GatewayInstanceId"].IsNull())
    {
        if (!value["GatewayInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitNamespace.GatewayInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayInstanceId = string(value["GatewayInstanceId"].GetString());
        m_gatewayInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitNamespace.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitNamespace.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnitNamespace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

}


string UnitNamespace::GetNamespaceId() const
{
    return m_namespaceId;
}

void UnitNamespace::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool UnitNamespace::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string UnitNamespace::GetNamespaceName() const
{
    return m_namespaceName;
}

void UnitNamespace::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool UnitNamespace::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string UnitNamespace::GetId() const
{
    return m_id;
}

void UnitNamespace::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UnitNamespace::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UnitNamespace::GetGatewayInstanceId() const
{
    return m_gatewayInstanceId;
}

void UnitNamespace::SetGatewayInstanceId(const string& _gatewayInstanceId)
{
    m_gatewayInstanceId = _gatewayInstanceId;
    m_gatewayInstanceIdHasBeenSet = true;
}

bool UnitNamespace::GatewayInstanceIdHasBeenSet() const
{
    return m_gatewayInstanceIdHasBeenSet;
}

string UnitNamespace::GetCreatedTime() const
{
    return m_createdTime;
}

void UnitNamespace::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool UnitNamespace::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string UnitNamespace::GetUpdatedTime() const
{
    return m_updatedTime;
}

void UnitNamespace::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool UnitNamespace::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

