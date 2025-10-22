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

#include <tencentcloud/oceanus/v20190422/model/CreateConnectorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CreateConnectorRequest::CreateConnectorRequest() :
    m_resourceIdHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_connectorHasBeenSet(false),
    m_connectionMethodHasBeenSet(false)
{
}

string CreateConnectorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_versionId, allocator);
    }

    if (m_connectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connector.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionMethod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateConnectorRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateConnectorRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateConnectorRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CreateConnectorRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void CreateConnectorRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool CreateConnectorRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

int64_t CreateConnectorRequest::GetVersionId() const
{
    return m_versionId;
}

void CreateConnectorRequest::SetVersionId(const int64_t& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool CreateConnectorRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string CreateConnectorRequest::GetConnector() const
{
    return m_connector;
}

void CreateConnectorRequest::SetConnector(const string& _connector)
{
    m_connector = _connector;
    m_connectorHasBeenSet = true;
}

bool CreateConnectorRequest::ConnectorHasBeenSet() const
{
    return m_connectorHasBeenSet;
}

string CreateConnectorRequest::GetConnectionMethod() const
{
    return m_connectionMethod;
}

void CreateConnectorRequest::SetConnectionMethod(const string& _connectionMethod)
{
    m_connectionMethod = _connectionMethod;
    m_connectionMethodHasBeenSet = true;
}

bool CreateConnectorRequest::ConnectionMethodHasBeenSet() const
{
    return m_connectionMethodHasBeenSet;
}


