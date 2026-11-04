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

#include <tencentcloud/dlc/v20210125/model/SubmitRayJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SubmitRayJobResponse::SubmitRayJobResponse() :
    m_idHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_resourcePartitionNameHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_submissionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_entrypointHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_subAccountNameHasBeenSet(false),
    m_historyUrlHasBeenSet(false),
    m_runningTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_runtimeEnvHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_autoscalerOptionsHasBeenSet(false),
    m_specIdHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_jobSourceHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome SubmitRayJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourcePartitionId") && !rsp["ResourcePartitionId"].IsNull())
    {
        if (!rsp["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(rsp["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourcePartitionName") && !rsp["ResourcePartitionName"].IsNull())
    {
        if (!rsp["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(rsp["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }

    if (rsp.HasMember("Queue") && !rsp["Queue"].IsNull())
    {
        if (!rsp["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(rsp["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (rsp.HasMember("SubmissionId") && !rsp["SubmissionId"].IsNull())
    {
        if (!rsp["SubmissionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmissionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submissionId = string(rsp["SubmissionId"].GetString());
        m_submissionIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Entrypoint") && !rsp["Entrypoint"].IsNull())
    {
        if (!rsp["Entrypoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Entrypoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrypoint = string(rsp["Entrypoint"].GetString());
        m_entrypointHasBeenSet = true;
    }

    if (rsp.HasMember("JobName") && !rsp["JobName"].IsNull())
    {
        if (!rsp["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(rsp["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("SubAccountUin") && !rsp["SubAccountUin"].IsNull())
    {
        if (!rsp["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(rsp["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (rsp.HasMember("SubAccountName") && !rsp["SubAccountName"].IsNull())
    {
        if (!rsp["SubAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountName = string(rsp["SubAccountName"].GetString());
        m_subAccountNameHasBeenSet = true;
    }

    if (rsp.HasMember("HistoryUrl") && !rsp["HistoryUrl"].IsNull())
    {
        if (!rsp["HistoryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_historyUrl = string(rsp["HistoryUrl"].GetString());
        m_historyUrlHasBeenSet = true;
    }

    if (rsp.HasMember("RunningTime") && !rsp["RunningTime"].IsNull())
    {
        if (!rsp["RunningTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningTime = rsp["RunningTime"].GetInt64();
        m_runningTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FinishTime") && !rsp["FinishTime"].IsNull())
    {
        if (!rsp["FinishTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FinishTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = rsp["FinishTime"].GetUint64();
        m_finishTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (rsp.HasMember("RuntimeEnv") && !rsp["RuntimeEnv"].IsNull())
    {
        if (!rsp["RuntimeEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeEnv = string(rsp["RuntimeEnv"].GetString());
        m_runtimeEnvHasBeenSet = true;
    }

    if (rsp.HasMember("Image") && !rsp["Image"].IsNull())
    {
        if (!rsp["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(rsp["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceConfig") && !rsp["ResourceConfig"].IsNull())
    {
        if (!rsp["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(rsp["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (rsp.HasMember("Catalog") && !rsp["Catalog"].IsNull())
    {
        if (!rsp["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(rsp["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (rsp.HasMember("ImagePullPolicy") && !rsp["ImagePullPolicy"].IsNull())
    {
        if (!rsp["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(rsp["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
    }

    if (rsp.HasMember("AutoscalerOptions") && !rsp["AutoscalerOptions"].IsNull())
    {
        if (!rsp["AutoscalerOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoscalerOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalerOptions = string(rsp["AutoscalerOptions"].GetString());
        m_autoscalerOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("SpecId") && !rsp["SpecId"].IsNull())
    {
        if (!rsp["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(rsp["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (rsp.HasMember("SpecName") && !rsp["SpecName"].IsNull())
    {
        if (!rsp["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(rsp["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedOptions") && !rsp["AdvancedOptions"].IsNull())
    {
        if (!rsp["AdvancedOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedOptions = string(rsp["AdvancedOptions"].GetString());
        m_advancedOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("Priority") && !rsp["Priority"].IsNull())
    {
        if (!rsp["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = rsp["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("JobSource") && !rsp["JobSource"].IsNull())
    {
        if (!rsp["JobSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobSource = string(rsp["JobSource"].GetString());
        m_jobSourceHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SubmitRayJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePartitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_submissionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmissionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submissionId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrypoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entrypoint.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_historyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_historyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_runningTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningTime, allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalerOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalerOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalerOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jobSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobSource.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
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


string SubmitRayJobResponse::GetId() const
{
    return m_id;
}

bool SubmitRayJobResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SubmitRayJobResponse::GetClusterId() const
{
    return m_clusterId;
}

bool SubmitRayJobResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string SubmitRayJobResponse::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

bool SubmitRayJobResponse::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string SubmitRayJobResponse::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

bool SubmitRayJobResponse::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string SubmitRayJobResponse::GetQueue() const
{
    return m_queue;
}

bool SubmitRayJobResponse::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string SubmitRayJobResponse::GetSubmissionId() const
{
    return m_submissionId;
}

bool SubmitRayJobResponse::SubmissionIdHasBeenSet() const
{
    return m_submissionIdHasBeenSet;
}

string SubmitRayJobResponse::GetStatus() const
{
    return m_status;
}

bool SubmitRayJobResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SubmitRayJobResponse::GetEntrypoint() const
{
    return m_entrypoint;
}

bool SubmitRayJobResponse::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string SubmitRayJobResponse::GetJobName() const
{
    return m_jobName;
}

bool SubmitRayJobResponse::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

int64_t SubmitRayJobResponse::GetAppId() const
{
    return m_appId;
}

bool SubmitRayJobResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string SubmitRayJobResponse::GetUin() const
{
    return m_uin;
}

bool SubmitRayJobResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SubmitRayJobResponse::GetSubAccountUin() const
{
    return m_subAccountUin;
}

bool SubmitRayJobResponse::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string SubmitRayJobResponse::GetSubAccountName() const
{
    return m_subAccountName;
}

bool SubmitRayJobResponse::SubAccountNameHasBeenSet() const
{
    return m_subAccountNameHasBeenSet;
}

string SubmitRayJobResponse::GetHistoryUrl() const
{
    return m_historyUrl;
}

bool SubmitRayJobResponse::HistoryUrlHasBeenSet() const
{
    return m_historyUrlHasBeenSet;
}

int64_t SubmitRayJobResponse::GetRunningTime() const
{
    return m_runningTime;
}

bool SubmitRayJobResponse::RunningTimeHasBeenSet() const
{
    return m_runningTimeHasBeenSet;
}

uint64_t SubmitRayJobResponse::GetFinishTime() const
{
    return m_finishTime;
}

bool SubmitRayJobResponse::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

uint64_t SubmitRayJobResponse::GetCreateTime() const
{
    return m_createTime;
}

bool SubmitRayJobResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SubmitRayJobResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool SubmitRayJobResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string SubmitRayJobResponse::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

bool SubmitRayJobResponse::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string SubmitRayJobResponse::GetImage() const
{
    return m_image;
}

bool SubmitRayJobResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SubmitRayJobResponse::GetResourceConfig() const
{
    return m_resourceConfig;
}

bool SubmitRayJobResponse::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string SubmitRayJobResponse::GetCatalog() const
{
    return m_catalog;
}

bool SubmitRayJobResponse::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string SubmitRayJobResponse::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

bool SubmitRayJobResponse::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string SubmitRayJobResponse::GetAutoscalerOptions() const
{
    return m_autoscalerOptions;
}

bool SubmitRayJobResponse::AutoscalerOptionsHasBeenSet() const
{
    return m_autoscalerOptionsHasBeenSet;
}

string SubmitRayJobResponse::GetSpecId() const
{
    return m_specId;
}

bool SubmitRayJobResponse::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string SubmitRayJobResponse::GetSpecName() const
{
    return m_specName;
}

bool SubmitRayJobResponse::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

string SubmitRayJobResponse::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

bool SubmitRayJobResponse::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

int64_t SubmitRayJobResponse::GetPriority() const
{
    return m_priority;
}

bool SubmitRayJobResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<Tag> SubmitRayJobResponse::GetTags() const
{
    return m_tags;
}

bool SubmitRayJobResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string SubmitRayJobResponse::GetJobSource() const
{
    return m_jobSource;
}

bool SubmitRayJobResponse::JobSourceHasBeenSet() const
{
    return m_jobSourceHasBeenSet;
}

string SubmitRayJobResponse::GetClusterName() const
{
    return m_clusterName;
}

bool SubmitRayJobResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}


