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

#include <tencentcloud/dlc/v20210125/model/AlterDMSDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AlterDMSDatabaseRequest::AlterDMSDatabaseRequest() :
    m_currentNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string AlterDMSDatabaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_currentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentName.c_str(), allocator).Move(), allocator);
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

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asset.ToJsonObject(d[key.c_str()], allocator);
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


string AlterDMSDatabaseRequest::GetCurrentName() const
{
    return m_currentName;
}

void AlterDMSDatabaseRequest::SetCurrentName(const string& _currentName)
{
    m_currentName = _currentName;
    m_currentNameHasBeenSet = true;
}

bool AlterDMSDatabaseRequest::CurrentNameHasBeenSet() const
{
    return m_currentNameHasBeenSet;
}

string AlterDMSDatabaseRequest::GetSchemaName() const
{
    return m_schemaName;
}

void AlterDMSDatabaseRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool AlterDMSDatabaseRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string AlterDMSDatabaseRequest::GetLocation() const
{
    return m_location;
}

void AlterDMSDatabaseRequest::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool AlterDMSDatabaseRequest::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

Asset AlterDMSDatabaseRequest::GetAsset() const
{
    return m_asset;
}

void AlterDMSDatabaseRequest::SetAsset(const Asset& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool AlterDMSDatabaseRequest::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string AlterDMSDatabaseRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void AlterDMSDatabaseRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool AlterDMSDatabaseRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


