/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeClusterSuperNodeInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeClusterSuperNodeInfoResponse::DescribeClusterSuperNodeInfoResponse() :
    m_regionHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionNameEnHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_assetSyncTimeHasBeenSet(false),
    m_nodeSourceHasBeenSet(false),
    m_subNetNameHasBeenSet(false),
    m_subNetIdHasBeenSet(false),
    m_subNetCIDRHasBeenSet(false),
    m_coresCountHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_kubeletVersionHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterSuperNodeInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("RegionName") && !rsp["RegionName"].IsNull())
    {
        if (!rsp["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(rsp["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (rsp.HasMember("RegionNameEn") && !rsp["RegionNameEn"].IsNull())
    {
        if (!rsp["RegionNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionNameEn = string(rsp["RegionNameEn"].GetString());
        m_regionNameEnHasBeenSet = true;
    }

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (rsp.HasMember("AssetSyncTime") && !rsp["AssetSyncTime"].IsNull())
    {
        if (!rsp["AssetSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSyncTime = string(rsp["AssetSyncTime"].GetString());
        m_assetSyncTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NodeSource") && !rsp["NodeSource"].IsNull())
    {
        if (!rsp["NodeSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSource = string(rsp["NodeSource"].GetString());
        m_nodeSourceHasBeenSet = true;
    }

    if (rsp.HasMember("SubNetName") && !rsp["SubNetName"].IsNull())
    {
        if (!rsp["SubNetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubNetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNetName = string(rsp["SubNetName"].GetString());
        m_subNetNameHasBeenSet = true;
    }

    if (rsp.HasMember("SubNetId") && !rsp["SubNetId"].IsNull())
    {
        if (!rsp["SubNetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubNetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNetId = string(rsp["SubNetId"].GetString());
        m_subNetIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubNetCIDR") && !rsp["SubNetCIDR"].IsNull())
    {
        if (!rsp["SubNetCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubNetCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNetCIDR = string(rsp["SubNetCIDR"].GetString());
        m_subNetCIDRHasBeenSet = true;
    }

    if (rsp.HasMember("CoresCount") && !rsp["CoresCount"].IsNull())
    {
        if (!rsp["CoresCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CoresCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coresCount = rsp["CoresCount"].GetInt64();
        m_coresCountHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterVersion") && !rsp["ClusterVersion"].IsNull())
    {
        if (!rsp["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(rsp["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (rsp.HasMember("KubeletVersion") && !rsp["KubeletVersion"].IsNull())
    {
        if (!rsp["KubeletVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeletVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kubeletVersion = string(rsp["KubeletVersion"].GetString());
        m_kubeletVersionHasBeenSet = true;
    }

    if (rsp.HasMember("AppID") && !rsp["AppID"].IsNull())
    {
        if (!rsp["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = rsp["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("NodeName") && !rsp["NodeName"].IsNull())
    {
        if (!rsp["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(rsp["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (rsp.HasMember("VpcId") && !rsp["VpcId"].IsNull())
    {
        if (!rsp["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(rsp["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterSuperNodeInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_assetSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetSyncTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSource.c_str(), allocator).Move(), allocator);
    }

    if (m_subNetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNetName.c_str(), allocator).Move(), allocator);
    }

    if (m_subNetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subNetCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNetCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNetCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_coresCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coresCount, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_kubeletVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeletVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kubeletVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
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


string DescribeClusterSuperNodeInfoResponse::GetRegion() const
{
    return m_region;
}

bool DescribeClusterSuperNodeInfoResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetRegionName() const
{
    return m_regionName;
}

bool DescribeClusterSuperNodeInfoResponse::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetRegionNameEn() const
{
    return m_regionNameEn;
}

bool DescribeClusterSuperNodeInfoResponse::RegionNameEnHasBeenSet() const
{
    return m_regionNameEnHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetZone() const
{
    return m_zone;
}

bool DescribeClusterSuperNodeInfoResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetAssetSyncTime() const
{
    return m_assetSyncTime;
}

bool DescribeClusterSuperNodeInfoResponse::AssetSyncTimeHasBeenSet() const
{
    return m_assetSyncTimeHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetNodeSource() const
{
    return m_nodeSource;
}

bool DescribeClusterSuperNodeInfoResponse::NodeSourceHasBeenSet() const
{
    return m_nodeSourceHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetSubNetName() const
{
    return m_subNetName;
}

bool DescribeClusterSuperNodeInfoResponse::SubNetNameHasBeenSet() const
{
    return m_subNetNameHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetSubNetId() const
{
    return m_subNetId;
}

bool DescribeClusterSuperNodeInfoResponse::SubNetIdHasBeenSet() const
{
    return m_subNetIdHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetSubNetCIDR() const
{
    return m_subNetCIDR;
}

bool DescribeClusterSuperNodeInfoResponse::SubNetCIDRHasBeenSet() const
{
    return m_subNetCIDRHasBeenSet;
}

int64_t DescribeClusterSuperNodeInfoResponse::GetCoresCount() const
{
    return m_coresCount;
}

bool DescribeClusterSuperNodeInfoResponse::CoresCountHasBeenSet() const
{
    return m_coresCountHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeClusterSuperNodeInfoResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeClusterSuperNodeInfoResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeClusterSuperNodeInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetClusterVersion() const
{
    return m_clusterVersion;
}

bool DescribeClusterSuperNodeInfoResponse::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetKubeletVersion() const
{
    return m_kubeletVersion;
}

bool DescribeClusterSuperNodeInfoResponse::KubeletVersionHasBeenSet() const
{
    return m_kubeletVersionHasBeenSet;
}

uint64_t DescribeClusterSuperNodeInfoResponse::GetAppID() const
{
    return m_appID;
}

bool DescribeClusterSuperNodeInfoResponse::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeClusterSuperNodeInfoResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetNodeName() const
{
    return m_nodeName;
}

bool DescribeClusterSuperNodeInfoResponse::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DescribeClusterSuperNodeInfoResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeClusterSuperNodeInfoResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}


