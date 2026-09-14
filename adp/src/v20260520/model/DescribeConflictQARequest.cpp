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

#include <tencentcloud/adp/v20260520/model/DescribeConflictQARequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeConflictQARequest::DescribeConflictQARequest() :
    m_conflictGroupIdHasBeenSet(false),
    m_kbIdHasBeenSet(false)
{
}

string DescribeConflictQARequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_conflictGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_conflictGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeConflictQARequest::GetConflictGroupId() const
{
    return m_conflictGroupId;
}

void DescribeConflictQARequest::SetConflictGroupId(const string& _conflictGroupId)
{
    m_conflictGroupId = _conflictGroupId;
    m_conflictGroupIdHasBeenSet = true;
}

bool DescribeConflictQARequest::ConflictGroupIdHasBeenSet() const
{
    return m_conflictGroupIdHasBeenSet;
}

string DescribeConflictQARequest::GetKbId() const
{
    return m_kbId;
}

void DescribeConflictQARequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool DescribeConflictQARequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}


