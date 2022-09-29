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

#include <tencentcloud/ess/v20201111/model/SuccessDeleteStaffData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SuccessDeleteStaffData::SuccessDeleteStaffData() :
    m_displayNameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome SuccessDeleteStaffData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessDeleteStaffData.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessDeleteStaffData.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessDeleteStaffData.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuccessDeleteStaffData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


string SuccessDeleteStaffData::GetDisplayName() const
{
    return m_displayName;
}

void SuccessDeleteStaffData::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool SuccessDeleteStaffData::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string SuccessDeleteStaffData::GetMobile() const
{
    return m_mobile;
}

void SuccessDeleteStaffData::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool SuccessDeleteStaffData::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string SuccessDeleteStaffData::GetUserId() const
{
    return m_userId;
}

void SuccessDeleteStaffData::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SuccessDeleteStaffData::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

