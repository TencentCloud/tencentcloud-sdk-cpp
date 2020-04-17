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

#include <tencentcloud/tione/v20191022/model/UpdateCodeRepositoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace rapidjson;
using namespace std;

UpdateCodeRepositoryRequest::UpdateCodeRepositoryRequest() :
    m_codeRepositoryNameHasBeenSet(false),
    m_gitSecretHasBeenSet(false)
{
}

string UpdateCodeRepositoryRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_codeRepositoryNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CodeRepositoryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_codeRepositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_gitSecretHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GitSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_gitSecret.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCodeRepositoryRequest::GetCodeRepositoryName() const
{
    return m_codeRepositoryName;
}

void UpdateCodeRepositoryRequest::SetCodeRepositoryName(const string& _codeRepositoryName)
{
    m_codeRepositoryName = _codeRepositoryName;
    m_codeRepositoryNameHasBeenSet = true;
}

bool UpdateCodeRepositoryRequest::CodeRepositoryNameHasBeenSet() const
{
    return m_codeRepositoryNameHasBeenSet;
}

GitSecret UpdateCodeRepositoryRequest::GetGitSecret() const
{
    return m_gitSecret;
}

void UpdateCodeRepositoryRequest::SetGitSecret(const GitSecret& _gitSecret)
{
    m_gitSecret = _gitSecret;
    m_gitSecretHasBeenSet = true;
}

bool UpdateCodeRepositoryRequest::GitSecretHasBeenSet() const
{
    return m_gitSecretHasBeenSet;
}


