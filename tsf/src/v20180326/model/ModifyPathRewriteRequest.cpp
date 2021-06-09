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

#include <tencentcloud/tsf/v20180326/model/ModifyPathRewriteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ModifyPathRewriteRequest::ModifyPathRewriteRequest() :
    m_pathRewriteIdHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_replacementHasBeenSet(false),
    m_blockedHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string ModifyPathRewriteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pathRewriteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathRewriteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pathRewriteId.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

    if (m_replacementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replacement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replacement.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blocked";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blocked.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_order, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPathRewriteRequest::GetPathRewriteId() const
{
    return m_pathRewriteId;
}

void ModifyPathRewriteRequest::SetPathRewriteId(const string& _pathRewriteId)
{
    m_pathRewriteId = _pathRewriteId;
    m_pathRewriteIdHasBeenSet = true;
}

bool ModifyPathRewriteRequest::PathRewriteIdHasBeenSet() const
{
    return m_pathRewriteIdHasBeenSet;
}

string ModifyPathRewriteRequest::GetRegex() const
{
    return m_regex;
}

void ModifyPathRewriteRequest::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool ModifyPathRewriteRequest::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

string ModifyPathRewriteRequest::GetReplacement() const
{
    return m_replacement;
}

void ModifyPathRewriteRequest::SetReplacement(const string& _replacement)
{
    m_replacement = _replacement;
    m_replacementHasBeenSet = true;
}

bool ModifyPathRewriteRequest::ReplacementHasBeenSet() const
{
    return m_replacementHasBeenSet;
}

string ModifyPathRewriteRequest::GetBlocked() const
{
    return m_blocked;
}

void ModifyPathRewriteRequest::SetBlocked(const string& _blocked)
{
    m_blocked = _blocked;
    m_blockedHasBeenSet = true;
}

bool ModifyPathRewriteRequest::BlockedHasBeenSet() const
{
    return m_blockedHasBeenSet;
}

int64_t ModifyPathRewriteRequest::GetOrder() const
{
    return m_order;
}

void ModifyPathRewriteRequest::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ModifyPathRewriteRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


