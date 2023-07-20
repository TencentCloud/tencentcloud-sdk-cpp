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

#include <tencentcloud/wedata/v20210820/model/EditBaselineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EditBaselineRequest::EditBaselineRequest() :
    m_projectIdHasBeenSet(false),
    m_baselineNameHasBeenSet(false),
    m_baselineTypeHasBeenSet(false),
    m_inChargeUinHasBeenSet(false),
    m_inChargeNameHasBeenSet(false),
    m_promiseTasksHasBeenSet(false),
    m_promiseTimeHasBeenSet(false),
    m_warningMarginHasBeenSet(false),
    m_baselineIdHasBeenSet(false),
    m_updateUinHasBeenSet(false),
    m_updateNameHasBeenSet(false),
    m_isNewAlarmHasBeenSet(false),
    m_alarmRuleDtoHasBeenSet(false),
    m_baselineModifyAlarmRuleRequestHasBeenSet(false)
{
}

string EditBaselineRequest::ToJsonString() const
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

    if (m_baselineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baselineId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateUin.c_str(), allocator).Move(), allocator);
    }

    if (m_updateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateName.c_str(), allocator).Move(), allocator);
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

    if (m_baselineModifyAlarmRuleRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineModifyAlarmRuleRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baselineModifyAlarmRuleRequest.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EditBaselineRequest::GetProjectId() const
{
    return m_projectId;
}

void EditBaselineRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool EditBaselineRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string EditBaselineRequest::GetBaselineName() const
{
    return m_baselineName;
}

void EditBaselineRequest::SetBaselineName(const string& _baselineName)
{
    m_baselineName = _baselineName;
    m_baselineNameHasBeenSet = true;
}

bool EditBaselineRequest::BaselineNameHasBeenSet() const
{
    return m_baselineNameHasBeenSet;
}

string EditBaselineRequest::GetBaselineType() const
{
    return m_baselineType;
}

void EditBaselineRequest::SetBaselineType(const string& _baselineType)
{
    m_baselineType = _baselineType;
    m_baselineTypeHasBeenSet = true;
}

bool EditBaselineRequest::BaselineTypeHasBeenSet() const
{
    return m_baselineTypeHasBeenSet;
}

string EditBaselineRequest::GetInChargeUin() const
{
    return m_inChargeUin;
}

void EditBaselineRequest::SetInChargeUin(const string& _inChargeUin)
{
    m_inChargeUin = _inChargeUin;
    m_inChargeUinHasBeenSet = true;
}

bool EditBaselineRequest::InChargeUinHasBeenSet() const
{
    return m_inChargeUinHasBeenSet;
}

string EditBaselineRequest::GetInChargeName() const
{
    return m_inChargeName;
}

void EditBaselineRequest::SetInChargeName(const string& _inChargeName)
{
    m_inChargeName = _inChargeName;
    m_inChargeNameHasBeenSet = true;
}

bool EditBaselineRequest::InChargeNameHasBeenSet() const
{
    return m_inChargeNameHasBeenSet;
}

vector<BaselineTaskInfo> EditBaselineRequest::GetPromiseTasks() const
{
    return m_promiseTasks;
}

void EditBaselineRequest::SetPromiseTasks(const vector<BaselineTaskInfo>& _promiseTasks)
{
    m_promiseTasks = _promiseTasks;
    m_promiseTasksHasBeenSet = true;
}

bool EditBaselineRequest::PromiseTasksHasBeenSet() const
{
    return m_promiseTasksHasBeenSet;
}

string EditBaselineRequest::GetPromiseTime() const
{
    return m_promiseTime;
}

void EditBaselineRequest::SetPromiseTime(const string& _promiseTime)
{
    m_promiseTime = _promiseTime;
    m_promiseTimeHasBeenSet = true;
}

bool EditBaselineRequest::PromiseTimeHasBeenSet() const
{
    return m_promiseTimeHasBeenSet;
}

uint64_t EditBaselineRequest::GetWarningMargin() const
{
    return m_warningMargin;
}

void EditBaselineRequest::SetWarningMargin(const uint64_t& _warningMargin)
{
    m_warningMargin = _warningMargin;
    m_warningMarginHasBeenSet = true;
}

bool EditBaselineRequest::WarningMarginHasBeenSet() const
{
    return m_warningMarginHasBeenSet;
}

string EditBaselineRequest::GetBaselineId() const
{
    return m_baselineId;
}

void EditBaselineRequest::SetBaselineId(const string& _baselineId)
{
    m_baselineId = _baselineId;
    m_baselineIdHasBeenSet = true;
}

bool EditBaselineRequest::BaselineIdHasBeenSet() const
{
    return m_baselineIdHasBeenSet;
}

string EditBaselineRequest::GetUpdateUin() const
{
    return m_updateUin;
}

void EditBaselineRequest::SetUpdateUin(const string& _updateUin)
{
    m_updateUin = _updateUin;
    m_updateUinHasBeenSet = true;
}

bool EditBaselineRequest::UpdateUinHasBeenSet() const
{
    return m_updateUinHasBeenSet;
}

string EditBaselineRequest::GetUpdateName() const
{
    return m_updateName;
}

void EditBaselineRequest::SetUpdateName(const string& _updateName)
{
    m_updateName = _updateName;
    m_updateNameHasBeenSet = true;
}

bool EditBaselineRequest::UpdateNameHasBeenSet() const
{
    return m_updateNameHasBeenSet;
}

bool EditBaselineRequest::GetIsNewAlarm() const
{
    return m_isNewAlarm;
}

void EditBaselineRequest::SetIsNewAlarm(const bool& _isNewAlarm)
{
    m_isNewAlarm = _isNewAlarm;
    m_isNewAlarmHasBeenSet = true;
}

bool EditBaselineRequest::IsNewAlarmHasBeenSet() const
{
    return m_isNewAlarmHasBeenSet;
}

AlarmRuleDto EditBaselineRequest::GetAlarmRuleDto() const
{
    return m_alarmRuleDto;
}

void EditBaselineRequest::SetAlarmRuleDto(const AlarmRuleDto& _alarmRuleDto)
{
    m_alarmRuleDto = _alarmRuleDto;
    m_alarmRuleDtoHasBeenSet = true;
}

bool EditBaselineRequest::AlarmRuleDtoHasBeenSet() const
{
    return m_alarmRuleDtoHasBeenSet;
}

ModifyAlarmRuleRequest EditBaselineRequest::GetBaselineModifyAlarmRuleRequest() const
{
    return m_baselineModifyAlarmRuleRequest;
}

void EditBaselineRequest::SetBaselineModifyAlarmRuleRequest(const ModifyAlarmRuleRequest& _baselineModifyAlarmRuleRequest)
{
    m_baselineModifyAlarmRuleRequest = _baselineModifyAlarmRuleRequest;
    m_baselineModifyAlarmRuleRequestHasBeenSet = true;
}

bool EditBaselineRequest::BaselineModifyAlarmRuleRequestHasBeenSet() const
{
    return m_baselineModifyAlarmRuleRequestHasBeenSet;
}


