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

#include <tencentcloud/tsf/v20180326/model/ApiInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApiInfo::ApiInfo() :
    m_namespaceIdHasBeenSet(false),
    m_microserviceIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_pathMappingHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome ApiInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceId") && !value["MicroserviceId"].IsNull())
    {
        if (!value["MicroserviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.MicroserviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceId = string(value["MicroserviceId"].GetString());
        m_microserviceIdHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("PathMapping") && !value["PathMapping"].IsNull())
    {
        if (!value["PathMapping"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.PathMapping` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathMapping = string(value["PathMapping"].GetString());
        m_pathMappingHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_pathMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathMapping.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string ApiInfo::GetNamespaceId() const
{
    return m_namespaceId;
}

void ApiInfo::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool ApiInfo::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string ApiInfo::GetMicroserviceId() const
{
    return m_microserviceId;
}

void ApiInfo::SetMicroserviceId(const string& _microserviceId)
{
    m_microserviceId = _microserviceId;
    m_microserviceIdHasBeenSet = true;
}

bool ApiInfo::MicroserviceIdHasBeenSet() const
{
    return m_microserviceIdHasBeenSet;
}

string ApiInfo::GetPath() const
{
    return m_path;
}

void ApiInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ApiInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ApiInfo::GetMethod() const
{
    return m_method;
}

void ApiInfo::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ApiInfo::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ApiInfo::GetPathMapping() const
{
    return m_pathMapping;
}

void ApiInfo::SetPathMapping(const string& _pathMapping)
{
    m_pathMapping = _pathMapping;
    m_pathMappingHasBeenSet = true;
}

bool ApiInfo::PathMappingHasBeenSet() const
{
    return m_pathMappingHasBeenSet;
}

string ApiInfo::GetHost() const
{
    return m_host;
}

void ApiInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ApiInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string ApiInfo::GetDescription() const
{
    return m_description;
}

void ApiInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApiInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

