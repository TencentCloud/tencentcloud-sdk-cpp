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

#include <tencentcloud/dlc/v20210125/model/LabResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LabResponse::LabResponse() :
    m_exampleIdHasBeenSet(false),
    m_codeArchiveUrlHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_labImageHasBeenSet(false),
    m_labImagePullPolicyHasBeenSet(false),
    m_labImagePullTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_resourcePartitionNameHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_subAccountNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_resourceConfigIdHasBeenSet(false),
    m_runtimeEnvHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_historyUrlHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_imagePullTypeHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_persistentWorkDirHasBeenSet(false),
    m_enableTokenHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

CoreInternalOutcome LabResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExampleId") && !value["ExampleId"].IsNull())
    {
        if (!value["ExampleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.ExampleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exampleId = string(value["ExampleId"].GetString());
        m_exampleIdHasBeenSet = true;
    }

    if (value.HasMember("CodeArchiveUrl") && !value["CodeArchiveUrl"].IsNull())
    {
        if (!value["CodeArchiveUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.CodeArchiveUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeArchiveUrl = string(value["CodeArchiveUrl"].GetString());
        m_codeArchiveUrlHasBeenSet = true;
    }

    if (value.HasMember("Services") && !value["Services"].IsNull())
    {
        if (!value["Services"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabResponse.Services` is not array type"));

        const rapidjson::Value &tmpValue = value["Services"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TypeKVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_services.push_back(item);
        }
        m_servicesHasBeenSet = true;
    }

    if (value.HasMember("LabImage") && !value["LabImage"].IsNull())
    {
        if (!value["LabImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.LabImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labImage = string(value["LabImage"].GetString());
        m_labImageHasBeenSet = true;
    }

    if (value.HasMember("LabImagePullPolicy") && !value["LabImagePullPolicy"].IsNull())
    {
        if (!value["LabImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.LabImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labImagePullPolicy = string(value["LabImagePullPolicy"].GetString());
        m_labImagePullPolicyHasBeenSet = true;
    }

    if (value.HasMember("LabImagePullType") && !value["LabImagePullType"].IsNull())
    {
        if (!value["LabImagePullType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.LabImagePullType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labImagePullType = string(value["LabImagePullType"].GetString());
        m_labImagePullTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionId") && !value["ResourcePartitionId"].IsNull())
    {
        if (!value["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(value["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionName") && !value["ResourcePartitionName"].IsNull())
    {
        if (!value["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(value["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountName") && !value["SubAccountName"].IsNull())
    {
        if (!value["SubAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.SubAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountName = string(value["SubAccountName"].GetString());
        m_subAccountNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusMessage") && !value["StatusMessage"].IsNull())
    {
        if (!value["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(value["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfigId") && !value["ResourceConfigId"].IsNull())
    {
        if (!value["ResourceConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.ResourceConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfigId = string(value["ResourceConfigId"].GetString());
        m_resourceConfigIdHasBeenSet = true;
    }

    if (value.HasMember("RuntimeEnv") && !value["RuntimeEnv"].IsNull())
    {
        if (!value["RuntimeEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.RuntimeEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeEnv = string(value["RuntimeEnv"].GetString());
        m_runtimeEnvHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("HistoryUrl") && !value["HistoryUrl"].IsNull())
    {
        if (!value["HistoryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.HistoryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_historyUrl = string(value["HistoryUrl"].GetString());
        m_historyUrlHasBeenSet = true;
    }

    if (value.HasMember("ImagePullPolicy") && !value["ImagePullPolicy"].IsNull())
    {
        if (!value["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(value["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
    }

    if (value.HasMember("ImagePullType") && !value["ImagePullType"].IsNull())
    {
        if (!value["ImagePullType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.ImagePullType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullType = string(value["ImagePullType"].GetString());
        m_imagePullTypeHasBeenSet = true;
    }

    if (value.HasMember("AdvancedOptions") && !value["AdvancedOptions"].IsNull())
    {
        if (!value["AdvancedOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.AdvancedOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedOptions = string(value["AdvancedOptions"].GetString());
        m_advancedOptionsHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StopTime") && !value["StopTime"].IsNull())
    {
        if (!value["StopTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.StopTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = value["StopTime"].GetUint64();
        m_stopTimeHasBeenSet = true;
    }

    if (value.HasMember("DeleteTime") && !value["DeleteTime"].IsNull())
    {
        if (!value["DeleteTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.DeleteTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = value["DeleteTime"].GetUint64();
        m_deleteTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabResponse.Tags` is not array type"));

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

    if (value.HasMember("PersistentWorkDir") && !value["PersistentWorkDir"].IsNull())
    {
        if (!value["PersistentWorkDir"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.PersistentWorkDir` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_persistentWorkDir.Deserialize(value["PersistentWorkDir"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_persistentWorkDirHasBeenSet = true;
    }

    if (value.HasMember("EnableToken") && !value["EnableToken"].IsNull())
    {
        if (!value["EnableToken"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.EnableToken` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableToken = value["EnableToken"].GetBool();
        m_enableTokenHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabResponse.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_exampleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExampleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exampleId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeArchiveUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeArchiveUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeArchiveUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_servicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_services.begin(); itr != m_services.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labImage.c_str(), allocator).Move(), allocator);
    }

    if (m_labImagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labImagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_labImagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabImagePullType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labImagePullType.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfigId.c_str(), allocator).Move(), allocator);
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

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_historyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_historyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullType.c_str(), allocator).Move(), allocator);
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_stopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopTime, allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteTime, allocator);
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

    if (m_persistentWorkDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersistentWorkDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_persistentWorkDir.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableToken, allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

}


string LabResponse::GetExampleId() const
{
    return m_exampleId;
}

void LabResponse::SetExampleId(const string& _exampleId)
{
    m_exampleId = _exampleId;
    m_exampleIdHasBeenSet = true;
}

bool LabResponse::ExampleIdHasBeenSet() const
{
    return m_exampleIdHasBeenSet;
}

string LabResponse::GetCodeArchiveUrl() const
{
    return m_codeArchiveUrl;
}

void LabResponse::SetCodeArchiveUrl(const string& _codeArchiveUrl)
{
    m_codeArchiveUrl = _codeArchiveUrl;
    m_codeArchiveUrlHasBeenSet = true;
}

bool LabResponse::CodeArchiveUrlHasBeenSet() const
{
    return m_codeArchiveUrlHasBeenSet;
}

vector<TypeKVPair> LabResponse::GetServices() const
{
    return m_services;
}

void LabResponse::SetServices(const vector<TypeKVPair>& _services)
{
    m_services = _services;
    m_servicesHasBeenSet = true;
}

bool LabResponse::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}

string LabResponse::GetLabImage() const
{
    return m_labImage;
}

void LabResponse::SetLabImage(const string& _labImage)
{
    m_labImage = _labImage;
    m_labImageHasBeenSet = true;
}

bool LabResponse::LabImageHasBeenSet() const
{
    return m_labImageHasBeenSet;
}

string LabResponse::GetLabImagePullPolicy() const
{
    return m_labImagePullPolicy;
}

void LabResponse::SetLabImagePullPolicy(const string& _labImagePullPolicy)
{
    m_labImagePullPolicy = _labImagePullPolicy;
    m_labImagePullPolicyHasBeenSet = true;
}

bool LabResponse::LabImagePullPolicyHasBeenSet() const
{
    return m_labImagePullPolicyHasBeenSet;
}

string LabResponse::GetLabImagePullType() const
{
    return m_labImagePullType;
}

void LabResponse::SetLabImagePullType(const string& _labImagePullType)
{
    m_labImagePullType = _labImagePullType;
    m_labImagePullTypeHasBeenSet = true;
}

bool LabResponse::LabImagePullTypeHasBeenSet() const
{
    return m_labImagePullTypeHasBeenSet;
}

string LabResponse::GetId() const
{
    return m_id;
}

void LabResponse::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LabResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LabResponse::GetType() const
{
    return m_type;
}

void LabResponse::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LabResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string LabResponse::GetName() const
{
    return m_name;
}

void LabResponse::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LabResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LabResponse::GetDescription() const
{
    return m_description;
}

void LabResponse::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LabResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LabResponse::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void LabResponse::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool LabResponse::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string LabResponse::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

void LabResponse::SetResourcePartitionName(const string& _resourcePartitionName)
{
    m_resourcePartitionName = _resourcePartitionName;
    m_resourcePartitionNameHasBeenSet = true;
}

bool LabResponse::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string LabResponse::GetQueue() const
{
    return m_queue;
}

void LabResponse::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool LabResponse::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

int64_t LabResponse::GetAppId() const
{
    return m_appId;
}

void LabResponse::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool LabResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string LabResponse::GetUin() const
{
    return m_uin;
}

void LabResponse::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool LabResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string LabResponse::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void LabResponse::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool LabResponse::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string LabResponse::GetSubAccountName() const
{
    return m_subAccountName;
}

void LabResponse::SetSubAccountName(const string& _subAccountName)
{
    m_subAccountName = _subAccountName;
    m_subAccountNameHasBeenSet = true;
}

bool LabResponse::SubAccountNameHasBeenSet() const
{
    return m_subAccountNameHasBeenSet;
}

string LabResponse::GetStatus() const
{
    return m_status;
}

void LabResponse::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LabResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LabResponse::GetStatusMessage() const
{
    return m_statusMessage;
}

void LabResponse::SetStatusMessage(const string& _statusMessage)
{
    m_statusMessage = _statusMessage;
    m_statusMessageHasBeenSet = true;
}

bool LabResponse::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

uint64_t LabResponse::GetCreateTime() const
{
    return m_createTime;
}

void LabResponse::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LabResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LabResponse::GetGroupName() const
{
    return m_groupName;
}

void LabResponse::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool LabResponse::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string LabResponse::GetGroupId() const
{
    return m_groupId;
}

void LabResponse::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool LabResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string LabResponse::GetResourceConfig() const
{
    return m_resourceConfig;
}

void LabResponse::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool LabResponse::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string LabResponse::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void LabResponse::SetResourceConfigId(const string& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool LabResponse::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string LabResponse::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void LabResponse::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool LabResponse::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string LabResponse::GetImage() const
{
    return m_image;
}

void LabResponse::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool LabResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string LabResponse::GetCatalog() const
{
    return m_catalog;
}

void LabResponse::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool LabResponse::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string LabResponse::GetHistoryUrl() const
{
    return m_historyUrl;
}

void LabResponse::SetHistoryUrl(const string& _historyUrl)
{
    m_historyUrl = _historyUrl;
    m_historyUrlHasBeenSet = true;
}

bool LabResponse::HistoryUrlHasBeenSet() const
{
    return m_historyUrlHasBeenSet;
}

string LabResponse::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void LabResponse::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool LabResponse::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string LabResponse::GetImagePullType() const
{
    return m_imagePullType;
}

void LabResponse::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool LabResponse::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string LabResponse::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void LabResponse::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool LabResponse::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

int64_t LabResponse::GetPriority() const
{
    return m_priority;
}

void LabResponse::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool LabResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

uint64_t LabResponse::GetStartTime() const
{
    return m_startTime;
}

void LabResponse::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LabResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t LabResponse::GetStopTime() const
{
    return m_stopTime;
}

void LabResponse::SetStopTime(const uint64_t& _stopTime)
{
    m_stopTime = _stopTime;
    m_stopTimeHasBeenSet = true;
}

bool LabResponse::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

uint64_t LabResponse::GetDeleteTime() const
{
    return m_deleteTime;
}

void LabResponse::SetDeleteTime(const uint64_t& _deleteTime)
{
    m_deleteTime = _deleteTime;
    m_deleteTimeHasBeenSet = true;
}

bool LabResponse::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

vector<Tag> LabResponse::GetTags() const
{
    return m_tags;
}

void LabResponse::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LabResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

PersistentWorkDir LabResponse::GetPersistentWorkDir() const
{
    return m_persistentWorkDir;
}

void LabResponse::SetPersistentWorkDir(const PersistentWorkDir& _persistentWorkDir)
{
    m_persistentWorkDir = _persistentWorkDir;
    m_persistentWorkDirHasBeenSet = true;
}

bool LabResponse::PersistentWorkDirHasBeenSet() const
{
    return m_persistentWorkDirHasBeenSet;
}

bool LabResponse::GetEnableToken() const
{
    return m_enableToken;
}

void LabResponse::SetEnableToken(const bool& _enableToken)
{
    m_enableToken = _enableToken;
    m_enableTokenHasBeenSet = true;
}

bool LabResponse::EnableTokenHasBeenSet() const
{
    return m_enableTokenHasBeenSet;
}

string LabResponse::GetToken() const
{
    return m_token;
}

void LabResponse::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool LabResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

