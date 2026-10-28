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

#include <tencentcloud/cfg/v20210820/model/InstanceAgent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

InstanceAgent::InstanceAgent() :
    m_instanceAgentItemHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAgent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceAgentItem") && !value["InstanceAgentItem"].IsNull())
    {
        if (!value["InstanceAgentItem"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAgent.InstanceAgentItem` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceAgentItem"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceAgentItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceAgentItem.push_back(item);
        }
        m_instanceAgentItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAgent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceAgentItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAgentItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceAgentItem.begin(); itr != m_instanceAgentItem.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<InstanceAgentItem> InstanceAgent::GetInstanceAgentItem() const
{
    return m_instanceAgentItem;
}

void InstanceAgent::SetInstanceAgentItem(const vector<InstanceAgentItem>& _instanceAgentItem)
{
    m_instanceAgentItem = _instanceAgentItem;
    m_instanceAgentItemHasBeenSet = true;
}

bool InstanceAgent::InstanceAgentItemHasBeenSet() const
{
    return m_instanceAgentItemHasBeenSet;
}

