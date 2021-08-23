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

#include <tencentcloud/tcr/v20190924/model/RepoInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

RepoInfoResp::RepoInfoResp() :
    m_totalCountHasBeenSet(false),
    m_repoInfoHasBeenSet(false),
    m_serverHasBeenSet(false)
{
}

CoreInternalOutcome RepoInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfoResp.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("RepoInfo") && !value["RepoInfo"].IsNull())
    {
        if (!value["RepoInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RepoInfoResp.RepoInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["RepoInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RepoInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_repoInfo.push_back(item);
        }
        m_repoInfoHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepoInfoResp.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RepoInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_repoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_repoInfo.begin(); itr != m_repoInfo.end(); ++itr, ++i)
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

}


int64_t RepoInfoResp::GetTotalCount() const
{
    return m_totalCount;
}

void RepoInfoResp::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool RepoInfoResp::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<RepoInfo> RepoInfoResp::GetRepoInfo() const
{
    return m_repoInfo;
}

void RepoInfoResp::SetRepoInfo(const vector<RepoInfo>& _repoInfo)
{
    m_repoInfo = _repoInfo;
    m_repoInfoHasBeenSet = true;
}

bool RepoInfoResp::RepoInfoHasBeenSet() const
{
    return m_repoInfoHasBeenSet;
}

string RepoInfoResp::GetServer() const
{
    return m_server;
}

void RepoInfoResp::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool RepoInfoResp::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

