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

#include <tencentcloud/databuddy/v20260715/model/WorkflowBaseInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowBaseInfoDetail::WorkflowBaseInfoDetail() :
    m_workflowNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_runUserUinHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerUserNameHasBeenSet(false),
    m_ownerUserUinHasBeenSet(false),
    m_ownerDisplayNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowBaseInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("RunUserUin") && !value["RunUserUin"].IsNull())
    {
        if (!value["RunUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.RunUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUserUin = string(value["RunUserUin"].GetString());
        m_runUserUinHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserName") && !value["OwnerUserName"].IsNull())
    {
        if (!value["OwnerUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.OwnerUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserName = string(value["OwnerUserName"].GetString());
        m_ownerUserNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserUin") && !value["OwnerUserUin"].IsNull())
    {
        if (!value["OwnerUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.OwnerUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserUin = string(value["OwnerUserUin"].GetString());
        m_ownerUserUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerDisplayName") && !value["OwnerDisplayName"].IsNull())
    {
        if (!value["OwnerDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.OwnerDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerDisplayName = string(value["OwnerDisplayName"].GetString());
        m_ownerDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfoDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowBaseInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_runUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowBaseInfoDetail::GetWorkflowName() const
{
    return m_workflowName;
}

void WorkflowBaseInfoDetail::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string WorkflowBaseInfoDetail::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowBaseInfoDetail::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowBaseInfoDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void WorkflowBaseInfoDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string WorkflowBaseInfoDetail::GetRunUserUin() const
{
    return m_runUserUin;
}

void WorkflowBaseInfoDetail::SetRunUserUin(const string& _runUserUin)
{
    m_runUserUin = _runUserUin;
    m_runUserUinHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::RunUserUinHasBeenSet() const
{
    return m_runUserUinHasBeenSet;
}

string WorkflowBaseInfoDetail::GetDescription() const
{
    return m_description;
}

void WorkflowBaseInfoDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WorkflowBaseInfoDetail::GetOwnerUserName() const
{
    return m_ownerUserName;
}

void WorkflowBaseInfoDetail::SetOwnerUserName(const string& _ownerUserName)
{
    m_ownerUserName = _ownerUserName;
    m_ownerUserNameHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::OwnerUserNameHasBeenSet() const
{
    return m_ownerUserNameHasBeenSet;
}

string WorkflowBaseInfoDetail::GetOwnerUserUin() const
{
    return m_ownerUserUin;
}

void WorkflowBaseInfoDetail::SetOwnerUserUin(const string& _ownerUserUin)
{
    m_ownerUserUin = _ownerUserUin;
    m_ownerUserUinHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::OwnerUserUinHasBeenSet() const
{
    return m_ownerUserUinHasBeenSet;
}

string WorkflowBaseInfoDetail::GetOwnerDisplayName() const
{
    return m_ownerDisplayName;
}

void WorkflowBaseInfoDetail::SetOwnerDisplayName(const string& _ownerDisplayName)
{
    m_ownerDisplayName = _ownerDisplayName;
    m_ownerDisplayNameHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::OwnerDisplayNameHasBeenSet() const
{
    return m_ownerDisplayNameHasBeenSet;
}

string WorkflowBaseInfoDetail::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowBaseInfoDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkflowBaseInfoDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void WorkflowBaseInfoDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WorkflowBaseInfoDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

