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

#include <tencentcloud/tione/v20191022/model/GitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

GitConfig::GitConfig() :
    m_repositoryUrlHasBeenSet(false),
    m_branchHasBeenSet(false)
{
}

CoreInternalOutcome GitConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepositoryUrl") && !value["RepositoryUrl"].IsNull())
    {
        if (!value["RepositoryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitConfig.RepositoryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryUrl = string(value["RepositoryUrl"].GetString());
        m_repositoryUrlHasBeenSet = true;
    }

    if (value.HasMember("Branch") && !value["Branch"].IsNull())
    {
        if (!value["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitConfig.Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(value["Branch"].GetString());
        m_branchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GitConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repositoryUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

}


string GitConfig::GetRepositoryUrl() const
{
    return m_repositoryUrl;
}

void GitConfig::SetRepositoryUrl(const string& _repositoryUrl)
{
    m_repositoryUrl = _repositoryUrl;
    m_repositoryUrlHasBeenSet = true;
}

bool GitConfig::RepositoryUrlHasBeenSet() const
{
    return m_repositoryUrlHasBeenSet;
}

string GitConfig::GetBranch() const
{
    return m_branch;
}

void GitConfig::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool GitConfig::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

