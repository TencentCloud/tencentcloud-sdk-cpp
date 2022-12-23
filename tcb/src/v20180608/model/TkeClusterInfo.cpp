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

#include <tencentcloud/tcb/v20180608/model/TkeClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

TkeClusterInfo::TkeClusterInfo() :
    m_clusterIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_versionClbSubnetIdHasBeenSet(false)
{
}

CoreInternalOutcome TkeClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeClusterInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeClusterInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VersionClbSubnetId") && !value["VersionClbSubnetId"].IsNull())
    {
        if (!value["VersionClbSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TkeClusterInfo.VersionClbSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionClbSubnetId = string(value["VersionClbSubnetId"].GetString());
        m_versionClbSubnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TkeClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionClbSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionClbSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionClbSubnetId.c_str(), allocator).Move(), allocator);
    }

}


string TkeClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void TkeClusterInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TkeClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TkeClusterInfo::GetVpcId() const
{
    return m_vpcId;
}

void TkeClusterInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TkeClusterInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string TkeClusterInfo::GetVersionClbSubnetId() const
{
    return m_versionClbSubnetId;
}

void TkeClusterInfo::SetVersionClbSubnetId(const string& _versionClbSubnetId)
{
    m_versionClbSubnetId = _versionClbSubnetId;
    m_versionClbSubnetIdHasBeenSet = true;
}

bool TkeClusterInfo::VersionClbSubnetIdHasBeenSet() const
{
    return m_versionClbSubnetIdHasBeenSet;
}

