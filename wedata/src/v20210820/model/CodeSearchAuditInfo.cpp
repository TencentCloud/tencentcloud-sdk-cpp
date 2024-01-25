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

#include <tencentcloud/wedata/v20210820/model/CodeSearchAuditInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CodeSearchAuditInfo::CodeSearchAuditInfo() :
    m_idHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

CoreInternalOutcome CodeSearchAuditInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchAuditInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchAuditInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchAuditInfo.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeSearchAuditInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CodeSearchAuditInfo::GetId() const
{
    return m_id;
}

void CodeSearchAuditInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CodeSearchAuditInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t CodeSearchAuditInfo::GetProjectId() const
{
    return m_projectId;
}

void CodeSearchAuditInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CodeSearchAuditInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CodeSearchAuditInfo::GetKeyword() const
{
    return m_keyword;
}

void CodeSearchAuditInfo::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool CodeSearchAuditInfo::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

