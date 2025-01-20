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

#include <tencentcloud/vpc/v20170312/model/CcnRegionBandwidthLimitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnRegionBandwidthLimitInfo::CcnRegionBandwidthLimitInfo() :
    m_sourceRegionHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_bandwidthLimitHasBeenSet(false)
{
}

CoreInternalOutcome CcnRegionBandwidthLimitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRegionBandwidthLimitInfo.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("DestinationRegion") && !value["DestinationRegion"].IsNull())
    {
        if (!value["DestinationRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRegionBandwidthLimitInfo.DestinationRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationRegion = string(value["DestinationRegion"].GetString());
        m_destinationRegionHasBeenSet = true;
    }

    if (value.HasMember("BandwidthLimit") && !value["BandwidthLimit"].IsNull())
    {
        if (!value["BandwidthLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRegionBandwidthLimitInfo.BandwidthLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthLimit = value["BandwidthLimit"].GetUint64();
        m_bandwidthLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnRegionBandwidthLimitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthLimit, allocator);
    }

}


string CcnRegionBandwidthLimitInfo::GetSourceRegion() const
{
    return m_sourceRegion;
}

void CcnRegionBandwidthLimitInfo::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool CcnRegionBandwidthLimitInfo::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string CcnRegionBandwidthLimitInfo::GetDestinationRegion() const
{
    return m_destinationRegion;
}

void CcnRegionBandwidthLimitInfo::SetDestinationRegion(const string& _destinationRegion)
{
    m_destinationRegion = _destinationRegion;
    m_destinationRegionHasBeenSet = true;
}

bool CcnRegionBandwidthLimitInfo::DestinationRegionHasBeenSet() const
{
    return m_destinationRegionHasBeenSet;
}

uint64_t CcnRegionBandwidthLimitInfo::GetBandwidthLimit() const
{
    return m_bandwidthLimit;
}

void CcnRegionBandwidthLimitInfo::SetBandwidthLimit(const uint64_t& _bandwidthLimit)
{
    m_bandwidthLimit = _bandwidthLimit;
    m_bandwidthLimitHasBeenSet = true;
}

bool CcnRegionBandwidthLimitInfo::BandwidthLimitHasBeenSet() const
{
    return m_bandwidthLimitHasBeenSet;
}

