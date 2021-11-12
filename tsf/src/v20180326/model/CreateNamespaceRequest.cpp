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

#include <tencentcloud/tsf/v20180326/model/CreateNamespaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateNamespaceRequest::CreateNamespaceRequest() :
    m_namespaceNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_namespaceDescHasBeenSet(false),
    m_namespaceResourceTypeHasBeenSet(false),
    m_namespaceTypeHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_isHaEnableHasBeenSet(false),
    m_programIdHasBeenSet(false),
    m_programIdListHasBeenSet(false)
{
}

string CreateNamespaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isHaEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHaEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isHaEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_programId.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programIdList.begin(); itr != m_programIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNamespaceRequest::GetNamespaceName() const
{
    return m_namespaceName;
}

void CreateNamespaceRequest::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool CreateNamespaceRequest::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string CreateNamespaceRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateNamespaceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateNamespaceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateNamespaceRequest::GetNamespaceDesc() const
{
    return m_namespaceDesc;
}

void CreateNamespaceRequest::SetNamespaceDesc(const string& _namespaceDesc)
{
    m_namespaceDesc = _namespaceDesc;
    m_namespaceDescHasBeenSet = true;
}

bool CreateNamespaceRequest::NamespaceDescHasBeenSet() const
{
    return m_namespaceDescHasBeenSet;
}

string CreateNamespaceRequest::GetNamespaceResourceType() const
{
    return m_namespaceResourceType;
}

void CreateNamespaceRequest::SetNamespaceResourceType(const string& _namespaceResourceType)
{
    m_namespaceResourceType = _namespaceResourceType;
    m_namespaceResourceTypeHasBeenSet = true;
}

bool CreateNamespaceRequest::NamespaceResourceTypeHasBeenSet() const
{
    return m_namespaceResourceTypeHasBeenSet;
}

string CreateNamespaceRequest::GetNamespaceType() const
{
    return m_namespaceType;
}

void CreateNamespaceRequest::SetNamespaceType(const string& _namespaceType)
{
    m_namespaceType = _namespaceType;
    m_namespaceTypeHasBeenSet = true;
}

bool CreateNamespaceRequest::NamespaceTypeHasBeenSet() const
{
    return m_namespaceTypeHasBeenSet;
}

string CreateNamespaceRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void CreateNamespaceRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool CreateNamespaceRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string CreateNamespaceRequest::GetIsHaEnable() const
{
    return m_isHaEnable;
}

void CreateNamespaceRequest::SetIsHaEnable(const string& _isHaEnable)
{
    m_isHaEnable = _isHaEnable;
    m_isHaEnableHasBeenSet = true;
}

bool CreateNamespaceRequest::IsHaEnableHasBeenSet() const
{
    return m_isHaEnableHasBeenSet;
}

string CreateNamespaceRequest::GetProgramId() const
{
    return m_programId;
}

void CreateNamespaceRequest::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool CreateNamespaceRequest::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

vector<string> CreateNamespaceRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void CreateNamespaceRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool CreateNamespaceRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}


