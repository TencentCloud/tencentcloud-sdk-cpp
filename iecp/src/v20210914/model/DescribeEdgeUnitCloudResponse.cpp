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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitCloudResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeUnitCloudResponse::DescribeEdgeUnitCloudResponse() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_liveTimeHasBeenSet(false),
    m_masterStatusHasBeenSet(false),
    m_k8sVersionHasBeenSet(false),
    m_podCIDRHasBeenSet(false),
    m_serviceCIDRHasBeenSet(false),
    m_aPIServerAddressHasBeenSet(false),
    m_aPIServerExposeAddressHasBeenSet(false),
    m_uIDHasBeenSet(false),
    m_unitIDHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_nodeHasBeenSet(false),
    m_workloadHasBeenSet(false),
    m_gridHasBeenSet(false),
    m_subDeviceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEdgeUnitCloudResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LiveTime") && !rsp["LiveTime"].IsNull())
    {
        if (!rsp["LiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveTime = string(rsp["LiveTime"].GetString());
        m_liveTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MasterStatus") && !rsp["MasterStatus"].IsNull())
    {
        if (!rsp["MasterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MasterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterStatus = string(rsp["MasterStatus"].GetString());
        m_masterStatusHasBeenSet = true;
    }

    if (rsp.HasMember("K8sVersion") && !rsp["K8sVersion"].IsNull())
    {
        if (!rsp["K8sVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8sVersion = string(rsp["K8sVersion"].GetString());
        m_k8sVersionHasBeenSet = true;
    }

    if (rsp.HasMember("PodCIDR") && !rsp["PodCIDR"].IsNull())
    {
        if (!rsp["PodCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podCIDR = string(rsp["PodCIDR"].GetString());
        m_podCIDRHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceCIDR") && !rsp["ServiceCIDR"].IsNull())
    {
        if (!rsp["ServiceCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCIDR = string(rsp["ServiceCIDR"].GetString());
        m_serviceCIDRHasBeenSet = true;
    }

    if (rsp.HasMember("APIServerAddress") && !rsp["APIServerAddress"].IsNull())
    {
        if (!rsp["APIServerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIServerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIServerAddress = string(rsp["APIServerAddress"].GetString());
        m_aPIServerAddressHasBeenSet = true;
    }

    if (rsp.HasMember("APIServerExposeAddress") && !rsp["APIServerExposeAddress"].IsNull())
    {
        if (!rsp["APIServerExposeAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIServerExposeAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIServerExposeAddress = string(rsp["APIServerExposeAddress"].GetString());
        m_aPIServerExposeAddressHasBeenSet = true;
    }

    if (rsp.HasMember("UID") && !rsp["UID"].IsNull())
    {
        if (!rsp["UID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uID = string(rsp["UID"].GetString());
        m_uIDHasBeenSet = true;
    }

    if (rsp.HasMember("UnitID") && !rsp["UnitID"].IsNull())
    {
        if (!rsp["UnitID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnitID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unitID = rsp["UnitID"].GetUint64();
        m_unitIDHasBeenSet = true;
    }

    if (rsp.HasMember("Cluster") && !rsp["Cluster"].IsNull())
    {
        if (!rsp["Cluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(rsp["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (rsp.HasMember("Node") && !rsp["Node"].IsNull())
    {
        if (!rsp["Node"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Node` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_node.Deserialize(rsp["Node"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeHasBeenSet = true;
    }

    if (rsp.HasMember("Workload") && !rsp["Workload"].IsNull())
    {
        if (!rsp["Workload"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Workload` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workload.Deserialize(rsp["Workload"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workloadHasBeenSet = true;
    }

    if (rsp.HasMember("Grid") && !rsp["Grid"].IsNull())
    {
        if (!rsp["Grid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Grid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_grid.Deserialize(rsp["Grid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gridHasBeenSet = true;
    }

    if (rsp.HasMember("SubDevice") && !rsp["SubDevice"].IsNull())
    {
        if (!rsp["SubDevice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubDevice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subDevice.Deserialize(rsp["SubDevice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subDeviceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEdgeUnitCloudResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_liveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_masterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_k8sVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8sVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_podCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIServerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIServerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIServerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIServerExposeAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIServerExposeAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIServerExposeAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_uIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uID.c_str(), allocator).Move(), allocator);
    }

    if (m_unitIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitID, allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Node";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_node.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workload.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gridHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_grid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subDevice.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeEdgeUnitCloudResponse::GetName() const
{
    return m_name;
}

bool DescribeEdgeUnitCloudResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetDescription() const
{
    return m_description;
}

bool DescribeEdgeUnitCloudResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeEdgeUnitCloudResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeEdgeUnitCloudResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetLiveTime() const
{
    return m_liveTime;
}

bool DescribeEdgeUnitCloudResponse::LiveTimeHasBeenSet() const
{
    return m_liveTimeHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetMasterStatus() const
{
    return m_masterStatus;
}

bool DescribeEdgeUnitCloudResponse::MasterStatusHasBeenSet() const
{
    return m_masterStatusHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetK8sVersion() const
{
    return m_k8sVersion;
}

bool DescribeEdgeUnitCloudResponse::K8sVersionHasBeenSet() const
{
    return m_k8sVersionHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetPodCIDR() const
{
    return m_podCIDR;
}

bool DescribeEdgeUnitCloudResponse::PodCIDRHasBeenSet() const
{
    return m_podCIDRHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetServiceCIDR() const
{
    return m_serviceCIDR;
}

bool DescribeEdgeUnitCloudResponse::ServiceCIDRHasBeenSet() const
{
    return m_serviceCIDRHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetAPIServerAddress() const
{
    return m_aPIServerAddress;
}

bool DescribeEdgeUnitCloudResponse::APIServerAddressHasBeenSet() const
{
    return m_aPIServerAddressHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetAPIServerExposeAddress() const
{
    return m_aPIServerExposeAddress;
}

bool DescribeEdgeUnitCloudResponse::APIServerExposeAddressHasBeenSet() const
{
    return m_aPIServerExposeAddressHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetUID() const
{
    return m_uID;
}

bool DescribeEdgeUnitCloudResponse::UIDHasBeenSet() const
{
    return m_uIDHasBeenSet;
}

uint64_t DescribeEdgeUnitCloudResponse::GetUnitID() const
{
    return m_unitID;
}

bool DescribeEdgeUnitCloudResponse::UnitIDHasBeenSet() const
{
    return m_unitIDHasBeenSet;
}

string DescribeEdgeUnitCloudResponse::GetCluster() const
{
    return m_cluster;
}

bool DescribeEdgeUnitCloudResponse::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

EdgeUnitStatisticItem DescribeEdgeUnitCloudResponse::GetNode() const
{
    return m_node;
}

bool DescribeEdgeUnitCloudResponse::NodeHasBeenSet() const
{
    return m_nodeHasBeenSet;
}

EdgeUnitStatisticItem DescribeEdgeUnitCloudResponse::GetWorkload() const
{
    return m_workload;
}

bool DescribeEdgeUnitCloudResponse::WorkloadHasBeenSet() const
{
    return m_workloadHasBeenSet;
}

EdgeUnitStatisticItem DescribeEdgeUnitCloudResponse::GetGrid() const
{
    return m_grid;
}

bool DescribeEdgeUnitCloudResponse::GridHasBeenSet() const
{
    return m_gridHasBeenSet;
}

EdgeUnitStatisticItem DescribeEdgeUnitCloudResponse::GetSubDevice() const
{
    return m_subDevice;
}

bool DescribeEdgeUnitCloudResponse::SubDeviceHasBeenSet() const
{
    return m_subDeviceHasBeenSet;
}


