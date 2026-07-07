/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/alb/v20251030/model/LoadBalancerBillingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

LoadBalancerBillingConfig::LoadBalancerBillingConfig() :
    m_chargeTypeHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancerBillingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerBillingConfig.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("BandwidthPackageId") && !value["BandwidthPackageId"].IsNull())
    {
        if (!value["BandwidthPackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerBillingConfig.BandwidthPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthPackageId = string(value["BandwidthPackageId"].GetString());
        m_bandwidthPackageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancerBillingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }

}


string LoadBalancerBillingConfig::GetChargeType() const
{
    return m_chargeType;
}

void LoadBalancerBillingConfig::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool LoadBalancerBillingConfig::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string LoadBalancerBillingConfig::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void LoadBalancerBillingConfig::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool LoadBalancerBillingConfig::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

