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

#include <tencentcloud/tione/v20211111/model/ModelSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModelSource::ModelSource() :
    m_sourceHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobVersionHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_algorithmFrameworkHasBeenSet(false),
    m_trainingPreferenceHasBeenSet(false),
    m_reasoningEnvironmentSourceHasBeenSet(false),
    m_reasoningEnvironmentHasBeenSet(false),
    m_reasoningEnvironmentIdHasBeenSet(false),
    m_reasoningImageInfoHasBeenSet(false)
{
}

CoreInternalOutcome ModelSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("JobVersion") && !value["JobVersion"].IsNull())
    {
        if (!value["JobVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.JobVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobVersion = string(value["JobVersion"].GetString());
        m_jobVersionHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("AlgorithmFramework") && !value["AlgorithmFramework"].IsNull())
    {
        if (!value["AlgorithmFramework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.AlgorithmFramework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithmFramework = string(value["AlgorithmFramework"].GetString());
        m_algorithmFrameworkHasBeenSet = true;
    }

    if (value.HasMember("TrainingPreference") && !value["TrainingPreference"].IsNull())
    {
        if (!value["TrainingPreference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.TrainingPreference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingPreference = string(value["TrainingPreference"].GetString());
        m_trainingPreferenceHasBeenSet = true;
    }

    if (value.HasMember("ReasoningEnvironmentSource") && !value["ReasoningEnvironmentSource"].IsNull())
    {
        if (!value["ReasoningEnvironmentSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.ReasoningEnvironmentSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningEnvironmentSource = string(value["ReasoningEnvironmentSource"].GetString());
        m_reasoningEnvironmentSourceHasBeenSet = true;
    }

    if (value.HasMember("ReasoningEnvironment") && !value["ReasoningEnvironment"].IsNull())
    {
        if (!value["ReasoningEnvironment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.ReasoningEnvironment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningEnvironment = string(value["ReasoningEnvironment"].GetString());
        m_reasoningEnvironmentHasBeenSet = true;
    }

    if (value.HasMember("ReasoningEnvironmentId") && !value["ReasoningEnvironmentId"].IsNull())
    {
        if (!value["ReasoningEnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.ReasoningEnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningEnvironmentId = string(value["ReasoningEnvironmentId"].GetString());
        m_reasoningEnvironmentIdHasBeenSet = true;
    }

    if (value.HasMember("ReasoningImageInfo") && !value["ReasoningImageInfo"].IsNull())
    {
        if (!value["ReasoningImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSource.ReasoningImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reasoningImageInfo.Deserialize(value["ReasoningImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reasoningImageInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmFrameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgorithmFramework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithmFramework.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingPreferenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingPreference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingPreference.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningEnvironmentSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEnvironmentSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningEnvironmentSource.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEnvironment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningEnvironmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningEnvironmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningImageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reasoningImageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModelSource::GetSource() const
{
    return m_source;
}

void ModelSource::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ModelSource::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ModelSource::GetJobName() const
{
    return m_jobName;
}

void ModelSource::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool ModelSource::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string ModelSource::GetJobVersion() const
{
    return m_jobVersion;
}

void ModelSource::SetJobVersion(const string& _jobVersion)
{
    m_jobVersion = _jobVersion;
    m_jobVersionHasBeenSet = true;
}

bool ModelSource::JobVersionHasBeenSet() const
{
    return m_jobVersionHasBeenSet;
}

string ModelSource::GetJobId() const
{
    return m_jobId;
}

void ModelSource::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ModelSource::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ModelSource::GetModelName() const
{
    return m_modelName;
}

void ModelSource::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelSource::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ModelSource::GetAlgorithmFramework() const
{
    return m_algorithmFramework;
}

void ModelSource::SetAlgorithmFramework(const string& _algorithmFramework)
{
    m_algorithmFramework = _algorithmFramework;
    m_algorithmFrameworkHasBeenSet = true;
}

bool ModelSource::AlgorithmFrameworkHasBeenSet() const
{
    return m_algorithmFrameworkHasBeenSet;
}

string ModelSource::GetTrainingPreference() const
{
    return m_trainingPreference;
}

void ModelSource::SetTrainingPreference(const string& _trainingPreference)
{
    m_trainingPreference = _trainingPreference;
    m_trainingPreferenceHasBeenSet = true;
}

bool ModelSource::TrainingPreferenceHasBeenSet() const
{
    return m_trainingPreferenceHasBeenSet;
}

string ModelSource::GetReasoningEnvironmentSource() const
{
    return m_reasoningEnvironmentSource;
}

void ModelSource::SetReasoningEnvironmentSource(const string& _reasoningEnvironmentSource)
{
    m_reasoningEnvironmentSource = _reasoningEnvironmentSource;
    m_reasoningEnvironmentSourceHasBeenSet = true;
}

bool ModelSource::ReasoningEnvironmentSourceHasBeenSet() const
{
    return m_reasoningEnvironmentSourceHasBeenSet;
}

string ModelSource::GetReasoningEnvironment() const
{
    return m_reasoningEnvironment;
}

void ModelSource::SetReasoningEnvironment(const string& _reasoningEnvironment)
{
    m_reasoningEnvironment = _reasoningEnvironment;
    m_reasoningEnvironmentHasBeenSet = true;
}

bool ModelSource::ReasoningEnvironmentHasBeenSet() const
{
    return m_reasoningEnvironmentHasBeenSet;
}

string ModelSource::GetReasoningEnvironmentId() const
{
    return m_reasoningEnvironmentId;
}

void ModelSource::SetReasoningEnvironmentId(const string& _reasoningEnvironmentId)
{
    m_reasoningEnvironmentId = _reasoningEnvironmentId;
    m_reasoningEnvironmentIdHasBeenSet = true;
}

bool ModelSource::ReasoningEnvironmentIdHasBeenSet() const
{
    return m_reasoningEnvironmentIdHasBeenSet;
}

ImageInfo ModelSource::GetReasoningImageInfo() const
{
    return m_reasoningImageInfo;
}

void ModelSource::SetReasoningImageInfo(const ImageInfo& _reasoningImageInfo)
{
    m_reasoningImageInfo = _reasoningImageInfo;
    m_reasoningImageInfoHasBeenSet = true;
}

bool ModelSource::ReasoningImageInfoHasBeenSet() const
{
    return m_reasoningImageInfoHasBeenSet;
}

