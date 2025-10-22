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

#include <tencentcloud/waf/v20180125/model/NetworkConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

NetworkConfig::NetworkConfig() :
    m_antiDDosEipHasBeenSet(false),
    m_antiDDosEipStatusHasBeenSet(false),
    m_vipStatusHasBeenSet(false)
{
}

CoreInternalOutcome NetworkConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AntiDDosEip") && !value["AntiDDosEip"].IsNull())
    {
        if (!value["AntiDDosEip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConfig.AntiDDosEip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_antiDDosEip = string(value["AntiDDosEip"].GetString());
        m_antiDDosEipHasBeenSet = true;
    }

    if (value.HasMember("AntiDDosEipStatus") && !value["AntiDDosEipStatus"].IsNull())
    {
        if (!value["AntiDDosEipStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConfig.AntiDDosEipStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiDDosEipStatus = value["AntiDDosEipStatus"].GetUint64();
        m_antiDDosEipStatusHasBeenSet = true;
    }

    if (value.HasMember("VipStatus") && !value["VipStatus"].IsNull())
    {
        if (!value["VipStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConfig.VipStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vipStatus = value["VipStatus"].GetUint64();
        m_vipStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_antiDDosEipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiDDosEip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_antiDDosEip.c_str(), allocator).Move(), allocator);
    }

    if (m_antiDDosEipStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiDDosEipStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiDDosEipStatus, allocator);
    }

    if (m_vipStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vipStatus, allocator);
    }

}


string NetworkConfig::GetAntiDDosEip() const
{
    return m_antiDDosEip;
}

void NetworkConfig::SetAntiDDosEip(const string& _antiDDosEip)
{
    m_antiDDosEip = _antiDDosEip;
    m_antiDDosEipHasBeenSet = true;
}

bool NetworkConfig::AntiDDosEipHasBeenSet() const
{
    return m_antiDDosEipHasBeenSet;
}

uint64_t NetworkConfig::GetAntiDDosEipStatus() const
{
    return m_antiDDosEipStatus;
}

void NetworkConfig::SetAntiDDosEipStatus(const uint64_t& _antiDDosEipStatus)
{
    m_antiDDosEipStatus = _antiDDosEipStatus;
    m_antiDDosEipStatusHasBeenSet = true;
}

bool NetworkConfig::AntiDDosEipStatusHasBeenSet() const
{
    return m_antiDDosEipStatusHasBeenSet;
}

uint64_t NetworkConfig::GetVipStatus() const
{
    return m_vipStatus;
}

void NetworkConfig::SetVipStatus(const uint64_t& _vipStatus)
{
    m_vipStatus = _vipStatus;
    m_vipStatusHasBeenSet = true;
}

bool NetworkConfig::VipStatusHasBeenSet() const
{
    return m_vipStatusHasBeenSet;
}

