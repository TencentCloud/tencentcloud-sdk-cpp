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

#include <tencentcloud/tcm/v20210413/model/ExtensiveCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ExtensiveCluster::ExtensiveCluster() :
    m_clusterIdHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome ExtensiveCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensiveCluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtensiveCluster.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtensiveCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


string ExtensiveCluster::GetClusterId() const
{
    return m_clusterId;
}

void ExtensiveCluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ExtensiveCluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ExtensiveCluster::GetZone() const
{
    return m_zone;
}

void ExtensiveCluster::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ExtensiveCluster::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

