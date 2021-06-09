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

#include <tencentcloud/tcr/v20190924/model/CreateImageLifecyclePersonalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateImageLifecyclePersonalRequest::CreateImageLifecyclePersonalRequest() :
    m_repoNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valHasBeenSet(false)
{
}

string CreateImageLifecyclePersonalRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_valHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Val";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_val, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateImageLifecyclePersonalRequest::GetRepoName() const
{
    return m_repoName;
}

void CreateImageLifecyclePersonalRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool CreateImageLifecyclePersonalRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string CreateImageLifecyclePersonalRequest::GetType() const
{
    return m_type;
}

void CreateImageLifecyclePersonalRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateImageLifecyclePersonalRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t CreateImageLifecyclePersonalRequest::GetVal() const
{
    return m_val;
}

void CreateImageLifecyclePersonalRequest::SetVal(const int64_t& _val)
{
    m_val = _val;
    m_valHasBeenSet = true;
}

bool CreateImageLifecyclePersonalRequest::ValHasBeenSet() const
{
    return m_valHasBeenSet;
}


