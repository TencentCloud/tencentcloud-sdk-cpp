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

#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupByReadOnlyInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeReadOnlyGroupByReadOnlyInstanceResponse::DescribeReadOnlyGroupByReadOnlyInstanceResponse() :
    m_readOnlyGroupIdHasBeenSet(false),
    m_readOnlyGroupNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_isOfflineDelayHasBeenSet(false),
    m_readOnlyMaxDelayTimeHasBeenSet(false),
    m_minReadOnlyInGroupHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_masterInstanceIdHasBeenSet(false),
    m_masterRegionIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeReadOnlyGroupByReadOnlyInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ReadOnlyGroupId") && !rsp["ReadOnlyGroupId"].IsNull())
    {
        if (!rsp["ReadOnlyGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyGroupId = string(rsp["ReadOnlyGroupId"].GetString());
        m_readOnlyGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("ReadOnlyGroupName") && !rsp["ReadOnlyGroupName"].IsNull())
    {
        if (!rsp["ReadOnlyGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyGroupName = string(rsp["ReadOnlyGroupName"].GetString());
        m_readOnlyGroupNameHasBeenSet = true;
    }

    if (rsp.HasMember("RegionId") && !rsp["RegionId"].IsNull())
    {
        if (!rsp["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(rsp["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(rsp["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("IsOfflineDelay") && !rsp["IsOfflineDelay"].IsNull())
    {
        if (!rsp["IsOfflineDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsOfflineDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isOfflineDelay = rsp["IsOfflineDelay"].GetInt64();
        m_isOfflineDelayHasBeenSet = true;
    }

    if (rsp.HasMember("ReadOnlyMaxDelayTime") && !rsp["ReadOnlyMaxDelayTime"].IsNull())
    {
        if (!rsp["ReadOnlyMaxDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyMaxDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyMaxDelayTime = rsp["ReadOnlyMaxDelayTime"].GetInt64();
        m_readOnlyMaxDelayTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MinReadOnlyInGroup") && !rsp["MinReadOnlyInGroup"].IsNull())
    {
        if (!rsp["MinReadOnlyInGroup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MinReadOnlyInGroup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minReadOnlyInGroup = rsp["MinReadOnlyInGroup"].GetInt64();
        m_minReadOnlyInGroupHasBeenSet = true;
    }

    if (rsp.HasMember("Vip") && !rsp["Vip"].IsNull())
    {
        if (!rsp["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(rsp["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (rsp.HasMember("Vport") && !rsp["Vport"].IsNull())
    {
        if (!rsp["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = rsp["Vport"].GetInt64();
        m_vportHasBeenSet = true;
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

    if (rsp.HasMember("SubnetId") && !rsp["SubnetId"].IsNull())
    {
        if (!rsp["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(rsp["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (rsp.HasMember("MasterInstanceId") && !rsp["MasterInstanceId"].IsNull())
    {
        if (!rsp["MasterInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MasterInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterInstanceId = string(rsp["MasterInstanceId"].GetString());
        m_masterInstanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("MasterRegionId") && !rsp["MasterRegionId"].IsNull())
    {
        if (!rsp["MasterRegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MasterRegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterRegionId = string(rsp["MasterRegionId"].GetString());
        m_masterRegionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeReadOnlyGroupByReadOnlyInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_readOnlyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readOnlyGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_isOfflineDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOfflineDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOfflineDelay, allocator);
    }

    if (m_readOnlyMaxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyMaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyMaxDelayTime, allocator);
    }

    if (m_minReadOnlyInGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReadOnlyInGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReadOnlyInGroup, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_masterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_masterRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterRegionId.c_str(), allocator).Move(), allocator);
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


string DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}

string DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetReadOnlyGroupName() const
{
    return m_readOnlyGroupName;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::ReadOnlyGroupNameHasBeenSet() const
{
    return m_readOnlyGroupNameHasBeenSet;
}

string DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetRegionId() const
{
    return m_regionId;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetIsOfflineDelay() const
{
    return m_isOfflineDelay;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::IsOfflineDelayHasBeenSet() const
{
    return m_isOfflineDelayHasBeenSet;
}

int64_t DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetReadOnlyMaxDelayTime() const
{
    return m_readOnlyMaxDelayTime;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::ReadOnlyMaxDelayTimeHasBeenSet() const
{
    return m_readOnlyMaxDelayTimeHasBeenSet;
}

int64_t DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetMinReadOnlyInGroup() const
{
    return m_minReadOnlyInGroup;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::MinReadOnlyInGroupHasBeenSet() const
{
    return m_minReadOnlyInGroupHasBeenSet;
}

string DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetVip() const
{
    return m_vip;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetVport() const
{
    return m_vport;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetMasterInstanceId() const
{
    return m_masterInstanceId;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::MasterInstanceIdHasBeenSet() const
{
    return m_masterInstanceIdHasBeenSet;
}

string DescribeReadOnlyGroupByReadOnlyInstanceResponse::GetMasterRegionId() const
{
    return m_masterRegionId;
}

bool DescribeReadOnlyGroupByReadOnlyInstanceResponse::MasterRegionIdHasBeenSet() const
{
    return m_masterRegionIdHasBeenSet;
}


