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

#include <tencentcloud/dlc/v20210125/model/JobSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

JobSpec::JobSpec() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entrypointHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imagePullTypeHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_runtimeEnvHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_autoscalerOptionsHasBeenSet(false),
    m_resourceConfigIdHasBeenSet(false),
    m_resourceConfigChangedHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_resourcePartitionNameHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterGroupHasBeenSet(false),
    m_jobPackageHasBeenSet(false),
    m_jobPackageNameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_jobInstanceCountHasBeenSet(false),
    m_hasRunningJobsHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dispatchStrategyHasBeenSet(false),
    m_submissionTargetHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome JobSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Entrypoint") && !value["Entrypoint"].IsNull())
    {
        if (!value["Entrypoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.Entrypoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrypoint = string(value["Entrypoint"].GetString());
        m_entrypointHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("ImagePullType") && !value["ImagePullType"].IsNull())
    {
        if (!value["ImagePullType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ImagePullType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullType = string(value["ImagePullType"].GetString());
        m_imagePullTypeHasBeenSet = true;
    }

    if (value.HasMember("ImagePullPolicy") && !value["ImagePullPolicy"].IsNull())
    {
        if (!value["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(value["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("RuntimeEnv") && !value["RuntimeEnv"].IsNull())
    {
        if (!value["RuntimeEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.RuntimeEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeEnv = string(value["RuntimeEnv"].GetString());
        m_runtimeEnvHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("AutoscalerOptions") && !value["AutoscalerOptions"].IsNull())
    {
        if (!value["AutoscalerOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.AutoscalerOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalerOptions = string(value["AutoscalerOptions"].GetString());
        m_autoscalerOptionsHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfigId") && !value["ResourceConfigId"].IsNull())
    {
        if (!value["ResourceConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ResourceConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfigId = string(value["ResourceConfigId"].GetString());
        m_resourceConfigIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfigChanged") && !value["ResourceConfigChanged"].IsNull())
    {
        if (!value["ResourceConfigChanged"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ResourceConfigChanged` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfigChanged = value["ResourceConfigChanged"].GetBool();
        m_resourceConfigChangedHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionId") && !value["ResourcePartitionId"].IsNull())
    {
        if (!value["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(value["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionName") && !value["ResourcePartitionName"].IsNull())
    {
        if (!value["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(value["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterGroup") && !value["ClusterGroup"].IsNull())
    {
        if (!value["ClusterGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ClusterGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterGroup = string(value["ClusterGroup"].GetString());
        m_clusterGroupHasBeenSet = true;
    }

    if (value.HasMember("JobPackage") && !value["JobPackage"].IsNull())
    {
        if (!value["JobPackage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.JobPackage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobPackage = string(value["JobPackage"].GetString());
        m_jobPackageHasBeenSet = true;
    }

    if (value.HasMember("JobPackageName") && !value["JobPackageName"].IsNull())
    {
        if (!value["JobPackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.JobPackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobPackageName = string(value["JobPackageName"].GetString());
        m_jobPackageNameHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("JobInstanceCount") && !value["JobInstanceCount"].IsNull())
    {
        if (!value["JobInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.JobInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobInstanceCount = value["JobInstanceCount"].GetInt64();
        m_jobInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("HasRunningJobs") && !value["HasRunningJobs"].IsNull())
    {
        if (!value["HasRunningJobs"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.HasRunningJobs` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasRunningJobs = value["HasRunningJobs"].GetBool();
        m_hasRunningJobsHasBeenSet = true;
    }

    if (value.HasMember("AdvancedOptions") && !value["AdvancedOptions"].IsNull())
    {
        if (!value["AdvancedOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.AdvancedOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedOptions = string(value["AdvancedOptions"].GetString());
        m_advancedOptionsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobSpec.Tags` is not array type"));

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

    if (value.HasMember("DispatchStrategy") && !value["DispatchStrategy"].IsNull())
    {
        if (!value["DispatchStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.DispatchStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dispatchStrategy = string(value["DispatchStrategy"].GetString());
        m_dispatchStrategyHasBeenSet = true;
    }

    if (value.HasMember("SubmissionTarget") && !value["SubmissionTarget"].IsNull())
    {
        if (!value["SubmissionTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.SubmissionTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submissionTarget = string(value["SubmissionTarget"].GetString());
        m_submissionTargetHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobSpec.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrypoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entrypoint.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullType.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalerOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalerOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalerOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigChangedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigChanged";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceConfigChanged, allocator);
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_jobPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_jobPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobPackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_jobInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobInstanceCount, allocator);
    }

    if (m_hasRunningJobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasRunningJobs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasRunningJobs, allocator);
    }

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
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

    if (m_dispatchStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispatchStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dispatchStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_submissionTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmissionTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submissionTarget.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

}


string JobSpec::GetId() const
{
    return m_id;
}

void JobSpec::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool JobSpec::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string JobSpec::GetName() const
{
    return m_name;
}

void JobSpec::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool JobSpec::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string JobSpec::GetDescription() const
{
    return m_description;
}

void JobSpec::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool JobSpec::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string JobSpec::GetEntrypoint() const
{
    return m_entrypoint;
}

void JobSpec::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool JobSpec::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string JobSpec::GetImage() const
{
    return m_image;
}

void JobSpec::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool JobSpec::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string JobSpec::GetImagePullType() const
{
    return m_imagePullType;
}

void JobSpec::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool JobSpec::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string JobSpec::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void JobSpec::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool JobSpec::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string JobSpec::GetResourceConfig() const
{
    return m_resourceConfig;
}

void JobSpec::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool JobSpec::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string JobSpec::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void JobSpec::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool JobSpec::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string JobSpec::GetCatalog() const
{
    return m_catalog;
}

void JobSpec::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool JobSpec::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string JobSpec::GetAutoscalerOptions() const
{
    return m_autoscalerOptions;
}

void JobSpec::SetAutoscalerOptions(const string& _autoscalerOptions)
{
    m_autoscalerOptions = _autoscalerOptions;
    m_autoscalerOptionsHasBeenSet = true;
}

bool JobSpec::AutoscalerOptionsHasBeenSet() const
{
    return m_autoscalerOptionsHasBeenSet;
}

string JobSpec::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void JobSpec::SetResourceConfigId(const string& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool JobSpec::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

bool JobSpec::GetResourceConfigChanged() const
{
    return m_resourceConfigChanged;
}

void JobSpec::SetResourceConfigChanged(const bool& _resourceConfigChanged)
{
    m_resourceConfigChanged = _resourceConfigChanged;
    m_resourceConfigChangedHasBeenSet = true;
}

bool JobSpec::ResourceConfigChangedHasBeenSet() const
{
    return m_resourceConfigChangedHasBeenSet;
}

string JobSpec::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void JobSpec::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool JobSpec::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string JobSpec::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

void JobSpec::SetResourcePartitionName(const string& _resourcePartitionName)
{
    m_resourcePartitionName = _resourcePartitionName;
    m_resourcePartitionNameHasBeenSet = true;
}

bool JobSpec::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string JobSpec::GetQueue() const
{
    return m_queue;
}

void JobSpec::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool JobSpec::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string JobSpec::GetGroupId() const
{
    return m_groupId;
}

void JobSpec::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool JobSpec::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string JobSpec::GetClusterId() const
{
    return m_clusterId;
}

void JobSpec::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool JobSpec::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string JobSpec::GetClusterGroup() const
{
    return m_clusterGroup;
}

void JobSpec::SetClusterGroup(const string& _clusterGroup)
{
    m_clusterGroup = _clusterGroup;
    m_clusterGroupHasBeenSet = true;
}

bool JobSpec::ClusterGroupHasBeenSet() const
{
    return m_clusterGroupHasBeenSet;
}

string JobSpec::GetJobPackage() const
{
    return m_jobPackage;
}

void JobSpec::SetJobPackage(const string& _jobPackage)
{
    m_jobPackage = _jobPackage;
    m_jobPackageHasBeenSet = true;
}

bool JobSpec::JobPackageHasBeenSet() const
{
    return m_jobPackageHasBeenSet;
}

string JobSpec::GetJobPackageName() const
{
    return m_jobPackageName;
}

void JobSpec::SetJobPackageName(const string& _jobPackageName)
{
    m_jobPackageName = _jobPackageName;
    m_jobPackageNameHasBeenSet = true;
}

bool JobSpec::JobPackageNameHasBeenSet() const
{
    return m_jobPackageNameHasBeenSet;
}

int64_t JobSpec::GetPriority() const
{
    return m_priority;
}

void JobSpec::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool JobSpec::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t JobSpec::GetAppId() const
{
    return m_appId;
}

void JobSpec::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool JobSpec::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string JobSpec::GetUin() const
{
    return m_uin;
}

void JobSpec::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool JobSpec::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string JobSpec::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void JobSpec::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool JobSpec::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

uint64_t JobSpec::GetCreateTime() const
{
    return m_createTime;
}

void JobSpec::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobSpec::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t JobSpec::GetUpdateTime() const
{
    return m_updateTime;
}

void JobSpec::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool JobSpec::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t JobSpec::GetJobInstanceCount() const
{
    return m_jobInstanceCount;
}

void JobSpec::SetJobInstanceCount(const int64_t& _jobInstanceCount)
{
    m_jobInstanceCount = _jobInstanceCount;
    m_jobInstanceCountHasBeenSet = true;
}

bool JobSpec::JobInstanceCountHasBeenSet() const
{
    return m_jobInstanceCountHasBeenSet;
}

bool JobSpec::GetHasRunningJobs() const
{
    return m_hasRunningJobs;
}

void JobSpec::SetHasRunningJobs(const bool& _hasRunningJobs)
{
    m_hasRunningJobs = _hasRunningJobs;
    m_hasRunningJobsHasBeenSet = true;
}

bool JobSpec::HasRunningJobsHasBeenSet() const
{
    return m_hasRunningJobsHasBeenSet;
}

string JobSpec::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void JobSpec::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool JobSpec::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

vector<Tag> JobSpec::GetTags() const
{
    return m_tags;
}

void JobSpec::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool JobSpec::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string JobSpec::GetDispatchStrategy() const
{
    return m_dispatchStrategy;
}

void JobSpec::SetDispatchStrategy(const string& _dispatchStrategy)
{
    m_dispatchStrategy = _dispatchStrategy;
    m_dispatchStrategyHasBeenSet = true;
}

bool JobSpec::DispatchStrategyHasBeenSet() const
{
    return m_dispatchStrategyHasBeenSet;
}

string JobSpec::GetSubmissionTarget() const
{
    return m_submissionTarget;
}

void JobSpec::SetSubmissionTarget(const string& _submissionTarget)
{
    m_submissionTarget = _submissionTarget;
    m_submissionTargetHasBeenSet = true;
}

bool JobSpec::SubmissionTargetHasBeenSet() const
{
    return m_submissionTargetHasBeenSet;
}

string JobSpec::GetGroupName() const
{
    return m_groupName;
}

void JobSpec::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool JobSpec::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string JobSpec::GetClusterName() const
{
    return m_clusterName;
}

void JobSpec::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool JobSpec::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

