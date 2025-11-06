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

#include <tencentcloud/ccc/v20200210/model/SetStaffStatusRspItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

SetStaffStatusRspItem::SetStaffStatusRspItem() :
    m_staffUserIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_previousStatusHasBeenSet(false),
    m_previousReasonHasBeenSet(false)
{
}

CoreInternalOutcome SetStaffStatusRspItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StaffUserId") && !value["StaffUserId"].IsNull())
    {
        if (!value["StaffUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusRspItem.StaffUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffUserId = string(value["StaffUserId"].GetString());
        m_staffUserIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusRspItem.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusRspItem.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusRspItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusRspItem.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("PreviousStatus") && !value["PreviousStatus"].IsNull())
    {
        if (!value["PreviousStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusRspItem.PreviousStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previousStatus = string(value["PreviousStatus"].GetString());
        m_previousStatusHasBeenSet = true;
    }

    if (value.HasMember("PreviousReason") && !value["PreviousReason"].IsNull())
    {
        if (!value["PreviousReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetStaffStatusRspItem.PreviousReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previousReason = string(value["PreviousReason"].GetString());
        m_previousReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetStaffStatusRspItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_staffUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
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

    if (m_previousStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviousStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previousStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_previousReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviousReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previousReason.c_str(), allocator).Move(), allocator);
    }

}


string SetStaffStatusRspItem::GetStaffUserId() const
{
    return m_staffUserId;
}

void SetStaffStatusRspItem::SetStaffUserId(const string& _staffUserId)
{
    m_staffUserId = _staffUserId;
    m_staffUserIdHasBeenSet = true;
}

bool SetStaffStatusRspItem::StaffUserIdHasBeenSet() const
{
    return m_staffUserIdHasBeenSet;
}

string SetStaffStatusRspItem::GetErrorCode() const
{
    return m_errorCode;
}

void SetStaffStatusRspItem::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool SetStaffStatusRspItem::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string SetStaffStatusRspItem::GetErrorMessage() const
{
    return m_errorMessage;
}

void SetStaffStatusRspItem::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool SetStaffStatusRspItem::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string SetStaffStatusRspItem::GetStatus() const
{
    return m_status;
}

void SetStaffStatusRspItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SetStaffStatusRspItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SetStaffStatusRspItem::GetReason() const
{
    return m_reason;
}

void SetStaffStatusRspItem::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool SetStaffStatusRspItem::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string SetStaffStatusRspItem::GetPreviousStatus() const
{
    return m_previousStatus;
}

void SetStaffStatusRspItem::SetPreviousStatus(const string& _previousStatus)
{
    m_previousStatus = _previousStatus;
    m_previousStatusHasBeenSet = true;
}

bool SetStaffStatusRspItem::PreviousStatusHasBeenSet() const
{
    return m_previousStatusHasBeenSet;
}

string SetStaffStatusRspItem::GetPreviousReason() const
{
    return m_previousReason;
}

void SetStaffStatusRspItem::SetPreviousReason(const string& _previousReason)
{
    m_previousReason = _previousReason;
    m_previousReasonHasBeenSet = true;
}

bool SetStaffStatusRspItem::PreviousReasonHasBeenSet() const
{
    return m_previousReasonHasBeenSet;
}

