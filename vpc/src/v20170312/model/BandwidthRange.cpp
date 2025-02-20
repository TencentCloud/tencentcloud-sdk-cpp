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

#include <tencentcloud/vpc/v20170312/model/BandwidthRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

BandwidthRange::BandwidthRange() :
    m_resourceIdHasBeenSet(false),
    m_bandwidthLowerLimitHasBeenSet(false),
    m_bandwidthUpperLimitHasBeenSet(false)
{
}

CoreInternalOutcome BandwidthRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthRange.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("BandwidthLowerLimit") && !value["BandwidthLowerLimit"].IsNull())
    {
        if (!value["BandwidthLowerLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthRange.BandwidthLowerLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthLowerLimit = value["BandwidthLowerLimit"].GetUint64();
        m_bandwidthLowerLimitHasBeenSet = true;
    }

    if (value.HasMember("BandwidthUpperLimit") && !value["BandwidthUpperLimit"].IsNull())
    {
        if (!value["BandwidthUpperLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthRange.BandwidthUpperLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthUpperLimit = value["BandwidthUpperLimit"].GetUint64();
        m_bandwidthUpperLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BandwidthRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthLowerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthLowerLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthLowerLimit, allocator);
    }

    if (m_bandwidthUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthUpperLimit, allocator);
    }

}


string BandwidthRange::GetResourceId() const
{
    return m_resourceId;
}

void BandwidthRange::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BandwidthRange::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t BandwidthRange::GetBandwidthLowerLimit() const
{
    return m_bandwidthLowerLimit;
}

void BandwidthRange::SetBandwidthLowerLimit(const uint64_t& _bandwidthLowerLimit)
{
    m_bandwidthLowerLimit = _bandwidthLowerLimit;
    m_bandwidthLowerLimitHasBeenSet = true;
}

bool BandwidthRange::BandwidthLowerLimitHasBeenSet() const
{
    return m_bandwidthLowerLimitHasBeenSet;
}

uint64_t BandwidthRange::GetBandwidthUpperLimit() const
{
    return m_bandwidthUpperLimit;
}

void BandwidthRange::SetBandwidthUpperLimit(const uint64_t& _bandwidthUpperLimit)
{
    m_bandwidthUpperLimit = _bandwidthUpperLimit;
    m_bandwidthUpperLimitHasBeenSet = true;
}

bool BandwidthRange::BandwidthUpperLimitHasBeenSet() const
{
    return m_bandwidthUpperLimitHasBeenSet;
}

