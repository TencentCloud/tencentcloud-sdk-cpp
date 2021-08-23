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

#include <tencentcloud/antiddos/v20200309/model/BGPInstanceSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

BGPInstanceSpecification::BGPInstanceSpecification() :
    m_protectBandwidthHasBeenSet(false),
    m_protectCountLimitHasBeenSet(false),
    m_protectIPNumberLimitHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false)
{
}

CoreInternalOutcome BGPInstanceSpecification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectBandwidth") && !value["ProtectBandwidth"].IsNull())
    {
        if (!value["ProtectBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.ProtectBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectBandwidth = value["ProtectBandwidth"].GetUint64();
        m_protectBandwidthHasBeenSet = true;
    }

    if (value.HasMember("ProtectCountLimit") && !value["ProtectCountLimit"].IsNull())
    {
        if (!value["ProtectCountLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.ProtectCountLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectCountLimit = value["ProtectCountLimit"].GetUint64();
        m_protectCountLimitHasBeenSet = true;
    }

    if (value.HasMember("ProtectIPNumberLimit") && !value["ProtectIPNumberLimit"].IsNull())
    {
        if (!value["ProtectIPNumberLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.ProtectIPNumberLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectIPNumberLimit = value["ProtectIPNumberLimit"].GetUint64();
        m_protectIPNumberLimitHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BGPInstanceSpecification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectBandwidth, allocator);
    }

    if (m_protectCountLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectCountLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectCountLimit, allocator);
    }

    if (m_protectIPNumberLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectIPNumberLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectIPNumberLimit, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

}


uint64_t BGPInstanceSpecification::GetProtectBandwidth() const
{
    return m_protectBandwidth;
}

void BGPInstanceSpecification::SetProtectBandwidth(const uint64_t& _protectBandwidth)
{
    m_protectBandwidth = _protectBandwidth;
    m_protectBandwidthHasBeenSet = true;
}

bool BGPInstanceSpecification::ProtectBandwidthHasBeenSet() const
{
    return m_protectBandwidthHasBeenSet;
}

uint64_t BGPInstanceSpecification::GetProtectCountLimit() const
{
    return m_protectCountLimit;
}

void BGPInstanceSpecification::SetProtectCountLimit(const uint64_t& _protectCountLimit)
{
    m_protectCountLimit = _protectCountLimit;
    m_protectCountLimitHasBeenSet = true;
}

bool BGPInstanceSpecification::ProtectCountLimitHasBeenSet() const
{
    return m_protectCountLimitHasBeenSet;
}

uint64_t BGPInstanceSpecification::GetProtectIPNumberLimit() const
{
    return m_protectIPNumberLimit;
}

void BGPInstanceSpecification::SetProtectIPNumberLimit(const uint64_t& _protectIPNumberLimit)
{
    m_protectIPNumberLimit = _protectIPNumberLimit;
    m_protectIPNumberLimitHasBeenSet = true;
}

bool BGPInstanceSpecification::ProtectIPNumberLimitHasBeenSet() const
{
    return m_protectIPNumberLimitHasBeenSet;
}

uint64_t BGPInstanceSpecification::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void BGPInstanceSpecification::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool BGPInstanceSpecification::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

