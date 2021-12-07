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

#include <tencentcloud/tcss/v20201101/model/ModifyCompliancePeriodTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyCompliancePeriodTaskRequest::ModifyCompliancePeriodTaskRequest() :
    m_periodTaskIdHasBeenSet(false),
    m_periodRuleHasBeenSet(false),
    m_standardSettingsHasBeenSet(false)
{
}

string ModifyCompliancePeriodTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_periodTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_periodTaskId, allocator);
    }

    if (m_periodRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_periodRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_standardSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_standardSettings.begin(); itr != m_standardSettings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyCompliancePeriodTaskRequest::GetPeriodTaskId() const
{
    return m_periodTaskId;
}

void ModifyCompliancePeriodTaskRequest::SetPeriodTaskId(const uint64_t& _periodTaskId)
{
    m_periodTaskId = _periodTaskId;
    m_periodTaskIdHasBeenSet = true;
}

bool ModifyCompliancePeriodTaskRequest::PeriodTaskIdHasBeenSet() const
{
    return m_periodTaskIdHasBeenSet;
}

CompliancePeriodTaskRule ModifyCompliancePeriodTaskRequest::GetPeriodRule() const
{
    return m_periodRule;
}

void ModifyCompliancePeriodTaskRequest::SetPeriodRule(const CompliancePeriodTaskRule& _periodRule)
{
    m_periodRule = _periodRule;
    m_periodRuleHasBeenSet = true;
}

bool ModifyCompliancePeriodTaskRequest::PeriodRuleHasBeenSet() const
{
    return m_periodRuleHasBeenSet;
}

vector<ComplianceBenchmarkStandardEnable> ModifyCompliancePeriodTaskRequest::GetStandardSettings() const
{
    return m_standardSettings;
}

void ModifyCompliancePeriodTaskRequest::SetStandardSettings(const vector<ComplianceBenchmarkStandardEnable>& _standardSettings)
{
    m_standardSettings = _standardSettings;
    m_standardSettingsHasBeenSet = true;
}

bool ModifyCompliancePeriodTaskRequest::StandardSettingsHasBeenSet() const
{
    return m_standardSettingsHasBeenSet;
}


