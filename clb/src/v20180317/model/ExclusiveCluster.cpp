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

#include <tencentcloud/clb/v20180317/model/ExclusiveCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ExclusiveCluster::ExclusiveCluster() :
    m_l4ClustersHasBeenSet(false),
    m_l7ClustersHasBeenSet(false),
    m_classicalClusterHasBeenSet(false)
{
}

CoreInternalOutcome ExclusiveCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("L4Clusters") && !value["L4Clusters"].IsNull())
    {
        if (!value["L4Clusters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExclusiveCluster.L4Clusters` is not array type"));

        const rapidjson::Value &tmpValue = value["L4Clusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterItem item;
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
            return CoreInternalOutcome(Core::Error("response `ExclusiveCluster.L7Clusters` is not array type"));

        const rapidjson::Value &tmpValue = value["L7Clusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterItem item;
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

    if (value.HasMember("ClassicalCluster") && !value["ClassicalCluster"].IsNull())
    {
        if (!value["ClassicalCluster"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveCluster.ClassicalCluster` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classicalCluster.Deserialize(value["ClassicalCluster"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classicalClusterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExclusiveCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_classicalClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassicalCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classicalCluster.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<ClusterItem> ExclusiveCluster::GetL4Clusters() const
{
    return m_l4Clusters;
}

void ExclusiveCluster::SetL4Clusters(const vector<ClusterItem>& _l4Clusters)
{
    m_l4Clusters = _l4Clusters;
    m_l4ClustersHasBeenSet = true;
}

bool ExclusiveCluster::L4ClustersHasBeenSet() const
{
    return m_l4ClustersHasBeenSet;
}

vector<ClusterItem> ExclusiveCluster::GetL7Clusters() const
{
    return m_l7Clusters;
}

void ExclusiveCluster::SetL7Clusters(const vector<ClusterItem>& _l7Clusters)
{
    m_l7Clusters = _l7Clusters;
    m_l7ClustersHasBeenSet = true;
}

bool ExclusiveCluster::L7ClustersHasBeenSet() const
{
    return m_l7ClustersHasBeenSet;
}

ClusterItem ExclusiveCluster::GetClassicalCluster() const
{
    return m_classicalCluster;
}

void ExclusiveCluster::SetClassicalCluster(const ClusterItem& _classicalCluster)
{
    m_classicalCluster = _classicalCluster;
    m_classicalClusterHasBeenSet = true;
}

bool ExclusiveCluster::ClassicalClusterHasBeenSet() const
{
    return m_classicalClusterHasBeenSet;
}

