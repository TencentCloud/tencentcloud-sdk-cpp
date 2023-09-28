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

#include <tencentcloud/emr/v20190103/model/ClusterIDToFlowID.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ClusterIDToFlowID::ClusterIDToFlowID() :
    m_clusterIdHasBeenSet(false),
    m_flowIdHasBeenSet(false)
{
}

CoreInternalOutcome ClusterIDToFlowID::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterIDToFlowID.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterIDToFlowID.FlowId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetUint64();
        m_flowIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterIDToFlowID::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

}


string ClusterIDToFlowID::GetClusterId() const
{
    return m_clusterId;
}

void ClusterIDToFlowID::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterIDToFlowID::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t ClusterIDToFlowID::GetFlowId() const
{
    return m_flowId;
}

void ClusterIDToFlowID::SetFlowId(const uint64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool ClusterIDToFlowID::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

