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

#include <tencentcloud/ctem/v20231128/model/DisplayJobRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayJobRecord::DisplayJobRecord() :
    m_idHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_crontabHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_newCountHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome DisplayJobRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.CustomerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = value["CustomerId"].GetInt64();
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("Crontab") && !value["Crontab"].IsNull())
    {
        if (!value["Crontab"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.Crontab` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontab = string(value["Crontab"].GetString());
        m_crontabHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NewCount") && !value["NewCount"].IsNull())
    {
        if (!value["NewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.NewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newCount = value["NewCount"].GetInt64();
        m_newCountHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("UpdateAt") && !value["UpdateAt"].IsNull())
    {
        if (!value["UpdateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.UpdateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateAt = string(value["UpdateAt"].GetString());
        m_updateAtHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.Progress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_progress.Deserialize(value["Progress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.Qps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetInt64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecord.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayJobRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerId, allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_crontabHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Crontab";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontab.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_newCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newCount, allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateAt.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_progress.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

}


int64_t DisplayJobRecord::GetId() const
{
    return m_id;
}

void DisplayJobRecord::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayJobRecord::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t DisplayJobRecord::GetCustomerId() const
{
    return m_customerId;
}

void DisplayJobRecord::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool DisplayJobRecord::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string DisplayJobRecord::GetCustomerName() const
{
    return m_customerName;
}

void DisplayJobRecord::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool DisplayJobRecord::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string DisplayJobRecord::GetCrontab() const
{
    return m_crontab;
}

void DisplayJobRecord::SetCrontab(const string& _crontab)
{
    m_crontab = _crontab;
    m_crontabHasBeenSet = true;
}

bool DisplayJobRecord::CrontabHasBeenSet() const
{
    return m_crontabHasBeenSet;
}

int64_t DisplayJobRecord::GetStatus() const
{
    return m_status;
}

void DisplayJobRecord::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DisplayJobRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DisplayJobRecord::GetNewCount() const
{
    return m_newCount;
}

void DisplayJobRecord::SetNewCount(const int64_t& _newCount)
{
    m_newCount = _newCount;
    m_newCountHasBeenSet = true;
}

bool DisplayJobRecord::NewCountHasBeenSet() const
{
    return m_newCountHasBeenSet;
}

string DisplayJobRecord::GetCreateAt() const
{
    return m_createAt;
}

void DisplayJobRecord::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool DisplayJobRecord::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string DisplayJobRecord::GetUpdateAt() const
{
    return m_updateAt;
}

void DisplayJobRecord::SetUpdateAt(const string& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool DisplayJobRecord::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}

JobRecordProgress DisplayJobRecord::GetProgress() const
{
    return m_progress;
}

void DisplayJobRecord::SetProgress(const JobRecordProgress& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool DisplayJobRecord::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t DisplayJobRecord::GetQps() const
{
    return m_qps;
}

void DisplayJobRecord::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool DisplayJobRecord::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

string DisplayJobRecord::GetTaskType() const
{
    return m_taskType;
}

void DisplayJobRecord::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DisplayJobRecord::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DisplayJobRecord::GetUin() const
{
    return m_uin;
}

void DisplayJobRecord::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DisplayJobRecord::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t DisplayJobRecord::GetAppId() const
{
    return m_appId;
}

void DisplayJobRecord::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DisplayJobRecord::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

