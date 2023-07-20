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

#include <tencentcloud/wedata/v20210820/model/CreateBaselineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateBaselineRequest::CreateBaselineRequest() :
    m_projectIdHasBeenSet(false),
    m_baselineNameHasBeenSet(false),
    m_baselineTypeHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_createNameHasBeenSet(false),
    m_inChargeUinHasBeenSet(false),
    m_inChargeNameHasBeenSet(false),
    m_promiseTasksHasBeenSet(false),
    m_promiseTimeHasBeenSet(false),
    m_warningMarginHasBeenSet(false),
    m_isNewAlarmHasBeenSet(false),
    m_alarmRuleDtoHasBeenSet(false),
    m_baselineCreateAlarmRuleRequestHasBeenSet(false)
{
}

string CreateBaselineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baselineName.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baselineType.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createName.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inChargeUin.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inChargeName.c_str(), allocator).Move(), allocator);
    }

    if (m_promiseTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromiseTasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_promiseTasks.begin(); itr != m_promiseTasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_promiseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromiseTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_promiseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_warningMarginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningMargin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_warningMargin, allocator);
    }

    if (m_isNewAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAlarm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNewAlarm, allocator);
    }

    if (m_alarmRuleDtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleDto";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alarmRuleDto.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_baselineCreateAlarmRuleRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineCreateAlarmRuleRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baselineCreateAlarmRuleRequest.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBaselineRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateBaselineRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateBaselineRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateBaselineRequest::GetBaselineName() const
{
    return m_baselineName;
}

void CreateBaselineRequest::SetBaselineName(const string& _baselineName)
{
    m_baselineName = _baselineName;
    m_baselineNameHasBeenSet = true;
}

bool CreateBaselineRequest::BaselineNameHasBeenSet() const
{
    return m_baselineNameHasBeenSet;
}

string CreateBaselineRequest::GetBaselineType() const
{
    return m_baselineType;
}

void CreateBaselineRequest::SetBaselineType(const string& _baselineType)
{
    m_baselineType = _baselineType;
    m_baselineTypeHasBeenSet = true;
}

bool CreateBaselineRequest::BaselineTypeHasBeenSet() const
{
    return m_baselineTypeHasBeenSet;
}

string CreateBaselineRequest::GetCreateUin() const
{
    return m_createUin;
}

void CreateBaselineRequest::SetCreateUin(const string& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool CreateBaselineRequest::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

string CreateBaselineRequest::GetCreateName() const
{
    return m_createName;
}

void CreateBaselineRequest::SetCreateName(const string& _createName)
{
    m_createName = _createName;
    m_createNameHasBeenSet = true;
}

bool CreateBaselineRequest::CreateNameHasBeenSet() const
{
    return m_createNameHasBeenSet;
}

string CreateBaselineRequest::GetInChargeUin() const
{
    return m_inChargeUin;
}

void CreateBaselineRequest::SetInChargeUin(const string& _inChargeUin)
{
    m_inChargeUin = _inChargeUin;
    m_inChargeUinHasBeenSet = true;
}

bool CreateBaselineRequest::InChargeUinHasBeenSet() const
{
    return m_inChargeUinHasBeenSet;
}

string CreateBaselineRequest::GetInChargeName() const
{
    return m_inChargeName;
}

void CreateBaselineRequest::SetInChargeName(const string& _inChargeName)
{
    m_inChargeName = _inChargeName;
    m_inChargeNameHasBeenSet = true;
}

bool CreateBaselineRequest::InChargeNameHasBeenSet() const
{
    return m_inChargeNameHasBeenSet;
}

vector<BaselineTaskInfo> CreateBaselineRequest::GetPromiseTasks() const
{
    return m_promiseTasks;
}

void CreateBaselineRequest::SetPromiseTasks(const vector<BaselineTaskInfo>& _promiseTasks)
{
    m_promiseTasks = _promiseTasks;
    m_promiseTasksHasBeenSet = true;
}

bool CreateBaselineRequest::PromiseTasksHasBeenSet() const
{
    return m_promiseTasksHasBeenSet;
}

string CreateBaselineRequest::GetPromiseTime() const
{
    return m_promiseTime;
}

void CreateBaselineRequest::SetPromiseTime(const string& _promiseTime)
{
    m_promiseTime = _promiseTime;
    m_promiseTimeHasBeenSet = true;
}

bool CreateBaselineRequest::PromiseTimeHasBeenSet() const
{
    return m_promiseTimeHasBeenSet;
}

uint64_t CreateBaselineRequest::GetWarningMargin() const
{
    return m_warningMargin;
}

void CreateBaselineRequest::SetWarningMargin(const uint64_t& _warningMargin)
{
    m_warningMargin = _warningMargin;
    m_warningMarginHasBeenSet = true;
}

bool CreateBaselineRequest::WarningMarginHasBeenSet() const
{
    return m_warningMarginHasBeenSet;
}

bool CreateBaselineRequest::GetIsNewAlarm() const
{
    return m_isNewAlarm;
}

void CreateBaselineRequest::SetIsNewAlarm(const bool& _isNewAlarm)
{
    m_isNewAlarm = _isNewAlarm;
    m_isNewAlarmHasBeenSet = true;
}

bool CreateBaselineRequest::IsNewAlarmHasBeenSet() const
{
    return m_isNewAlarmHasBeenSet;
}

AlarmRuleDto CreateBaselineRequest::GetAlarmRuleDto() const
{
    return m_alarmRuleDto;
}

void CreateBaselineRequest::SetAlarmRuleDto(const AlarmRuleDto& _alarmRuleDto)
{
    m_alarmRuleDto = _alarmRuleDto;
    m_alarmRuleDtoHasBeenSet = true;
}

bool CreateBaselineRequest::AlarmRuleDtoHasBeenSet() const
{
    return m_alarmRuleDtoHasBeenSet;
}

CreateAlarmRuleRequest CreateBaselineRequest::GetBaselineCreateAlarmRuleRequest() const
{
    return m_baselineCreateAlarmRuleRequest;
}

void CreateBaselineRequest::SetBaselineCreateAlarmRuleRequest(const CreateAlarmRuleRequest& _baselineCreateAlarmRuleRequest)
{
    m_baselineCreateAlarmRuleRequest = _baselineCreateAlarmRuleRequest;
    m_baselineCreateAlarmRuleRequestHasBeenSet = true;
}

bool CreateBaselineRequest::BaselineCreateAlarmRuleRequestHasBeenSet() const
{
    return m_baselineCreateAlarmRuleRequestHasBeenSet;
}


