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

#include <tencentcloud/tcb/v20180608/model/CbrRepoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CbrRepoInfo::CbrRepoInfo() :
    m_repoHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_repoLanguageHasBeenSet(false),
    m_branchHasBeenSet(false)
{
}

CoreInternalOutcome CbrRepoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Repo") && !value["Repo"].IsNull())
    {
        if (!value["Repo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CbrRepoInfo.Repo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repo = string(value["Repo"].GetString());
        m_repoHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CbrRepoInfo.RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(value["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("RepoLanguage") && !value["RepoLanguage"].IsNull())
    {
        if (!value["RepoLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CbrRepoInfo.RepoLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoLanguage = string(value["RepoLanguage"].GetString());
        m_repoLanguageHasBeenSet = true;
    }

    if (value.HasMember("Branch") && !value["Branch"].IsNull())
    {
        if (!value["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CbrRepoInfo.Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(value["Branch"].GetString());
        m_branchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CbrRepoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repo.c_str(), allocator).Move(), allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoType.c_str(), allocator).Move(), allocator);
    }

    if (m_repoLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

}


string CbrRepoInfo::GetRepo() const
{
    return m_repo;
}

void CbrRepoInfo::SetRepo(const string& _repo)
{
    m_repo = _repo;
    m_repoHasBeenSet = true;
}

bool CbrRepoInfo::RepoHasBeenSet() const
{
    return m_repoHasBeenSet;
}

string CbrRepoInfo::GetRepoType() const
{
    return m_repoType;
}

void CbrRepoInfo::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool CbrRepoInfo::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

string CbrRepoInfo::GetRepoLanguage() const
{
    return m_repoLanguage;
}

void CbrRepoInfo::SetRepoLanguage(const string& _repoLanguage)
{
    m_repoLanguage = _repoLanguage;
    m_repoLanguageHasBeenSet = true;
}

bool CbrRepoInfo::RepoLanguageHasBeenSet() const
{
    return m_repoLanguageHasBeenSet;
}

string CbrRepoInfo::GetBranch() const
{
    return m_branch;
}

void CbrRepoInfo::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool CbrRepoInfo::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

