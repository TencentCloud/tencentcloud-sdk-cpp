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

#include <tencentcloud/tcbr/v20220217/model/CreateCloudRunServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

CreateCloudRunServerRequest::CreateCloudRunServerRequest() :
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_deployInfoHasBeenSet(false),
    m_serverConfigHasBeenSet(false)
{
}

string CreateCloudRunServerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_deployInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serverConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serverConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudRunServerRequest::GetEnvId() const
{
    return m_envId;
}

void CreateCloudRunServerRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateCloudRunServerRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateCloudRunServerRequest::GetServerName() const
{
    return m_serverName;
}

void CreateCloudRunServerRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool CreateCloudRunServerRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

DeployParam CreateCloudRunServerRequest::GetDeployInfo() const
{
    return m_deployInfo;
}

void CreateCloudRunServerRequest::SetDeployInfo(const DeployParam& _deployInfo)
{
    m_deployInfo = _deployInfo;
    m_deployInfoHasBeenSet = true;
}

bool CreateCloudRunServerRequest::DeployInfoHasBeenSet() const
{
    return m_deployInfoHasBeenSet;
}

ServerBaseConfig CreateCloudRunServerRequest::GetServerConfig() const
{
    return m_serverConfig;
}

void CreateCloudRunServerRequest::SetServerConfig(const ServerBaseConfig& _serverConfig)
{
    m_serverConfig = _serverConfig;
    m_serverConfigHasBeenSet = true;
}

bool CreateCloudRunServerRequest::ServerConfigHasBeenSet() const
{
    return m_serverConfigHasBeenSet;
}


