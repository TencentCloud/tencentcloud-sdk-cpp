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

#include <tencentcloud/lowcode/v20210108/model/CreateKnowledgeSetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

CreateKnowledgeSetRequest::CreateKnowledgeSetRequest() :
    m_envIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descHasBeenSet(false),
    m_metaHasBeenSet(false)
{
}

string CreateKnowledgeSetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_metaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Meta";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_meta.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateKnowledgeSetRequest::GetEnvId() const
{
    return m_envId;
}

void CreateKnowledgeSetRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateKnowledgeSetRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateKnowledgeSetRequest::GetName() const
{
    return m_name;
}

void CreateKnowledgeSetRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateKnowledgeSetRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateKnowledgeSetRequest::GetTitle() const
{
    return m_title;
}

void CreateKnowledgeSetRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool CreateKnowledgeSetRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string CreateKnowledgeSetRequest::GetDesc() const
{
    return m_desc;
}

void CreateKnowledgeSetRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool CreateKnowledgeSetRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string CreateKnowledgeSetRequest::GetMeta() const
{
    return m_meta;
}

void CreateKnowledgeSetRequest::SetMeta(const string& _meta)
{
    m_meta = _meta;
    m_metaHasBeenSet = true;
}

bool CreateKnowledgeSetRequest::MetaHasBeenSet() const
{
    return m_metaHasBeenSet;
}


