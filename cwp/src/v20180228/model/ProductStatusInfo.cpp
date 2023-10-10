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

#include <tencentcloud/cwp/v20180228/model/ProductStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ProductStatusInfo::ProductStatusInfo() :
    m_fWUserStatusHasBeenSet(false),
    m_canApplyTrialHasBeenSet(false),
    m_canNotApplyReasonHasBeenSet(false),
    m_lastTrialTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProductStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FWUserStatus") && !value["FWUserStatus"].IsNull())
    {
        if (!value["FWUserStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductStatusInfo.FWUserStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fWUserStatus = value["FWUserStatus"].GetUint64();
        m_fWUserStatusHasBeenSet = true;
    }

    if (value.HasMember("CanApplyTrial") && !value["CanApplyTrial"].IsNull())
    {
        if (!value["CanApplyTrial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProductStatusInfo.CanApplyTrial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canApplyTrial = value["CanApplyTrial"].GetBool();
        m_canApplyTrialHasBeenSet = true;
    }

    if (value.HasMember("CanNotApplyReason") && !value["CanNotApplyReason"].IsNull())
    {
        if (!value["CanNotApplyReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductStatusInfo.CanNotApplyReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_canNotApplyReason = string(value["CanNotApplyReason"].GetString());
        m_canNotApplyReasonHasBeenSet = true;
    }

    if (value.HasMember("LastTrialTime") && !value["LastTrialTime"].IsNull())
    {
        if (!value["LastTrialTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductStatusInfo.LastTrialTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTrialTime = string(value["LastTrialTime"].GetString());
        m_lastTrialTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fWUserStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FWUserStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fWUserStatus, allocator);
    }

    if (m_canApplyTrialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanApplyTrial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canApplyTrial, allocator);
    }

    if (m_canNotApplyReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanNotApplyReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_canNotApplyReason.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTrialTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTrialTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTrialTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ProductStatusInfo::GetFWUserStatus() const
{
    return m_fWUserStatus;
}

void ProductStatusInfo::SetFWUserStatus(const uint64_t& _fWUserStatus)
{
    m_fWUserStatus = _fWUserStatus;
    m_fWUserStatusHasBeenSet = true;
}

bool ProductStatusInfo::FWUserStatusHasBeenSet() const
{
    return m_fWUserStatusHasBeenSet;
}

bool ProductStatusInfo::GetCanApplyTrial() const
{
    return m_canApplyTrial;
}

void ProductStatusInfo::SetCanApplyTrial(const bool& _canApplyTrial)
{
    m_canApplyTrial = _canApplyTrial;
    m_canApplyTrialHasBeenSet = true;
}

bool ProductStatusInfo::CanApplyTrialHasBeenSet() const
{
    return m_canApplyTrialHasBeenSet;
}

string ProductStatusInfo::GetCanNotApplyReason() const
{
    return m_canNotApplyReason;
}

void ProductStatusInfo::SetCanNotApplyReason(const string& _canNotApplyReason)
{
    m_canNotApplyReason = _canNotApplyReason;
    m_canNotApplyReasonHasBeenSet = true;
}

bool ProductStatusInfo::CanNotApplyReasonHasBeenSet() const
{
    return m_canNotApplyReasonHasBeenSet;
}

string ProductStatusInfo::GetLastTrialTime() const
{
    return m_lastTrialTime;
}

void ProductStatusInfo::SetLastTrialTime(const string& _lastTrialTime)
{
    m_lastTrialTime = _lastTrialTime;
    m_lastTrialTimeHasBeenSet = true;
}

bool ProductStatusInfo::LastTrialTimeHasBeenSet() const
{
    return m_lastTrialTimeHasBeenSet;
}

