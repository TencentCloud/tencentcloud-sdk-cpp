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

#include <tencentcloud/adp/v20260520/model/PluginUsageSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PluginUsageSummary::PluginUsageSummary() :
    m_callCountHasBeenSet(false),
    m_resourceConsumptionListHasBeenSet(false)
{
}

CoreInternalOutcome PluginUsageSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallCount") && !value["CallCount"].IsNull())
    {
        if (!value["CallCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PluginUsageSummary.CallCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_callCount = value["CallCount"].GetDouble();
        m_callCountHasBeenSet = true;
    }

    if (value.HasMember("ResourceConsumptionList") && !value["ResourceConsumptionList"].IsNull())
    {
        if (!value["ResourceConsumptionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PluginUsageSummary.ResourceConsumptionList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceConsumptionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceConsumption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceConsumptionList.push_back(item);
        }
        m_resourceConsumptionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginUsageSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callCount, allocator);
    }

    if (m_resourceConsumptionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConsumptionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceConsumptionList.begin(); itr != m_resourceConsumptionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double PluginUsageSummary::GetCallCount() const
{
    return m_callCount;
}

void PluginUsageSummary::SetCallCount(const double& _callCount)
{
    m_callCount = _callCount;
    m_callCountHasBeenSet = true;
}

bool PluginUsageSummary::CallCountHasBeenSet() const
{
    return m_callCountHasBeenSet;
}

vector<ResourceConsumption> PluginUsageSummary::GetResourceConsumptionList() const
{
    return m_resourceConsumptionList;
}

void PluginUsageSummary::SetResourceConsumptionList(const vector<ResourceConsumption>& _resourceConsumptionList)
{
    m_resourceConsumptionList = _resourceConsumptionList;
    m_resourceConsumptionListHasBeenSet = true;
}

bool PluginUsageSummary::ResourceConsumptionListHasBeenSet() const
{
    return m_resourceConsumptionListHasBeenSet;
}

