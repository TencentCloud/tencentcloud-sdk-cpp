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

#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

InternetAccessible::InternetAccessible() :
    m_internetChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_bandwidthpkgSubTypeHasBeenSet(false)
{
}

CoreInternalOutcome InternetAccessible::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternetChargeType") && !value["InternetChargeType"].IsNull())
    {
        if (!value["InternetChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.InternetChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetChargeType = string(value["InternetChargeType"].GetString());
        m_internetChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.InternetMaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetInt64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("BandwidthpkgSubType") && !value["BandwidthpkgSubType"].IsNull())
    {
        if (!value["BandwidthpkgSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAccessible.BandwidthpkgSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthpkgSubType = string(value["BandwidthpkgSubType"].GetString());
        m_bandwidthpkgSubTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetAccessible::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_bandwidthpkgSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthpkgSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthpkgSubType.c_str(), allocator).Move(), allocator);
    }

}


string InternetAccessible::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void InternetAccessible::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool InternetAccessible::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

int64_t InternetAccessible::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void InternetAccessible::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool InternetAccessible::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string InternetAccessible::GetBandwidthpkgSubType() const
{
    return m_bandwidthpkgSubType;
}

void InternetAccessible::SetBandwidthpkgSubType(const string& _bandwidthpkgSubType)
{
    m_bandwidthpkgSubType = _bandwidthpkgSubType;
    m_bandwidthpkgSubTypeHasBeenSet = true;
}

bool InternetAccessible::BandwidthpkgSubTypeHasBeenSet() const
{
    return m_bandwidthpkgSubTypeHasBeenSet;
}

