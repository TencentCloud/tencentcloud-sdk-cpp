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

#include <tencentcloud/emr/v20190103/model/NodeSelector.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeSelector::NodeSelector() :
    m_nodeSelectorTermsHasBeenSet(false)
{
}

CoreInternalOutcome NodeSelector::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeSelectorTerms") && !value["NodeSelectorTerms"].IsNull())
    {
        if (!value["NodeSelectorTerms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeSelector.NodeSelectorTerms` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeSelectorTerms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeSelectorTerm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeSelectorTerms.push_back(item);
        }
        m_nodeSelectorTermsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeSelector::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeSelectorTermsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSelectorTerms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeSelectorTerms.begin(); itr != m_nodeSelectorTerms.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<NodeSelectorTerm> NodeSelector::GetNodeSelectorTerms() const
{
    return m_nodeSelectorTerms;
}

void NodeSelector::SetNodeSelectorTerms(const vector<NodeSelectorTerm>& _nodeSelectorTerms)
{
    m_nodeSelectorTerms = _nodeSelectorTerms;
    m_nodeSelectorTermsHasBeenSet = true;
}

bool NodeSelector::NodeSelectorTermsHasBeenSet() const
{
    return m_nodeSelectorTermsHasBeenSet;
}

