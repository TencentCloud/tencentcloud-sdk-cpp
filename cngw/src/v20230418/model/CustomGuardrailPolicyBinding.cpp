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

#include <tencentcloud/cngw/v20230418/model/CustomGuardrailPolicyBinding.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CustomGuardrailPolicyBinding::CustomGuardrailPolicyBinding() :
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_pluginIdHasBeenSet(false),
    m_syncStatusHasBeenSet(false),
    m_syncErrorHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailPolicyBinding::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicyBinding.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicyBinding.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicyBinding.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicyBinding.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicyBinding.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicyBinding.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicyBinding.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("SyncStatus") && !value["SyncStatus"].IsNull())
    {
        if (!value["SyncStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicyBinding.SyncStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = string(value["SyncStatus"].GetString());
        m_syncStatusHasBeenSet = true;
    }

    if (value.HasMember("SyncError") && !value["SyncError"].IsNull())
    {
        if (!value["SyncError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicyBinding.SyncError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncError = string(value["SyncError"].GetString());
        m_syncErrorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailPolicyBinding::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_syncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_syncErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncError.c_str(), allocator).Move(), allocator);
    }

}


string CustomGuardrailPolicyBinding::GetResourceType() const
{
    return m_resourceType;
}

void CustomGuardrailPolicyBinding::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CustomGuardrailPolicyBinding::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CustomGuardrailPolicyBinding::GetResourceId() const
{
    return m_resourceId;
}

void CustomGuardrailPolicyBinding::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CustomGuardrailPolicyBinding::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CustomGuardrailPolicyBinding::GetResourceName() const
{
    return m_resourceName;
}

void CustomGuardrailPolicyBinding::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool CustomGuardrailPolicyBinding::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string CustomGuardrailPolicyBinding::GetPath() const
{
    return m_path;
}

void CustomGuardrailPolicyBinding::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CustomGuardrailPolicyBinding::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CustomGuardrailPolicyBinding::GetProtocol() const
{
    return m_protocol;
}

void CustomGuardrailPolicyBinding::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CustomGuardrailPolicyBinding::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CustomGuardrailPolicyBinding::GetRouteId() const
{
    return m_routeId;
}

void CustomGuardrailPolicyBinding::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool CustomGuardrailPolicyBinding::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string CustomGuardrailPolicyBinding::GetPluginId() const
{
    return m_pluginId;
}

void CustomGuardrailPolicyBinding::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool CustomGuardrailPolicyBinding::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string CustomGuardrailPolicyBinding::GetSyncStatus() const
{
    return m_syncStatus;
}

void CustomGuardrailPolicyBinding::SetSyncStatus(const string& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool CustomGuardrailPolicyBinding::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

string CustomGuardrailPolicyBinding::GetSyncError() const
{
    return m_syncError;
}

void CustomGuardrailPolicyBinding::SetSyncError(const string& _syncError)
{
    m_syncError = _syncError;
    m_syncErrorHasBeenSet = true;
}

bool CustomGuardrailPolicyBinding::SyncErrorHasBeenSet() const
{
    return m_syncErrorHasBeenSet;
}

