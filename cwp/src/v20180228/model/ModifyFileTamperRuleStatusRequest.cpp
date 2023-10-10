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

#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperRuleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyFileTamperRuleStatusRequest::ModifyFileTamperRuleStatusRequest() :
    m_statusHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_ruleCategoryHasBeenSet(false)
{
}

string ModifyFileTamperRuleStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_ruleCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleCategory, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyFileTamperRuleStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyFileTamperRuleStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyFileTamperRuleStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<uint64_t> ModifyFileTamperRuleStatusRequest::GetIds() const
{
    return m_ids;
}

void ModifyFileTamperRuleStatusRequest::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool ModifyFileTamperRuleStatusRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

uint64_t ModifyFileTamperRuleStatusRequest::GetRuleCategory() const
{
    return m_ruleCategory;
}

void ModifyFileTamperRuleStatusRequest::SetRuleCategory(const uint64_t& _ruleCategory)
{
    m_ruleCategory = _ruleCategory;
    m_ruleCategoryHasBeenSet = true;
}

bool ModifyFileTamperRuleStatusRequest::RuleCategoryHasBeenSet() const
{
    return m_ruleCategoryHasBeenSet;
}


