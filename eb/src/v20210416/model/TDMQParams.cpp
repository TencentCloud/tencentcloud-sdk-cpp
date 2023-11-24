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

#include <tencentcloud/eb/v20210416/model/TDMQParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

TDMQParams::TDMQParams() :
    m_clusterTypeHasBeenSet(false),
    m_clusterEndPointHasBeenSet(false)
{
}

CoreInternalOutcome TDMQParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDMQParams.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterEndPoint") && !value["ClusterEndPoint"].IsNull())
    {
        if (!value["ClusterEndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDMQParams.ClusterEndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterEndPoint = string(value["ClusterEndPoint"].GetString());
        m_clusterEndPointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TDMQParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterEndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterEndPoint.c_str(), allocator).Move(), allocator);
    }

}


string TDMQParams::GetClusterType() const
{
    return m_clusterType;
}

void TDMQParams::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool TDMQParams::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string TDMQParams::GetClusterEndPoint() const
{
    return m_clusterEndPoint;
}

void TDMQParams::SetClusterEndPoint(const string& _clusterEndPoint)
{
    m_clusterEndPoint = _clusterEndPoint;
    m_clusterEndPointHasBeenSet = true;
}

bool TDMQParams::ClusterEndPointHasBeenSet() const
{
    return m_clusterEndPointHasBeenSet;
}

