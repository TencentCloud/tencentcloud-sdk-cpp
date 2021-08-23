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

#include <tencentcloud/ecm/v20190719/model/PublicIPAddressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PublicIPAddressInfo::PublicIPAddressInfo() :
    m_chargeModeHasBeenSet(false),
    m_publicIPAddressHasBeenSet(false),
    m_iSPHasBeenSet(false),
    m_maxBandwidthOutHasBeenSet(false),
    m_maxBandwidthInHasBeenSet(false)
{
}

CoreInternalOutcome PublicIPAddressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChargeMode") && !value["ChargeMode"].IsNull())
    {
        if (!value["ChargeMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIPAddressInfo.ChargeMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeMode = string(value["ChargeMode"].GetString());
        m_chargeModeHasBeenSet = true;
    }

    if (value.HasMember("PublicIPAddress") && !value["PublicIPAddress"].IsNull())
    {
        if (!value["PublicIPAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIPAddressInfo.PublicIPAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIPAddress = string(value["PublicIPAddress"].GetString());
        m_publicIPAddressHasBeenSet = true;
    }

    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIPAddressInfo.ISP` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iSP.Deserialize(value["ISP"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iSPHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidthOut") && !value["MaxBandwidthOut"].IsNull())
    {
        if (!value["MaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIPAddressInfo.MaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidthOut = value["MaxBandwidthOut"].GetInt64();
        m_maxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidthIn") && !value["MaxBandwidthIn"].IsNull())
    {
        if (!value["MaxBandwidthIn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIPAddressInfo.MaxBandwidthIn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidthIn = value["MaxBandwidthIn"].GetInt64();
        m_maxBandwidthInHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicIPAddressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chargeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIPAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIPAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iSP.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidthOut, allocator);
    }

    if (m_maxBandwidthInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidthIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidthIn, allocator);
    }

}


string PublicIPAddressInfo::GetChargeMode() const
{
    return m_chargeMode;
}

void PublicIPAddressInfo::SetChargeMode(const string& _chargeMode)
{
    m_chargeMode = _chargeMode;
    m_chargeModeHasBeenSet = true;
}

bool PublicIPAddressInfo::ChargeModeHasBeenSet() const
{
    return m_chargeModeHasBeenSet;
}

string PublicIPAddressInfo::GetPublicIPAddress() const
{
    return m_publicIPAddress;
}

void PublicIPAddressInfo::SetPublicIPAddress(const string& _publicIPAddress)
{
    m_publicIPAddress = _publicIPAddress;
    m_publicIPAddressHasBeenSet = true;
}

bool PublicIPAddressInfo::PublicIPAddressHasBeenSet() const
{
    return m_publicIPAddressHasBeenSet;
}

ISP PublicIPAddressInfo::GetISP() const
{
    return m_iSP;
}

void PublicIPAddressInfo::SetISP(const ISP& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool PublicIPAddressInfo::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

int64_t PublicIPAddressInfo::GetMaxBandwidthOut() const
{
    return m_maxBandwidthOut;
}

void PublicIPAddressInfo::SetMaxBandwidthOut(const int64_t& _maxBandwidthOut)
{
    m_maxBandwidthOut = _maxBandwidthOut;
    m_maxBandwidthOutHasBeenSet = true;
}

bool PublicIPAddressInfo::MaxBandwidthOutHasBeenSet() const
{
    return m_maxBandwidthOutHasBeenSet;
}

int64_t PublicIPAddressInfo::GetMaxBandwidthIn() const
{
    return m_maxBandwidthIn;
}

void PublicIPAddressInfo::SetMaxBandwidthIn(const int64_t& _maxBandwidthIn)
{
    m_maxBandwidthIn = _maxBandwidthIn;
    m_maxBandwidthInHasBeenSet = true;
}

bool PublicIPAddressInfo::MaxBandwidthInHasBeenSet() const
{
    return m_maxBandwidthInHasBeenSet;
}

