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

#include <tencentcloud/essbasic/v20210526/model/CommonApproverOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CommonApproverOption::CommonApproverOption() :
    m_canEditApproverHasBeenSet(false),
    m_noRefuseHasBeenSet(false),
    m_noTransferHasBeenSet(false),
    m_hideOneKeySignHasBeenSet(false),
    m_flowReadLimitHasBeenSet(false),
    m_forbidAddSignDateHasBeenSet(false)
{
}

CoreInternalOutcome CommonApproverOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanEditApprover") && !value["CanEditApprover"].IsNull())
    {
        if (!value["CanEditApprover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonApproverOption.CanEditApprover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEditApprover = value["CanEditApprover"].GetBool();
        m_canEditApproverHasBeenSet = true;
    }

    if (value.HasMember("NoRefuse") && !value["NoRefuse"].IsNull())
    {
        if (!value["NoRefuse"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonApproverOption.NoRefuse` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noRefuse = value["NoRefuse"].GetBool();
        m_noRefuseHasBeenSet = true;
    }

    if (value.HasMember("NoTransfer") && !value["NoTransfer"].IsNull())
    {
        if (!value["NoTransfer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonApproverOption.NoTransfer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noTransfer = value["NoTransfer"].GetBool();
        m_noTransferHasBeenSet = true;
    }

    if (value.HasMember("HideOneKeySign") && !value["HideOneKeySign"].IsNull())
    {
        if (!value["HideOneKeySign"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonApproverOption.HideOneKeySign` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideOneKeySign = value["HideOneKeySign"].GetBool();
        m_hideOneKeySignHasBeenSet = true;
    }

    if (value.HasMember("FlowReadLimit") && !value["FlowReadLimit"].IsNull())
    {
        if (!value["FlowReadLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonApproverOption.FlowReadLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowReadLimit = string(value["FlowReadLimit"].GetString());
        m_flowReadLimitHasBeenSet = true;
    }

    if (value.HasMember("ForbidAddSignDate") && !value["ForbidAddSignDate"].IsNull())
    {
        if (!value["ForbidAddSignDate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonApproverOption.ForbidAddSignDate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forbidAddSignDate = value["ForbidAddSignDate"].GetBool();
        m_forbidAddSignDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonApproverOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canEditApproverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEditApprover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEditApprover, allocator);
    }

    if (m_noRefuseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoRefuse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noRefuse, allocator);
    }

    if (m_noTransferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoTransfer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noTransfer, allocator);
    }

    if (m_hideOneKeySignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideOneKeySign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideOneKeySign, allocator);
    }

    if (m_flowReadLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowReadLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowReadLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_forbidAddSignDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidAddSignDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbidAddSignDate, allocator);
    }

}


bool CommonApproverOption::GetCanEditApprover() const
{
    return m_canEditApprover;
}

void CommonApproverOption::SetCanEditApprover(const bool& _canEditApprover)
{
    m_canEditApprover = _canEditApprover;
    m_canEditApproverHasBeenSet = true;
}

bool CommonApproverOption::CanEditApproverHasBeenSet() const
{
    return m_canEditApproverHasBeenSet;
}

bool CommonApproverOption::GetNoRefuse() const
{
    return m_noRefuse;
}

void CommonApproverOption::SetNoRefuse(const bool& _noRefuse)
{
    m_noRefuse = _noRefuse;
    m_noRefuseHasBeenSet = true;
}

bool CommonApproverOption::NoRefuseHasBeenSet() const
{
    return m_noRefuseHasBeenSet;
}

bool CommonApproverOption::GetNoTransfer() const
{
    return m_noTransfer;
}

void CommonApproverOption::SetNoTransfer(const bool& _noTransfer)
{
    m_noTransfer = _noTransfer;
    m_noTransferHasBeenSet = true;
}

bool CommonApproverOption::NoTransferHasBeenSet() const
{
    return m_noTransferHasBeenSet;
}

bool CommonApproverOption::GetHideOneKeySign() const
{
    return m_hideOneKeySign;
}

void CommonApproverOption::SetHideOneKeySign(const bool& _hideOneKeySign)
{
    m_hideOneKeySign = _hideOneKeySign;
    m_hideOneKeySignHasBeenSet = true;
}

bool CommonApproverOption::HideOneKeySignHasBeenSet() const
{
    return m_hideOneKeySignHasBeenSet;
}

string CommonApproverOption::GetFlowReadLimit() const
{
    return m_flowReadLimit;
}

void CommonApproverOption::SetFlowReadLimit(const string& _flowReadLimit)
{
    m_flowReadLimit = _flowReadLimit;
    m_flowReadLimitHasBeenSet = true;
}

bool CommonApproverOption::FlowReadLimitHasBeenSet() const
{
    return m_flowReadLimitHasBeenSet;
}

bool CommonApproverOption::GetForbidAddSignDate() const
{
    return m_forbidAddSignDate;
}

void CommonApproverOption::SetForbidAddSignDate(const bool& _forbidAddSignDate)
{
    m_forbidAddSignDate = _forbidAddSignDate;
    m_forbidAddSignDateHasBeenSet = true;
}

bool CommonApproverOption::ForbidAddSignDateHasBeenSet() const
{
    return m_forbidAddSignDateHasBeenSet;
}

