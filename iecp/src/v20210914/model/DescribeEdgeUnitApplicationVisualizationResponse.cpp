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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitApplicationVisualizationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeUnitApplicationVisualizationResponse::DescribeEdgeUnitApplicationVisualizationResponse() :
    m_basicInfoHasBeenSet(false),
    m_basicConfigHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_initContainersHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_cronJobHasBeenSet(false),
    m_restartPolicyHasBeenSet(false),
    m_horizontalPodAutoscalerHasBeenSet(false),
    m_imagePullSecretsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEdgeUnitApplicationVisualizationResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BasicInfo") && !rsp["BasicInfo"].IsNull())
    {
        if (!rsp["BasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BasicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicInfo.Deserialize(rsp["BasicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicInfoHasBeenSet = true;
    }

    if (rsp.HasMember("BasicConfig") && !rsp["BasicConfig"].IsNull())
    {
        if (!rsp["BasicConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BasicConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicConfig.Deserialize(rsp["BasicConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicConfigHasBeenSet = true;
    }

    if (rsp.HasMember("Volumes") && !rsp["Volumes"].IsNull())
    {
        if (!rsp["Volumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Volumes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Volumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Volume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumes.push_back(item);
        }
        m_volumesHasBeenSet = true;
    }

    if (rsp.HasMember("InitContainers") && !rsp["InitContainers"].IsNull())
    {
        if (!rsp["InitContainers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InitContainers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InitContainers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Container item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_initContainers.push_back(item);
        }
        m_initContainersHasBeenSet = true;
    }

    if (rsp.HasMember("Containers") && !rsp["Containers"].IsNull())
    {
        if (!rsp["Containers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Containers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Containers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Container item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_containers.push_back(item);
        }
        m_containersHasBeenSet = true;
    }

    if (rsp.HasMember("Service") && !rsp["Service"].IsNull())
    {
        if (!rsp["Service"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Service` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_service.Deserialize(rsp["Service"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceHasBeenSet = true;
    }

    if (rsp.HasMember("Job") && !rsp["Job"].IsNull())
    {
        if (!rsp["Job"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Job` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_job.Deserialize(rsp["Job"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobHasBeenSet = true;
    }

    if (rsp.HasMember("CronJob") && !rsp["CronJob"].IsNull())
    {
        if (!rsp["CronJob"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cronJob.Deserialize(rsp["CronJob"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cronJobHasBeenSet = true;
    }

    if (rsp.HasMember("RestartPolicy") && !rsp["RestartPolicy"].IsNull())
    {
        if (!rsp["RestartPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestartPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restartPolicy = string(rsp["RestartPolicy"].GetString());
        m_restartPolicyHasBeenSet = true;
    }

    if (rsp.HasMember("HorizontalPodAutoscaler") && !rsp["HorizontalPodAutoscaler"].IsNull())
    {
        if (!rsp["HorizontalPodAutoscaler"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_horizontalPodAutoscaler.Deserialize(rsp["HorizontalPodAutoscaler"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_horizontalPodAutoscalerHasBeenSet = true;
    }

    if (rsp.HasMember("ImagePullSecrets") && !rsp["ImagePullSecrets"].IsNull())
    {
        if (!rsp["ImagePullSecrets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImagePullSecrets` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ImagePullSecrets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imagePullSecrets.push_back((*itr).GetString());
        }
        m_imagePullSecretsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEdgeUnitApplicationVisualizationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_basicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumes.begin(); itr != m_volumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_initContainersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitContainers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initContainers.begin(); itr != m_initContainers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containers.begin(); itr != m_containers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_job.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cronJobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronJob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cronJob.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_restartPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restartPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_horizontalPodAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalPodAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_horizontalPodAutoscaler.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imagePullSecretsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullSecrets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imagePullSecrets.begin(); itr != m_imagePullSecrets.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


ApplicationBasicInfo DescribeEdgeUnitApplicationVisualizationResponse::GetBasicInfo() const
{
    return m_basicInfo;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

ApplicationBasicConfig DescribeEdgeUnitApplicationVisualizationResponse::GetBasicConfig() const
{
    return m_basicConfig;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::BasicConfigHasBeenSet() const
{
    return m_basicConfigHasBeenSet;
}

vector<Volume> DescribeEdgeUnitApplicationVisualizationResponse::GetVolumes() const
{
    return m_volumes;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::VolumesHasBeenSet() const
{
    return m_volumesHasBeenSet;
}

vector<Container> DescribeEdgeUnitApplicationVisualizationResponse::GetInitContainers() const
{
    return m_initContainers;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::InitContainersHasBeenSet() const
{
    return m_initContainersHasBeenSet;
}

vector<Container> DescribeEdgeUnitApplicationVisualizationResponse::GetContainers() const
{
    return m_containers;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

Service DescribeEdgeUnitApplicationVisualizationResponse::GetService() const
{
    return m_service;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

Job DescribeEdgeUnitApplicationVisualizationResponse::GetJob() const
{
    return m_job;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

CronJob DescribeEdgeUnitApplicationVisualizationResponse::GetCronJob() const
{
    return m_cronJob;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::CronJobHasBeenSet() const
{
    return m_cronJobHasBeenSet;
}

string DescribeEdgeUnitApplicationVisualizationResponse::GetRestartPolicy() const
{
    return m_restartPolicy;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::RestartPolicyHasBeenSet() const
{
    return m_restartPolicyHasBeenSet;
}

HorizontalPodAutoscaler DescribeEdgeUnitApplicationVisualizationResponse::GetHorizontalPodAutoscaler() const
{
    return m_horizontalPodAutoscaler;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::HorizontalPodAutoscalerHasBeenSet() const
{
    return m_horizontalPodAutoscalerHasBeenSet;
}

vector<string> DescribeEdgeUnitApplicationVisualizationResponse::GetImagePullSecrets() const
{
    return m_imagePullSecrets;
}

bool DescribeEdgeUnitApplicationVisualizationResponse::ImagePullSecretsHasBeenSet() const
{
    return m_imagePullSecretsHasBeenSet;
}


