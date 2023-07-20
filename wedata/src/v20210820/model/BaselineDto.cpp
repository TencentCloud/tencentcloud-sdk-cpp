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

#include <tencentcloud/wedata/v20210820/model/BaselineDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BaselineDto::BaselineDto() :
    m_idHasBeenSet(false),
    m_baselineNameHasBeenSet(false),
    m_baselineTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_promiseTasksHasBeenSet(false),
    m_alarmRuleHasBeenSet(false),
    m_baselineStatusHasBeenSet(false),
    m_latestBaselineInstanceStatusHasBeenSet(false),
    m_warningMarginHasBeenSet(false),
    m_promiseTimeHasBeenSet(false),
    m_inChargeUinHasBeenSet(false),
    m_inChargeNameHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome BaselineDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("BaselineName") && !value["BaselineName"].IsNull())
    {
        if (!value["BaselineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.BaselineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineName = string(value["BaselineName"].GetString());
        m_baselineNameHasBeenSet = true;
    }

    if (value.HasMember("BaselineType") && !value["BaselineType"].IsNull())
    {
        if (!value["BaselineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.BaselineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineType = string(value["BaselineType"].GetString());
        m_baselineTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PromiseTasks") && !value["PromiseTasks"].IsNull())
    {
        if (!value["PromiseTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineDto.PromiseTasks` is not array type"));

        const rapidjson::Value &tmpValue = value["PromiseTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineTaskDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_promiseTasks.push_back(item);
        }
        m_promiseTasksHasBeenSet = true;
    }

    if (value.HasMember("AlarmRule") && !value["AlarmRule"].IsNull())
    {
        if (!value["AlarmRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.AlarmRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alarmRule.Deserialize(value["AlarmRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_alarmRuleHasBeenSet = true;
    }

    if (value.HasMember("BaselineStatus") && !value["BaselineStatus"].IsNull())
    {
        if (!value["BaselineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.BaselineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineStatus = string(value["BaselineStatus"].GetString());
        m_baselineStatusHasBeenSet = true;
    }

    if (value.HasMember("LatestBaselineInstanceStatus") && !value["LatestBaselineInstanceStatus"].IsNull())
    {
        if (!value["LatestBaselineInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.LatestBaselineInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestBaselineInstanceStatus = string(value["LatestBaselineInstanceStatus"].GetString());
        m_latestBaselineInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("WarningMargin") && !value["WarningMargin"].IsNull())
    {
        if (!value["WarningMargin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.WarningMargin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warningMargin = value["WarningMargin"].GetInt64();
        m_warningMarginHasBeenSet = true;
    }

    if (value.HasMember("PromiseTime") && !value["PromiseTime"].IsNull())
    {
        if (!value["PromiseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.PromiseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promiseTime = string(value["PromiseTime"].GetString());
        m_promiseTimeHasBeenSet = true;
    }

    if (value.HasMember("InChargeUin") && !value["InChargeUin"].IsNull())
    {
        if (!value["InChargeUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.InChargeUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeUin = string(value["InChargeUin"].GetString());
        m_inChargeUinHasBeenSet = true;
    }

    if (value.HasMember("InChargeName") && !value["InChargeName"].IsNull())
    {
        if (!value["InChargeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.InChargeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeName = string(value["InChargeName"].GetString());
        m_inChargeNameHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_baselineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineName.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_promiseTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromiseTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_promiseTasks.begin(); itr != m_promiseTasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alarmRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_baselineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_latestBaselineInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestBaselineInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestBaselineInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_warningMarginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningMargin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warningMargin, allocator);
    }

    if (m_promiseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromiseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promiseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inChargeUin.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inChargeName.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t BaselineDto::GetId() const
{
    return m_id;
}

void BaselineDto::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BaselineDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BaselineDto::GetBaselineName() const
{
    return m_baselineName;
}

void BaselineDto::SetBaselineName(const string& _baselineName)
{
    m_baselineName = _baselineName;
    m_baselineNameHasBeenSet = true;
}

bool BaselineDto::BaselineNameHasBeenSet() const
{
    return m_baselineNameHasBeenSet;
}

string BaselineDto::GetBaselineType() const
{
    return m_baselineType;
}

void BaselineDto::SetBaselineType(const string& _baselineType)
{
    m_baselineType = _baselineType;
    m_baselineTypeHasBeenSet = true;
}

bool BaselineDto::BaselineTypeHasBeenSet() const
{
    return m_baselineTypeHasBeenSet;
}

string BaselineDto::GetCreateTime() const
{
    return m_createTime;
}

void BaselineDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BaselineDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<BaselineTaskDto> BaselineDto::GetPromiseTasks() const
{
    return m_promiseTasks;
}

void BaselineDto::SetPromiseTasks(const vector<BaselineTaskDto>& _promiseTasks)
{
    m_promiseTasks = _promiseTasks;
    m_promiseTasksHasBeenSet = true;
}

bool BaselineDto::PromiseTasksHasBeenSet() const
{
    return m_promiseTasksHasBeenSet;
}

AlarmRuleDto BaselineDto::GetAlarmRule() const
{
    return m_alarmRule;
}

void BaselineDto::SetAlarmRule(const AlarmRuleDto& _alarmRule)
{
    m_alarmRule = _alarmRule;
    m_alarmRuleHasBeenSet = true;
}

bool BaselineDto::AlarmRuleHasBeenSet() const
{
    return m_alarmRuleHasBeenSet;
}

string BaselineDto::GetBaselineStatus() const
{
    return m_baselineStatus;
}

void BaselineDto::SetBaselineStatus(const string& _baselineStatus)
{
    m_baselineStatus = _baselineStatus;
    m_baselineStatusHasBeenSet = true;
}

bool BaselineDto::BaselineStatusHasBeenSet() const
{
    return m_baselineStatusHasBeenSet;
}

string BaselineDto::GetLatestBaselineInstanceStatus() const
{
    return m_latestBaselineInstanceStatus;
}

void BaselineDto::SetLatestBaselineInstanceStatus(const string& _latestBaselineInstanceStatus)
{
    m_latestBaselineInstanceStatus = _latestBaselineInstanceStatus;
    m_latestBaselineInstanceStatusHasBeenSet = true;
}

bool BaselineDto::LatestBaselineInstanceStatusHasBeenSet() const
{
    return m_latestBaselineInstanceStatusHasBeenSet;
}

int64_t BaselineDto::GetWarningMargin() const
{
    return m_warningMargin;
}

void BaselineDto::SetWarningMargin(const int64_t& _warningMargin)
{
    m_warningMargin = _warningMargin;
    m_warningMarginHasBeenSet = true;
}

bool BaselineDto::WarningMarginHasBeenSet() const
{
    return m_warningMarginHasBeenSet;
}

string BaselineDto::GetPromiseTime() const
{
    return m_promiseTime;
}

void BaselineDto::SetPromiseTime(const string& _promiseTime)
{
    m_promiseTime = _promiseTime;
    m_promiseTimeHasBeenSet = true;
}

bool BaselineDto::PromiseTimeHasBeenSet() const
{
    return m_promiseTimeHasBeenSet;
}

string BaselineDto::GetInChargeUin() const
{
    return m_inChargeUin;
}

void BaselineDto::SetInChargeUin(const string& _inChargeUin)
{
    m_inChargeUin = _inChargeUin;
    m_inChargeUinHasBeenSet = true;
}

bool BaselineDto::InChargeUinHasBeenSet() const
{
    return m_inChargeUinHasBeenSet;
}

string BaselineDto::GetInChargeName() const
{
    return m_inChargeName;
}

void BaselineDto::SetInChargeName(const string& _inChargeName)
{
    m_inChargeName = _inChargeName;
    m_inChargeNameHasBeenSet = true;
}

bool BaselineDto::InChargeNameHasBeenSet() const
{
    return m_inChargeNameHasBeenSet;
}

string BaselineDto::GetUserUin() const
{
    return m_userUin;
}

void BaselineDto::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool BaselineDto::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string BaselineDto::GetUserName() const
{
    return m_userName;
}

void BaselineDto::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool BaselineDto::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string BaselineDto::GetOwnerUin() const
{
    return m_ownerUin;
}

void BaselineDto::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool BaselineDto::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string BaselineDto::GetProjectId() const
{
    return m_projectId;
}

void BaselineDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BaselineDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BaselineDto::GetAppId() const
{
    return m_appId;
}

void BaselineDto::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BaselineDto::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string BaselineDto::GetUpdateTime() const
{
    return m_updateTime;
}

void BaselineDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BaselineDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

