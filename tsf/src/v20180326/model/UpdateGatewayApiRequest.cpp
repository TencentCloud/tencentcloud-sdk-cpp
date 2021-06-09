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

#include <tencentcloud/tsf/v20180326/model/UpdateGatewayApiRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

UpdateGatewayApiRequest::UpdateGatewayApiRequest() :
    m_apiIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_pathMappingHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string UpdateGatewayApiRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_pathMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMapping";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pathMapping.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateGatewayApiRequest::GetApiId() const
{
    return m_apiId;
}

void UpdateGatewayApiRequest::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool UpdateGatewayApiRequest::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string UpdateGatewayApiRequest::GetPath() const
{
    return m_path;
}

void UpdateGatewayApiRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool UpdateGatewayApiRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string UpdateGatewayApiRequest::GetMethod() const
{
    return m_method;
}

void UpdateGatewayApiRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool UpdateGatewayApiRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string UpdateGatewayApiRequest::GetPathMapping() const
{
    return m_pathMapping;
}

void UpdateGatewayApiRequest::SetPathMapping(const string& _pathMapping)
{
    m_pathMapping = _pathMapping;
    m_pathMappingHasBeenSet = true;
}

bool UpdateGatewayApiRequest::PathMappingHasBeenSet() const
{
    return m_pathMappingHasBeenSet;
}

string UpdateGatewayApiRequest::GetHost() const
{
    return m_host;
}

void UpdateGatewayApiRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool UpdateGatewayApiRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string UpdateGatewayApiRequest::GetDescription() const
{
    return m_description;
}

void UpdateGatewayApiRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateGatewayApiRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


