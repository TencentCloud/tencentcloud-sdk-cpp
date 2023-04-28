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

#include <tencentcloud/dasb/v20191018/model/SearchCommandBySidRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

SearchCommandBySidRequest::SearchCommandBySidRequest() :
    m_sidHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_auditActionHasBeenSet(false)
{
}

string SearchCommandBySidRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encoding, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_auditActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_auditAction.begin(); itr != m_auditAction.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchCommandBySidRequest::GetSid() const
{
    return m_sid;
}

void SearchCommandBySidRequest::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool SearchCommandBySidRequest::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

string SearchCommandBySidRequest::GetCmd() const
{
    return m_cmd;
}

void SearchCommandBySidRequest::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool SearchCommandBySidRequest::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

uint64_t SearchCommandBySidRequest::GetEncoding() const
{
    return m_encoding;
}

void SearchCommandBySidRequest::SetEncoding(const uint64_t& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool SearchCommandBySidRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

uint64_t SearchCommandBySidRequest::GetOffset() const
{
    return m_offset;
}

void SearchCommandBySidRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchCommandBySidRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t SearchCommandBySidRequest::GetLimit() const
{
    return m_limit;
}

void SearchCommandBySidRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchCommandBySidRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<uint64_t> SearchCommandBySidRequest::GetAuditAction() const
{
    return m_auditAction;
}

void SearchCommandBySidRequest::SetAuditAction(const vector<uint64_t>& _auditAction)
{
    m_auditAction = _auditAction;
    m_auditActionHasBeenSet = true;
}

bool SearchCommandBySidRequest::AuditActionHasBeenSet() const
{
    return m_auditActionHasBeenSet;
}


