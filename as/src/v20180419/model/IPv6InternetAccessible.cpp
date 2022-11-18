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

#include <tencentcloud/as/v20180419/model/IPv6InternetAccessible.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

IPv6InternetAccessible::IPv6InternetAccessible() :
    m_internetChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false)
{
}

CoreInternalOutcome IPv6InternetAccessible::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternetChargeType") && !value["InternetChargeType"].IsNull())
    {
        if (!value["InternetChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPv6InternetAccessible.InternetChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetChargeType = string(value["InternetChargeType"].GetString());
        m_internetChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IPv6InternetAccessible.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("BandwidthPackageId") && !value["BandwidthPackageId"].IsNull())
    {
        if (!value["BandwidthPackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPv6InternetAccessible.BandwidthPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthPackageId = string(value["BandwidthPackageId"].GetString());
        m_bandwidthPackageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPv6InternetAccessible::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_internetChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_bandwidthPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }

}


string IPv6InternetAccessible::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void IPv6InternetAccessible::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool IPv6InternetAccessible::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

uint64_t IPv6InternetAccessible::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void IPv6InternetAccessible::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool IPv6InternetAccessible::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string IPv6InternetAccessible::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void IPv6InternetAccessible::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool IPv6InternetAccessible::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

