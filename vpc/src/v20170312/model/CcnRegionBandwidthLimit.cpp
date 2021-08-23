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

#include <tencentcloud/vpc/v20170312/model/CcnRegionBandwidthLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnRegionBandwidthLimit::CcnRegionBandwidthLimit() :
    m_regionHasBeenSet(false),
    m_bandwidthLimitHasBeenSet(false),
    m_isBmHasBeenSet(false),
    m_dstRegionHasBeenSet(false),
    m_dstIsBmHasBeenSet(false)
{
}

CoreInternalOutcome CcnRegionBandwidthLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRegionBandwidthLimit.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BandwidthLimit") && !value["BandwidthLimit"].IsNull())
    {
        if (!value["BandwidthLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRegionBandwidthLimit.BandwidthLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthLimit = value["BandwidthLimit"].GetUint64();
        m_bandwidthLimitHasBeenSet = true;
    }

    if (value.HasMember("IsBm") && !value["IsBm"].IsNull())
    {
        if (!value["IsBm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRegionBandwidthLimit.IsBm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBm = value["IsBm"].GetBool();
        m_isBmHasBeenSet = true;
    }

    if (value.HasMember("DstRegion") && !value["DstRegion"].IsNull())
    {
        if (!value["DstRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRegionBandwidthLimit.DstRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstRegion = string(value["DstRegion"].GetString());
        m_dstRegionHasBeenSet = true;
    }

    if (value.HasMember("DstIsBm") && !value["DstIsBm"].IsNull())
    {
        if (!value["DstIsBm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRegionBandwidthLimit.DstIsBm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dstIsBm = value["DstIsBm"].GetBool();
        m_dstIsBmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnRegionBandwidthLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthLimit, allocator);
    }

    if (m_isBmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBm, allocator);
    }

    if (m_dstRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIsBmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIsBm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstIsBm, allocator);
    }

}


string CcnRegionBandwidthLimit::GetRegion() const
{
    return m_region;
}

void CcnRegionBandwidthLimit::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CcnRegionBandwidthLimit::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t CcnRegionBandwidthLimit::GetBandwidthLimit() const
{
    return m_bandwidthLimit;
}

void CcnRegionBandwidthLimit::SetBandwidthLimit(const uint64_t& _bandwidthLimit)
{
    m_bandwidthLimit = _bandwidthLimit;
    m_bandwidthLimitHasBeenSet = true;
}

bool CcnRegionBandwidthLimit::BandwidthLimitHasBeenSet() const
{
    return m_bandwidthLimitHasBeenSet;
}

bool CcnRegionBandwidthLimit::GetIsBm() const
{
    return m_isBm;
}

void CcnRegionBandwidthLimit::SetIsBm(const bool& _isBm)
{
    m_isBm = _isBm;
    m_isBmHasBeenSet = true;
}

bool CcnRegionBandwidthLimit::IsBmHasBeenSet() const
{
    return m_isBmHasBeenSet;
}

string CcnRegionBandwidthLimit::GetDstRegion() const
{
    return m_dstRegion;
}

void CcnRegionBandwidthLimit::SetDstRegion(const string& _dstRegion)
{
    m_dstRegion = _dstRegion;
    m_dstRegionHasBeenSet = true;
}

bool CcnRegionBandwidthLimit::DstRegionHasBeenSet() const
{
    return m_dstRegionHasBeenSet;
}

bool CcnRegionBandwidthLimit::GetDstIsBm() const
{
    return m_dstIsBm;
}

void CcnRegionBandwidthLimit::SetDstIsBm(const bool& _dstIsBm)
{
    m_dstIsBm = _dstIsBm;
    m_dstIsBmHasBeenSet = true;
}

bool CcnRegionBandwidthLimit::DstIsBmHasBeenSet() const
{
    return m_dstIsBmHasBeenSet;
}

