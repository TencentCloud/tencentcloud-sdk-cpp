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

#include <tencentcloud/hai/v20230812/model/MuskPromptInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

MuskPromptInfo::MuskPromptInfo() :
    m_workflowIdHasBeenSet(false),
    m_workgroupIdHasBeenSet(false),
    m_promptIdHasBeenSet(false),
    m_outputResourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_costHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome MuskPromptInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MuskPromptInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkgroupId") && !value["WorkgroupId"].IsNull())
    {
        if (!value["WorkgroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MuskPromptInfo.WorkgroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workgroupId = string(value["WorkgroupId"].GetString());
        m_workgroupIdHasBeenSet = true;
    }

    if (value.HasMember("PromptId") && !value["PromptId"].IsNull())
    {
        if (!value["PromptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MuskPromptInfo.PromptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptId = string(value["PromptId"].GetString());
        m_promptIdHasBeenSet = true;
    }

    if (value.HasMember("OutputResource") && !value["OutputResource"].IsNull())
    {
        if (!value["OutputResource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MuskPromptInfo.OutputResource` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputResource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outputResource.push_back((*itr).GetString());
        }
        m_outputResourceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MuskPromptInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MuskPromptInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MuskPromptInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Cost") && !value["Cost"].IsNull())
    {
        if (!value["Cost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MuskPromptInfo.Cost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cost = value["Cost"].GetUint64();
        m_costHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MuskPromptInfo.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MuskPromptInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workgroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkgroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workgroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outputResource.begin(); itr != m_outputResource.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_costHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cost, allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


string MuskPromptInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void MuskPromptInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool MuskPromptInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string MuskPromptInfo::GetWorkgroupId() const
{
    return m_workgroupId;
}

void MuskPromptInfo::SetWorkgroupId(const string& _workgroupId)
{
    m_workgroupId = _workgroupId;
    m_workgroupIdHasBeenSet = true;
}

bool MuskPromptInfo::WorkgroupIdHasBeenSet() const
{
    return m_workgroupIdHasBeenSet;
}

string MuskPromptInfo::GetPromptId() const
{
    return m_promptId;
}

void MuskPromptInfo::SetPromptId(const string& _promptId)
{
    m_promptId = _promptId;
    m_promptIdHasBeenSet = true;
}

bool MuskPromptInfo::PromptIdHasBeenSet() const
{
    return m_promptIdHasBeenSet;
}

vector<string> MuskPromptInfo::GetOutputResource() const
{
    return m_outputResource;
}

void MuskPromptInfo::SetOutputResource(const vector<string>& _outputResource)
{
    m_outputResource = _outputResource;
    m_outputResourceHasBeenSet = true;
}

bool MuskPromptInfo::OutputResourceHasBeenSet() const
{
    return m_outputResourceHasBeenSet;
}

uint64_t MuskPromptInfo::GetStatus() const
{
    return m_status;
}

void MuskPromptInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MuskPromptInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MuskPromptInfo::GetCreateTime() const
{
    return m_createTime;
}

void MuskPromptInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MuskPromptInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MuskPromptInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void MuskPromptInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MuskPromptInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t MuskPromptInfo::GetCost() const
{
    return m_cost;
}

void MuskPromptInfo::SetCost(const uint64_t& _cost)
{
    m_cost = _cost;
    m_costHasBeenSet = true;
}

bool MuskPromptInfo::CostHasBeenSet() const
{
    return m_costHasBeenSet;
}

string MuskPromptInfo::GetErrorMessage() const
{
    return m_errorMessage;
}

void MuskPromptInfo::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool MuskPromptInfo::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

