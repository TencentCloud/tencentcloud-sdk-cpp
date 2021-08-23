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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunResourceForExtendResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseRunResourceForExtendResponse::DescribeCloudBaseRunResourceForExtendResponse() :
    m_clusterStatusHasBeenSet(false),
    m_virtualClusterIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_subnetIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudBaseRunResourceForExtendResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterStatus") && !rsp["ClusterStatus"].IsNull())
    {
        if (!rsp["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(rsp["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (rsp.HasMember("VirtualClusterId") && !rsp["VirtualClusterId"].IsNull())
    {
        if (!rsp["VirtualClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualClusterId = string(rsp["VirtualClusterId"].GetString());
        m_virtualClusterIdHasBeenSet = true;
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

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetIds") && !rsp["SubnetIds"].IsNull())
    {
        if (!rsp["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudBaseRunVpcSubnet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subnetIds.push_back(item);
        }
        m_subnetIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudBaseRunResourceForExtendResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeCloudBaseRunResourceForExtendResponse::GetClusterStatus() const
{
    return m_clusterStatus;
}

bool DescribeCloudBaseRunResourceForExtendResponse::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string DescribeCloudBaseRunResourceForExtendResponse::GetVirtualClusterId() const
{
    return m_virtualClusterId;
}

bool DescribeCloudBaseRunResourceForExtendResponse::VirtualClusterIdHasBeenSet() const
{
    return m_virtualClusterIdHasBeenSet;
}

string DescribeCloudBaseRunResourceForExtendResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeCloudBaseRunResourceForExtendResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeCloudBaseRunResourceForExtendResponse::GetRegion() const
{
    return m_region;
}

bool DescribeCloudBaseRunResourceForExtendResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<CloudBaseRunVpcSubnet> DescribeCloudBaseRunResourceForExtendResponse::GetSubnetIds() const
{
    return m_subnetIds;
}

bool DescribeCloudBaseRunResourceForExtendResponse::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}


