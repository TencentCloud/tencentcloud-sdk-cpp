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

#include <tencentcloud/tcss/v20201101/model/AffectedWorkloadItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AffectedWorkloadItem::AffectedWorkloadItem() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_workloadTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_verifyInfoHasBeenSet(false)
{
}

CoreInternalOutcome AffectedWorkloadItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedWorkloadItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedWorkloadItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("WorkloadName") && !value["WorkloadName"].IsNull())
    {
        if (!value["WorkloadName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedWorkloadItem.WorkloadName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadName = string(value["WorkloadName"].GetString());
        m_workloadNameHasBeenSet = true;
    }

    if (value.HasMember("WorkloadType") && !value["WorkloadType"].IsNull())
    {
        if (!value["WorkloadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedWorkloadItem.WorkloadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadType = string(value["WorkloadType"].GetString());
        m_workloadTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedWorkloadItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VerifyInfo") && !value["VerifyInfo"].IsNull())
    {
        if (!value["VerifyInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedWorkloadItem.VerifyInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyInfo = string(value["VerifyInfo"].GetString());
        m_verifyInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AffectedWorkloadItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_workloadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadName.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyInfo.c_str(), allocator).Move(), allocator);
    }

}


string AffectedWorkloadItem::GetClusterId() const
{
    return m_clusterId;
}

void AffectedWorkloadItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AffectedWorkloadItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string AffectedWorkloadItem::GetClusterName() const
{
    return m_clusterName;
}

void AffectedWorkloadItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool AffectedWorkloadItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string AffectedWorkloadItem::GetWorkloadName() const
{
    return m_workloadName;
}

void AffectedWorkloadItem::SetWorkloadName(const string& _workloadName)
{
    m_workloadName = _workloadName;
    m_workloadNameHasBeenSet = true;
}

bool AffectedWorkloadItem::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}

string AffectedWorkloadItem::GetWorkloadType() const
{
    return m_workloadType;
}

void AffectedWorkloadItem::SetWorkloadType(const string& _workloadType)
{
    m_workloadType = _workloadType;
    m_workloadTypeHasBeenSet = true;
}

bool AffectedWorkloadItem::WorkloadTypeHasBeenSet() const
{
    return m_workloadTypeHasBeenSet;
}

string AffectedWorkloadItem::GetRegion() const
{
    return m_region;
}

void AffectedWorkloadItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AffectedWorkloadItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AffectedWorkloadItem::GetVerifyInfo() const
{
    return m_verifyInfo;
}

void AffectedWorkloadItem::SetVerifyInfo(const string& _verifyInfo)
{
    m_verifyInfo = _verifyInfo;
    m_verifyInfoHasBeenSet = true;
}

bool AffectedWorkloadItem::VerifyInfoHasBeenSet() const
{
    return m_verifyInfoHasBeenSet;
}

