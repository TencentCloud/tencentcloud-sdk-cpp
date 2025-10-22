/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/ListSQLFolderContentsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListSQLFolderContentsRequest::ListSQLFolderContentsRequest() :
    m_projectIdHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_onlyFolderNodeHasBeenSet(false),
    m_onlyUserSelfScriptHasBeenSet(false),
    m_accessScopeHasBeenSet(false)
{
}

string ListSQLFolderContentsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_onlyFolderNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyFolderNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyFolderNode, allocator);
    }

    if (m_onlyUserSelfScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyUserSelfScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyUserSelfScript, allocator);
    }

    if (m_accessScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessScope.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListSQLFolderContentsRequest::GetProjectId() const
{
    return m_projectId;
}

void ListSQLFolderContentsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListSQLFolderContentsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ListSQLFolderContentsRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void ListSQLFolderContentsRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool ListSQLFolderContentsRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string ListSQLFolderContentsRequest::GetKeyword() const
{
    return m_keyword;
}

void ListSQLFolderContentsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListSQLFolderContentsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

bool ListSQLFolderContentsRequest::GetOnlyFolderNode() const
{
    return m_onlyFolderNode;
}

void ListSQLFolderContentsRequest::SetOnlyFolderNode(const bool& _onlyFolderNode)
{
    m_onlyFolderNode = _onlyFolderNode;
    m_onlyFolderNodeHasBeenSet = true;
}

bool ListSQLFolderContentsRequest::OnlyFolderNodeHasBeenSet() const
{
    return m_onlyFolderNodeHasBeenSet;
}

bool ListSQLFolderContentsRequest::GetOnlyUserSelfScript() const
{
    return m_onlyUserSelfScript;
}

void ListSQLFolderContentsRequest::SetOnlyUserSelfScript(const bool& _onlyUserSelfScript)
{
    m_onlyUserSelfScript = _onlyUserSelfScript;
    m_onlyUserSelfScriptHasBeenSet = true;
}

bool ListSQLFolderContentsRequest::OnlyUserSelfScriptHasBeenSet() const
{
    return m_onlyUserSelfScriptHasBeenSet;
}

string ListSQLFolderContentsRequest::GetAccessScope() const
{
    return m_accessScope;
}

void ListSQLFolderContentsRequest::SetAccessScope(const string& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool ListSQLFolderContentsRequest::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}


