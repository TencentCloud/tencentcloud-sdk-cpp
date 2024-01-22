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

#include <tencentcloud/tke/v20220501/model/InternetAccessible.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

InternetAccessible::InternetAccessible() :
    m_maxBandwidthOutHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false)
{
}

CoreInternalOutcome InternetAccessible::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxBandwidthOut") && !value["MaxBandwidthOut"].IsNull())
    {
        if (!value["MaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.MaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidthOut = value["MaxBandwidthOut"].GetInt64();
        m_maxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("BandwidthPackageId") && !value["BandwidthPackageId"].IsNull())
    {
        if (!value["BandwidthPackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.BandwidthPackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthPackageId = string(value["BandwidthPackageId"].GetString());
        m_bandwidthPackageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetAccessible::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidthOut, allocator);
    }

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


int64_t InternetAccessible::GetMaxBandwidthOut() const
{
    return m_maxBandwidthOut;
}

void InternetAccessible::SetMaxBandwidthOut(const int64_t& _maxBandwidthOut)
{
    m_maxBandwidthOut = _maxBandwidthOut;
    m_maxBandwidthOutHasBeenSet = true;
}

bool InternetAccessible::MaxBandwidthOutHasBeenSet() const
{
    return m_maxBandwidthOutHasBeenSet;
}

string InternetAccessible::GetChargeType() const
{
    return m_chargeType;
}

void InternetAccessible::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool InternetAccessible::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string InternetAccessible::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void InternetAccessible::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool InternetAccessible::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

