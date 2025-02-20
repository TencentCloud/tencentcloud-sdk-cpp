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

#include <tencentcloud/dlc/v20210125/model/DropDMSTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DropDMSTableRequest::DropDMSTableRequest() :
    m_dbNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_deleteDataHasBeenSet(false),
    m_envPropsHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string DropDMSTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteData, allocator);
    }

    if (m_envPropsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvProps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envProps.ToJsonObject(d[key.c_str()], allocator);
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


string DropDMSTableRequest::GetDbName() const
{
    return m_dbName;
}

void DropDMSTableRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DropDMSTableRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DropDMSTableRequest::GetName() const
{
    return m_name;
}

void DropDMSTableRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DropDMSTableRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool DropDMSTableRequest::GetDeleteData() const
{
    return m_deleteData;
}

void DropDMSTableRequest::SetDeleteData(const bool& _deleteData)
{
    m_deleteData = _deleteData;
    m_deleteDataHasBeenSet = true;
}

bool DropDMSTableRequest::DeleteDataHasBeenSet() const
{
    return m_deleteDataHasBeenSet;
}

KVPair DropDMSTableRequest::GetEnvProps() const
{
    return m_envProps;
}

void DropDMSTableRequest::SetEnvProps(const KVPair& _envProps)
{
    m_envProps = _envProps;
    m_envPropsHasBeenSet = true;
}

bool DropDMSTableRequest::EnvPropsHasBeenSet() const
{
    return m_envPropsHasBeenSet;
}

string DropDMSTableRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DropDMSTableRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DropDMSTableRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


