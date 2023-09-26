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

#include <tencentcloud/waf/v20180125/model/UpsertSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UpsertSessionRequest::UpsertSessionRequest() :
    m_domainHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_keyOrStartMatHasBeenSet(false),
    m_endMatHasBeenSet(false),
    m_startOffsetHasBeenSet(false),
    m_endOffsetHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_sessionIDHasBeenSet(false)
{
}

string UpsertSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_keyOrStartMatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyOrStartMat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyOrStartMat.c_str(), allocator).Move(), allocator);
    }

    if (m_endMatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndMat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endMat.c_str(), allocator).Move(), allocator);
    }

    if (m_startOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startOffset.c_str(), allocator).Move(), allocator);
    }

    if (m_endOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endOffset.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpsertSessionRequest::GetDomain() const
{
    return m_domain;
}

void UpsertSessionRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool UpsertSessionRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string UpsertSessionRequest::GetSource() const
{
    return m_source;
}

void UpsertSessionRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool UpsertSessionRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string UpsertSessionRequest::GetCategory() const
{
    return m_category;
}

void UpsertSessionRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool UpsertSessionRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string UpsertSessionRequest::GetKeyOrStartMat() const
{
    return m_keyOrStartMat;
}

void UpsertSessionRequest::SetKeyOrStartMat(const string& _keyOrStartMat)
{
    m_keyOrStartMat = _keyOrStartMat;
    m_keyOrStartMatHasBeenSet = true;
}

bool UpsertSessionRequest::KeyOrStartMatHasBeenSet() const
{
    return m_keyOrStartMatHasBeenSet;
}

string UpsertSessionRequest::GetEndMat() const
{
    return m_endMat;
}

void UpsertSessionRequest::SetEndMat(const string& _endMat)
{
    m_endMat = _endMat;
    m_endMatHasBeenSet = true;
}

bool UpsertSessionRequest::EndMatHasBeenSet() const
{
    return m_endMatHasBeenSet;
}

string UpsertSessionRequest::GetStartOffset() const
{
    return m_startOffset;
}

void UpsertSessionRequest::SetStartOffset(const string& _startOffset)
{
    m_startOffset = _startOffset;
    m_startOffsetHasBeenSet = true;
}

bool UpsertSessionRequest::StartOffsetHasBeenSet() const
{
    return m_startOffsetHasBeenSet;
}

string UpsertSessionRequest::GetEndOffset() const
{
    return m_endOffset;
}

void UpsertSessionRequest::SetEndOffset(const string& _endOffset)
{
    m_endOffset = _endOffset;
    m_endOffsetHasBeenSet = true;
}

bool UpsertSessionRequest::EndOffsetHasBeenSet() const
{
    return m_endOffsetHasBeenSet;
}

string UpsertSessionRequest::GetEdition() const
{
    return m_edition;
}

void UpsertSessionRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool UpsertSessionRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string UpsertSessionRequest::GetSessionName() const
{
    return m_sessionName;
}

void UpsertSessionRequest::SetSessionName(const string& _sessionName)
{
    m_sessionName = _sessionName;
    m_sessionNameHasBeenSet = true;
}

bool UpsertSessionRequest::SessionNameHasBeenSet() const
{
    return m_sessionNameHasBeenSet;
}

int64_t UpsertSessionRequest::GetSessionID() const
{
    return m_sessionID;
}

void UpsertSessionRequest::SetSessionID(const int64_t& _sessionID)
{
    m_sessionID = _sessionID;
    m_sessionIDHasBeenSet = true;
}

bool UpsertSessionRequest::SessionIDHasBeenSet() const
{
    return m_sessionIDHasBeenSet;
}


