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

#include <tencentcloud/gpm/v20200820/model/CancelMatchingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gpm::V20200820::Model;
using namespace rapidjson;
using namespace std;

CancelMatchingRequest::CancelMatchingRequest() :
    m_matchCodeHasBeenSet(false),
    m_matchTicketIdHasBeenSet(false)
{
}

string CancelMatchingRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_matchCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MatchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_matchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTicketIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MatchTicketId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_matchTicketId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CancelMatchingRequest::GetMatchCode() const
{
    return m_matchCode;
}

void CancelMatchingRequest::SetMatchCode(const string& _matchCode)
{
    m_matchCode = _matchCode;
    m_matchCodeHasBeenSet = true;
}

bool CancelMatchingRequest::MatchCodeHasBeenSet() const
{
    return m_matchCodeHasBeenSet;
}

string CancelMatchingRequest::GetMatchTicketId() const
{
    return m_matchTicketId;
}

void CancelMatchingRequest::SetMatchTicketId(const string& _matchTicketId)
{
    m_matchTicketId = _matchTicketId;
    m_matchTicketIdHasBeenSet = true;
}

bool CancelMatchingRequest::MatchTicketIdHasBeenSet() const
{
    return m_matchTicketIdHasBeenSet;
}


