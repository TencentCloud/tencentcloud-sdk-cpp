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
    m_subnetCidrBlockHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_manufacturerHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVsmAttributesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceName") && !rsp["ResourceName"].IsNull())
    {
        if (!rsp["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(rsp["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
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

    if (rsp.HasMember("Model") && !rsp["Model"].IsNull())
    {
        if (!rsp["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(rsp["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (rsp.HasMember("VsmType") && !rsp["VsmType"].IsNull())
    {
        if (!rsp["VsmType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VsmType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vsmType = rsp["VsmType"].GetInt64();
        m_vsmTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RegionId") && !rsp["RegionId"].IsNull())
    {
        if (!rsp["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = rsp["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = rsp["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SgList") && !rsp["SgList"].IsNull())
    {
        if (!rsp["SgList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SgList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SgList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(rsp["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
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

    if (rsp.HasMember("ZoneName") && !rsp["ZoneName"].IsNull())
    {
        if (!rsp["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(rsp["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (rsp.HasMember("Expired") && !rsp["Expired"].IsNull())
    {
        if (!rsp["Expired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Expired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expired = rsp["Expired"].GetBool();
        m_expiredHasBeenSet = true;
    }

    if (rsp.HasMember("RemainSeconds") && !rsp["RemainSeconds"].IsNull())
    {
        if (!rsp["RemainSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemainSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainSeconds = rsp["RemainSeconds"].GetInt64();
        m_remainSecondsHasBeenSet = true;
    }

    if (rsp.HasMember("VpcName") && !rsp["VpcName"].IsNull())
    {
        if (!rsp["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(rsp["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (rsp.HasMember("VpcCidrBlock") && !rsp["VpcCidrBlock"].IsNull())
    {
        if (!rsp["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(rsp["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetCidrBlock") && !rsp["SubnetCidrBlock"].IsNull())
    {
        if (!rsp["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(rsp["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("RenewFlag") && !rsp["RenewFlag"].IsNull())
    {
        if (!rsp["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = rsp["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("Manufacturer") && !rsp["Manufacturer"].IsNull())
    {
        if (!rsp["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(rsp["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVsmAttributesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
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

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_vsmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VsmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vsmType, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_sgListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sgList.begin(); itr != m_sgList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expired, allocator);
    }

    if (m_remainSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainSeconds, allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
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

vector<Tag> DescribeVsmAttributesResponse::GetTags() const
{
    return m_tags;
}

bool DescribeVsmAttributesResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t DescribeVsmAttributesResponse::GetRenewFlag() const
{
    return m_renewFlag;
}

bool DescribeVsmAttributesResponse::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string DescribeVsmAttributesResponse::GetManufacturer() const
{
    return m_manufacturer;
}

bool DescribeVsmAttributesResponse::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}


