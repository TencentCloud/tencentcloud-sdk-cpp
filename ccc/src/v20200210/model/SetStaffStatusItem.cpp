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

#include <tencentcloud/ccc/v20200210/model/SetStaffStatusItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

SetStaffStatusItem::SetStaffStatusItem() :
    m_staffUserIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome SetStaffStatusItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StaffUserId") && !value["StaffUserId"].IsNull())
    {
        if (!value["StaffUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusItem.StaffUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffUserId = string(value["StaffUserId"].GetString());
        m_staffUserIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusItem.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetStaffStatusItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_staffUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string SetStaffStatusItem::GetStaffUserId() const
{
    return m_staffUserId;
}

void SetStaffStatusItem::SetStaffUserId(const string& _staffUserId)
{
    m_staffUserId = _staffUserId;
    m_staffUserIdHasBeenSet = true;
}

bool SetStaffStatusItem::StaffUserIdHasBeenSet() const
{
    return m_staffUserIdHasBeenSet;
}

string SetStaffStatusItem::GetStatus() const
{
    return m_status;
}

void SetStaffStatusItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SetStaffStatusItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SetStaffStatusItem::GetReason() const
{
    return m_reason;
}

void SetStaffStatusItem::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool SetStaffStatusItem::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

