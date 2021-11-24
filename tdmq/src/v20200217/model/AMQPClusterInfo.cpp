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

#include <tencentcloud/tdmq/v20200217/model/AMQPClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

AMQPClusterInfo::AMQPClusterInfo() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_publicEndPointHasBeenSet(false),
    m_vpcEndPointHasBeenSet(false)
{
}

CoreInternalOutcome AMQPClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PublicEndPoint") && !value["PublicEndPoint"].IsNull())
    {
        if (!value["PublicEndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterInfo.PublicEndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicEndPoint = string(value["PublicEndPoint"].GetString());
        m_publicEndPointHasBeenSet = true;
    }

    if (value.HasMember("VpcEndPoint") && !value["VpcEndPoint"].IsNull())
    {
        if (!value["VpcEndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterInfo.VpcEndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcEndPoint = string(value["VpcEndPoint"].GetString());
        m_vpcEndPointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AMQPClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_publicEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicEndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicEndPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcEndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcEndPoint.c_str(), allocator).Move(), allocator);
    }

}


string AMQPClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void AMQPClusterInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AMQPClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string AMQPClusterInfo::GetClusterName() const
{
    return m_clusterName;
}

void AMQPClusterInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool AMQPClusterInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string AMQPClusterInfo::GetRegion() const
{
    return m_region;
}

void AMQPClusterInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AMQPClusterInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t AMQPClusterInfo::GetCreateTime() const
{
    return m_createTime;
}

void AMQPClusterInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AMQPClusterInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AMQPClusterInfo::GetRemark() const
{
    return m_remark;
}

void AMQPClusterInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AMQPClusterInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AMQPClusterInfo::GetPublicEndPoint() const
{
    return m_publicEndPoint;
}

void AMQPClusterInfo::SetPublicEndPoint(const string& _publicEndPoint)
{
    m_publicEndPoint = _publicEndPoint;
    m_publicEndPointHasBeenSet = true;
}

bool AMQPClusterInfo::PublicEndPointHasBeenSet() const
{
    return m_publicEndPointHasBeenSet;
}

string AMQPClusterInfo::GetVpcEndPoint() const
{
    return m_vpcEndPoint;
}

void AMQPClusterInfo::SetVpcEndPoint(const string& _vpcEndPoint)
{
    m_vpcEndPoint = _vpcEndPoint;
    m_vpcEndPointHasBeenSet = true;
}

bool AMQPClusterInfo::VpcEndPointHasBeenSet() const
{
    return m_vpcEndPointHasBeenSet;
}

