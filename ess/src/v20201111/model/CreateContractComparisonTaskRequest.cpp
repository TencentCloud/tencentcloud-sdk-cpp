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

#include <tencentcloud/ess/v20201111/model/CreateContractComparisonTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateContractComparisonTaskRequest::CreateContractComparisonTaskRequest() :
    m_operatorHasBeenSet(false),
    m_originFileResourceIdHasBeenSet(false),
    m_diffFileResourceIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateContractComparisonTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_originFileResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginFileResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originFileResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_diffFileResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffFileResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diffFileResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


UserInfo CreateContractComparisonTaskRequest::GetOperator() const
{
    return m_operator;
}

void CreateContractComparisonTaskRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateContractComparisonTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateContractComparisonTaskRequest::GetOriginFileResourceId() const
{
    return m_originFileResourceId;
}

void CreateContractComparisonTaskRequest::SetOriginFileResourceId(const string& _originFileResourceId)
{
    m_originFileResourceId = _originFileResourceId;
    m_originFileResourceIdHasBeenSet = true;
}

bool CreateContractComparisonTaskRequest::OriginFileResourceIdHasBeenSet() const
{
    return m_originFileResourceIdHasBeenSet;
}

string CreateContractComparisonTaskRequest::GetDiffFileResourceId() const
{
    return m_diffFileResourceId;
}

void CreateContractComparisonTaskRequest::SetDiffFileResourceId(const string& _diffFileResourceId)
{
    m_diffFileResourceId = _diffFileResourceId;
    m_diffFileResourceIdHasBeenSet = true;
}

bool CreateContractComparisonTaskRequest::DiffFileResourceIdHasBeenSet() const
{
    return m_diffFileResourceIdHasBeenSet;
}

string CreateContractComparisonTaskRequest::GetComment() const
{
    return m_comment;
}

void CreateContractComparisonTaskRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateContractComparisonTaskRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateContractComparisonTaskRequest::GetUserData() const
{
    return m_userData;
}

void CreateContractComparisonTaskRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateContractComparisonTaskRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<Tag> CreateContractComparisonTaskRequest::GetTags() const
{
    return m_tags;
}

void CreateContractComparisonTaskRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateContractComparisonTaskRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


