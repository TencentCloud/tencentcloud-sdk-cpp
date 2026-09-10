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

#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CreateCloudNativeAPIGatewayMCPRouteRequest::CreateCloudNativeAPIGatewayMCPRouteRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_headerMatchHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_pathMatchTypeHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayMCPRouteRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string CreateCloudNativeAPIGatewayMCPRouteRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayMCPRouteRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPRouteRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPRouteRequest::GetServerId() const
{
    return m_serverId;
}

void CreateCloudNativeAPIGatewayMCPRouteRequest::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPRouteRequest::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPRouteRequest::GetDescription() const
{
    return m_description;
}

void CreateCloudNativeAPIGatewayMCPRouteRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPRouteRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<AIGWHeaderRule> CreateCloudNativeAPIGatewayMCPRouteRequest::GetHeaderMatch() const
{
    return m_headerMatch;
}

void CreateCloudNativeAPIGatewayMCPRouteRequest::SetHeaderMatch(const vector<AIGWHeaderRule>& _headerMatch)
{
    m_headerMatch = _headerMatch;
    m_headerMatchHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPRouteRequest::HeaderMatchHasBeenSet() const
{
    return m_headerMatchHasBeenSet;
}

vector<string> CreateCloudNativeAPIGatewayMCPRouteRequest::GetMethods() const
{
    return m_methods;
}

void CreateCloudNativeAPIGatewayMCPRouteRequest::SetMethods(const vector<string>& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPRouteRequest::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPRouteRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewayMCPRouteRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPRouteRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPRouteRequest::GetPath() const
{
    return m_path;
}

void CreateCloudNativeAPIGatewayMCPRouteRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPRouteRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPRouteRequest::GetPathMatchType() const
{
    return m_pathMatchType;
}

void CreateCloudNativeAPIGatewayMCPRouteRequest::SetPathMatchType(const string& _pathMatchType)
{
    m_pathMatchType = _pathMatchType;
    m_pathMatchTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPRouteRequest::PathMatchTypeHasBeenSet() const
{
    return m_pathMatchTypeHasBeenSet;
}

uint64_t CreateCloudNativeAPIGatewayMCPRouteRequest::GetPriority() const
{
    return m_priority;
}

void CreateCloudNativeAPIGatewayMCPRouteRequest::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPRouteRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}


