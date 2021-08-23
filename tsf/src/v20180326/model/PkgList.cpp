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

#include <tencentcloud/tsf/v20180326/model/PkgList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

PkgList::PkgList() :
    m_totalCountHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_repositoryIdHasBeenSet(false),
    m_repositoryTypeHasBeenSet(false),
    m_repositoryNameHasBeenSet(false)
{
}

CoreInternalOutcome PkgList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PkgList.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PkgList.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PkgInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_content.push_back(item);
        }
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("RepositoryId") && !value["RepositoryId"].IsNull())
    {
        if (!value["RepositoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgList.RepositoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryId = string(value["RepositoryId"].GetString());
        m_repositoryIdHasBeenSet = true;
    }

    if (value.HasMember("RepositoryType") && !value["RepositoryType"].IsNull())
    {
        if (!value["RepositoryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgList.RepositoryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryType = string(value["RepositoryType"].GetString());
        m_repositoryTypeHasBeenSet = true;
    }

    if (value.HasMember("RepositoryName") && !value["RepositoryName"].IsNull())
    {
        if (!value["RepositoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgList.RepositoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryName = string(value["RepositoryName"].GetString());
        m_repositoryNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PkgList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_repositoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

}


int64_t PkgList::GetTotalCount() const
{
    return m_totalCount;
}

void PkgList::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool PkgList::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<PkgInfo> PkgList::GetContent() const
{
    return m_content;
}

void PkgList::SetContent(const vector<PkgInfo>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool PkgList::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string PkgList::GetRepositoryId() const
{
    return m_repositoryId;
}

void PkgList::SetRepositoryId(const string& _repositoryId)
{
    m_repositoryId = _repositoryId;
    m_repositoryIdHasBeenSet = true;
}

bool PkgList::RepositoryIdHasBeenSet() const
{
    return m_repositoryIdHasBeenSet;
}

string PkgList::GetRepositoryType() const
{
    return m_repositoryType;
}

void PkgList::SetRepositoryType(const string& _repositoryType)
{
    m_repositoryType = _repositoryType;
    m_repositoryTypeHasBeenSet = true;
}

bool PkgList::RepositoryTypeHasBeenSet() const
{
    return m_repositoryTypeHasBeenSet;
}

string PkgList::GetRepositoryName() const
{
    return m_repositoryName;
}

void PkgList::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool PkgList::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

