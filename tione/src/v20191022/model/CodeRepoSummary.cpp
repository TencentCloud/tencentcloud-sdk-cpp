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

#include <tencentcloud/tione/v20191022/model/CodeRepoSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

CodeRepoSummary::CodeRepoSummary() :
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_codeRepositoryNameHasBeenSet(false),
    m_gitConfigHasBeenSet(false),
    m_noSecretHasBeenSet(false)
{
}

CoreInternalOutcome CodeRepoSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepoSummary.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepoSummary.LastModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = string(value["LastModifiedTime"].GetString());
        m_lastModifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("CodeRepositoryName") && !value["CodeRepositoryName"].IsNull())
    {
        if (!value["CodeRepositoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepoSummary.CodeRepositoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeRepositoryName = string(value["CodeRepositoryName"].GetString());
        m_codeRepositoryNameHasBeenSet = true;
    }

    if (value.HasMember("GitConfig") && !value["GitConfig"].IsNull())
    {
        if (!value["GitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepoSummary.GitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gitConfig.Deserialize(value["GitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gitConfigHasBeenSet = true;
    }

    if (value.HasMember("NoSecret") && !value["NoSecret"].IsNull())
    {
        if (!value["NoSecret"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepoSummary.NoSecret` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noSecret = value["NoSecret"].GetBool();
        m_noSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeRepoSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_codeRepositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeRepositoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeRepositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_gitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noSecret, allocator);
    }

}


string CodeRepoSummary::GetCreationTime() const
{
    return m_creationTime;
}

void CodeRepoSummary::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool CodeRepoSummary::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string CodeRepoSummary::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void CodeRepoSummary::SetLastModifiedTime(const string& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool CodeRepoSummary::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

string CodeRepoSummary::GetCodeRepositoryName() const
{
    return m_codeRepositoryName;
}

void CodeRepoSummary::SetCodeRepositoryName(const string& _codeRepositoryName)
{
    m_codeRepositoryName = _codeRepositoryName;
    m_codeRepositoryNameHasBeenSet = true;
}

bool CodeRepoSummary::CodeRepositoryNameHasBeenSet() const
{
    return m_codeRepositoryNameHasBeenSet;
}

GitConfig CodeRepoSummary::GetGitConfig() const
{
    return m_gitConfig;
}

void CodeRepoSummary::SetGitConfig(const GitConfig& _gitConfig)
{
    m_gitConfig = _gitConfig;
    m_gitConfigHasBeenSet = true;
}

bool CodeRepoSummary::GitConfigHasBeenSet() const
{
    return m_gitConfigHasBeenSet;
}

bool CodeRepoSummary::GetNoSecret() const
{
    return m_noSecret;
}

void CodeRepoSummary::SetNoSecret(const bool& _noSecret)
{
    m_noSecret = _noSecret;
    m_noSecretHasBeenSet = true;
}

bool CodeRepoSummary::NoSecretHasBeenSet() const
{
    return m_noSecretHasBeenSet;
}

