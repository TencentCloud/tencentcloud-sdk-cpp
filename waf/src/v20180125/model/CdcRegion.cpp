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

#include <tencentcloud/waf/v20180125/model/CdcRegion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CdcRegion::CdcRegion() :
    m_regionHasBeenSet(false),
    m_clustersHasBeenSet(false)
{
}

CoreInternalOutcome CdcRegion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdcRegion.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Clusters") && !value["Clusters"].IsNull())
    {
        if (!value["Clusters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdcRegion.Clusters` is not array type"));

        const rapidjson::Value &tmpValue = value["Clusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdcCluster item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusters.push_back(item);
        }
        m_clustersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdcRegion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_clustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusters.begin(); itr != m_clusters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CdcRegion::GetRegion() const
{
    return m_region;
}

void CdcRegion::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CdcRegion::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<CdcCluster> CdcRegion::GetClusters() const
{
    return m_clusters;
}

void CdcRegion::SetClusters(const vector<CdcCluster>& _clusters)
{
    m_clusters = _clusters;
    m_clustersHasBeenSet = true;
}

bool CdcRegion::ClustersHasBeenSet() const
{
    return m_clustersHasBeenSet;
}

