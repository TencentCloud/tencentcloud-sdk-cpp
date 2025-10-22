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

#include <tencentcloud/tdai/v20250717/model/CodeRepo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

CodeRepo::CodeRepo() :
    m_repoUrlHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_gitCommitPipelinesHasBeenSet(false),
    m_gitORMTypeHasBeenSet(false),
    m_gitCodeLanguageHasBeenSet(false)
{
}

CoreInternalOutcome CodeRepo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepoUrl") && !value["RepoUrl"].IsNull())
    {
        if (!value["RepoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepo.RepoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoUrl = string(value["RepoUrl"].GetString());
        m_repoUrlHasBeenSet = true;
    }

    if (value.HasMember("Branch") && !value["Branch"].IsNull())
    {
        if (!value["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepo.Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(value["Branch"].GetString());
        m_branchHasBeenSet = true;
    }

    if (value.HasMember("GitCommitPipelines") && !value["GitCommitPipelines"].IsNull())
    {
        if (!value["GitCommitPipelines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodeRepo.GitCommitPipelines` is not array type"));

        const rapidjson::Value &tmpValue = value["GitCommitPipelines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_gitCommitPipelines.push_back((*itr).GetString());
        }
        m_gitCommitPipelinesHasBeenSet = true;
    }

    if (value.HasMember("GitORMType") && !value["GitORMType"].IsNull())
    {
        if (!value["GitORMType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepo.GitORMType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitORMType = string(value["GitORMType"].GetString());
        m_gitORMTypeHasBeenSet = true;
    }

    if (value.HasMember("GitCodeLanguage") && !value["GitCodeLanguage"].IsNull())
    {
        if (!value["GitCodeLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepo.GitCodeLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitCodeLanguage = string(value["GitCodeLanguage"].GetString());
        m_gitCodeLanguageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeRepo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

    if (m_gitCommitPipelinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitCommitPipelines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_gitCommitPipelines.begin(); itr != m_gitCommitPipelines.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gitORMTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitORMType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitORMType.c_str(), allocator).Move(), allocator);
    }

    if (m_gitCodeLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitCodeLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitCodeLanguage.c_str(), allocator).Move(), allocator);
    }

}


string CodeRepo::GetRepoUrl() const
{
    return m_repoUrl;
}

void CodeRepo::SetRepoUrl(const string& _repoUrl)
{
    m_repoUrl = _repoUrl;
    m_repoUrlHasBeenSet = true;
}

bool CodeRepo::RepoUrlHasBeenSet() const
{
    return m_repoUrlHasBeenSet;
}

string CodeRepo::GetBranch() const
{
    return m_branch;
}

void CodeRepo::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool CodeRepo::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

vector<string> CodeRepo::GetGitCommitPipelines() const
{
    return m_gitCommitPipelines;
}

void CodeRepo::SetGitCommitPipelines(const vector<string>& _gitCommitPipelines)
{
    m_gitCommitPipelines = _gitCommitPipelines;
    m_gitCommitPipelinesHasBeenSet = true;
}

bool CodeRepo::GitCommitPipelinesHasBeenSet() const
{
    return m_gitCommitPipelinesHasBeenSet;
}

string CodeRepo::GetGitORMType() const
{
    return m_gitORMType;
}

void CodeRepo::SetGitORMType(const string& _gitORMType)
{
    m_gitORMType = _gitORMType;
    m_gitORMTypeHasBeenSet = true;
}

bool CodeRepo::GitORMTypeHasBeenSet() const
{
    return m_gitORMTypeHasBeenSet;
}

string CodeRepo::GetGitCodeLanguage() const
{
    return m_gitCodeLanguage;
}

void CodeRepo::SetGitCodeLanguage(const string& _gitCodeLanguage)
{
    m_gitCodeLanguage = _gitCodeLanguage;
    m_gitCodeLanguageHasBeenSet = true;
}

bool CodeRepo::GitCodeLanguageHasBeenSet() const
{
    return m_gitCodeLanguageHasBeenSet;
}

