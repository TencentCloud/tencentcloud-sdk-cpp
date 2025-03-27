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

#include <tencentcloud/thpc/v20230321/model/ClusterOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

ClusterOverview::ClusterOverview() :
    m_clusterIdHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_schedulerTypeHasBeenSet(false),
    m_schedulerVersionHasBeenSet(false),
    m_computeNodeCountHasBeenSet(false),
    m_computeNodeSetHasBeenSet(false),
    m_managerNodeCountHasBeenSet(false),
    m_managerNodeSetHasBeenSet(false),
    m_loginNodeSetHasBeenSet(false),
    m_loginNodeCountHasBeenSet(false),
    m_autoScalingTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SchedulerType") && !value["SchedulerType"].IsNull())
    {
        if (!value["SchedulerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.SchedulerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerType = string(value["SchedulerType"].GetString());
        m_schedulerTypeHasBeenSet = true;
    }

    if (value.HasMember("SchedulerVersion") && !value["SchedulerVersion"].IsNull())
    {
        if (!value["SchedulerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.SchedulerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerVersion = string(value["SchedulerVersion"].GetString());
        m_schedulerVersionHasBeenSet = true;
    }

    if (value.HasMember("ComputeNodeCount") && !value["ComputeNodeCount"].IsNull())
    {
        if (!value["ComputeNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.ComputeNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_computeNodeCount = value["ComputeNodeCount"].GetInt64();
        m_computeNodeCountHasBeenSet = true;
    }

    if (value.HasMember("ComputeNodeSet") && !value["ComputeNodeSet"].IsNull())
    {
        if (!value["ComputeNodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.ComputeNodeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ComputeNodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComputeNodeOverview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_computeNodeSet.push_back(item);
        }
        m_computeNodeSetHasBeenSet = true;
    }

    if (value.HasMember("ManagerNodeCount") && !value["ManagerNodeCount"].IsNull())
    {
        if (!value["ManagerNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.ManagerNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_managerNodeCount = value["ManagerNodeCount"].GetInt64();
        m_managerNodeCountHasBeenSet = true;
    }

    if (value.HasMember("ManagerNodeSet") && !value["ManagerNodeSet"].IsNull())
    {
        if (!value["ManagerNodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.ManagerNodeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagerNodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ManagerNodeOverview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_managerNodeSet.push_back(item);
        }
        m_managerNodeSetHasBeenSet = true;
    }

    if (value.HasMember("LoginNodeSet") && !value["LoginNodeSet"].IsNull())
    {
        if (!value["LoginNodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.LoginNodeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LoginNodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LoginNodeOverview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_loginNodeSet.push_back(item);
        }
        m_loginNodeSetHasBeenSet = true;
    }

    if (value.HasMember("LoginNodeCount") && !value["LoginNodeCount"].IsNull())
    {
        if (!value["LoginNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.LoginNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginNodeCount = value["LoginNodeCount"].GetInt64();
        m_loginNodeCountHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingType") && !value["AutoScalingType"].IsNull())
    {
        if (!value["AutoScalingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.AutoScalingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingType = string(value["AutoScalingType"].GetString());
        m_autoScalingTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterOverview.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerType.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_computeNodeCount, allocator);
    }

    if (m_computeNodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_computeNodeSet.begin(); itr != m_computeNodeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_managerNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_managerNodeCount, allocator);
    }

    if (m_managerNodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerNodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_managerNodeSet.begin(); itr != m_managerNodeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_loginNodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginNodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loginNodeSet.begin(); itr != m_loginNodeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_loginNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginNodeCount, allocator);
    }

    if (m_autoScalingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

}


string ClusterOverview::GetClusterId() const
{
    return m_clusterId;
}

void ClusterOverview::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterOverview::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterOverview::GetClusterStatus() const
{
    return m_clusterStatus;
}

void ClusterOverview::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool ClusterOverview::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string ClusterOverview::GetClusterName() const
{
    return m_clusterName;
}

void ClusterOverview::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterOverview::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

Placement ClusterOverview::GetPlacement() const
{
    return m_placement;
}

void ClusterOverview::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool ClusterOverview::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string ClusterOverview::GetCreateTime() const
{
    return m_createTime;
}

void ClusterOverview::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterOverview::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterOverview::GetSchedulerType() const
{
    return m_schedulerType;
}

void ClusterOverview::SetSchedulerType(const string& _schedulerType)
{
    m_schedulerType = _schedulerType;
    m_schedulerTypeHasBeenSet = true;
}

bool ClusterOverview::SchedulerTypeHasBeenSet() const
{
    return m_schedulerTypeHasBeenSet;
}

string ClusterOverview::GetSchedulerVersion() const
{
    return m_schedulerVersion;
}

void ClusterOverview::SetSchedulerVersion(const string& _schedulerVersion)
{
    m_schedulerVersion = _schedulerVersion;
    m_schedulerVersionHasBeenSet = true;
}

bool ClusterOverview::SchedulerVersionHasBeenSet() const
{
    return m_schedulerVersionHasBeenSet;
}

int64_t ClusterOverview::GetComputeNodeCount() const
{
    return m_computeNodeCount;
}

void ClusterOverview::SetComputeNodeCount(const int64_t& _computeNodeCount)
{
    m_computeNodeCount = _computeNodeCount;
    m_computeNodeCountHasBeenSet = true;
}

bool ClusterOverview::ComputeNodeCountHasBeenSet() const
{
    return m_computeNodeCountHasBeenSet;
}

vector<ComputeNodeOverview> ClusterOverview::GetComputeNodeSet() const
{
    return m_computeNodeSet;
}

void ClusterOverview::SetComputeNodeSet(const vector<ComputeNodeOverview>& _computeNodeSet)
{
    m_computeNodeSet = _computeNodeSet;
    m_computeNodeSetHasBeenSet = true;
}

bool ClusterOverview::ComputeNodeSetHasBeenSet() const
{
    return m_computeNodeSetHasBeenSet;
}

int64_t ClusterOverview::GetManagerNodeCount() const
{
    return m_managerNodeCount;
}

void ClusterOverview::SetManagerNodeCount(const int64_t& _managerNodeCount)
{
    m_managerNodeCount = _managerNodeCount;
    m_managerNodeCountHasBeenSet = true;
}

bool ClusterOverview::ManagerNodeCountHasBeenSet() const
{
    return m_managerNodeCountHasBeenSet;
}

vector<ManagerNodeOverview> ClusterOverview::GetManagerNodeSet() const
{
    return m_managerNodeSet;
}

void ClusterOverview::SetManagerNodeSet(const vector<ManagerNodeOverview>& _managerNodeSet)
{
    m_managerNodeSet = _managerNodeSet;
    m_managerNodeSetHasBeenSet = true;
}

bool ClusterOverview::ManagerNodeSetHasBeenSet() const
{
    return m_managerNodeSetHasBeenSet;
}

vector<LoginNodeOverview> ClusterOverview::GetLoginNodeSet() const
{
    return m_loginNodeSet;
}

void ClusterOverview::SetLoginNodeSet(const vector<LoginNodeOverview>& _loginNodeSet)
{
    m_loginNodeSet = _loginNodeSet;
    m_loginNodeSetHasBeenSet = true;
}

bool ClusterOverview::LoginNodeSetHasBeenSet() const
{
    return m_loginNodeSetHasBeenSet;
}

int64_t ClusterOverview::GetLoginNodeCount() const
{
    return m_loginNodeCount;
}

void ClusterOverview::SetLoginNodeCount(const int64_t& _loginNodeCount)
{
    m_loginNodeCount = _loginNodeCount;
    m_loginNodeCountHasBeenSet = true;
}

bool ClusterOverview::LoginNodeCountHasBeenSet() const
{
    return m_loginNodeCountHasBeenSet;
}

string ClusterOverview::GetAutoScalingType() const
{
    return m_autoScalingType;
}

void ClusterOverview::SetAutoScalingType(const string& _autoScalingType)
{
    m_autoScalingType = _autoScalingType;
    m_autoScalingTypeHasBeenSet = true;
}

bool ClusterOverview::AutoScalingTypeHasBeenSet() const
{
    return m_autoScalingTypeHasBeenSet;
}

string ClusterOverview::GetVpcId() const
{
    return m_vpcId;
}

void ClusterOverview::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ClusterOverview::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ClusterOverview::GetClusterType() const
{
    return m_clusterType;
}

void ClusterOverview::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ClusterOverview::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

