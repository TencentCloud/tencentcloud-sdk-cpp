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

#include <tencentcloud/bh/v20230418/model/ApproveTicketRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ApproveTicketRequest::ApproveTicketRequest() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_approveDescHasBeenSet(false),
    m_applyTimeVersionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_allowDiskRedirectHasBeenSet(false),
    m_allowClipFileUpHasBeenSet(false),
    m_allowClipFileDownHasBeenSet(false),
    m_allowClipTextUpHasBeenSet(false),
    m_allowClipTextDownHasBeenSet(false),
    m_allowFileUpHasBeenSet(false),
    m_maxFileUpSizeHasBeenSet(false),
    m_allowFileDownHasBeenSet(false),
    m_maxFileDownSizeHasBeenSet(false),
    m_allowDiskFileUpHasBeenSet(false),
    m_allowDiskFileDownHasBeenSet(false),
    m_allowShellFileUpHasBeenSet(false),
    m_allowShellFileDownHasBeenSet(false),
    m_allowFileDelHasBeenSet(false),
    m_allowAccessCredentialHasBeenSet(false),
    m_cmdTemplateIdSetHasBeenSet(false),
    m_aCTemplateIdSetHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_allowKeyboardLoggerHasBeenSet(false)
{
}

string ApproveTicketRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_approveDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approveDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTimeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applyTimeVersion, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_allowDiskRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDiskRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowDiskRedirect, allocator);
    }

    if (m_allowClipFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipFileUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowClipFileUp, allocator);
    }

    if (m_allowClipFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipFileDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowClipFileDown, allocator);
    }

    if (m_allowClipTextUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipTextUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowClipTextUp, allocator);
    }

    if (m_allowClipTextDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipTextDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowClipTextDown, allocator);
    }

    if (m_allowFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowFileUp, allocator);
    }

    if (m_maxFileUpSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFileUpSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFileUpSize, allocator);
    }

    if (m_allowFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowFileDown, allocator);
    }

    if (m_maxFileDownSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFileDownSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFileDownSize, allocator);
    }

    if (m_allowDiskFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDiskFileUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowDiskFileUp, allocator);
    }

    if (m_allowDiskFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDiskFileDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowDiskFileDown, allocator);
    }

    if (m_allowShellFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowShellFileUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowShellFileUp, allocator);
    }

    if (m_allowShellFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowShellFileDown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowShellFileDown, allocator);
    }

    if (m_allowFileDelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileDel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowFileDel, allocator);
    }

    if (m_allowAccessCredentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowAccessCredential";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowAccessCredential, allocator);
    }

    if (m_cmdTemplateIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdTemplateIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cmdTemplateIdSet.begin(); itr != m_cmdTemplateIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_aCTemplateIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACTemplateIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aCTemplateIdSet.begin(); itr != m_aCTemplateIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_allowKeyboardLoggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowKeyboardLogger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowKeyboardLogger, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ApproveTicketRequest::GetId() const
{
    return m_id;
}

void ApproveTicketRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ApproveTicketRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ApproveTicketRequest::GetStatus() const
{
    return m_status;
}

void ApproveTicketRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApproveTicketRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApproveTicketRequest::GetApproveDesc() const
{
    return m_approveDesc;
}

void ApproveTicketRequest::SetApproveDesc(const string& _approveDesc)
{
    m_approveDesc = _approveDesc;
    m_approveDescHasBeenSet = true;
}

bool ApproveTicketRequest::ApproveDescHasBeenSet() const
{
    return m_approveDescHasBeenSet;
}

int64_t ApproveTicketRequest::GetApplyTimeVersion() const
{
    return m_applyTimeVersion;
}

void ApproveTicketRequest::SetApplyTimeVersion(const int64_t& _applyTimeVersion)
{
    m_applyTimeVersion = _applyTimeVersion;
    m_applyTimeVersionHasBeenSet = true;
}

bool ApproveTicketRequest::ApplyTimeVersionHasBeenSet() const
{
    return m_applyTimeVersionHasBeenSet;
}

string ApproveTicketRequest::GetStartTime() const
{
    return m_startTime;
}

void ApproveTicketRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ApproveTicketRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ApproveTicketRequest::GetEndTime() const
{
    return m_endTime;
}

void ApproveTicketRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ApproveTicketRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool ApproveTicketRequest::GetAllowDiskRedirect() const
{
    return m_allowDiskRedirect;
}

void ApproveTicketRequest::SetAllowDiskRedirect(const bool& _allowDiskRedirect)
{
    m_allowDiskRedirect = _allowDiskRedirect;
    m_allowDiskRedirectHasBeenSet = true;
}

bool ApproveTicketRequest::AllowDiskRedirectHasBeenSet() const
{
    return m_allowDiskRedirectHasBeenSet;
}

bool ApproveTicketRequest::GetAllowClipFileUp() const
{
    return m_allowClipFileUp;
}

void ApproveTicketRequest::SetAllowClipFileUp(const bool& _allowClipFileUp)
{
    m_allowClipFileUp = _allowClipFileUp;
    m_allowClipFileUpHasBeenSet = true;
}

bool ApproveTicketRequest::AllowClipFileUpHasBeenSet() const
{
    return m_allowClipFileUpHasBeenSet;
}

bool ApproveTicketRequest::GetAllowClipFileDown() const
{
    return m_allowClipFileDown;
}

void ApproveTicketRequest::SetAllowClipFileDown(const bool& _allowClipFileDown)
{
    m_allowClipFileDown = _allowClipFileDown;
    m_allowClipFileDownHasBeenSet = true;
}

bool ApproveTicketRequest::AllowClipFileDownHasBeenSet() const
{
    return m_allowClipFileDownHasBeenSet;
}

bool ApproveTicketRequest::GetAllowClipTextUp() const
{
    return m_allowClipTextUp;
}

void ApproveTicketRequest::SetAllowClipTextUp(const bool& _allowClipTextUp)
{
    m_allowClipTextUp = _allowClipTextUp;
    m_allowClipTextUpHasBeenSet = true;
}

bool ApproveTicketRequest::AllowClipTextUpHasBeenSet() const
{
    return m_allowClipTextUpHasBeenSet;
}

bool ApproveTicketRequest::GetAllowClipTextDown() const
{
    return m_allowClipTextDown;
}

void ApproveTicketRequest::SetAllowClipTextDown(const bool& _allowClipTextDown)
{
    m_allowClipTextDown = _allowClipTextDown;
    m_allowClipTextDownHasBeenSet = true;
}

bool ApproveTicketRequest::AllowClipTextDownHasBeenSet() const
{
    return m_allowClipTextDownHasBeenSet;
}

bool ApproveTicketRequest::GetAllowFileUp() const
{
    return m_allowFileUp;
}

void ApproveTicketRequest::SetAllowFileUp(const bool& _allowFileUp)
{
    m_allowFileUp = _allowFileUp;
    m_allowFileUpHasBeenSet = true;
}

bool ApproveTicketRequest::AllowFileUpHasBeenSet() const
{
    return m_allowFileUpHasBeenSet;
}

uint64_t ApproveTicketRequest::GetMaxFileUpSize() const
{
    return m_maxFileUpSize;
}

void ApproveTicketRequest::SetMaxFileUpSize(const uint64_t& _maxFileUpSize)
{
    m_maxFileUpSize = _maxFileUpSize;
    m_maxFileUpSizeHasBeenSet = true;
}

bool ApproveTicketRequest::MaxFileUpSizeHasBeenSet() const
{
    return m_maxFileUpSizeHasBeenSet;
}

bool ApproveTicketRequest::GetAllowFileDown() const
{
    return m_allowFileDown;
}

void ApproveTicketRequest::SetAllowFileDown(const bool& _allowFileDown)
{
    m_allowFileDown = _allowFileDown;
    m_allowFileDownHasBeenSet = true;
}

bool ApproveTicketRequest::AllowFileDownHasBeenSet() const
{
    return m_allowFileDownHasBeenSet;
}

uint64_t ApproveTicketRequest::GetMaxFileDownSize() const
{
    return m_maxFileDownSize;
}

void ApproveTicketRequest::SetMaxFileDownSize(const uint64_t& _maxFileDownSize)
{
    m_maxFileDownSize = _maxFileDownSize;
    m_maxFileDownSizeHasBeenSet = true;
}

bool ApproveTicketRequest::MaxFileDownSizeHasBeenSet() const
{
    return m_maxFileDownSizeHasBeenSet;
}

bool ApproveTicketRequest::GetAllowDiskFileUp() const
{
    return m_allowDiskFileUp;
}

void ApproveTicketRequest::SetAllowDiskFileUp(const bool& _allowDiskFileUp)
{
    m_allowDiskFileUp = _allowDiskFileUp;
    m_allowDiskFileUpHasBeenSet = true;
}

bool ApproveTicketRequest::AllowDiskFileUpHasBeenSet() const
{
    return m_allowDiskFileUpHasBeenSet;
}

bool ApproveTicketRequest::GetAllowDiskFileDown() const
{
    return m_allowDiskFileDown;
}

void ApproveTicketRequest::SetAllowDiskFileDown(const bool& _allowDiskFileDown)
{
    m_allowDiskFileDown = _allowDiskFileDown;
    m_allowDiskFileDownHasBeenSet = true;
}

bool ApproveTicketRequest::AllowDiskFileDownHasBeenSet() const
{
    return m_allowDiskFileDownHasBeenSet;
}

bool ApproveTicketRequest::GetAllowShellFileUp() const
{
    return m_allowShellFileUp;
}

void ApproveTicketRequest::SetAllowShellFileUp(const bool& _allowShellFileUp)
{
    m_allowShellFileUp = _allowShellFileUp;
    m_allowShellFileUpHasBeenSet = true;
}

bool ApproveTicketRequest::AllowShellFileUpHasBeenSet() const
{
    return m_allowShellFileUpHasBeenSet;
}

bool ApproveTicketRequest::GetAllowShellFileDown() const
{
    return m_allowShellFileDown;
}

void ApproveTicketRequest::SetAllowShellFileDown(const bool& _allowShellFileDown)
{
    m_allowShellFileDown = _allowShellFileDown;
    m_allowShellFileDownHasBeenSet = true;
}

bool ApproveTicketRequest::AllowShellFileDownHasBeenSet() const
{
    return m_allowShellFileDownHasBeenSet;
}

bool ApproveTicketRequest::GetAllowFileDel() const
{
    return m_allowFileDel;
}

void ApproveTicketRequest::SetAllowFileDel(const bool& _allowFileDel)
{
    m_allowFileDel = _allowFileDel;
    m_allowFileDelHasBeenSet = true;
}

bool ApproveTicketRequest::AllowFileDelHasBeenSet() const
{
    return m_allowFileDelHasBeenSet;
}

bool ApproveTicketRequest::GetAllowAccessCredential() const
{
    return m_allowAccessCredential;
}

void ApproveTicketRequest::SetAllowAccessCredential(const bool& _allowAccessCredential)
{
    m_allowAccessCredential = _allowAccessCredential;
    m_allowAccessCredentialHasBeenSet = true;
}

bool ApproveTicketRequest::AllowAccessCredentialHasBeenSet() const
{
    return m_allowAccessCredentialHasBeenSet;
}

vector<uint64_t> ApproveTicketRequest::GetCmdTemplateIdSet() const
{
    return m_cmdTemplateIdSet;
}

void ApproveTicketRequest::SetCmdTemplateIdSet(const vector<uint64_t>& _cmdTemplateIdSet)
{
    m_cmdTemplateIdSet = _cmdTemplateIdSet;
    m_cmdTemplateIdSetHasBeenSet = true;
}

bool ApproveTicketRequest::CmdTemplateIdSetHasBeenSet() const
{
    return m_cmdTemplateIdSetHasBeenSet;
}

vector<string> ApproveTicketRequest::GetACTemplateIdSet() const
{
    return m_aCTemplateIdSet;
}

void ApproveTicketRequest::SetACTemplateIdSet(const vector<string>& _aCTemplateIdSet)
{
    m_aCTemplateIdSet = _aCTemplateIdSet;
    m_aCTemplateIdSetHasBeenSet = true;
}

bool ApproveTicketRequest::ACTemplateIdSetHasBeenSet() const
{
    return m_aCTemplateIdSetHasBeenSet;
}

string ApproveTicketRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void ApproveTicketRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool ApproveTicketRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

bool ApproveTicketRequest::GetAllowKeyboardLogger() const
{
    return m_allowKeyboardLogger;
}

void ApproveTicketRequest::SetAllowKeyboardLogger(const bool& _allowKeyboardLogger)
{
    m_allowKeyboardLogger = _allowKeyboardLogger;
    m_allowKeyboardLoggerHasBeenSet = true;
}

bool ApproveTicketRequest::AllowKeyboardLoggerHasBeenSet() const
{
    return m_allowKeyboardLoggerHasBeenSet;
}


