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
using namespace rapidjson;
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
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ClusterStatus") && !rsp["ClusterStatus"].IsNull())
    {
        if (!rsp["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(rsp["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (rsp.HasMember("VirtualClusterId") && !rsp["VirtualClusterId"].IsNull())
    {
        if (!rsp["VirtualClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VirtualClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualClusterId = string(rsp["VirtualClusterId"].GetString());
        m_virtualClusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("VpcId") && !rsp["VpcId"].IsNull())
    {
        if (!rsp["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(rsp["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetIds") && !rsp["SubnetIds"].IsNull())
    {
        if (!rsp["SubnetIds"].IsArray())
            return CoreInternalOutcome(Error("response `SubnetIds` is not array type"));

        const Value &tmpValue = rsp["SubnetIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


