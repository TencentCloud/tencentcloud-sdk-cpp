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

#include <tencentcloud/wedata/v20250806/model/TaskVersionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskVersionDetail::TaskVersionDetail() :
    m_createTimeHasBeenSet(false),
    m_versionNumHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_versionRemarkHasBeenSet(false),
    m_approveStatusHasBeenSet(false),
    m_approveTimeHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_approveUserUinHasBeenSet(false)
{
}

CoreInternalOutcome TaskVersionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("VersionNum") && !value["VersionNum"].IsNull())
    {
        if (!value["VersionNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDetail.VersionNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionNum = string(value["VersionNum"].GetString());
        m_versionNumHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDetail.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("VersionRemark") && !value["VersionRemark"].IsNull())
    {
        if (!value["VersionRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDetail.VersionRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionRemark = string(value["VersionRemark"].GetString());
        m_versionRemarkHasBeenSet = true;
    }

    if (value.HasMember("ApproveStatus") && !value["ApproveStatus"].IsNull())
    {
        if (!value["ApproveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDetail.ApproveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveStatus = string(value["ApproveStatus"].GetString());
        m_approveStatusHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDetail.ApproveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = string(value["ApproveTime"].GetString());
        m_approveTimeHasBeenSet = true;
    }

    if (value.HasMember("Task") && !value["Task"].IsNull())
    {
        if (!value["Task"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDetail.Task` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_task.Deserialize(value["Task"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskHasBeenSet = true;
    }

    if (value.HasMember("ApproveUserUin") && !value["ApproveUserUin"].IsNull())
    {
        if (!value["ApproveUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDetail.ApproveUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveUserUin = string(value["ApproveUserUin"].GetString());
        m_approveUserUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskVersionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionNum.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_approveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Task";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_task.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_approveUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveUserUin.c_str(), allocator).Move(), allocator);
    }

}


string TaskVersionDetail::GetCreateTime() const
{
    return m_createTime;
}

void TaskVersionDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskVersionDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskVersionDetail::GetVersionNum() const
{
    return m_versionNum;
}

void TaskVersionDetail::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool TaskVersionDetail::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string TaskVersionDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void TaskVersionDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool TaskVersionDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string TaskVersionDetail::GetVersionId() const
{
    return m_versionId;
}

void TaskVersionDetail::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool TaskVersionDetail::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string TaskVersionDetail::GetVersionRemark() const
{
    return m_versionRemark;
}

void TaskVersionDetail::SetVersionRemark(const string& _versionRemark)
{
    m_versionRemark = _versionRemark;
    m_versionRemarkHasBeenSet = true;
}

bool TaskVersionDetail::VersionRemarkHasBeenSet() const
{
    return m_versionRemarkHasBeenSet;
}

string TaskVersionDetail::GetApproveStatus() const
{
    return m_approveStatus;
}

void TaskVersionDetail::SetApproveStatus(const string& _approveStatus)
{
    m_approveStatus = _approveStatus;
    m_approveStatusHasBeenSet = true;
}

bool TaskVersionDetail::ApproveStatusHasBeenSet() const
{
    return m_approveStatusHasBeenSet;
}

string TaskVersionDetail::GetApproveTime() const
{
    return m_approveTime;
}

void TaskVersionDetail::SetApproveTime(const string& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool TaskVersionDetail::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

Task TaskVersionDetail::GetTask() const
{
    return m_task;
}

void TaskVersionDetail::SetTask(const Task& _task)
{
    m_task = _task;
    m_taskHasBeenSet = true;
}

bool TaskVersionDetail::TaskHasBeenSet() const
{
    return m_taskHasBeenSet;
}

string TaskVersionDetail::GetApproveUserUin() const
{
    return m_approveUserUin;
}

void TaskVersionDetail::SetApproveUserUin(const string& _approveUserUin)
{
    m_approveUserUin = _approveUserUin;
    m_approveUserUinHasBeenSet = true;
}

bool TaskVersionDetail::ApproveUserUinHasBeenSet() const
{
    return m_approveUserUinHasBeenSet;
}

