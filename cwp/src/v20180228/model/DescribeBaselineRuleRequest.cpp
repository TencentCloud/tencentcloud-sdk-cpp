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

#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeBaselineRuleRequest::DescribeBaselineRuleRequest() :
    m_baselineIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false)
{
}

string DescribeBaselineRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_baselineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_baselineId, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_level.begin(); itr != m_level.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeBaselineRuleRequest::GetBaselineId() const
{
    return m_baselineId;
}

void DescribeBaselineRuleRequest::SetBaselineId(const uint64_t& _baselineId)
{
    m_baselineId = _baselineId;
    m_baselineIdHasBeenSet = true;
}

bool DescribeBaselineRuleRequest::BaselineIdHasBeenSet() const
{
    return m_baselineIdHasBeenSet;
}

uint64_t DescribeBaselineRuleRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBaselineRuleRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBaselineRuleRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeBaselineRuleRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBaselineRuleRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBaselineRuleRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<uint64_t> DescribeBaselineRuleRequest::GetLevel() const
{
    return m_level;
}

void DescribeBaselineRuleRequest::SetLevel(const vector<uint64_t>& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeBaselineRuleRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t DescribeBaselineRuleRequest::GetStatus() const
{
    return m_status;
}

void DescribeBaselineRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeBaselineRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeBaselineRuleRequest::GetQuuid() const
{
    return m_quuid;
}

void DescribeBaselineRuleRequest::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool DescribeBaselineRuleRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string DescribeBaselineRuleRequest::GetUuid() const
{
    return m_uuid;
}

void DescribeBaselineRuleRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool DescribeBaselineRuleRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}


