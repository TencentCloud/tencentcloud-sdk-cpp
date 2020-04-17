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

#include <tencentcloud/cloudhsm/v20191112/model/DescribeVsmAttributesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace rapidjson;
using namespace std;

DescribeVsmAttributesResponse::DescribeVsmAttributesResponse() :
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_vsmTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_sgListHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_remainSecondsHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetCidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVsmAttributesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceName") && !rsp["ResourceName"].IsNull())
    {
        if (!rsp["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(rsp["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Vip") && !rsp["Vip"].IsNull())
    {
        if (!rsp["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(rsp["Vip"].GetString());
        m_vipHasBeenSet = true;
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

    if (rsp.HasMember("SubnetId") && !rsp["SubnetId"].IsNull())
    {
        if (!rsp["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(rsp["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (rsp.HasMember("Model") && !rsp["Model"].IsNull())
    {
        if (!rsp["Model"].IsString())
        {
            return CoreInternalOutcome(Error("response `Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(rsp["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (rsp.HasMember("VsmType") && !rsp["VsmType"].IsNull())
    {
        if (!rsp["VsmType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VsmType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vsmType = rsp["VsmType"].GetInt64();
        m_vsmTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RegionId") && !rsp["RegionId"].IsNull())
    {
        if (!rsp["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = rsp["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = rsp["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SgList") && !rsp["SgList"].IsNull())
    {
        if (!rsp["SgList"].IsArray())
            return CoreInternalOutcome(Error("response `SgList` is not array type"));

        const Value &tmpValue = rsp["SgList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsgRuleDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sgList.push_back(item);
        }
        m_sgListHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetName") && !rsp["SubnetName"].IsNull())
    {
        if (!rsp["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(rsp["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (rsp.HasMember("RegionName") && !rsp["RegionName"].IsNull())
    {
        if (!rsp["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(rsp["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneName") && !rsp["ZoneName"].IsNull())
    {
        if (!rsp["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(rsp["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (rsp.HasMember("Expired") && !rsp["Expired"].IsNull())
    {
        if (!rsp["Expired"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Expired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expired = rsp["Expired"].GetBool();
        m_expiredHasBeenSet = true;
    }

    if (rsp.HasMember("RemainSeconds") && !rsp["RemainSeconds"].IsNull())
    {
        if (!rsp["RemainSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RemainSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainSeconds = rsp["RemainSeconds"].GetInt64();
        m_remainSecondsHasBeenSet = true;
    }

    if (rsp.HasMember("VpcName") && !rsp["VpcName"].IsNull())
    {
        if (!rsp["VpcName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(rsp["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (rsp.HasMember("VpcCidrBlock") && !rsp["VpcCidrBlock"].IsNull())
    {
        if (!rsp["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(rsp["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetCidrBlock") && !rsp["SubnetCidrBlock"].IsNull())
    {
        if (!rsp["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(rsp["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeVsmAttributesResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeVsmAttributesResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeVsmAttributesResponse::GetResourceName() const
{
    return m_resourceName;
}

bool DescribeVsmAttributesResponse::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

int64_t DescribeVsmAttributesResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVsmAttributesResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeVsmAttributesResponse::GetVip() const
{
    return m_vip;
}

bool DescribeVsmAttributesResponse::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string DescribeVsmAttributesResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeVsmAttributesResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeVsmAttributesResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeVsmAttributesResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DescribeVsmAttributesResponse::GetModel() const
{
    return m_model;
}

bool DescribeVsmAttributesResponse::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

int64_t DescribeVsmAttributesResponse::GetVsmType() const
{
    return m_vsmType;
}

bool DescribeVsmAttributesResponse::VsmTypeHasBeenSet() const
{
    return m_vsmTypeHasBeenSet;
}

int64_t DescribeVsmAttributesResponse::GetRegionId() const
{
    return m_regionId;
}

bool DescribeVsmAttributesResponse::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t DescribeVsmAttributesResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DescribeVsmAttributesResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t DescribeVsmAttributesResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeVsmAttributesResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<UsgRuleDetail> DescribeVsmAttributesResponse::GetSgList() const
{
    return m_sgList;
}

bool DescribeVsmAttributesResponse::SgListHasBeenSet() const
{
    return m_sgListHasBeenSet;
}

string DescribeVsmAttributesResponse::GetSubnetName() const
{
    return m_subnetName;
}

bool DescribeVsmAttributesResponse::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string DescribeVsmAttributesResponse::GetRegionName() const
{
    return m_regionName;
}

bool DescribeVsmAttributesResponse::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string DescribeVsmAttributesResponse::GetZoneName() const
{
    return m_zoneName;
}

bool DescribeVsmAttributesResponse::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

bool DescribeVsmAttributesResponse::GetExpired() const
{
    return m_expired;
}

bool DescribeVsmAttributesResponse::ExpiredHasBeenSet() const
{
    return m_expiredHasBeenSet;
}

int64_t DescribeVsmAttributesResponse::GetRemainSeconds() const
{
    return m_remainSeconds;
}

bool DescribeVsmAttributesResponse::RemainSecondsHasBeenSet() const
{
    return m_remainSecondsHasBeenSet;
}

string DescribeVsmAttributesResponse::GetVpcName() const
{
    return m_vpcName;
}

bool DescribeVsmAttributesResponse::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string DescribeVsmAttributesResponse::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

bool DescribeVsmAttributesResponse::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string DescribeVsmAttributesResponse::GetSubnetCidrBlock() const
{
    return m_subnetCidrBlock;
}

bool DescribeVsmAttributesResponse::SubnetCidrBlockHasBeenSet() const
{
    return m_subnetCidrBlockHasBeenSet;
}


