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

#include <tencentcloud/lke/v20231130/model/AgentKnowledgeFilterTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentKnowledgeFilterTag::AgentKnowledgeFilterTag() :
    m_operatorHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome AgentKnowledgeFilterTag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeFilterTag.Operator` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operator = value["Operator"].GetUint64();
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentKnowledgeFilterTag.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentKnowledgeAttrLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentKnowledgeFilterTag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operator, allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t AgentKnowledgeFilterTag::GetOperator() const
{
    return m_operator;
}

void AgentKnowledgeFilterTag::SetOperator(const uint64_t& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AgentKnowledgeFilterTag::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<AgentKnowledgeAttrLabel> AgentKnowledgeFilterTag::GetLabels() const
{
    return m_labels;
}

void AgentKnowledgeFilterTag::SetLabels(const vector<AgentKnowledgeAttrLabel>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool AgentKnowledgeFilterTag::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

