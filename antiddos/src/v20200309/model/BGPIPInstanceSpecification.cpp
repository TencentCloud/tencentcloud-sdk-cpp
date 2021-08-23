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

#include <tencentcloud/antiddos/v20200309/model/BGPIPInstanceSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

BGPIPInstanceSpecification::BGPIPInstanceSpecification() :
    m_protectBandwidthHasBeenSet(false),
    m_protectCCQPSHasBeenSet(false),
    m_normalBandwidthHasBeenSet(false),
    m_forwardRulesLimitHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_lineHasBeenSet(false),
    m_elasticBandwidthHasBeenSet(false)
{
}

CoreInternalOutcome BGPIPInstanceSpecification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectBandwidth") && !value["ProtectBandwidth"].IsNull())
    {
        if (!value["ProtectBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceSpecification.ProtectBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectBandwidth = value["ProtectBandwidth"].GetUint64();
        m_protectBandwidthHasBeenSet = true;
    }

    if (value.HasMember("ProtectCCQPS") && !value["ProtectCCQPS"].IsNull())
    {
        if (!value["ProtectCCQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceSpecification.ProtectCCQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectCCQPS = value["ProtectCCQPS"].GetUint64();
        m_protectCCQPSHasBeenSet = true;
    }

    if (value.HasMember("NormalBandwidth") && !value["NormalBandwidth"].IsNull())
    {
        if (!value["NormalBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceSpecification.NormalBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_normalBandwidth = value["NormalBandwidth"].GetUint64();
        m_normalBandwidthHasBeenSet = true;
    }

    if (value.HasMember("ForwardRulesLimit") && !value["ForwardRulesLimit"].IsNull())
    {
        if (!value["ForwardRulesLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceSpecification.ForwardRulesLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardRulesLimit = value["ForwardRulesLimit"].GetUint64();
        m_forwardRulesLimitHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceSpecification.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("Line") && !value["Line"].IsNull())
    {
        if (!value["Line"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceSpecification.Line` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_line = value["Line"].GetUint64();
        m_lineHasBeenSet = true;
    }

    if (value.HasMember("ElasticBandwidth") && !value["ElasticBandwidth"].IsNull())
    {
        if (!value["ElasticBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstanceSpecification.ElasticBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBandwidth = value["ElasticBandwidth"].GetUint64();
        m_elasticBandwidthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BGPIPInstanceSpecification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectBandwidth, allocator);
    }

    if (m_protectCCQPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectCCQPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectCCQPS, allocator);
    }

    if (m_normalBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalBandwidth, allocator);
    }

    if (m_forwardRulesLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardRulesLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forwardRulesLimit, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_line, allocator);
    }

    if (m_elasticBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBandwidth, allocator);
    }

}


uint64_t BGPIPInstanceSpecification::GetProtectBandwidth() const
{
    return m_protectBandwidth;
}

void BGPIPInstanceSpecification::SetProtectBandwidth(const uint64_t& _protectBandwidth)
{
    m_protectBandwidth = _protectBandwidth;
    m_protectBandwidthHasBeenSet = true;
}

bool BGPIPInstanceSpecification::ProtectBandwidthHasBeenSet() const
{
    return m_protectBandwidthHasBeenSet;
}

uint64_t BGPIPInstanceSpecification::GetProtectCCQPS() const
{
    return m_protectCCQPS;
}

void BGPIPInstanceSpecification::SetProtectCCQPS(const uint64_t& _protectCCQPS)
{
    m_protectCCQPS = _protectCCQPS;
    m_protectCCQPSHasBeenSet = true;
}

bool BGPIPInstanceSpecification::ProtectCCQPSHasBeenSet() const
{
    return m_protectCCQPSHasBeenSet;
}

uint64_t BGPIPInstanceSpecification::GetNormalBandwidth() const
{
    return m_normalBandwidth;
}

void BGPIPInstanceSpecification::SetNormalBandwidth(const uint64_t& _normalBandwidth)
{
    m_normalBandwidth = _normalBandwidth;
    m_normalBandwidthHasBeenSet = true;
}

bool BGPIPInstanceSpecification::NormalBandwidthHasBeenSet() const
{
    return m_normalBandwidthHasBeenSet;
}

uint64_t BGPIPInstanceSpecification::GetForwardRulesLimit() const
{
    return m_forwardRulesLimit;
}

void BGPIPInstanceSpecification::SetForwardRulesLimit(const uint64_t& _forwardRulesLimit)
{
    m_forwardRulesLimit = _forwardRulesLimit;
    m_forwardRulesLimitHasBeenSet = true;
}

bool BGPIPInstanceSpecification::ForwardRulesLimitHasBeenSet() const
{
    return m_forwardRulesLimitHasBeenSet;
}

uint64_t BGPIPInstanceSpecification::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void BGPIPInstanceSpecification::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool BGPIPInstanceSpecification::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t BGPIPInstanceSpecification::GetLine() const
{
    return m_line;
}

void BGPIPInstanceSpecification::SetLine(const uint64_t& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool BGPIPInstanceSpecification::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

uint64_t BGPIPInstanceSpecification::GetElasticBandwidth() const
{
    return m_elasticBandwidth;
}

void BGPIPInstanceSpecification::SetElasticBandwidth(const uint64_t& _elasticBandwidth)
{
    m_elasticBandwidth = _elasticBandwidth;
    m_elasticBandwidthHasBeenSet = true;
}

bool BGPIPInstanceSpecification::ElasticBandwidthHasBeenSet() const
{
    return m_elasticBandwidthHasBeenSet;
}

