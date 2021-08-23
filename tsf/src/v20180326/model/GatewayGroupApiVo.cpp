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

#include <tencentcloud/tsf/v20180326/model/GatewayGroupApiVo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GatewayGroupApiVo::GatewayGroupApiVo() :
    m_apiIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_microserviceNameHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_namespaceNameHasBeenSet(false)
{
}

CoreInternalOutcome GatewayGroupApiVo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayGroupApiVo.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayGroupApiVo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceName") && !value["MicroserviceName"].IsNull())
    {
        if (!value["MicroserviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayGroupApiVo.MicroserviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceName = string(value["MicroserviceName"].GetString());
        m_microserviceNameHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayGroupApiVo.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayGroupApiVo.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayGroupApiVo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

}


string GatewayGroupApiVo::GetApiId() const
{
    return m_apiId;
}

void GatewayGroupApiVo::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool GatewayGroupApiVo::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string GatewayGroupApiVo::GetPath() const
{
    return m_path;
}

void GatewayGroupApiVo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool GatewayGroupApiVo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string GatewayGroupApiVo::GetMicroserviceName() const
{
    return m_microserviceName;
}

void GatewayGroupApiVo::SetMicroserviceName(const string& _microserviceName)
{
    m_microserviceName = _microserviceName;
    m_microserviceNameHasBeenSet = true;
}

bool GatewayGroupApiVo::MicroserviceNameHasBeenSet() const
{
    return m_microserviceNameHasBeenSet;
}

string GatewayGroupApiVo::GetMethod() const
{
    return m_method;
}

void GatewayGroupApiVo::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool GatewayGroupApiVo::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string GatewayGroupApiVo::GetNamespaceName() const
{
    return m_namespaceName;
}

void GatewayGroupApiVo::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool GatewayGroupApiVo::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

