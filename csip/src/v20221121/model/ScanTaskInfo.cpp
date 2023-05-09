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

#include <tencentcloud/csip/v20221121/model/ScanTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScanTaskInfo::ScanTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_taskTimeHasBeenSet(false),
    m_reportIdHasBeenSet(false),
    m_reportNameHasBeenSet(false),
    m_scanPlanHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uINHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome ScanTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("TaskTime") && !value["TaskTime"].IsNull())
    {
        if (!value["TaskTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.TaskTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTime = string(value["TaskTime"].GetString());
        m_taskTimeHasBeenSet = true;
    }

    if (value.HasMember("ReportId") && !value["ReportId"].IsNull())
    {
        if (!value["ReportId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.ReportId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportId = string(value["ReportId"].GetString());
        m_reportIdHasBeenSet = true;
    }

    if (value.HasMember("ReportName") && !value["ReportName"].IsNull())
    {
        if (!value["ReportName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.ReportName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportName = string(value["ReportName"].GetString());
        m_reportNameHasBeenSet = true;
    }

    if (value.HasMember("ScanPlan") && !value["ScanPlan"].IsNull())
    {
        if (!value["ScanPlan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.ScanPlan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanPlan = value["ScanPlan"].GetInt64();
        m_scanPlanHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.AssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetInt64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("UIN") && !value["UIN"].IsNull())
    {
        if (!value["UIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.UIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uIN = string(value["UIN"].GetString());
        m_uINHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_taskTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reportIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportId.c_str(), allocator).Move(), allocator);
    }

    if (m_reportNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportName.c_str(), allocator).Move(), allocator);
    }

    if (m_scanPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanPlan, allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uIN.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


string ScanTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void ScanTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ScanTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ScanTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void ScanTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ScanTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t ScanTaskInfo::GetStatus() const
{
    return m_status;
}

void ScanTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScanTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ScanTaskInfo::GetProgress() const
{
    return m_progress;
}

void ScanTaskInfo::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool ScanTaskInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string ScanTaskInfo::GetTaskTime() const
{
    return m_taskTime;
}

void ScanTaskInfo::SetTaskTime(const string& _taskTime)
{
    m_taskTime = _taskTime;
    m_taskTimeHasBeenSet = true;
}

bool ScanTaskInfo::TaskTimeHasBeenSet() const
{
    return m_taskTimeHasBeenSet;
}

string ScanTaskInfo::GetReportId() const
{
    return m_reportId;
}

void ScanTaskInfo::SetReportId(const string& _reportId)
{
    m_reportId = _reportId;
    m_reportIdHasBeenSet = true;
}

bool ScanTaskInfo::ReportIdHasBeenSet() const
{
    return m_reportIdHasBeenSet;
}

string ScanTaskInfo::GetReportName() const
{
    return m_reportName;
}

void ScanTaskInfo::SetReportName(const string& _reportName)
{
    m_reportName = _reportName;
    m_reportNameHasBeenSet = true;
}

bool ScanTaskInfo::ReportNameHasBeenSet() const
{
    return m_reportNameHasBeenSet;
}

int64_t ScanTaskInfo::GetScanPlan() const
{
    return m_scanPlan;
}

void ScanTaskInfo::SetScanPlan(const int64_t& _scanPlan)
{
    m_scanPlan = _scanPlan;
    m_scanPlanHasBeenSet = true;
}

bool ScanTaskInfo::ScanPlanHasBeenSet() const
{
    return m_scanPlanHasBeenSet;
}

int64_t ScanTaskInfo::GetAssetCount() const
{
    return m_assetCount;
}

void ScanTaskInfo::SetAssetCount(const int64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool ScanTaskInfo::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

string ScanTaskInfo::GetAppId() const
{
    return m_appId;
}

void ScanTaskInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ScanTaskInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ScanTaskInfo::GetUIN() const
{
    return m_uIN;
}

void ScanTaskInfo::SetUIN(const string& _uIN)
{
    m_uIN = _uIN;
    m_uINHasBeenSet = true;
}

bool ScanTaskInfo::UINHasBeenSet() const
{
    return m_uINHasBeenSet;
}

string ScanTaskInfo::GetUserName() const
{
    return m_userName;
}

void ScanTaskInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ScanTaskInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

