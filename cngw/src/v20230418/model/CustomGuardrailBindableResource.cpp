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

#include <tencentcloud/cngw/v20230418/model/CustomGuardrailBindableResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CustomGuardrailBindableResource::CustomGuardrailBindableResource() :
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_routeIdsHasBeenSet(false),
    m_occupiedHasBeenSet(false),
    m_occupiedByHasBeenSet(false),
    m_supportedHasBeenSet(false),
    m_unsupportedReasonHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailBindableResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RouteIds") && !value["RouteIds"].IsNull())
    {
        if (!value["RouteIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.RouteIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RouteIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_routeIds.push_back((*itr).GetString());
        }
        m_routeIdsHasBeenSet = true;
    }

    if (value.HasMember("Occupied") && !value["Occupied"].IsNull())
    {
        if (!value["Occupied"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.Occupied` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_occupied = value["Occupied"].GetBool();
        m_occupiedHasBeenSet = true;
    }

    if (value.HasMember("OccupiedBy") && !value["OccupiedBy"].IsNull())
    {
        if (!value["OccupiedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.OccupiedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occupiedBy = string(value["OccupiedBy"].GetString());
        m_occupiedByHasBeenSet = true;
    }

    if (value.HasMember("Supported") && !value["Supported"].IsNull())
    {
        if (!value["Supported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.Supported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supported = value["Supported"].GetBool();
        m_supportedHasBeenSet = true;
    }

    if (value.HasMember("UnsupportedReason") && !value["UnsupportedReason"].IsNull())
    {
        if (!value["UnsupportedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBindableResource.UnsupportedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unsupportedReason = string(value["UnsupportedReason"].GetString());
        m_unsupportedReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailBindableResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_routeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_routeIds.begin(); itr != m_routeIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_occupiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Occupied";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_occupied, allocator);
    }

    if (m_occupiedByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccupiedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_occupiedBy.c_str(), allocator).Move(), allocator);
    }

    if (m_supportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Supported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supported, allocator);
    }

    if (m_unsupportedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnsupportedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unsupportedReason.c_str(), allocator).Move(), allocator);
    }

}


string CustomGuardrailBindableResource::GetResourceType() const
{
    return m_resourceType;
}

void CustomGuardrailBindableResource::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CustomGuardrailBindableResource::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CustomGuardrailBindableResource::GetResourceId() const
{
    return m_resourceId;
}

void CustomGuardrailBindableResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CustomGuardrailBindableResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CustomGuardrailBindableResource::GetResourceName() const
{
    return m_resourceName;
}

void CustomGuardrailBindableResource::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool CustomGuardrailBindableResource::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string CustomGuardrailBindableResource::GetPath() const
{
    return m_path;
}

void CustomGuardrailBindableResource::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CustomGuardrailBindableResource::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CustomGuardrailBindableResource::GetProtocol() const
{
    return m_protocol;
}

void CustomGuardrailBindableResource::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CustomGuardrailBindableResource::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<string> CustomGuardrailBindableResource::GetRouteIds() const
{
    return m_routeIds;
}

void CustomGuardrailBindableResource::SetRouteIds(const vector<string>& _routeIds)
{
    m_routeIds = _routeIds;
    m_routeIdsHasBeenSet = true;
}

bool CustomGuardrailBindableResource::RouteIdsHasBeenSet() const
{
    return m_routeIdsHasBeenSet;
}

bool CustomGuardrailBindableResource::GetOccupied() const
{
    return m_occupied;
}

void CustomGuardrailBindableResource::SetOccupied(const bool& _occupied)
{
    m_occupied = _occupied;
    m_occupiedHasBeenSet = true;
}

bool CustomGuardrailBindableResource::OccupiedHasBeenSet() const
{
    return m_occupiedHasBeenSet;
}

string CustomGuardrailBindableResource::GetOccupiedBy() const
{
    return m_occupiedBy;
}

void CustomGuardrailBindableResource::SetOccupiedBy(const string& _occupiedBy)
{
    m_occupiedBy = _occupiedBy;
    m_occupiedByHasBeenSet = true;
}

bool CustomGuardrailBindableResource::OccupiedByHasBeenSet() const
{
    return m_occupiedByHasBeenSet;
}

bool CustomGuardrailBindableResource::GetSupported() const
{
    return m_supported;
}

void CustomGuardrailBindableResource::SetSupported(const bool& _supported)
{
    m_supported = _supported;
    m_supportedHasBeenSet = true;
}

bool CustomGuardrailBindableResource::SupportedHasBeenSet() const
{
    return m_supportedHasBeenSet;
}

string CustomGuardrailBindableResource::GetUnsupportedReason() const
{
    return m_unsupportedReason;
}

void CustomGuardrailBindableResource::SetUnsupportedReason(const string& _unsupportedReason)
{
    m_unsupportedReason = _unsupportedReason;
    m_unsupportedReasonHasBeenSet = true;
}

bool CustomGuardrailBindableResource::UnsupportedReasonHasBeenSet() const
{
    return m_unsupportedReasonHasBeenSet;
}

