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

#include <tencentcloud/ess/v20201111/model/FailedCreateStaffData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FailedCreateStaffData::FailedCreateStaffData() :
    m_displayNameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_weworkOpenIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome FailedCreateStaffData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedCreateStaffData.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedCreateStaffData.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("WeworkOpenId") && !value["WeworkOpenId"].IsNull())
    {
        if (!value["WeworkOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedCreateStaffData.WeworkOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weworkOpenId = string(value["WeworkOpenId"].GetString());
        m_weworkOpenIdHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedCreateStaffData.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FailedCreateStaffData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_weworkOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeworkOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weworkOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string FailedCreateStaffData::GetDisplayName() const
{
    return m_displayName;
}

void FailedCreateStaffData::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool FailedCreateStaffData::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string FailedCreateStaffData::GetMobile() const
{
    return m_mobile;
}

void FailedCreateStaffData::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool FailedCreateStaffData::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string FailedCreateStaffData::GetWeworkOpenId() const
{
    return m_weworkOpenId;
}

void FailedCreateStaffData::SetWeworkOpenId(const string& _weworkOpenId)
{
    m_weworkOpenId = _weworkOpenId;
    m_weworkOpenIdHasBeenSet = true;
}

bool FailedCreateStaffData::WeworkOpenIdHasBeenSet() const
{
    return m_weworkOpenIdHasBeenSet;
}

string FailedCreateStaffData::GetReason() const
{
    return m_reason;
}

void FailedCreateStaffData::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool FailedCreateStaffData::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

