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

#include <tencentcloud/lke/v20231130/model/WorkflowRef.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

WorkflowRef::WorkflowRef() :
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_appBizIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRef::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRef.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRef.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowDesc") && !value["WorkflowDesc"].IsNull())
    {
        if (!value["WorkflowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRef.WorkflowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowDesc = string(value["WorkflowDesc"].GetString());
        m_workflowDescHasBeenSet = true;
    }

    if (value.HasMember("AppBizId") && !value["AppBizId"].IsNull())
    {
        if (!value["AppBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRef.AppBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appBizId = string(value["AppBizId"].GetString());
        m_appBizIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRef.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRef::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string WorkflowRef::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowRef::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowRef::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowRef::GetWorkflowName() const
{
    return m_workflowName;
}

void WorkflowRef::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool WorkflowRef::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string WorkflowRef::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void WorkflowRef::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool WorkflowRef::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string WorkflowRef::GetAppBizId() const
{
    return m_appBizId;
}

void WorkflowRef::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool WorkflowRef::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

uint64_t WorkflowRef::GetUpdateTime() const
{
    return m_updateTime;
}

void WorkflowRef::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WorkflowRef::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

