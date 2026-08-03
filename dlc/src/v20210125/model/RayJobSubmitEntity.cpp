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

#include <tencentcloud/dlc/v20210125/model/RayJobSubmitEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RayJobSubmitEntity::RayJobSubmitEntity() :
    m_idHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_resourcePartitionNameHasBeenSet(false),
    m_queueHasBeenSet(false),
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
    m_jobSourceHasBeenSet(false)
{
}

CoreInternalOutcome RayJobSubmitEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionId") && !value["ResourcePartitionId"].IsNull())
    {
        if (!value["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(value["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionName") && !value["ResourcePartitionName"].IsNull())
    {
        if (!value["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(value["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Entrypoint") && !value["Entrypoint"].IsNull())
    {
        if (!value["Entrypoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.Entrypoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrypoint = string(value["Entrypoint"].GetString());
        m_entrypointHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountName") && !value["SubAccountName"].IsNull())
    {
        if (!value["SubAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.SubAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountName = string(value["SubAccountName"].GetString());
        m_subAccountNameHasBeenSet = true;
    }

    if (value.HasMember("HistoryUrl") && !value["HistoryUrl"].IsNull())
    {
        if (!value["HistoryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.HistoryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_historyUrl = string(value["HistoryUrl"].GetString());
        m_historyUrlHasBeenSet = true;
    }

    if (value.HasMember("RunningTime") && !value["RunningTime"].IsNull())
    {
        if (!value["RunningTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.RunningTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningTime = value["RunningTime"].GetInt64();
        m_runningTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.FinishTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = value["FinishTime"].GetUint64();
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("RuntimeEnv") && !value["RuntimeEnv"].IsNull())
    {
        if (!value["RuntimeEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.RuntimeEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeEnv = string(value["RuntimeEnv"].GetString());
        m_runtimeEnvHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("ImagePullPolicy") && !value["ImagePullPolicy"].IsNull())
    {
        if (!value["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(value["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
    }

    if (value.HasMember("AutoscalerOptions") && !value["AutoscalerOptions"].IsNull())
    {
        if (!value["AutoscalerOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.AutoscalerOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalerOptions = string(value["AutoscalerOptions"].GetString());
        m_autoscalerOptionsHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("AdvancedOptions") && !value["AdvancedOptions"].IsNull())
    {
        if (!value["AdvancedOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.AdvancedOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedOptions = string(value["AdvancedOptions"].GetString());
        m_advancedOptionsHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
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

    if (value.HasMember("JobSource") && !value["JobSource"].IsNull())
    {
        if (!value["JobSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobSubmitEntity.JobSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobSource = string(value["JobSource"].GetString());
        m_jobSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RayJobSubmitEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

}


string RayJobSubmitEntity::GetId() const
{
    return m_id;
}

void RayJobSubmitEntity::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RayJobSubmitEntity::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RayJobSubmitEntity::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void RayJobSubmitEntity::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool RayJobSubmitEntity::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string RayJobSubmitEntity::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

void RayJobSubmitEntity::SetResourcePartitionName(const string& _resourcePartitionName)
{
    m_resourcePartitionName = _resourcePartitionName;
    m_resourcePartitionNameHasBeenSet = true;
}

bool RayJobSubmitEntity::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string RayJobSubmitEntity::GetQueue() const
{
    return m_queue;
}

void RayJobSubmitEntity::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool RayJobSubmitEntity::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string RayJobSubmitEntity::GetStatus() const
{
    return m_status;
}

void RayJobSubmitEntity::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RayJobSubmitEntity::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RayJobSubmitEntity::GetEntrypoint() const
{
    return m_entrypoint;
}

void RayJobSubmitEntity::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool RayJobSubmitEntity::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string RayJobSubmitEntity::GetJobName() const
{
    return m_jobName;
}

void RayJobSubmitEntity::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool RayJobSubmitEntity::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

int64_t RayJobSubmitEntity::GetAppId() const
{
    return m_appId;
}

void RayJobSubmitEntity::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool RayJobSubmitEntity::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string RayJobSubmitEntity::GetUin() const
{
    return m_uin;
}

void RayJobSubmitEntity::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool RayJobSubmitEntity::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string RayJobSubmitEntity::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void RayJobSubmitEntity::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool RayJobSubmitEntity::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string RayJobSubmitEntity::GetSubAccountName() const
{
    return m_subAccountName;
}

void RayJobSubmitEntity::SetSubAccountName(const string& _subAccountName)
{
    m_subAccountName = _subAccountName;
    m_subAccountNameHasBeenSet = true;
}

bool RayJobSubmitEntity::SubAccountNameHasBeenSet() const
{
    return m_subAccountNameHasBeenSet;
}

string RayJobSubmitEntity::GetHistoryUrl() const
{
    return m_historyUrl;
}

void RayJobSubmitEntity::SetHistoryUrl(const string& _historyUrl)
{
    m_historyUrl = _historyUrl;
    m_historyUrlHasBeenSet = true;
}

bool RayJobSubmitEntity::HistoryUrlHasBeenSet() const
{
    return m_historyUrlHasBeenSet;
}

int64_t RayJobSubmitEntity::GetRunningTime() const
{
    return m_runningTime;
}

void RayJobSubmitEntity::SetRunningTime(const int64_t& _runningTime)
{
    m_runningTime = _runningTime;
    m_runningTimeHasBeenSet = true;
}

bool RayJobSubmitEntity::RunningTimeHasBeenSet() const
{
    return m_runningTimeHasBeenSet;
}

uint64_t RayJobSubmitEntity::GetFinishTime() const
{
    return m_finishTime;
}

void RayJobSubmitEntity::SetFinishTime(const uint64_t& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool RayJobSubmitEntity::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

uint64_t RayJobSubmitEntity::GetCreateTime() const
{
    return m_createTime;
}

void RayJobSubmitEntity::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RayJobSubmitEntity::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RayJobSubmitEntity::GetErrorMessage() const
{
    return m_errorMessage;
}

void RayJobSubmitEntity::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool RayJobSubmitEntity::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string RayJobSubmitEntity::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void RayJobSubmitEntity::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool RayJobSubmitEntity::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string RayJobSubmitEntity::GetImage() const
{
    return m_image;
}

void RayJobSubmitEntity::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool RayJobSubmitEntity::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string RayJobSubmitEntity::GetResourceConfig() const
{
    return m_resourceConfig;
}

void RayJobSubmitEntity::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool RayJobSubmitEntity::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string RayJobSubmitEntity::GetCatalog() const
{
    return m_catalog;
}

void RayJobSubmitEntity::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool RayJobSubmitEntity::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string RayJobSubmitEntity::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void RayJobSubmitEntity::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool RayJobSubmitEntity::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string RayJobSubmitEntity::GetAutoscalerOptions() const
{
    return m_autoscalerOptions;
}

void RayJobSubmitEntity::SetAutoscalerOptions(const string& _autoscalerOptions)
{
    m_autoscalerOptions = _autoscalerOptions;
    m_autoscalerOptionsHasBeenSet = true;
}

bool RayJobSubmitEntity::AutoscalerOptionsHasBeenSet() const
{
    return m_autoscalerOptionsHasBeenSet;
}

string RayJobSubmitEntity::GetSpecId() const
{
    return m_specId;
}

void RayJobSubmitEntity::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool RayJobSubmitEntity::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string RayJobSubmitEntity::GetSpecName() const
{
    return m_specName;
}

void RayJobSubmitEntity::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool RayJobSubmitEntity::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

string RayJobSubmitEntity::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void RayJobSubmitEntity::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool RayJobSubmitEntity::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

int64_t RayJobSubmitEntity::GetPriority() const
{
    return m_priority;
}

void RayJobSubmitEntity::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool RayJobSubmitEntity::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<Tag> RayJobSubmitEntity::GetTags() const
{
    return m_tags;
}

void RayJobSubmitEntity::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RayJobSubmitEntity::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string RayJobSubmitEntity::GetJobSource() const
{
    return m_jobSource;
}

void RayJobSubmitEntity::SetJobSource(const string& _jobSource)
{
    m_jobSource = _jobSource;
    m_jobSourceHasBeenSet = true;
}

bool RayJobSubmitEntity::JobSourceHasBeenSet() const
{
    return m_jobSourceHasBeenSet;
}

