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

#include <tencentcloud/cngw/v20230418/model/CustomGuardrailSyncFailure.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CustomGuardrailSyncFailure::CustomGuardrailSyncFailure() :
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailSyncFailure::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailSyncFailure.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailSyncFailure.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailSyncFailure.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailSyncFailure.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailSyncFailure::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string CustomGuardrailSyncFailure::GetResourceType() const
{
    return m_resourceType;
}

void CustomGuardrailSyncFailure::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CustomGuardrailSyncFailure::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CustomGuardrailSyncFailure::GetResourceId() const
{
    return m_resourceId;
}

void CustomGuardrailSyncFailure::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CustomGuardrailSyncFailure::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CustomGuardrailSyncFailure::GetRouteId() const
{
    return m_routeId;
}

void CustomGuardrailSyncFailure::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool CustomGuardrailSyncFailure::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string CustomGuardrailSyncFailure::GetError() const
{
    return m_error;
}

void CustomGuardrailSyncFailure::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool CustomGuardrailSyncFailure::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

