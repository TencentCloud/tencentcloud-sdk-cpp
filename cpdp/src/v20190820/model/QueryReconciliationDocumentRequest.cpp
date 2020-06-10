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

#include <tencentcloud/cpdp/v20190820/model/QueryReconciliationDocumentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryReconciliationDocumentRequest::QueryReconciliationDocumentRequest() :
    m_mrchCodeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileDateHasBeenSet(false),
    m_reservedMsgHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryReconciliationDocumentRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mrchCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileDate.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reservedMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryReconciliationDocumentRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void QueryReconciliationDocumentRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool QueryReconciliationDocumentRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string QueryReconciliationDocumentRequest::GetFileType() const
{
    return m_fileType;
}

void QueryReconciliationDocumentRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool QueryReconciliationDocumentRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string QueryReconciliationDocumentRequest::GetFileDate() const
{
    return m_fileDate;
}

void QueryReconciliationDocumentRequest::SetFileDate(const string& _fileDate)
{
    m_fileDate = _fileDate;
    m_fileDateHasBeenSet = true;
}

bool QueryReconciliationDocumentRequest::FileDateHasBeenSet() const
{
    return m_fileDateHasBeenSet;
}

string QueryReconciliationDocumentRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void QueryReconciliationDocumentRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool QueryReconciliationDocumentRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}

string QueryReconciliationDocumentRequest::GetProfile() const
{
    return m_profile;
}

void QueryReconciliationDocumentRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryReconciliationDocumentRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


