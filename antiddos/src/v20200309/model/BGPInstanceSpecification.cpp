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
    m_autoRenewFlagHasBeenSet(false),
    m_unionPackFlagHasBeenSet(false),
    m_serviceBandWidthHasBeenSet(false),
    m_battleEditionFlagHasBeenSet(false),
    m_channelEditionFlagHasBeenSet(false),
    m_enterpriseFlagHasBeenSet(false),
    m_elasticLimitHasBeenSet(false),
    m_downGradeProtectHasBeenSet(false)
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

    if (value.HasMember("UnionPackFlag") && !value["UnionPackFlag"].IsNull())
    {
        if (!value["UnionPackFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.UnionPackFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unionPackFlag = value["UnionPackFlag"].GetUint64();
        m_unionPackFlagHasBeenSet = true;
    }

    if (value.HasMember("ServiceBandWidth") && !value["ServiceBandWidth"].IsNull())
    {
        if (!value["ServiceBandWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.ServiceBandWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceBandWidth = value["ServiceBandWidth"].GetUint64();
        m_serviceBandWidthHasBeenSet = true;
    }

    if (value.HasMember("BattleEditionFlag") && !value["BattleEditionFlag"].IsNull())
    {
        if (!value["BattleEditionFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.BattleEditionFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_battleEditionFlag = value["BattleEditionFlag"].GetUint64();
        m_battleEditionFlagHasBeenSet = true;
    }

    if (value.HasMember("ChannelEditionFlag") && !value["ChannelEditionFlag"].IsNull())
    {
        if (!value["ChannelEditionFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.ChannelEditionFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelEditionFlag = value["ChannelEditionFlag"].GetUint64();
        m_channelEditionFlagHasBeenSet = true;
    }

    if (value.HasMember("EnterpriseFlag") && !value["EnterpriseFlag"].IsNull())
    {
        if (!value["EnterpriseFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.EnterpriseFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseFlag = value["EnterpriseFlag"].GetUint64();
        m_enterpriseFlagHasBeenSet = true;
    }

    if (value.HasMember("ElasticLimit") && !value["ElasticLimit"].IsNull())
    {
        if (!value["ElasticLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.ElasticLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticLimit = value["ElasticLimit"].GetUint64();
        m_elasticLimitHasBeenSet = true;
    }

    if (value.HasMember("DownGradeProtect") && !value["DownGradeProtect"].IsNull())
    {
        if (!value["DownGradeProtect"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceSpecification.DownGradeProtect` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_downGradeProtect = value["DownGradeProtect"].GetUint64();
        m_downGradeProtectHasBeenSet = true;
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

    if (m_unionPackFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnionPackFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unionPackFlag, allocator);
    }

    if (m_serviceBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceBandWidth, allocator);
    }

    if (m_battleEditionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BattleEditionFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_battleEditionFlag, allocator);
    }

    if (m_channelEditionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelEditionFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelEditionFlag, allocator);
    }

    if (m_enterpriseFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enterpriseFlag, allocator);
    }

    if (m_elasticLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticLimit, allocator);
    }

    if (m_downGradeProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownGradeProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downGradeProtect, allocator);
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

uint64_t BGPInstanceSpecification::GetUnionPackFlag() const
{
    return m_unionPackFlag;
}

void BGPInstanceSpecification::SetUnionPackFlag(const uint64_t& _unionPackFlag)
{
    m_unionPackFlag = _unionPackFlag;
    m_unionPackFlagHasBeenSet = true;
}

bool BGPInstanceSpecification::UnionPackFlagHasBeenSet() const
{
    return m_unionPackFlagHasBeenSet;
}

uint64_t BGPInstanceSpecification::GetServiceBandWidth() const
{
    return m_serviceBandWidth;
}

void BGPInstanceSpecification::SetServiceBandWidth(const uint64_t& _serviceBandWidth)
{
    m_serviceBandWidth = _serviceBandWidth;
    m_serviceBandWidthHasBeenSet = true;
}

bool BGPInstanceSpecification::ServiceBandWidthHasBeenSet() const
{
    return m_serviceBandWidthHasBeenSet;
}

uint64_t BGPInstanceSpecification::GetBattleEditionFlag() const
{
    return m_battleEditionFlag;
}

void BGPInstanceSpecification::SetBattleEditionFlag(const uint64_t& _battleEditionFlag)
{
    m_battleEditionFlag = _battleEditionFlag;
    m_battleEditionFlagHasBeenSet = true;
}

bool BGPInstanceSpecification::BattleEditionFlagHasBeenSet() const
{
    return m_battleEditionFlagHasBeenSet;
}

uint64_t BGPInstanceSpecification::GetChannelEditionFlag() const
{
    return m_channelEditionFlag;
}

void BGPInstanceSpecification::SetChannelEditionFlag(const uint64_t& _channelEditionFlag)
{
    m_channelEditionFlag = _channelEditionFlag;
    m_channelEditionFlagHasBeenSet = true;
}

bool BGPInstanceSpecification::ChannelEditionFlagHasBeenSet() const
{
    return m_channelEditionFlagHasBeenSet;
}

uint64_t BGPInstanceSpecification::GetEnterpriseFlag() const
{
    return m_enterpriseFlag;
}

void BGPInstanceSpecification::SetEnterpriseFlag(const uint64_t& _enterpriseFlag)
{
    m_enterpriseFlag = _enterpriseFlag;
    m_enterpriseFlagHasBeenSet = true;
}

bool BGPInstanceSpecification::EnterpriseFlagHasBeenSet() const
{
    return m_enterpriseFlagHasBeenSet;
}

uint64_t BGPInstanceSpecification::GetElasticLimit() const
{
    return m_elasticLimit;
}

void BGPInstanceSpecification::SetElasticLimit(const uint64_t& _elasticLimit)
{
    m_elasticLimit = _elasticLimit;
    m_elasticLimitHasBeenSet = true;
}

bool BGPInstanceSpecification::ElasticLimitHasBeenSet() const
{
    return m_elasticLimitHasBeenSet;
}

uint64_t BGPInstanceSpecification::GetDownGradeProtect() const
{
    return m_downGradeProtect;
}

void BGPInstanceSpecification::SetDownGradeProtect(const uint64_t& _downGradeProtect)
{
    m_downGradeProtect = _downGradeProtect;
    m_downGradeProtectHasBeenSet = true;
}

bool BGPInstanceSpecification::DownGradeProtectHasBeenSet() const
{
    return m_downGradeProtectHasBeenSet;
}

