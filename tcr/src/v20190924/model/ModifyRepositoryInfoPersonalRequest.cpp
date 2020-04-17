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

#include <tencentcloud/tcr/v20190924/model/ModifyRepositoryInfoPersonalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

ModifyRepositoryInfoPersonalRequest::ModifyRepositoryInfoPersonalRequest() :
    m_repoNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyRepositoryInfoPersonalRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_repoNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRepositoryInfoPersonalRequest::GetRepoName() const
{
    return m_repoName;
}

void ModifyRepositoryInfoPersonalRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool ModifyRepositoryInfoPersonalRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string ModifyRepositoryInfoPersonalRequest::GetDescription() const
{
    return m_description;
}

void ModifyRepositoryInfoPersonalRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyRepositoryInfoPersonalRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


