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

#include <tencentcloud/emr/v20190103/model/TopologyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

TopologyInfo::TopologyInfo() :
    m_zoneIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_subnetInfoListHasBeenSet(false),
    m_nodeInfoListHasBeenSet(false)
{
}

CoreInternalOutcome TopologyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SubnetInfoList") && !value["SubnetInfoList"].IsNull())
    {
        if (!value["SubnetInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopologyInfo.SubnetInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubnetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subnetInfoList.push_back(item);
        }
        m_subnetInfoListHasBeenSet = true;
    }

    if (value.HasMember("NodeInfoList") && !value["NodeInfoList"].IsNull())
    {
        if (!value["NodeInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopologyInfo.NodeInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShortNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeInfoList.push_back(item);
        }
        m_nodeInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopologyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subnetInfoList.begin(); itr != m_subnetInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfoList.begin(); itr != m_nodeInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t TopologyInfo::GetZoneId() const
{
    return m_zoneId;
}

void TopologyInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool TopologyInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string TopologyInfo::GetZone() const
{
    return m_zone;
}

void TopologyInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool TopologyInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<SubnetInfo> TopologyInfo::GetSubnetInfoList() const
{
    return m_subnetInfoList;
}

void TopologyInfo::SetSubnetInfoList(const vector<SubnetInfo>& _subnetInfoList)
{
    m_subnetInfoList = _subnetInfoList;
    m_subnetInfoListHasBeenSet = true;
}

bool TopologyInfo::SubnetInfoListHasBeenSet() const
{
    return m_subnetInfoListHasBeenSet;
}

vector<ShortNodeInfo> TopologyInfo::GetNodeInfoList() const
{
    return m_nodeInfoList;
}

void TopologyInfo::SetNodeInfoList(const vector<ShortNodeInfo>& _nodeInfoList)
{
    m_nodeInfoList = _nodeInfoList;
    m_nodeInfoListHasBeenSet = true;
}

bool TopologyInfo::NodeInfoListHasBeenSet() const
{
    return m_nodeInfoListHasBeenSet;
}

