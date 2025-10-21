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

#include <tencentcloud/ess/v20201111/model/CreateContractDiffTaskWebUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateContractDiffTaskWebUrlRequest::CreateContractDiffTaskWebUrlRequest() :
    m_operatorHasBeenSet(false),
    m_skipFileUploadHasBeenSet(false),
    m_originalFileResourceIdHasBeenSet(false),
    m_diffFileResourceIdHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateContractDiffTaskWebUrlRequest::ToJsonString() const
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

    if (m_skipFileUploadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipFileUpload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipFileUpload, allocator);
    }

    if (m_originalFileResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalFileResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originalFileResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_diffFileResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffFileResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diffFileResourceId.c_str(), allocator).Move(), allocator);
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


UserInfo CreateContractDiffTaskWebUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateContractDiffTaskWebUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateContractDiffTaskWebUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

bool CreateContractDiffTaskWebUrlRequest::GetSkipFileUpload() const
{
    return m_skipFileUpload;
}

void CreateContractDiffTaskWebUrlRequest::SetSkipFileUpload(const bool& _skipFileUpload)
{
    m_skipFileUpload = _skipFileUpload;
    m_skipFileUploadHasBeenSet = true;
}

bool CreateContractDiffTaskWebUrlRequest::SkipFileUploadHasBeenSet() const
{
    return m_skipFileUploadHasBeenSet;
}

string CreateContractDiffTaskWebUrlRequest::GetOriginalFileResourceId() const
{
    return m_originalFileResourceId;
}

void CreateContractDiffTaskWebUrlRequest::SetOriginalFileResourceId(const string& _originalFileResourceId)
{
    m_originalFileResourceId = _originalFileResourceId;
    m_originalFileResourceIdHasBeenSet = true;
}

bool CreateContractDiffTaskWebUrlRequest::OriginalFileResourceIdHasBeenSet() const
{
    return m_originalFileResourceIdHasBeenSet;
}

string CreateContractDiffTaskWebUrlRequest::GetDiffFileResourceId() const
{
    return m_diffFileResourceId;
}

void CreateContractDiffTaskWebUrlRequest::SetDiffFileResourceId(const string& _diffFileResourceId)
{
    m_diffFileResourceId = _diffFileResourceId;
    m_diffFileResourceIdHasBeenSet = true;
}

bool CreateContractDiffTaskWebUrlRequest::DiffFileResourceIdHasBeenSet() const
{
    return m_diffFileResourceIdHasBeenSet;
}

string CreateContractDiffTaskWebUrlRequest::GetUserData() const
{
    return m_userData;
}

void CreateContractDiffTaskWebUrlRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateContractDiffTaskWebUrlRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<Tag> CreateContractDiffTaskWebUrlRequest::GetTags() const
{
    return m_tags;
}

void CreateContractDiffTaskWebUrlRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateContractDiffTaskWebUrlRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


