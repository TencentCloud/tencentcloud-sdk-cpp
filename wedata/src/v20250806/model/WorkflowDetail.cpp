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

#include <tencentcloud/wedata/v20250806/model/WorkflowDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

WorkflowDetail::WorkflowDetail() :
    m_workflowNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_workflowParamsHasBeenSet(false),
    m_workflowSchedulerConfigurationHasBeenSet(false),
    m_workflowDescHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("WorkflowType") && !value["WorkflowType"].IsNull())
    {
        if (!value["WorkflowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.WorkflowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowType = string(value["WorkflowType"].GetString());
        m_workflowTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkflowParams") && !value["WorkflowParams"].IsNull())
    {
        if (!value["WorkflowParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.WorkflowParams` is not array type"));

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

    if (value.HasMember("WorkflowSchedulerConfiguration") && !value["WorkflowSchedulerConfiguration"].IsNull())
    {
        if (!value["WorkflowSchedulerConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.WorkflowSchedulerConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowSchedulerConfiguration.Deserialize(value["WorkflowSchedulerConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowSchedulerConfigurationHasBeenSet = true;
    }

    if (value.HasMember("WorkflowDesc") && !value["WorkflowDesc"].IsNull())
    {
        if (!value["WorkflowDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.WorkflowDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowDesc = string(value["WorkflowDesc"].GetString());
        m_workflowDescHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleInfo") && !value["BundleInfo"].IsNull())
    {
        if (!value["BundleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowDetail.BundleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleInfo = string(value["BundleInfo"].GetString());
        m_bundleInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_workflowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowType.c_str(), allocator).Move(), allocator);
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

    if (m_workflowSchedulerConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowSchedulerConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowSchedulerConfiguration.ToJsonObject(value[key.c_str()], allocator);
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

}


string WorkflowDetail::GetWorkflowName() const
{
    return m_workflowName;
}

void WorkflowDetail::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool WorkflowDetail::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string WorkflowDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void WorkflowDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool WorkflowDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string WorkflowDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void WorkflowDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool WorkflowDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string WorkflowDetail::GetWorkflowType() const
{
    return m_workflowType;
}

void WorkflowDetail::SetWorkflowType(const string& _workflowType)
{
    m_workflowType = _workflowType;
    m_workflowTypeHasBeenSet = true;
}

bool WorkflowDetail::WorkflowTypeHasBeenSet() const
{
    return m_workflowTypeHasBeenSet;
}

vector<ParamInfo> WorkflowDetail::GetWorkflowParams() const
{
    return m_workflowParams;
}

void WorkflowDetail::SetWorkflowParams(const vector<ParamInfo>& _workflowParams)
{
    m_workflowParams = _workflowParams;
    m_workflowParamsHasBeenSet = true;
}

bool WorkflowDetail::WorkflowParamsHasBeenSet() const
{
    return m_workflowParamsHasBeenSet;
}

WorkflowSchedulerConfiguration WorkflowDetail::GetWorkflowSchedulerConfiguration() const
{
    return m_workflowSchedulerConfiguration;
}

void WorkflowDetail::SetWorkflowSchedulerConfiguration(const WorkflowSchedulerConfiguration& _workflowSchedulerConfiguration)
{
    m_workflowSchedulerConfiguration = _workflowSchedulerConfiguration;
    m_workflowSchedulerConfigurationHasBeenSet = true;
}

bool WorkflowDetail::WorkflowSchedulerConfigurationHasBeenSet() const
{
    return m_workflowSchedulerConfigurationHasBeenSet;
}

string WorkflowDetail::GetWorkflowDesc() const
{
    return m_workflowDesc;
}

void WorkflowDetail::SetWorkflowDesc(const string& _workflowDesc)
{
    m_workflowDesc = _workflowDesc;
    m_workflowDescHasBeenSet = true;
}

bool WorkflowDetail::WorkflowDescHasBeenSet() const
{
    return m_workflowDescHasBeenSet;
}

string WorkflowDetail::GetPath() const
{
    return m_path;
}

void WorkflowDetail::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool WorkflowDetail::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string WorkflowDetail::GetBundleId() const
{
    return m_bundleId;
}

void WorkflowDetail::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool WorkflowDetail::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string WorkflowDetail::GetBundleInfo() const
{
    return m_bundleInfo;
}

void WorkflowDetail::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool WorkflowDetail::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

