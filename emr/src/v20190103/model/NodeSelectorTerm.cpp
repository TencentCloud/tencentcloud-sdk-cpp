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

#include <tencentcloud/emr/v20190103/model/NodeSelectorTerm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeSelectorTerm::NodeSelectorTerm() :
    m_matchExpressionsHasBeenSet(false)
{
}

CoreInternalOutcome NodeSelectorTerm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchExpressions") && !value["MatchExpressions"].IsNull())
    {
        if (!value["MatchExpressions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeSelectorTerm.MatchExpressions` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchExpressions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSelectorRequirement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matchExpressions.push_back(item);
        }
        m_matchExpressionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeSelectorTerm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchExpressionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchExpressions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchExpressions.begin(); itr != m_matchExpressions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<NodeSelectorRequirement> NodeSelectorTerm::GetMatchExpressions() const
{
    return m_matchExpressions;
}

void NodeSelectorTerm::SetMatchExpressions(const vector<NodeSelectorRequirement>& _matchExpressions)
{
    m_matchExpressions = _matchExpressions;
    m_matchExpressionsHasBeenSet = true;
}

bool NodeSelectorTerm::MatchExpressionsHasBeenSet() const
{
    return m_matchExpressionsHasBeenSet;
}

