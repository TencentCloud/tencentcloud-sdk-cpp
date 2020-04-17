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

#include <tencentcloud/tione/v20191022/model/DescribeTrainingJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace rapidjson;
using namespace std;

DescribeTrainingJobResponse::DescribeTrainingJobResponse() :
    m_algorithmSpecificationHasBeenSet(false),
    m_trainingJobNameHasBeenSet(false),
    m_hyperParametersHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_trainingStartTimeHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_modelArtifactsHasBeenSet(false),
    m_secondaryStatusHasBeenSet(false),
    m_secondaryStatusTransitionsHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_trainingJobStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTrainingJobResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AlgorithmSpecification") && !rsp["AlgorithmSpecification"].IsNull())
    {
        if (!rsp["AlgorithmSpecification"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AlgorithmSpecification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_algorithmSpecification.Deserialize(rsp["AlgorithmSpecification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_algorithmSpecificationHasBeenSet = true;
    }

    if (rsp.HasMember("TrainingJobName") && !rsp["TrainingJobName"].IsNull())
    {
        if (!rsp["TrainingJobName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TrainingJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingJobName = string(rsp["TrainingJobName"].GetString());
        m_trainingJobNameHasBeenSet = true;
    }

    if (rsp.HasMember("HyperParameters") && !rsp["HyperParameters"].IsNull())
    {
        if (!rsp["HyperParameters"].IsString())
        {
            return CoreInternalOutcome(Error("response `HyperParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hyperParameters = string(rsp["HyperParameters"].GetString());
        m_hyperParametersHasBeenSet = true;
    }

    if (rsp.HasMember("InputDataConfig") && !rsp["InputDataConfig"].IsNull())
    {
        if (!rsp["InputDataConfig"].IsArray())
            return CoreInternalOutcome(Error("response `InputDataConfig` is not array type"));

        const Value &tmpValue = rsp["InputDataConfig"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputDataConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputDataConfig.push_back(item);
        }
        m_inputDataConfigHasBeenSet = true;
    }

    if (rsp.HasMember("OutputDataConfig") && !rsp["OutputDataConfig"].IsNull())
    {
        if (!rsp["OutputDataConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OutputDataConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputDataConfig.Deserialize(rsp["OutputDataConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputDataConfigHasBeenSet = true;
    }

    if (rsp.HasMember("StoppingCondition") && !rsp["StoppingCondition"].IsNull())
    {
        if (!rsp["StoppingCondition"].IsObject())
        {
            return CoreInternalOutcome(Error("response `StoppingCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stoppingCondition.Deserialize(rsp["StoppingCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stoppingConditionHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceConfig") && !rsp["ResourceConfig"].IsNull())
    {
        if (!rsp["ResourceConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ResourceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceConfig.Deserialize(rsp["ResourceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceConfigHasBeenSet = true;
    }

    if (rsp.HasMember("VpcConfig") && !rsp["VpcConfig"].IsNull())
    {
        if (!rsp["VpcConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VpcConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcConfig.Deserialize(rsp["VpcConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcConfigHasBeenSet = true;
    }

    if (rsp.HasMember("FailureReason") && !rsp["FailureReason"].IsNull())
    {
        if (!rsp["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(rsp["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (rsp.HasMember("LastModifiedTime") && !rsp["LastModifiedTime"].IsNull())
    {
        if (!rsp["LastModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LastModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = string(rsp["LastModifiedTime"].GetString());
        m_lastModifiedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TrainingStartTime") && !rsp["TrainingStartTime"].IsNull())
    {
        if (!rsp["TrainingStartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TrainingStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingStartTime = string(rsp["TrainingStartTime"].GetString());
        m_trainingStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TrainingEndTime") && !rsp["TrainingEndTime"].IsNull())
    {
        if (!rsp["TrainingEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TrainingEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingEndTime = string(rsp["TrainingEndTime"].GetString());
        m_trainingEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModelArtifacts") && !rsp["ModelArtifacts"].IsNull())
    {
        if (!rsp["ModelArtifacts"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ModelArtifacts` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelArtifacts.Deserialize(rsp["ModelArtifacts"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelArtifactsHasBeenSet = true;
    }

    if (rsp.HasMember("SecondaryStatus") && !rsp["SecondaryStatus"].IsNull())
    {
        if (!rsp["SecondaryStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecondaryStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryStatus = string(rsp["SecondaryStatus"].GetString());
        m_secondaryStatusHasBeenSet = true;
    }

    if (rsp.HasMember("SecondaryStatusTransitions") && !rsp["SecondaryStatusTransitions"].IsNull())
    {
        if (!rsp["SecondaryStatusTransitions"].IsArray())
            return CoreInternalOutcome(Error("response `SecondaryStatusTransitions` is not array type"));

        const Value &tmpValue = rsp["SecondaryStatusTransitions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecondaryStatusTransition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_secondaryStatusTransitions.push_back(item);
        }
        m_secondaryStatusTransitionsHasBeenSet = true;
    }

    if (rsp.HasMember("RoleName") && !rsp["RoleName"].IsNull())
    {
        if (!rsp["RoleName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(rsp["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (rsp.HasMember("TrainingJobStatus") && !rsp["TrainingJobStatus"].IsNull())
    {
        if (!rsp["TrainingJobStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `TrainingJobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingJobStatus = string(rsp["TrainingJobStatus"].GetString());
        m_trainingJobStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


AlgorithmSpecification DescribeTrainingJobResponse::GetAlgorithmSpecification() const
{
    return m_algorithmSpecification;
}

bool DescribeTrainingJobResponse::AlgorithmSpecificationHasBeenSet() const
{
    return m_algorithmSpecificationHasBeenSet;
}

string DescribeTrainingJobResponse::GetTrainingJobName() const
{
    return m_trainingJobName;
}

bool DescribeTrainingJobResponse::TrainingJobNameHasBeenSet() const
{
    return m_trainingJobNameHasBeenSet;
}

string DescribeTrainingJobResponse::GetHyperParameters() const
{
    return m_hyperParameters;
}

bool DescribeTrainingJobResponse::HyperParametersHasBeenSet() const
{
    return m_hyperParametersHasBeenSet;
}

vector<InputDataConfig> DescribeTrainingJobResponse::GetInputDataConfig() const
{
    return m_inputDataConfig;
}

bool DescribeTrainingJobResponse::InputDataConfigHasBeenSet() const
{
    return m_inputDataConfigHasBeenSet;
}

OutputDataConfig DescribeTrainingJobResponse::GetOutputDataConfig() const
{
    return m_outputDataConfig;
}

bool DescribeTrainingJobResponse::OutputDataConfigHasBeenSet() const
{
    return m_outputDataConfigHasBeenSet;
}

StoppingCondition DescribeTrainingJobResponse::GetStoppingCondition() const
{
    return m_stoppingCondition;
}

bool DescribeTrainingJobResponse::StoppingConditionHasBeenSet() const
{
    return m_stoppingConditionHasBeenSet;
}

ResourceConfig DescribeTrainingJobResponse::GetResourceConfig() const
{
    return m_resourceConfig;
}

bool DescribeTrainingJobResponse::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

VpcConfig DescribeTrainingJobResponse::GetVpcConfig() const
{
    return m_vpcConfig;
}

bool DescribeTrainingJobResponse::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string DescribeTrainingJobResponse::GetFailureReason() const
{
    return m_failureReason;
}

bool DescribeTrainingJobResponse::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string DescribeTrainingJobResponse::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

bool DescribeTrainingJobResponse::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

string DescribeTrainingJobResponse::GetTrainingStartTime() const
{
    return m_trainingStartTime;
}

bool DescribeTrainingJobResponse::TrainingStartTimeHasBeenSet() const
{
    return m_trainingStartTimeHasBeenSet;
}

string DescribeTrainingJobResponse::GetTrainingEndTime() const
{
    return m_trainingEndTime;
}

bool DescribeTrainingJobResponse::TrainingEndTimeHasBeenSet() const
{
    return m_trainingEndTimeHasBeenSet;
}

ModelArtifacts DescribeTrainingJobResponse::GetModelArtifacts() const
{
    return m_modelArtifacts;
}

bool DescribeTrainingJobResponse::ModelArtifactsHasBeenSet() const
{
    return m_modelArtifactsHasBeenSet;
}

string DescribeTrainingJobResponse::GetSecondaryStatus() const
{
    return m_secondaryStatus;
}

bool DescribeTrainingJobResponse::SecondaryStatusHasBeenSet() const
{
    return m_secondaryStatusHasBeenSet;
}

vector<SecondaryStatusTransition> DescribeTrainingJobResponse::GetSecondaryStatusTransitions() const
{
    return m_secondaryStatusTransitions;
}

bool DescribeTrainingJobResponse::SecondaryStatusTransitionsHasBeenSet() const
{
    return m_secondaryStatusTransitionsHasBeenSet;
}

string DescribeTrainingJobResponse::GetRoleName() const
{
    return m_roleName;
}

bool DescribeTrainingJobResponse::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string DescribeTrainingJobResponse::GetTrainingJobStatus() const
{
    return m_trainingJobStatus;
}

bool DescribeTrainingJobResponse::TrainingJobStatusHasBeenSet() const
{
    return m_trainingJobStatusHasBeenSet;
}


