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

#include <tencentcloud/databuddy/v20260715/model/WorkflowBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowBaseInfo::WorkflowBaseInfo() :
    m_workflowNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_runUserUinHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerUserNameHasBeenSet(false),
    m_createUserUinHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfo.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("RunUserUin") && !value["RunUserUin"].IsNull())
    {
        if (!value["RunUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfo.RunUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUserUin = string(value["RunUserUin"].GetString());
        m_runUserUinHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserName") && !value["OwnerUserName"].IsNull())
    {
        if (!value["OwnerUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfo.OwnerUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserName = string(value["OwnerUserName"].GetString());
        m_ownerUserNameHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBaseInfo.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowBaseInfo::GetWorkflowName() const
{
    return m_workflowName;
}

void WorkflowBaseInfo::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool WorkflowBaseInfo::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string WorkflowBaseInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowBaseInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowBaseInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowBaseInfo::GetRunUserUin() const
{
    return m_runUserUin;
}

void WorkflowBaseInfo::SetRunUserUin(const string& _runUserUin)
{
    m_runUserUin = _runUserUin;
    m_runUserUinHasBeenSet = true;
}

bool WorkflowBaseInfo::RunUserUinHasBeenSet() const
{
    return m_runUserUinHasBeenSet;
}

string WorkflowBaseInfo::GetDescription() const
{
    return m_description;
}

void WorkflowBaseInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkflowBaseInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WorkflowBaseInfo::GetOwnerUserName() const
{
    return m_ownerUserName;
}

void WorkflowBaseInfo::SetOwnerUserName(const string& _ownerUserName)
{
    m_ownerUserName = _ownerUserName;
    m_ownerUserNameHasBeenSet = true;
}

bool WorkflowBaseInfo::OwnerUserNameHasBeenSet() const
{
    return m_ownerUserNameHasBeenSet;
}

string WorkflowBaseInfo::GetCreateUserUin() const
{
    return m_createUserUin;
}

void WorkflowBaseInfo::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool WorkflowBaseInfo::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

