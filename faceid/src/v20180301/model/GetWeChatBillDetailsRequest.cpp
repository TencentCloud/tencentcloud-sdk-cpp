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

#include <tencentcloud/faceid/v20180301/model/GetWeChatBillDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetWeChatBillDetailsRequest::GetWeChatBillDetailsRequest() :
    m_dateHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string GetWeChatBillDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cursor, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetWeChatBillDetailsRequest::GetDate() const
{
    return m_date;
}

void GetWeChatBillDetailsRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool GetWeChatBillDetailsRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t GetWeChatBillDetailsRequest::GetCursor() const
{
    return m_cursor;
}

void GetWeChatBillDetailsRequest::SetCursor(const uint64_t& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool GetWeChatBillDetailsRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

string GetWeChatBillDetailsRequest::GetRuleId() const
{
    return m_ruleId;
}

void GetWeChatBillDetailsRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool GetWeChatBillDetailsRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


