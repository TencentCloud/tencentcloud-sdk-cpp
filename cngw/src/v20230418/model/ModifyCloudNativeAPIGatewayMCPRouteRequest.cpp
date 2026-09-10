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

#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyCloudNativeAPIGatewayMCPRouteRequest::ModifyCloudNativeAPIGatewayMCPRouteRequest() :
    m_gatewayIdHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_headerMatchHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_pathMatchTypeHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayMCPRouteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_headerMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderMatch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headerMatch.begin(); itr != m_headerMatch.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_methodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Methods";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_methods.begin(); itr != m_methods.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_pathMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMatchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pathMatchType.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayMCPRouteRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayMCPRouteRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPRouteRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPRouteRequest::GetRouteId() const
{
    return m_routeId;
}

void ModifyCloudNativeAPIGatewayMCPRouteRequest::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPRouteRequest::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPRouteRequest::GetServerId() const
{
    return m_serverId;
}

void ModifyCloudNativeAPIGatewayMCPRouteRequest::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPRouteRequest::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPRouteRequest::GetDescription() const
{
    return m_description;
}

void ModifyCloudNativeAPIGatewayMCPRouteRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPRouteRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<AIGWHeaderRule> ModifyCloudNativeAPIGatewayMCPRouteRequest::GetHeaderMatch() const
{
    return m_headerMatch;
}

void ModifyCloudNativeAPIGatewayMCPRouteRequest::SetHeaderMatch(const vector<AIGWHeaderRule>& _headerMatch)
{
    m_headerMatch = _headerMatch;
    m_headerMatchHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPRouteRequest::HeaderMatchHasBeenSet() const
{
    return m_headerMatchHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayMCPRouteRequest::GetMethods() const
{
    return m_methods;
}

void ModifyCloudNativeAPIGatewayMCPRouteRequest::SetMethods(const vector<string>& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPRouteRequest::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPRouteRequest::GetPath() const
{
    return m_path;
}

void ModifyCloudNativeAPIGatewayMCPRouteRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPRouteRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPRouteRequest::GetPathMatchType() const
{
    return m_pathMatchType;
}

void ModifyCloudNativeAPIGatewayMCPRouteRequest::SetPathMatchType(const string& _pathMatchType)
{
    m_pathMatchType = _pathMatchType;
    m_pathMatchTypeHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPRouteRequest::PathMatchTypeHasBeenSet() const
{
    return m_pathMatchTypeHasBeenSet;
}

uint64_t ModifyCloudNativeAPIGatewayMCPRouteRequest::GetPriority() const
{
    return m_priority;
}

void ModifyCloudNativeAPIGatewayMCPRouteRequest::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPRouteRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}


