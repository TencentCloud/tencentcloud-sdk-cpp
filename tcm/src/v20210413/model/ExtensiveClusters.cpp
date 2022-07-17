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

#include <tencentcloud/tcm/v20210413/model/ExtensiveClusters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ExtensiveClusters::ExtensiveClusters() :
    m_l4ClustersHasBeenSet(false),
    m_l7ClustersHasBeenSet(false)
{
}

CoreInternalOutcome ExtensiveClusters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("L4Clusters") && !value["L4Clusters"].IsNull())
    {
        if (!value["L4Clusters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtensiveClusters.L4Clusters` is not array type"));

        const rapidjson::Value &tmpValue = value["L4Clusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExtensiveCluster item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_l4Clusters.push_back(item);
        }
        m_l4ClustersHasBeenSet = true;
    }

    if (value.HasMember("L7Clusters") && !value["L7Clusters"].IsNull())
    {
        if (!value["L7Clusters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtensiveClusters.L7Clusters` is not array type"));

        const rapidjson::Value &tmpValue = value["L7Clusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExtensiveCluster item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_l7Clusters.push_back(item);
        }
        m_l7ClustersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtensiveClusters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_l4ClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4Clusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_l4Clusters.begin(); itr != m_l4Clusters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_l7ClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L7Clusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_l7Clusters.begin(); itr != m_l7Clusters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ExtensiveCluster> ExtensiveClusters::GetL4Clusters() const
{
    return m_l4Clusters;
}

void ExtensiveClusters::SetL4Clusters(const vector<ExtensiveCluster>& _l4Clusters)
{
    m_l4Clusters = _l4Clusters;
    m_l4ClustersHasBeenSet = true;
}

bool ExtensiveClusters::L4ClustersHasBeenSet() const
{
    return m_l4ClustersHasBeenSet;
}

vector<ExtensiveCluster> ExtensiveClusters::GetL7Clusters() const
{
    return m_l7Clusters;
}

void ExtensiveClusters::SetL7Clusters(const vector<ExtensiveCluster>& _l7Clusters)
{
    m_l7Clusters = _l7Clusters;
    m_l7ClustersHasBeenSet = true;
}

bool ExtensiveClusters::L7ClustersHasBeenSet() const
{
    return m_l7ClustersHasBeenSet;
}

