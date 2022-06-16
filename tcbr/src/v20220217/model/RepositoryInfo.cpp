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

#include <tencentcloud/tcbr/v20220217/model/RepositoryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

RepositoryInfo::RepositoryInfo() :
    m_sourceHasBeenSet(false),
    m_repoHasBeenSet(false),
    m_branchHasBeenSet(false)
{
}

CoreInternalOutcome RepositoryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Repo") && !value["Repo"].IsNull())
    {
        if (!value["Repo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.Repo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repo = string(value["Repo"].GetString());
        m_repoHasBeenSet = true;
    }

    if (value.HasMember("Branch") && !value["Branch"].IsNull())
    {
        if (!value["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepositoryInfo.Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(value["Branch"].GetString());
        m_branchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RepositoryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_repoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repo.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

}


string RepositoryInfo::GetSource() const
{
    return m_source;
}

void RepositoryInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool RepositoryInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string RepositoryInfo::GetRepo() const
{
    return m_repo;
}

void RepositoryInfo::SetRepo(const string& _repo)
{
    m_repo = _repo;
    m_repoHasBeenSet = true;
}

bool RepositoryInfo::RepoHasBeenSet() const
{
    return m_repoHasBeenSet;
}

string RepositoryInfo::GetBranch() const
{
    return m_branch;
}

void RepositoryInfo::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool RepositoryInfo::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

