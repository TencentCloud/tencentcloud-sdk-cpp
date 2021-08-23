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

#include <tencentcloud/iai/v20200303/model/GroupCandidate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

GroupCandidate::GroupCandidate() :
    m_groupIdHasBeenSet(false),
    m_candidatesHasBeenSet(false)
{
}

CoreInternalOutcome GroupCandidate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupCandidate.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Candidates") && !value["Candidates"].IsNull())
    {
        if (!value["Candidates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupCandidate.Candidates` is not array type"));

        const rapidjson::Value &tmpValue = value["Candidates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Candidate item;
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

void GroupCandidate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

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


string GroupCandidate::GetGroupId() const
{
    return m_groupId;
}

void GroupCandidate::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GroupCandidate::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<Candidate> GroupCandidate::GetCandidates() const
{
    return m_candidates;
}

void GroupCandidate::SetCandidates(const vector<Candidate>& _candidates)
{
    m_candidates = _candidates;
    m_candidatesHasBeenSet = true;
}

bool GroupCandidate::CandidatesHasBeenSet() const
{
    return m_candidatesHasBeenSet;
}

