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

#include <tencentcloud/tsf/v20180326/model/AssociateConfigWithGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

AssociateConfigWithGroupRequest::AssociateConfigWithGroupRequest() :
    m_configIdHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_selectAllHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_searchWordHasBeenSet(false)
{
}

string AssociateConfigWithGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_selectAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selectAll, allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateConfigWithGroupRequest::GetConfigId() const
{
    return m_configId;
}

void AssociateConfigWithGroupRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool AssociateConfigWithGroupRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

vector<GroupInfo> AssociateConfigWithGroupRequest::GetGroups() const
{
    return m_groups;
}

void AssociateConfigWithGroupRequest::SetGroups(const vector<GroupInfo>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool AssociateConfigWithGroupRequest::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

int64_t AssociateConfigWithGroupRequest::GetSelectAll() const
{
    return m_selectAll;
}

void AssociateConfigWithGroupRequest::SetSelectAll(const int64_t& _selectAll)
{
    m_selectAll = _selectAll;
    m_selectAllHasBeenSet = true;
}

bool AssociateConfigWithGroupRequest::SelectAllHasBeenSet() const
{
    return m_selectAllHasBeenSet;
}

string AssociateConfigWithGroupRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void AssociateConfigWithGroupRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool AssociateConfigWithGroupRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string AssociateConfigWithGroupRequest::GetClusterId() const
{
    return m_clusterId;
}

void AssociateConfigWithGroupRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AssociateConfigWithGroupRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string AssociateConfigWithGroupRequest::GetSearchWord() const
{
    return m_searchWord;
}

void AssociateConfigWithGroupRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool AssociateConfigWithGroupRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}


