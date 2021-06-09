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

#include <tencentcloud/tione/v20191022/model/CreateCodeRepositoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

CreateCodeRepositoryRequest::CreateCodeRepositoryRequest() :
    m_codeRepositoryNameHasBeenSet(false),
    m_gitConfigHasBeenSet(false),
    m_gitSecretHasBeenSet(false)
{
}

string CreateCodeRepositoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_codeRepositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeRepositoryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeRepositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_gitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gitConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_gitSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gitSecret.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCodeRepositoryRequest::GetCodeRepositoryName() const
{
    return m_codeRepositoryName;
}

void CreateCodeRepositoryRequest::SetCodeRepositoryName(const string& _codeRepositoryName)
{
    m_codeRepositoryName = _codeRepositoryName;
    m_codeRepositoryNameHasBeenSet = true;
}

bool CreateCodeRepositoryRequest::CodeRepositoryNameHasBeenSet() const
{
    return m_codeRepositoryNameHasBeenSet;
}

GitConfig CreateCodeRepositoryRequest::GetGitConfig() const
{
    return m_gitConfig;
}

void CreateCodeRepositoryRequest::SetGitConfig(const GitConfig& _gitConfig)
{
    m_gitConfig = _gitConfig;
    m_gitConfigHasBeenSet = true;
}

bool CreateCodeRepositoryRequest::GitConfigHasBeenSet() const
{
    return m_gitConfigHasBeenSet;
}

GitSecret CreateCodeRepositoryRequest::GetGitSecret() const
{
    return m_gitSecret;
}

void CreateCodeRepositoryRequest::SetGitSecret(const GitSecret& _gitSecret)
{
    m_gitSecret = _gitSecret;
    m_gitSecretHasBeenSet = true;
}

bool CreateCodeRepositoryRequest::GitSecretHasBeenSet() const
{
    return m_gitSecretHasBeenSet;
}


