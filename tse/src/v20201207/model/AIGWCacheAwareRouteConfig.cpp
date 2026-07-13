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

#include <tencentcloud/tse/v20201207/model/AIGWCacheAwareRouteConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWCacheAwareRouteConfig::AIGWCacheAwareRouteConfig() :
    m_candidatesHasBeenSet(false)
{
}

CoreInternalOutcome AIGWCacheAwareRouteConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Candidates") && !value["Candidates"].IsNull())
    {
        if (!value["Candidates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWCacheAwareRouteConfig.Candidates` is not array type"));

        const rapidjson::Value &tmpValue = value["Candidates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWCacheAwareRouteCandidate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_candidates.push_back(item);
        }
        m_candidatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWCacheAwareRouteConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_candidatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Candidates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_candidates.begin(); itr != m_candidates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AIGWCacheAwareRouteCandidate> AIGWCacheAwareRouteConfig::GetCandidates() const
{
    return m_candidates;
}

void AIGWCacheAwareRouteConfig::SetCandidates(const vector<AIGWCacheAwareRouteCandidate>& _candidates)
{
    m_candidates = _candidates;
    m_candidatesHasBeenSet = true;
}

bool AIGWCacheAwareRouteConfig::CandidatesHasBeenSet() const
{
    return m_candidatesHasBeenSet;
}

