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

#include <tencentcloud/wedata/v20210820/model/SaveCustomFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SaveCustomFunctionRequest::SaveCustomFunctionRequest() :
    m_functionIdHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_resourceListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_paramDescHasBeenSet(false),
    m_returnDescHasBeenSet(false),
    m_exampleHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string SaveCustomFunctionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIdentifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_classNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_className.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceList.begin(); itr != m_resourceList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usage.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_returnDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_returnDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_exampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Example";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_example.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SaveCustomFunctionRequest::GetFunctionId() const
{
    return m_functionId;
}

void SaveCustomFunctionRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool SaveCustomFunctionRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string SaveCustomFunctionRequest::GetKind() const
{
    return m_kind;
}

void SaveCustomFunctionRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool SaveCustomFunctionRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string SaveCustomFunctionRequest::GetClusterIdentifier() const
{
    return m_clusterIdentifier;
}

void SaveCustomFunctionRequest::SetClusterIdentifier(const string& _clusterIdentifier)
{
    m_clusterIdentifier = _clusterIdentifier;
    m_clusterIdentifierHasBeenSet = true;
}

bool SaveCustomFunctionRequest::ClusterIdentifierHasBeenSet() const
{
    return m_clusterIdentifierHasBeenSet;
}

string SaveCustomFunctionRequest::GetClassName() const
{
    return m_className;
}

void SaveCustomFunctionRequest::SetClassName(const string& _className)
{
    m_className = _className;
    m_classNameHasBeenSet = true;
}

bool SaveCustomFunctionRequest::ClassNameHasBeenSet() const
{
    return m_classNameHasBeenSet;
}

vector<FunctionResource> SaveCustomFunctionRequest::GetResourceList() const
{
    return m_resourceList;
}

void SaveCustomFunctionRequest::SetResourceList(const vector<FunctionResource>& _resourceList)
{
    m_resourceList = _resourceList;
    m_resourceListHasBeenSet = true;
}

bool SaveCustomFunctionRequest::ResourceListHasBeenSet() const
{
    return m_resourceListHasBeenSet;
}

string SaveCustomFunctionRequest::GetDescription() const
{
    return m_description;
}

void SaveCustomFunctionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SaveCustomFunctionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SaveCustomFunctionRequest::GetUsage() const
{
    return m_usage;
}

void SaveCustomFunctionRequest::SetUsage(const string& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool SaveCustomFunctionRequest::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string SaveCustomFunctionRequest::GetParamDesc() const
{
    return m_paramDesc;
}

void SaveCustomFunctionRequest::SetParamDesc(const string& _paramDesc)
{
    m_paramDesc = _paramDesc;
    m_paramDescHasBeenSet = true;
}

bool SaveCustomFunctionRequest::ParamDescHasBeenSet() const
{
    return m_paramDescHasBeenSet;
}

string SaveCustomFunctionRequest::GetReturnDesc() const
{
    return m_returnDesc;
}

void SaveCustomFunctionRequest::SetReturnDesc(const string& _returnDesc)
{
    m_returnDesc = _returnDesc;
    m_returnDescHasBeenSet = true;
}

bool SaveCustomFunctionRequest::ReturnDescHasBeenSet() const
{
    return m_returnDescHasBeenSet;
}

string SaveCustomFunctionRequest::GetExample() const
{
    return m_example;
}

void SaveCustomFunctionRequest::SetExample(const string& _example)
{
    m_example = _example;
    m_exampleHasBeenSet = true;
}

bool SaveCustomFunctionRequest::ExampleHasBeenSet() const
{
    return m_exampleHasBeenSet;
}

string SaveCustomFunctionRequest::GetProjectId() const
{
    return m_projectId;
}

void SaveCustomFunctionRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SaveCustomFunctionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SaveCustomFunctionRequest::GetDbName() const
{
    return m_dbName;
}

void SaveCustomFunctionRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool SaveCustomFunctionRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string SaveCustomFunctionRequest::GetName() const
{
    return m_name;
}

void SaveCustomFunctionRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SaveCustomFunctionRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


