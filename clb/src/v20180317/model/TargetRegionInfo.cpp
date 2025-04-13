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

#include <tencentcloud/clb/v20180317/model/TargetRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

TargetRegionInfo::TargetRegionInfo() :
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_numericalVpcIdHasBeenSet(false)
{
}

CoreInternalOutcome TargetRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetRegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetRegionInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("NumericalVpcId") && !value["NumericalVpcId"].IsNull())
    {
        if (!value["NumericalVpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetRegionInfo.NumericalVpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numericalVpcId = value["NumericalVpcId"].GetInt64();
        m_numericalVpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_numericalVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumericalVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numericalVpcId, allocator);
    }

}


string TargetRegionInfo::GetRegion() const
{
    return m_region;
}

void TargetRegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TargetRegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string TargetRegionInfo::GetVpcId() const
{
    return m_vpcId;
}

void TargetRegionInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TargetRegionInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t TargetRegionInfo::GetNumericalVpcId() const
{
    return m_numericalVpcId;
}

void TargetRegionInfo::SetNumericalVpcId(const int64_t& _numericalVpcId)
{
    m_numericalVpcId = _numericalVpcId;
    m_numericalVpcIdHasBeenSet = true;
}

bool TargetRegionInfo::NumericalVpcIdHasBeenSet() const
{
    return m_numericalVpcIdHasBeenSet;
}

