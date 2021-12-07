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

#include <tencentcloud/tcss/v20201101/model/ClusterCreateComponentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ClusterCreateComponentItem::ClusterCreateComponentItem() :
    m_clusterIdHasBeenSet(false),
    m_clusterRegionHasBeenSet(false)
{
}

CoreInternalOutcome ClusterCreateComponentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCreateComponentItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterRegion") && !value["ClusterRegion"].IsNull())
    {
        if (!value["ClusterRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCreateComponentItem.ClusterRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterRegion = string(value["ClusterRegion"].GetString());
        m_clusterRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterCreateComponentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterRegion.c_str(), allocator).Move(), allocator);
    }

}


string ClusterCreateComponentItem::GetClusterId() const
{
    return m_clusterId;
}

void ClusterCreateComponentItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterCreateComponentItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterCreateComponentItem::GetClusterRegion() const
{
    return m_clusterRegion;
}

void ClusterCreateComponentItem::SetClusterRegion(const string& _clusterRegion)
{
    m_clusterRegion = _clusterRegion;
    m_clusterRegionHasBeenSet = true;
}

bool ClusterCreateComponentItem::ClusterRegionHasBeenSet() const
{
    return m_clusterRegionHasBeenSet;
}

