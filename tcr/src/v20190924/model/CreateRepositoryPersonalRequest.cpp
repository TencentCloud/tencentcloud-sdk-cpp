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

#include <tencentcloud/tcr/v20190924/model/CreateRepositoryPersonalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateRepositoryPersonalRequest::CreateRepositoryPersonalRequest() :
    m_repoNameHasBeenSet(false),
    m_publicHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateRepositoryPersonalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Public";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_public, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRepositoryPersonalRequest::GetRepoName() const
{
    return m_repoName;
}

void CreateRepositoryPersonalRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool CreateRepositoryPersonalRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

uint64_t CreateRepositoryPersonalRequest::GetPublic() const
{
    return m_public;
}

void CreateRepositoryPersonalRequest::SetPublic(const uint64_t& _public)
{
    m_public = _public;
    m_publicHasBeenSet = true;
}

bool CreateRepositoryPersonalRequest::PublicHasBeenSet() const
{
    return m_publicHasBeenSet;
}

string CreateRepositoryPersonalRequest::GetDescription() const
{
    return m_description;
}

void CreateRepositoryPersonalRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRepositoryPersonalRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


