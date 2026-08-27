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

#include <tencentcloud/monitor/v20230616/model/ModifyDispenseExternalRuleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ModifyDispenseExternalRuleStatusRequest::ModifyDispenseExternalRuleStatusRequest() :
    m_ruleIdListHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyDispenseExternalRuleStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIdList.begin(); itr != m_ruleIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> ModifyDispenseExternalRuleStatusRequest::GetRuleIdList() const
{
    return m_ruleIdList;
}

void ModifyDispenseExternalRuleStatusRequest::SetRuleIdList(const vector<int64_t>& _ruleIdList)
{
    m_ruleIdList = _ruleIdList;
    m_ruleIdListHasBeenSet = true;
}

bool ModifyDispenseExternalRuleStatusRequest::RuleIdListHasBeenSet() const
{
    return m_ruleIdListHasBeenSet;
}

int64_t ModifyDispenseExternalRuleStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyDispenseExternalRuleStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDispenseExternalRuleStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


