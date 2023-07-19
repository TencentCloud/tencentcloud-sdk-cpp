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

#include <tencentcloud/wedata/v20210820/model/StageCloudApiRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

StageCloudApiRequest::StageCloudApiRequest() :
    m_clusterIdHasBeenSet(false),
    m_stageIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_workFlowIdHasBeenSet(false)
{
}

CoreInternalOutcome StageCloudApiRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("StageId") && !value["StageId"].IsNull())
    {
        if (!value["StageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.StageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stageId = string(value["StageId"].GetString());
        m_stageIdHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("StageName") && !value["StageName"].IsNull())
    {
        if (!value["StageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.StageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stageName = string(value["StageName"].GetString());
        m_stageNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.Parameters` is not array type"));

        const rapidjson::Value &tmpValue = value["Parameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parameters.push_back(item);
        }
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowId") && !value["WorkFlowId"].IsNull())
    {
        if (!value["WorkFlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageCloudApiRequest.WorkFlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowId = string(value["WorkFlowId"].GetString());
        m_workFlowIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StageCloudApiRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_stageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stageId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_stageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stageName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowId.c_str(), allocator).Move(), allocator);
    }

}


string StageCloudApiRequest::GetClusterId() const
{
    return m_clusterId;
}

void StageCloudApiRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool StageCloudApiRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string StageCloudApiRequest::GetStageId() const
{
    return m_stageId;
}

void StageCloudApiRequest::SetStageId(const string& _stageId)
{
    m_stageId = _stageId;
    m_stageIdHasBeenSet = true;
}

bool StageCloudApiRequest::StageIdHasBeenSet() const
{
    return m_stageIdHasBeenSet;
}

string StageCloudApiRequest::GetJobId() const
{
    return m_jobId;
}

void StageCloudApiRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool StageCloudApiRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string StageCloudApiRequest::GetStageName() const
{
    return m_stageName;
}

void StageCloudApiRequest::SetStageName(const string& _stageName)
{
    m_stageName = _stageName;
    m_stageNameHasBeenSet = true;
}

bool StageCloudApiRequest::StageNameHasBeenSet() const
{
    return m_stageNameHasBeenSet;
}

string StageCloudApiRequest::GetType() const
{
    return m_type;
}

void StageCloudApiRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StageCloudApiRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string StageCloudApiRequest::GetMode() const
{
    return m_mode;
}

void StageCloudApiRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool StageCloudApiRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string StageCloudApiRequest::GetVersion() const
{
    return m_version;
}

void StageCloudApiRequest::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool StageCloudApiRequest::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string StageCloudApiRequest::GetQueue() const
{
    return m_queue;
}

void StageCloudApiRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool StageCloudApiRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string StageCloudApiRequest::GetContent() const
{
    return m_content;
}

void StageCloudApiRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool StageCloudApiRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<Property> StageCloudApiRequest::GetParameters() const
{
    return m_parameters;
}

void StageCloudApiRequest::SetParameters(const vector<Property>& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool StageCloudApiRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

string StageCloudApiRequest::GetDescription() const
{
    return m_description;
}

void StageCloudApiRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool StageCloudApiRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string StageCloudApiRequest::GetProjectId() const
{
    return m_projectId;
}

void StageCloudApiRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool StageCloudApiRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string StageCloudApiRequest::GetJobType() const
{
    return m_jobType;
}

void StageCloudApiRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool StageCloudApiRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string StageCloudApiRequest::GetWorkFlowId() const
{
    return m_workFlowId;
}

void StageCloudApiRequest::SetWorkFlowId(const string& _workFlowId)
{
    m_workFlowId = _workFlowId;
    m_workFlowIdHasBeenSet = true;
}

bool StageCloudApiRequest::WorkFlowIdHasBeenSet() const
{
    return m_workFlowIdHasBeenSet;
}

