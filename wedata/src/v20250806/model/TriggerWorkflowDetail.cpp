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

#include <tencentcloud/wedata/v20250806/model/TriggerWorkflowDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerWorkflowDetail::TriggerWorkflowDetail() :
    m_workflowNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_triggerWorkflowSchedulerConfigurationsHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false),
    m_generalTaskParamsHasBeenSet(false),
    m_schedulerStatusHasBeenSet(false)
{
}

CoreInternalOutcome TriggerWorkflowDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("WorkflowParams") && !value["WorkflowParams"].IsNull())
    {
        if (!value["WorkflowParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.WorkflowParams` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkflowParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workflowParams.push_back(item);
        }
        m_workflowParamsHasBeenSet = true;
    }

    if (value.HasMember("TriggerWorkflowSchedulerConfigurations") && !value["TriggerWorkflowSchedulerConfigurations"].IsNull())
    {
        if (!value["TriggerWorkflowSchedulerConfigurations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.TriggerWorkflowSchedulerConfigurations` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerWorkflowSchedulerConfigurations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowTriggerConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggerWorkflowSchedulerConfigurations.push_back(item);
        }
        m_triggerWorkflowSchedulerConfigurationsHasBeenSet = true;
    }

    if (value.HasMember("WorkflowDesc") && !value["WorkflowDesc"].IsNull())
    {
        if (!value["WorkflowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.WorkflowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowDesc = string(value["WorkflowDesc"].GetString());
        m_workflowDescHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleInfo") && !value["BundleInfo"].IsNull())
    {
        if (!value["BundleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.BundleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleInfo = string(value["BundleInfo"].GetString());
        m_bundleInfoHasBeenSet = true;
    }

    if (value.HasMember("GeneralTaskParams") && !value["GeneralTaskParams"].IsNull())
    {
        if (!value["GeneralTaskParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.GeneralTaskParams` is not array type"));

        const rapidjson::Value &tmpValue = value["GeneralTaskParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowGeneralTaskParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_generalTaskParams.push_back(item);
        }
        m_generalTaskParamsHasBeenSet = true;
    }

    if (value.HasMember("SchedulerStatus") && !value["SchedulerStatus"].IsNull())
    {
        if (!value["SchedulerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerWorkflowDetail.SchedulerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerStatus = string(value["SchedulerStatus"].GetString());
        m_schedulerStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerWorkflowDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workflowParams.begin(); itr != m_workflowParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_triggerWorkflowSchedulerConfigurationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerWorkflowSchedulerConfigurations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerWorkflowSchedulerConfigurations.begin(); itr != m_triggerWorkflowSchedulerConfigurations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_workflowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_generalTaskParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralTaskParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_generalTaskParams.begin(); itr != m_generalTaskParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_schedulerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerStatus.c_str(), allocator).Move(), allocator);
    }

}


string TriggerWorkflowDetail::GetWorkflowName() const
{
    return m_workflowName;
}

void TriggerWorkflowDetail::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TriggerWorkflowDetail::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TriggerWorkflowDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void TriggerWorkflowDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool TriggerWorkflowDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string TriggerWorkflowDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void TriggerWorkflowDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool TriggerWorkflowDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

vector<ParamInfo> TriggerWorkflowDetail::GetWorkflowParams() const
{
    return m_workflowParams;
}

void TriggerWorkflowDetail::SetWorkflowParams(const vector<ParamInfo>& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool TriggerWorkflowDetail::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

vector<WorkflowTriggerConfig> TriggerWorkflowDetail::GetTriggerWorkflowSchedulerConfigurations() const
{
    return m_triggerWorkflowSchedulerConfigurations;
}

void TriggerWorkflowDetail::SetTriggerWorkflowSchedulerConfigurations(const vector<WorkflowTriggerConfig>& _triggerWorkflowSchedulerConfigurations)
{
    m_triggerWorkflowSchedulerConfigurations = _triggerWorkflowSchedulerConfigurations;
    m_triggerWorkflowSchedulerConfigurationsHasBeenSet = true;
}

bool TriggerWorkflowDetail::TriggerWorkflowSchedulerConfigurationsHasBeenSet() const
{
    return m_triggerWorkflowSchedulerConfigurationsHasBeenSet;
}

string TriggerWorkflowDetail::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void TriggerWorkflowDetail::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool TriggerWorkflowDetail::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string TriggerWorkflowDetail::GetPath() const
{
    return m_path;
}

void TriggerWorkflowDetail::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool TriggerWorkflowDetail::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string TriggerWorkflowDetail::GetBundleId() const
{
    return m_bundleId;
}

void TriggerWorkflowDetail::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool TriggerWorkflowDetail::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string TriggerWorkflowDetail::GetBundleInfo() const
{
    return m_bundleInfo;
}

void TriggerWorkflowDetail::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool TriggerWorkflowDetail::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

vector<WorkflowGeneralTaskParam> TriggerWorkflowDetail::GetGeneralTaskParams() const
{
    return m_generalTaskParams;
}

void TriggerWorkflowDetail::SetGeneralTaskParams(const vector<WorkflowGeneralTaskParam>& _generalTaskParams)
{
    m_generalTaskParams = _generalTaskParams;
    m_generalTaskParamsHasBeenSet = true;
}

bool TriggerWorkflowDetail::GeneralTaskParamsHasBeenSet() const
{
    return m_generalTaskParamsHasBeenSet;
}

string TriggerWorkflowDetail::GetSchedulerStatus() const
{
    return m_schedulerStatus;
}

void TriggerWorkflowDetail::SetSchedulerStatus(const string& _schedulerStatus)
{
    m_schedulerStatus = _schedulerStatus;
    m_schedulerStatusHasBeenSet = true;
}

bool TriggerWorkflowDetail::SchedulerStatusHasBeenSet() const
{
    return m_schedulerStatusHasBeenSet;
}

