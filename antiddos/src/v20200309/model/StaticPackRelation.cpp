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

#include <tencentcloud/antiddos/v20200309/model/StaticPackRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

StaticPackRelation::StaticPackRelation() :
    m_protectBandwidthHasBeenSet(false),
    m_normalBandwidthHasBeenSet(false),
    m_forwardRulesLimitHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_curDeadlineHasBeenSet(false)
{
}

CoreInternalOutcome StaticPackRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectBandwidth") && !value["ProtectBandwidth"].IsNull())
    {
        if (!value["ProtectBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticPackRelation.ProtectBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectBandwidth = value["ProtectBandwidth"].GetUint64();
        m_protectBandwidthHasBeenSet = true;
    }

    if (value.HasMember("NormalBandwidth") && !value["NormalBandwidth"].IsNull())
    {
        if (!value["NormalBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticPackRelation.NormalBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_normalBandwidth = value["NormalBandwidth"].GetUint64();
        m_normalBandwidthHasBeenSet = true;
    }

    if (value.HasMember("ForwardRulesLimit") && !value["ForwardRulesLimit"].IsNull())
    {
        if (!value["ForwardRulesLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticPackRelation.ForwardRulesLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardRulesLimit = value["ForwardRulesLimit"].GetUint64();
        m_forwardRulesLimitHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticPackRelation.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("CurDeadline") && !value["CurDeadline"].IsNull())
    {
        if (!value["CurDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticPackRelation.CurDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curDeadline = string(value["CurDeadline"].GetString());
        m_curDeadlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaticPackRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectBandwidth, allocator);
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

    if (m_curDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curDeadline.c_str(), allocator).Move(), allocator);
    }

}


uint64_t StaticPackRelation::GetProtectBandwidth() const
{
    return m_protectBandwidth;
}

void StaticPackRelation::SetProtectBandwidth(const uint64_t& _protectBandwidth)
{
    m_protectBandwidth = _protectBandwidth;
    m_protectBandwidthHasBeenSet = true;
}

bool StaticPackRelation::ProtectBandwidthHasBeenSet() const
{
    return m_protectBandwidthHasBeenSet;
}

uint64_t StaticPackRelation::GetNormalBandwidth() const
{
    return m_normalBandwidth;
}

void StaticPackRelation::SetNormalBandwidth(const uint64_t& _normalBandwidth)
{
    m_normalBandwidth = _normalBandwidth;
    m_normalBandwidthHasBeenSet = true;
}

bool StaticPackRelation::NormalBandwidthHasBeenSet() const
{
    return m_normalBandwidthHasBeenSet;
}

uint64_t StaticPackRelation::GetForwardRulesLimit() const
{
    return m_forwardRulesLimit;
}

void StaticPackRelation::SetForwardRulesLimit(const uint64_t& _forwardRulesLimit)
{
    m_forwardRulesLimit = _forwardRulesLimit;
    m_forwardRulesLimitHasBeenSet = true;
}

bool StaticPackRelation::ForwardRulesLimitHasBeenSet() const
{
    return m_forwardRulesLimitHasBeenSet;
}

uint64_t StaticPackRelation::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void StaticPackRelation::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool StaticPackRelation::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string StaticPackRelation::GetCurDeadline() const
{
    return m_curDeadline;
}

void StaticPackRelation::SetCurDeadline(const string& _curDeadline)
{
    m_curDeadline = _curDeadline;
    m_curDeadlineHasBeenSet = true;
}

bool StaticPackRelation::CurDeadlineHasBeenSet() const
{
    return m_curDeadlineHasBeenSet;
}

