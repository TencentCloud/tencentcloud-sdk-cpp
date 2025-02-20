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

#include <tencentcloud/dlc/v20210125/model/CreateDMSDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateDMSDatabaseRequest::CreateDMSDatabaseRequest() :
    m_assetHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string CreateDMSDatabaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asset.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Asset CreateDMSDatabaseRequest::GetAsset() const
{
    return m_asset;
}

void CreateDMSDatabaseRequest::SetAsset(const Asset& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool CreateDMSDatabaseRequest::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string CreateDMSDatabaseRequest::GetSchemaName() const
{
    return m_schemaName;
}

void CreateDMSDatabaseRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool CreateDMSDatabaseRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string CreateDMSDatabaseRequest::GetLocation() const
{
    return m_location;
}

void CreateDMSDatabaseRequest::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool CreateDMSDatabaseRequest::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string CreateDMSDatabaseRequest::GetName() const
{
    return m_name;
}

void CreateDMSDatabaseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDMSDatabaseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDMSDatabaseRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void CreateDMSDatabaseRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool CreateDMSDatabaseRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


