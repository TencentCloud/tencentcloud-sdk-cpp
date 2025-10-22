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

#include <tencentcloud/wedata/v20250806/model/TaskVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskVersion::TaskVersion() :
    m_createTimeHasBeenSet(false),
    m_versionNumHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_versionRemarkHasBeenSet(false),
    m_approveStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_approveUserUinHasBeenSet(false)
{
}

CoreInternalOutcome TaskVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersion.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("VersionNum") && !value["VersionNum"].IsNull())
    {
        if (!value["VersionNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersion.VersionNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionNum = string(value["VersionNum"].GetString());
        m_versionNumHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersion.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersion.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("VersionRemark") && !value["VersionRemark"].IsNull())
    {
        if (!value["VersionRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersion.VersionRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionRemark = string(value["VersionRemark"].GetString());
        m_versionRemarkHasBeenSet = true;
    }

    if (value.HasMember("ApproveStatus") && !value["ApproveStatus"].IsNull())
    {
        if (!value["ApproveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersion.ApproveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveStatus = string(value["ApproveStatus"].GetString());
        m_approveStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersion.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ApproveUserUin") && !value["ApproveUserUin"].IsNull())
    {
        if (!value["ApproveUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersion.ApproveUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveUserUin = string(value["ApproveUserUin"].GetString());
        m_approveUserUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_approveUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveUserUin.c_str(), allocator).Move(), allocator);
    }

}


string TaskVersion::GetCreateTime() const
{
    return m_createTime;
}

void TaskVersion::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskVersion::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskVersion::GetVersionNum() const
{
    return m_versionNum;
}

void TaskVersion::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool TaskVersion::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string TaskVersion::GetCreateUserUin() const
{
    return m_createUserUin;
}

void TaskVersion::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool TaskVersion::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string TaskVersion::GetVersionId() const
{
    return m_versionId;
}

void TaskVersion::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool TaskVersion::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string TaskVersion::GetVersionRemark() const
{
    return m_versionRemark;
}

void TaskVersion::SetVersionRemark(const string& _versionRemark)
{
    m_versionRemark = _versionRemark;
    m_versionRemarkHasBeenSet = true;
}

bool TaskVersion::VersionRemarkHasBeenSet() const
{
    return m_versionRemarkHasBeenSet;
}

string TaskVersion::GetApproveStatus() const
{
    return m_approveStatus;
}

void TaskVersion::SetApproveStatus(const string& _approveStatus)
{
    m_approveStatus = _approveStatus;
    m_approveStatusHasBeenSet = true;
}

bool TaskVersion::ApproveStatusHasBeenSet() const
{
    return m_approveStatusHasBeenSet;
}

string TaskVersion::GetStatus() const
{
    return m_status;
}

void TaskVersion::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskVersion::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskVersion::GetApproveUserUin() const
{
    return m_approveUserUin;
}

void TaskVersion::SetApproveUserUin(const string& _approveUserUin)
{
    m_approveUserUin = _approveUserUin;
    m_approveUserUinHasBeenSet = true;
}

bool TaskVersion::ApproveUserUinHasBeenSet() const
{
    return m_approveUserUinHasBeenSet;
}

