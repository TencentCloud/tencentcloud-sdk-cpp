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

#include <tencentcloud/dlc/v20210125/model/GetLabDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GetLabDetailResponse::GetLabDetailResponse() :
    m_exampleIdHasBeenSet(false),
    m_codeArchiveUrlHasBeenSet(false),
    m_servicesHasBeenSet(false),
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
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_resourceConfigIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_historyUrlHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_persistentWorkDirHasBeenSet(false),
    m_enableTokenHasBeenSet(false),
    m_labImagePullTypeHasBeenSet(false),
    m_subAccountNameHasBeenSet(false),
    m_imagePullTypeHasBeenSet(false)
{
}

CoreInternalOutcome GetLabDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ExampleId") && !rsp["ExampleId"].IsNull())
    {
        if (!rsp["ExampleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exampleId = string(rsp["ExampleId"].GetString());
        m_exampleIdHasBeenSet = true;
    }

    if (rsp.HasMember("CodeArchiveUrl") && !rsp["CodeArchiveUrl"].IsNull())
    {
        if (!rsp["CodeArchiveUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeArchiveUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeArchiveUrl = string(rsp["CodeArchiveUrl"].GetString());
        m_codeArchiveUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Services") && !rsp["Services"].IsNull())
    {
        if (!rsp["Services"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Services` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Services"];
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

    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StatusMessage") && !rsp["StatusMessage"].IsNull())
    {
        if (!rsp["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(rsp["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
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

    if (rsp.HasMember("ResourceConfigId") && !rsp["ResourceConfigId"].IsNull())
    {
        if (!rsp["ResourceConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfigId = string(rsp["ResourceConfigId"].GetString());
        m_resourceConfigIdHasBeenSet = true;
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

    if (rsp.HasMember("Catalog") && !rsp["Catalog"].IsNull())
    {
        if (!rsp["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(rsp["Catalog"].GetString());
        m_catalogHasBeenSet = true;
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

    if (rsp.HasMember("ImagePullPolicy") && !rsp["ImagePullPolicy"].IsNull())
    {
        if (!rsp["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(rsp["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
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

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("StopTime") && !rsp["StopTime"].IsNull())
    {
        if (!rsp["StopTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StopTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = rsp["StopTime"].GetUint64();
        m_stopTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteTime") && !rsp["DeleteTime"].IsNull())
    {
        if (!rsp["DeleteTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = rsp["DeleteTime"].GetUint64();
        m_deleteTimeHasBeenSet = true;
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

    if (rsp.HasMember("PersistentWorkDir") && !rsp["PersistentWorkDir"].IsNull())
    {
        if (!rsp["PersistentWorkDir"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentWorkDir` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_persistentWorkDir.Deserialize(rsp["PersistentWorkDir"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_persistentWorkDirHasBeenSet = true;
    }

    if (rsp.HasMember("EnableToken") && !rsp["EnableToken"].IsNull())
    {
        if (!rsp["EnableToken"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableToken` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableToken = rsp["EnableToken"].GetBool();
        m_enableTokenHasBeenSet = true;
    }

    if (rsp.HasMember("LabImagePullType") && !rsp["LabImagePullType"].IsNull())
    {
        if (!rsp["LabImagePullType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabImagePullType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labImagePullType = string(rsp["LabImagePullType"].GetString());
        m_labImagePullTypeHasBeenSet = true;
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

    if (rsp.HasMember("ImagePullType") && !rsp["ImagePullType"].IsNull())
    {
        if (!rsp["ImagePullType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagePullType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullType = string(rsp["ImagePullType"].GetString());
        m_imagePullTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetLabDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_labImagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabImagePullType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labImagePullType.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imagePullType.c_str(), allocator).Move(), allocator);
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


string GetLabDetailResponse::GetExampleId() const
{
    return m_exampleId;
}

bool GetLabDetailResponse::ExampleIdHasBeenSet() const
{
    return m_exampleIdHasBeenSet;
}

string GetLabDetailResponse::GetCodeArchiveUrl() const
{
    return m_codeArchiveUrl;
}

bool GetLabDetailResponse::CodeArchiveUrlHasBeenSet() const
{
    return m_codeArchiveUrlHasBeenSet;
}

vector<TypeKVPair> GetLabDetailResponse::GetServices() const
{
    return m_services;
}

bool GetLabDetailResponse::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}

string GetLabDetailResponse::GetId() const
{
    return m_id;
}

bool GetLabDetailResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string GetLabDetailResponse::GetType() const
{
    return m_type;
}

bool GetLabDetailResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string GetLabDetailResponse::GetName() const
{
    return m_name;
}

bool GetLabDetailResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetLabDetailResponse::GetDescription() const
{
    return m_description;
}

bool GetLabDetailResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GetLabDetailResponse::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

bool GetLabDetailResponse::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string GetLabDetailResponse::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

bool GetLabDetailResponse::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string GetLabDetailResponse::GetQueue() const
{
    return m_queue;
}

bool GetLabDetailResponse::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

int64_t GetLabDetailResponse::GetAppId() const
{
    return m_appId;
}

bool GetLabDetailResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string GetLabDetailResponse::GetUin() const
{
    return m_uin;
}

bool GetLabDetailResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string GetLabDetailResponse::GetSubAccountUin() const
{
    return m_subAccountUin;
}

bool GetLabDetailResponse::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string GetLabDetailResponse::GetStatus() const
{
    return m_status;
}

bool GetLabDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GetLabDetailResponse::GetStatusMessage() const
{
    return m_statusMessage;
}

bool GetLabDetailResponse::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

string GetLabDetailResponse::GetResourceConfig() const
{
    return m_resourceConfig;
}

bool GetLabDetailResponse::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string GetLabDetailResponse::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

bool GetLabDetailResponse::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string GetLabDetailResponse::GetImage() const
{
    return m_image;
}

bool GetLabDetailResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string GetLabDetailResponse::GetCatalog() const
{
    return m_catalog;
}

bool GetLabDetailResponse::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string GetLabDetailResponse::GetHistoryUrl() const
{
    return m_historyUrl;
}

bool GetLabDetailResponse::HistoryUrlHasBeenSet() const
{
    return m_historyUrlHasBeenSet;
}

string GetLabDetailResponse::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

bool GetLabDetailResponse::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string GetLabDetailResponse::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

bool GetLabDetailResponse::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

int64_t GetLabDetailResponse::GetPriority() const
{
    return m_priority;
}

bool GetLabDetailResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

uint64_t GetLabDetailResponse::GetStartTime() const
{
    return m_startTime;
}

bool GetLabDetailResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t GetLabDetailResponse::GetStopTime() const
{
    return m_stopTime;
}

bool GetLabDetailResponse::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

uint64_t GetLabDetailResponse::GetDeleteTime() const
{
    return m_deleteTime;
}

bool GetLabDetailResponse::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

vector<Tag> GetLabDetailResponse::GetTags() const
{
    return m_tags;
}

bool GetLabDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

PersistentWorkDir GetLabDetailResponse::GetPersistentWorkDir() const
{
    return m_persistentWorkDir;
}

bool GetLabDetailResponse::PersistentWorkDirHasBeenSet() const
{
    return m_persistentWorkDirHasBeenSet;
}

bool GetLabDetailResponse::GetEnableToken() const
{
    return m_enableToken;
}

bool GetLabDetailResponse::EnableTokenHasBeenSet() const
{
    return m_enableTokenHasBeenSet;
}

string GetLabDetailResponse::GetLabImagePullType() const
{
    return m_labImagePullType;
}

bool GetLabDetailResponse::LabImagePullTypeHasBeenSet() const
{
    return m_labImagePullTypeHasBeenSet;
}

string GetLabDetailResponse::GetSubAccountName() const
{
    return m_subAccountName;
}

bool GetLabDetailResponse::SubAccountNameHasBeenSet() const
{
    return m_subAccountNameHasBeenSet;
}

string GetLabDetailResponse::GetImagePullType() const
{
    return m_imagePullType;
}

bool GetLabDetailResponse::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}


