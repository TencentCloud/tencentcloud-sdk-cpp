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

#include <tencentcloud/emr/v20190103/model/NodeAffinity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeAffinity::NodeAffinity() :
    m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet(false),
    m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet(false)
{
}

CoreInternalOutcome NodeAffinity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequiredDuringSchedulingIgnoredDuringExecution") && !value["RequiredDuringSchedulingIgnoredDuringExecution"].IsNull())
    {
        if (!value["RequiredDuringSchedulingIgnoredDuringExecution"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeAffinity.RequiredDuringSchedulingIgnoredDuringExecution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requiredDuringSchedulingIgnoredDuringExecution.Deserialize(value["RequiredDuringSchedulingIgnoredDuringExecution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet = true;
    }

    if (value.HasMember("PreferredDuringSchedulingIgnoredDuringExecution") && !value["PreferredDuringSchedulingIgnoredDuringExecution"].IsNull())
    {
        if (!value["PreferredDuringSchedulingIgnoredDuringExecution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeAffinity.PreferredDuringSchedulingIgnoredDuringExecution` is not array type"));

        const rapidjson::Value &tmpValue = value["PreferredDuringSchedulingIgnoredDuringExecution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PreferredSchedulingTerm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_preferredDuringSchedulingIgnoredDuringExecution.push_back(item);
        }
        m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeAffinity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequiredDuringSchedulingIgnoredDuringExecution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requiredDuringSchedulingIgnoredDuringExecution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreferredDuringSchedulingIgnoredDuringExecution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_preferredDuringSchedulingIgnoredDuringExecution.begin(); itr != m_preferredDuringSchedulingIgnoredDuringExecution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


NodeSelector NodeAffinity::GetRequiredDuringSchedulingIgnoredDuringExecution() const
{
    return m_requiredDuringSchedulingIgnoredDuringExecution;
}

void NodeAffinity::SetRequiredDuringSchedulingIgnoredDuringExecution(const NodeSelector& _requiredDuringSchedulingIgnoredDuringExecution)
{
    m_requiredDuringSchedulingIgnoredDuringExecution = _requiredDuringSchedulingIgnoredDuringExecution;
    m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet = true;
}

bool NodeAffinity::RequiredDuringSchedulingIgnoredDuringExecutionHasBeenSet() const
{
    return m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet;
}

vector<PreferredSchedulingTerm> NodeAffinity::GetPreferredDuringSchedulingIgnoredDuringExecution() const
{
    return m_preferredDuringSchedulingIgnoredDuringExecution;
}

void NodeAffinity::SetPreferredDuringSchedulingIgnoredDuringExecution(const vector<PreferredSchedulingTerm>& _preferredDuringSchedulingIgnoredDuringExecution)
{
    m_preferredDuringSchedulingIgnoredDuringExecution = _preferredDuringSchedulingIgnoredDuringExecution;
    m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet = true;
}

bool NodeAffinity::PreferredDuringSchedulingIgnoredDuringExecutionHasBeenSet() const
{
    return m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet;
}

