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

#include <tencentcloud/databuddy/v20260715/model/GitRepoConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GitRepoConfig::GitRepoConfig() :
    m_sparseCheckoutHasBeenSet(false),
    m_repoUrlHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_authConfigNameHasBeenSet(false)
{
}

CoreInternalOutcome GitRepoConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SparseCheckout") && !value["SparseCheckout"].IsNull())
    {
        if (!value["SparseCheckout"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GitRepoConfig.SparseCheckout` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sparseCheckout.Deserialize(value["SparseCheckout"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sparseCheckoutHasBeenSet = true;
    }

    if (value.HasMember("RepoUrl") && !value["RepoUrl"].IsNull())
    {
        if (!value["RepoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitRepoConfig.RepoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoUrl = string(value["RepoUrl"].GetString());
        m_repoUrlHasBeenSet = true;
    }

    if (value.HasMember("Branch") && !value["Branch"].IsNull())
    {
        if (!value["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitRepoConfig.Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(value["Branch"].GetString());
        m_branchHasBeenSet = true;
    }

    if (value.HasMember("AuthConfigName") && !value["AuthConfigName"].IsNull())
    {
        if (!value["AuthConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitRepoConfig.AuthConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authConfigName = string(value["AuthConfigName"].GetString());
        m_authConfigNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GitRepoConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sparseCheckoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparseCheckout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sparseCheckout.ToJsonObject(value[key.c_str()], allocator);
    }

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

    if (m_authConfigNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authConfigName.c_str(), allocator).Move(), allocator);
    }

}


SparseCheckoutConfig GitRepoConfig::GetSparseCheckout() const
{
    return m_sparseCheckout;
}

void GitRepoConfig::SetSparseCheckout(const SparseCheckoutConfig& _sparseCheckout)
{
    m_sparseCheckout = _sparseCheckout;
    m_sparseCheckoutHasBeenSet = true;
}

bool GitRepoConfig::SparseCheckoutHasBeenSet() const
{
    return m_sparseCheckoutHasBeenSet;
}

string GitRepoConfig::GetRepoUrl() const
{
    return m_repoUrl;
}

void GitRepoConfig::SetRepoUrl(const string& _repoUrl)
{
    m_repoUrl = _repoUrl;
    m_repoUrlHasBeenSet = true;
}

bool GitRepoConfig::RepoUrlHasBeenSet() const
{
    return m_repoUrlHasBeenSet;
}

string GitRepoConfig::GetBranch() const
{
    return m_branch;
}

void GitRepoConfig::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool GitRepoConfig::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

string GitRepoConfig::GetAuthConfigName() const
{
    return m_authConfigName;
}

void GitRepoConfig::SetAuthConfigName(const string& _authConfigName)
{
    m_authConfigName = _authConfigName;
    m_authConfigNameHasBeenSet = true;
}

bool GitRepoConfig::AuthConfigNameHasBeenSet() const
{
    return m_authConfigNameHasBeenSet;
}

