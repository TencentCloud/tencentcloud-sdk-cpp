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

#include <tencentcloud/omics/v20221128/model/GitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

GitInfo::GitInfo() :
    m_gitHttpPathHasBeenSet(false),
    m_gitUserNameHasBeenSet(false),
    m_gitTokenOrPasswordHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome GitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GitHttpPath") && !value["GitHttpPath"].IsNull())
    {
        if (!value["GitHttpPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitInfo.GitHttpPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitHttpPath = string(value["GitHttpPath"].GetString());
        m_gitHttpPathHasBeenSet = true;
    }

    if (value.HasMember("GitUserName") && !value["GitUserName"].IsNull())
    {
        if (!value["GitUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitInfo.GitUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitUserName = string(value["GitUserName"].GetString());
        m_gitUserNameHasBeenSet = true;
    }

    if (value.HasMember("GitTokenOrPassword") && !value["GitTokenOrPassword"].IsNull())
    {
        if (!value["GitTokenOrPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitInfo.GitTokenOrPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitTokenOrPassword = string(value["GitTokenOrPassword"].GetString());
        m_gitTokenOrPasswordHasBeenSet = true;
    }

    if (value.HasMember("Branch") && !value["Branch"].IsNull())
    {
        if (!value["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitInfo.Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(value["Branch"].GetString());
        m_branchHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GitInfo.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gitHttpPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitHttpPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitHttpPath.c_str(), allocator).Move(), allocator);
    }

    if (m_gitUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_gitTokenOrPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitTokenOrPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitTokenOrPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

}


string GitInfo::GetGitHttpPath() const
{
    return m_gitHttpPath;
}

void GitInfo::SetGitHttpPath(const string& _gitHttpPath)
{
    m_gitHttpPath = _gitHttpPath;
    m_gitHttpPathHasBeenSet = true;
}

bool GitInfo::GitHttpPathHasBeenSet() const
{
    return m_gitHttpPathHasBeenSet;
}

string GitInfo::GetGitUserName() const
{
    return m_gitUserName;
}

void GitInfo::SetGitUserName(const string& _gitUserName)
{
    m_gitUserName = _gitUserName;
    m_gitUserNameHasBeenSet = true;
}

bool GitInfo::GitUserNameHasBeenSet() const
{
    return m_gitUserNameHasBeenSet;
}

string GitInfo::GetGitTokenOrPassword() const
{
    return m_gitTokenOrPassword;
}

void GitInfo::SetGitTokenOrPassword(const string& _gitTokenOrPassword)
{
    m_gitTokenOrPassword = _gitTokenOrPassword;
    m_gitTokenOrPasswordHasBeenSet = true;
}

bool GitInfo::GitTokenOrPasswordHasBeenSet() const
{
    return m_gitTokenOrPasswordHasBeenSet;
}

string GitInfo::GetBranch() const
{
    return m_branch;
}

void GitInfo::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool GitInfo::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

string GitInfo::GetTag() const
{
    return m_tag;
}

void GitInfo::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool GitInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

