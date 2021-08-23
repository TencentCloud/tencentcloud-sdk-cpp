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

#include <tencentcloud/tcr/v20190924/model/TagInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TagInfoResp::TagInfoResp() :
    m_tagCountHasBeenSet(false),
    m_tagInfoHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_repoNameHasBeenSet(false)
{
}

CoreInternalOutcome TagInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagCount") && !value["TagCount"].IsNull())
    {
        if (!value["TagCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfoResp.TagCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagCount = value["TagCount"].GetInt64();
        m_tagCountHasBeenSet = true;
    }

    if (value.HasMember("TagInfo") && !value["TagInfo"].IsNull())
    {
        if (!value["TagInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagInfoResp.TagInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagInfo.push_back(item);
        }
        m_tagInfoHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfoResp.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfoResp.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagCount, allocator);
    }

    if (m_tagInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInfo.begin(); itr != m_tagInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

}


int64_t TagInfoResp::GetTagCount() const
{
    return m_tagCount;
}

void TagInfoResp::SetTagCount(const int64_t& _tagCount)
{
    m_tagCount = _tagCount;
    m_tagCountHasBeenSet = true;
}

bool TagInfoResp::TagCountHasBeenSet() const
{
    return m_tagCountHasBeenSet;
}

vector<TagInfo> TagInfoResp::GetTagInfo() const
{
    return m_tagInfo;
}

void TagInfoResp::SetTagInfo(const vector<TagInfo>& _tagInfo)
{
    m_tagInfo = _tagInfo;
    m_tagInfoHasBeenSet = true;
}

bool TagInfoResp::TagInfoHasBeenSet() const
{
    return m_tagInfoHasBeenSet;
}

string TagInfoResp::GetServer() const
{
    return m_server;
}

void TagInfoResp::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool TagInfoResp::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string TagInfoResp::GetRepoName() const
{
    return m_repoName;
}

void TagInfoResp::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool TagInfoResp::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

