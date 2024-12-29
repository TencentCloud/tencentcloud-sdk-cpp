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

#include <tencentcloud/oceanus/v20190422/model/ResourceRefDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ResourceRefDetail::ResourceRefDetail() :
    m_resourceIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_systemProvideHasBeenSet(false),
    m_connectorHasBeenSet(false)
{
}

CoreInternalOutcome ResourceRefDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefDetail.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefDetail.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SystemProvide") && !value["SystemProvide"].IsNull())
    {
        if (!value["SystemProvide"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefDetail.SystemProvide` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemProvide = value["SystemProvide"].GetInt64();
        m_systemProvideHasBeenSet = true;
    }

    if (value.HasMember("Connector") && !value["Connector"].IsNull())
    {
        if (!value["Connector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefDetail.Connector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connector = string(value["Connector"].GetString());
        m_connectorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceRefDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_systemProvideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemProvide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemProvide, allocator);
    }

    if (m_connectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connector.c_str(), allocator).Move(), allocator);
    }

}


string ResourceRefDetail::GetResourceId() const
{
    return m_resourceId;
}

void ResourceRefDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceRefDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t ResourceRefDetail::GetVersion() const
{
    return m_version;
}

void ResourceRefDetail::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ResourceRefDetail::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ResourceRefDetail::GetName() const
{
    return m_name;
}

void ResourceRefDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourceRefDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ResourceRefDetail::GetType() const
{
    return m_type;
}

void ResourceRefDetail::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ResourceRefDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ResourceRefDetail::GetSystemProvide() const
{
    return m_systemProvide;
}

void ResourceRefDetail::SetSystemProvide(const int64_t& _systemProvide)
{
    m_systemProvide = _systemProvide;
    m_systemProvideHasBeenSet = true;
}

bool ResourceRefDetail::SystemProvideHasBeenSet() const
{
    return m_systemProvideHasBeenSet;
}

string ResourceRefDetail::GetConnector() const
{
    return m_connector;
}

void ResourceRefDetail::SetConnector(const string& _connector)
{
    m_connector = _connector;
    m_connectorHasBeenSet = true;
}

bool ResourceRefDetail::ConnectorHasBeenSet() const
{
    return m_connectorHasBeenSet;
}

