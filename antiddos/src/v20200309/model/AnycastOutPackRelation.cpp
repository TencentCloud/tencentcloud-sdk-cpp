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

#include <tencentcloud/antiddos/v20200309/model/AnycastOutPackRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

AnycastOutPackRelation::AnycastOutPackRelation() :
    m_normalBandwidthHasBeenSet(false),
    m_forwardRulesLimitHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_curDeadlineHasBeenSet(false)
{
}

CoreInternalOutcome AnycastOutPackRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NormalBandwidth") && !value["NormalBandwidth"].IsNull())
    {
        if (!value["NormalBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnycastOutPackRelation.NormalBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_normalBandwidth = value["NormalBandwidth"].GetUint64();
        m_normalBandwidthHasBeenSet = true;
    }

    if (value.HasMember("ForwardRulesLimit") && !value["ForwardRulesLimit"].IsNull())
    {
        if (!value["ForwardRulesLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnycastOutPackRelation.ForwardRulesLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardRulesLimit = value["ForwardRulesLimit"].GetUint64();
        m_forwardRulesLimitHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnycastOutPackRelation.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("CurDeadline") && !value["CurDeadline"].IsNull())
    {
        if (!value["CurDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnycastOutPackRelation.CurDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curDeadline = string(value["CurDeadline"].GetString());
        m_curDeadlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnycastOutPackRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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


uint64_t AnycastOutPackRelation::GetNormalBandwidth() const
{
    return m_normalBandwidth;
}

void AnycastOutPackRelation::SetNormalBandwidth(const uint64_t& _normalBandwidth)
{
    m_normalBandwidth = _normalBandwidth;
    m_normalBandwidthHasBeenSet = true;
}

bool AnycastOutPackRelation::NormalBandwidthHasBeenSet() const
{
    return m_normalBandwidthHasBeenSet;
}

uint64_t AnycastOutPackRelation::GetForwardRulesLimit() const
{
    return m_forwardRulesLimit;
}

void AnycastOutPackRelation::SetForwardRulesLimit(const uint64_t& _forwardRulesLimit)
{
    m_forwardRulesLimit = _forwardRulesLimit;
    m_forwardRulesLimitHasBeenSet = true;
}

bool AnycastOutPackRelation::ForwardRulesLimitHasBeenSet() const
{
    return m_forwardRulesLimitHasBeenSet;
}

uint64_t AnycastOutPackRelation::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void AnycastOutPackRelation::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool AnycastOutPackRelation::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string AnycastOutPackRelation::GetCurDeadline() const
{
    return m_curDeadline;
}

void AnycastOutPackRelation::SetCurDeadline(const string& _curDeadline)
{
    m_curDeadline = _curDeadline;
    m_curDeadlineHasBeenSet = true;
}

bool AnycastOutPackRelation::CurDeadlineHasBeenSet() const
{
    return m_curDeadlineHasBeenSet;
}

