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

#include <tencentcloud/dlc/v20210125/model/CopyJobSpecResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CopyJobSpecResponse::CopyJobSpecResponse() :
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
    m_jobPackageHasBeenSet(false),
    m_jobPackageNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_jobInstanceCountHasBeenSet(false),
    m_hasRunningJobsHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dispatchStrategyHasBeenSet(false),
    m_submissionTargetHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome CopyJobSpecResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
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

    if (rsp.HasMember("Image") && !rsp["Image"].IsNull())
    {
        if (!rsp["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(rsp["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (rsp.HasMember("ImagePullType") && !rsp["ImagePullType"].IsNull())
    {
        if (!rsp["ImagePullType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagePullType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullType = string(rsp["ImagePullType"].GetString());
        m_imagePullTypeHasBeenSet = true;
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

    if (rsp.HasMember("ResourceConfig") && !rsp["ResourceConfig"].IsNull())
    {
        if (!rsp["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(rsp["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
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

    if (rsp.HasMember("Catalog") && !rsp["Catalog"].IsNull())
    {
        if (!rsp["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(rsp["Catalog"].GetString());
        m_catalogHasBeenSet = true;
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

    if (rsp.HasMember("ResourceConfigId") && !rsp["ResourceConfigId"].IsNull())
    {
        if (!rsp["ResourceConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfigId = string(rsp["ResourceConfigId"].GetString());
        m_resourceConfigIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceConfigChanged") && !rsp["ResourceConfigChanged"].IsNull())
    {
        if (!rsp["ResourceConfigChanged"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigChanged` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfigChanged = rsp["ResourceConfigChanged"].GetBool();
        m_resourceConfigChangedHasBeenSet = true;
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

    if (rsp.HasMember("JobPackage") && !rsp["JobPackage"].IsNull())
    {
        if (!rsp["JobPackage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobPackage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobPackage = string(rsp["JobPackage"].GetString());
        m_jobPackageHasBeenSet = true;
    }

    if (rsp.HasMember("JobPackageName") && !rsp["JobPackageName"].IsNull())
    {
        if (!rsp["JobPackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobPackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobPackageName = string(rsp["JobPackageName"].GetString());
        m_jobPackageNameHasBeenSet = true;
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

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("JobInstanceCount") && !rsp["JobInstanceCount"].IsNull())
    {
        if (!rsp["JobInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobInstanceCount = rsp["JobInstanceCount"].GetInt64();
        m_jobInstanceCountHasBeenSet = true;
    }

    if (rsp.HasMember("HasRunningJobs") && !rsp["HasRunningJobs"].IsNull())
    {
        if (!rsp["HasRunningJobs"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasRunningJobs` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasRunningJobs = rsp["HasRunningJobs"].GetBool();
        m_hasRunningJobsHasBeenSet = true;
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

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
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

    if (rsp.HasMember("DispatchStrategy") && !rsp["DispatchStrategy"].IsNull())
    {
        if (!rsp["DispatchStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DispatchStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dispatchStrategy = string(rsp["DispatchStrategy"].GetString());
        m_dispatchStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("SubmissionTarget") && !rsp["SubmissionTarget"].IsNull())
    {
        if (!rsp["SubmissionTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmissionTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submissionTarget = string(rsp["SubmissionTarget"].GetString());
        m_submissionTargetHasBeenSet = true;
    }

    if (rsp.HasMember("GroupName") && !rsp["GroupName"].IsNull())
    {
        if (!rsp["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(rsp["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
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

string CopyJobSpecResponse::ToJsonString() const
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string CopyJobSpecResponse::GetId() const
{
    return m_id;
}

bool CopyJobSpecResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CopyJobSpecResponse::GetName() const
{
    return m_name;
}

bool CopyJobSpecResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CopyJobSpecResponse::GetDescription() const
{
    return m_description;
}

bool CopyJobSpecResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CopyJobSpecResponse::GetEntrypoint() const
{
    return m_entrypoint;
}

bool CopyJobSpecResponse::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string CopyJobSpecResponse::GetImage() const
{
    return m_image;
}

bool CopyJobSpecResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string CopyJobSpecResponse::GetImagePullType() const
{
    return m_imagePullType;
}

bool CopyJobSpecResponse::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string CopyJobSpecResponse::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

bool CopyJobSpecResponse::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string CopyJobSpecResponse::GetResourceConfig() const
{
    return m_resourceConfig;
}

bool CopyJobSpecResponse::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string CopyJobSpecResponse::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

bool CopyJobSpecResponse::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string CopyJobSpecResponse::GetCatalog() const
{
    return m_catalog;
}

bool CopyJobSpecResponse::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string CopyJobSpecResponse::GetAutoscalerOptions() const
{
    return m_autoscalerOptions;
}

bool CopyJobSpecResponse::AutoscalerOptionsHasBeenSet() const
{
    return m_autoscalerOptionsHasBeenSet;
}

string CopyJobSpecResponse::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

bool CopyJobSpecResponse::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

bool CopyJobSpecResponse::GetResourceConfigChanged() const
{
    return m_resourceConfigChanged;
}

bool CopyJobSpecResponse::ResourceConfigChangedHasBeenSet() const
{
    return m_resourceConfigChangedHasBeenSet;
}

string CopyJobSpecResponse::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

bool CopyJobSpecResponse::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string CopyJobSpecResponse::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

bool CopyJobSpecResponse::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string CopyJobSpecResponse::GetQueue() const
{
    return m_queue;
}

bool CopyJobSpecResponse::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string CopyJobSpecResponse::GetJobPackage() const
{
    return m_jobPackage;
}

bool CopyJobSpecResponse::JobPackageHasBeenSet() const
{
    return m_jobPackageHasBeenSet;
}

string CopyJobSpecResponse::GetJobPackageName() const
{
    return m_jobPackageName;
}

bool CopyJobSpecResponse::JobPackageNameHasBeenSet() const
{
    return m_jobPackageNameHasBeenSet;
}

int64_t CopyJobSpecResponse::GetAppId() const
{
    return m_appId;
}

bool CopyJobSpecResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CopyJobSpecResponse::GetUin() const
{
    return m_uin;
}

bool CopyJobSpecResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t CopyJobSpecResponse::GetCreateTime() const
{
    return m_createTime;
}

bool CopyJobSpecResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CopyJobSpecResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool CopyJobSpecResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t CopyJobSpecResponse::GetJobInstanceCount() const
{
    return m_jobInstanceCount;
}

bool CopyJobSpecResponse::JobInstanceCountHasBeenSet() const
{
    return m_jobInstanceCountHasBeenSet;
}

bool CopyJobSpecResponse::GetHasRunningJobs() const
{
    return m_hasRunningJobs;
}

bool CopyJobSpecResponse::HasRunningJobsHasBeenSet() const
{
    return m_hasRunningJobsHasBeenSet;
}

string CopyJobSpecResponse::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

bool CopyJobSpecResponse::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

string CopyJobSpecResponse::GetGroupId() const
{
    return m_groupId;
}

bool CopyJobSpecResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CopyJobSpecResponse::GetClusterId() const
{
    return m_clusterId;
}

bool CopyJobSpecResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t CopyJobSpecResponse::GetPriority() const
{
    return m_priority;
}

bool CopyJobSpecResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<Tag> CopyJobSpecResponse::GetTags() const
{
    return m_tags;
}

bool CopyJobSpecResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CopyJobSpecResponse::GetDispatchStrategy() const
{
    return m_dispatchStrategy;
}

bool CopyJobSpecResponse::DispatchStrategyHasBeenSet() const
{
    return m_dispatchStrategyHasBeenSet;
}

string CopyJobSpecResponse::GetSubmissionTarget() const
{
    return m_submissionTarget;
}

bool CopyJobSpecResponse::SubmissionTargetHasBeenSet() const
{
    return m_submissionTargetHasBeenSet;
}

string CopyJobSpecResponse::GetGroupName() const
{
    return m_groupName;
}

bool CopyJobSpecResponse::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CopyJobSpecResponse::GetClusterName() const
{
    return m_clusterName;
}

bool CopyJobSpecResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}


