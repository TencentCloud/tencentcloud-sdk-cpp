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

#include <tencentcloud/dlc/v20210125/model/DropDMSDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DropDMSDatabaseRequest::DropDMSDatabaseRequest() :
    m_nameHasBeenSet(false),
    m_deleteDataHasBeenSet(false),
    m_cascadeHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string DropDMSDatabaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_cascadeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cascade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cascade, allocator);
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


string DropDMSDatabaseRequest::GetName() const
{
    return m_name;
}

void DropDMSDatabaseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DropDMSDatabaseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool DropDMSDatabaseRequest::GetDeleteData() const
{
    return m_deleteData;
}

void DropDMSDatabaseRequest::SetDeleteData(const bool& _deleteData)
{
    m_deleteData = _deleteData;
    m_deleteDataHasBeenSet = true;
}

bool DropDMSDatabaseRequest::DeleteDataHasBeenSet() const
{
    return m_deleteDataHasBeenSet;
}

bool DropDMSDatabaseRequest::GetCascade() const
{
    return m_cascade;
}

void DropDMSDatabaseRequest::SetCascade(const bool& _cascade)
{
    m_cascade = _cascade;
    m_cascadeHasBeenSet = true;
}

bool DropDMSDatabaseRequest::CascadeHasBeenSet() const
{
    return m_cascadeHasBeenSet;
}

string DropDMSDatabaseRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DropDMSDatabaseRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DropDMSDatabaseRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


