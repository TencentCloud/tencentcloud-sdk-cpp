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

#include <tencentcloud/bh/v20230418/model/SearchSubtaskResultByIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SearchSubtaskResultByIdRequest::SearchSubtaskResultByIdRequest() :
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string SearchSubtaskResultByIdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchSubtaskResultByIdRequest::GetName() const
{
    return m_name;
}

void SearchSubtaskResultByIdRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SearchSubtaskResultByIdRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t SearchSubtaskResultByIdRequest::GetOffset() const
{
    return m_offset;
}

void SearchSubtaskResultByIdRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchSubtaskResultByIdRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t SearchSubtaskResultByIdRequest::GetLimit() const
{
    return m_limit;
}

void SearchSubtaskResultByIdRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchSubtaskResultByIdRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string SearchSubtaskResultByIdRequest::GetId() const
{
    return m_id;
}

void SearchSubtaskResultByIdRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SearchSubtaskResultByIdRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<uint64_t> SearchSubtaskResultByIdRequest::GetStatus() const
{
    return m_status;
}

void SearchSubtaskResultByIdRequest::SetStatus(const vector<uint64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SearchSubtaskResultByIdRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


