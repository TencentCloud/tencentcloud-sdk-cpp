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

#include <tencentcloud/wedata/v20250806/model/RevokePrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

RevokePrivilegesRequest::RevokePrivilegesRequest() :
    m_resourcesHasBeenSet(false),
    m_subjectsHasBeenSet(false),
    m_privilegesHasBeenSet(false)
{
}

string RevokePrivilegesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_subjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subjects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subjects.begin(); itr != m_subjects.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privileges.begin(); itr != m_privileges.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<PrivilegeResource> RevokePrivilegesRequest::GetResources() const
{
    return m_resources;
}

void RevokePrivilegesRequest::SetResources(const vector<PrivilegeResource>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool RevokePrivilegesRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

vector<Subject> RevokePrivilegesRequest::GetSubjects() const
{
    return m_subjects;
}

void RevokePrivilegesRequest::SetSubjects(const vector<Subject>& _subjects)
{
    m_subjects = _subjects;
    m_subjectsHasBeenSet = true;
}

bool RevokePrivilegesRequest::SubjectsHasBeenSet() const
{
    return m_subjectsHasBeenSet;
}

vector<PrivilegeInfo> RevokePrivilegesRequest::GetPrivileges() const
{
    return m_privileges;
}

void RevokePrivilegesRequest::SetPrivileges(const vector<PrivilegeInfo>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool RevokePrivilegesRequest::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}


