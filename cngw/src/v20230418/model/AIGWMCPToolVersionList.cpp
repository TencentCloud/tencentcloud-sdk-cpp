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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPToolVersionList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPToolVersionList::AIGWMCPToolVersionList() :
    m_mCPToolVersionsHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPToolVersionList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MCPToolVersions") && !value["MCPToolVersions"].IsNull())
    {
        if (!value["MCPToolVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolVersionList.MCPToolVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["MCPToolVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWMCPToolVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mCPToolVersions.push_back(item);
        }
        m_mCPToolVersionsHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPToolVersionList.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPToolVersionList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mCPToolVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPToolVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mCPToolVersions.begin(); itr != m_mCPToolVersions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


vector<AIGWMCPToolVersion> AIGWMCPToolVersionList::GetMCPToolVersions() const
{
    return m_mCPToolVersions;
}

void AIGWMCPToolVersionList::SetMCPToolVersions(const vector<AIGWMCPToolVersion>& _mCPToolVersions)
{
    m_mCPToolVersions = _mCPToolVersions;
    m_mCPToolVersionsHasBeenSet = true;
}

bool AIGWMCPToolVersionList::MCPToolVersionsHasBeenSet() const
{
    return m_mCPToolVersionsHasBeenSet;
}

uint64_t AIGWMCPToolVersionList::GetTotalCount() const
{
    return m_totalCount;
}

void AIGWMCPToolVersionList::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool AIGWMCPToolVersionList::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

