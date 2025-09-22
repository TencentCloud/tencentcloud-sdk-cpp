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

#include <tencentcloud/wedata/v20250806/model/ListCodeFolderContentsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListCodeFolderContentsRequest::ListCodeFolderContentsRequest() :
    m_projectIdHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_onlyFolderNodeHasBeenSet(false),
    m_onlyUserSelfScriptHasBeenSet(false)
{
}

string ListCodeFolderContentsRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListCodeFolderContentsRequest::GetProjectId() const
{
    return m_projectId;
}

void ListCodeFolderContentsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListCodeFolderContentsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ListCodeFolderContentsRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void ListCodeFolderContentsRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool ListCodeFolderContentsRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string ListCodeFolderContentsRequest::GetKeyword() const
{
    return m_keyword;
}

void ListCodeFolderContentsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListCodeFolderContentsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

bool ListCodeFolderContentsRequest::GetOnlyFolderNode() const
{
    return m_onlyFolderNode;
}

void ListCodeFolderContentsRequest::SetOnlyFolderNode(const bool& _onlyFolderNode)
{
    m_onlyFolderNode = _onlyFolderNode;
    m_onlyFolderNodeHasBeenSet = true;
}

bool ListCodeFolderContentsRequest::OnlyFolderNodeHasBeenSet() const
{
    return m_onlyFolderNodeHasBeenSet;
}

bool ListCodeFolderContentsRequest::GetOnlyUserSelfScript() const
{
    return m_onlyUserSelfScript;
}

void ListCodeFolderContentsRequest::SetOnlyUserSelfScript(const bool& _onlyUserSelfScript)
{
    m_onlyUserSelfScript = _onlyUserSelfScript;
    m_onlyUserSelfScriptHasBeenSet = true;
}

bool ListCodeFolderContentsRequest::OnlyUserSelfScriptHasBeenSet() const
{
    return m_onlyUserSelfScriptHasBeenSet;
}


