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

#include <tencentcloud/dlc/v20210125/model/RayClusterEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RayClusterEntity::RayClusterEntity() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
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
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_resourceConfigIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_historyUrlHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_imagePullTypeHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome RayClusterEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionId") && !value["ResourcePartitionId"].IsNull())
    {
        if (!value["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(value["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionName") && !value["ResourcePartitionName"].IsNull())
    {
        if (!value["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(value["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountName") && !value["SubAccountName"].IsNull())
    {
        if (!value["SubAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.SubAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountName = string(value["SubAccountName"].GetString());
        m_subAccountNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusMessage") && !value["StatusMessage"].IsNull())
    {
        if (!value["StatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.StatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMessage = string(value["StatusMessage"].GetString());
        m_statusMessageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfigId") && !value["ResourceConfigId"].IsNull())
    {
        if (!value["ResourceConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.ResourceConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfigId = string(value["ResourceConfigId"].GetString());
        m_resourceConfigIdHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("HistoryUrl") && !value["HistoryUrl"].IsNull())
    {
        if (!value["HistoryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.HistoryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_historyUrl = string(value["HistoryUrl"].GetString());
        m_historyUrlHasBeenSet = true;
    }

    if (value.HasMember("ImagePullPolicy") && !value["ImagePullPolicy"].IsNull())
    {
        if (!value["ImagePullPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.ImagePullPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullPolicy = string(value["ImagePullPolicy"].GetString());
        m_imagePullPolicyHasBeenSet = true;
    }

    if (value.HasMember("ImagePullType") && !value["ImagePullType"].IsNull())
    {
        if (!value["ImagePullType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.ImagePullType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imagePullType = string(value["ImagePullType"].GetString());
        m_imagePullTypeHasBeenSet = true;
    }

    if (value.HasMember("AdvancedOptions") && !value["AdvancedOptions"].IsNull())
    {
        if (!value["AdvancedOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.AdvancedOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedOptions = string(value["AdvancedOptions"].GetString());
        m_advancedOptionsHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StopTime") && !value["StopTime"].IsNull())
    {
        if (!value["StopTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.StopTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = value["StopTime"].GetUint64();
        m_stopTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RayClusterEntity.Tags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void RayClusterEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
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

}


string RayClusterEntity::GetId() const
{
    return m_id;
}

void RayClusterEntity::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RayClusterEntity::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RayClusterEntity::GetType() const
{
    return m_type;
}

void RayClusterEntity::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RayClusterEntity::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RayClusterEntity::GetName() const
{
    return m_name;
}

void RayClusterEntity::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RayClusterEntity::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RayClusterEntity::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void RayClusterEntity::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool RayClusterEntity::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string RayClusterEntity::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

void RayClusterEntity::SetResourcePartitionName(const string& _resourcePartitionName)
{
    m_resourcePartitionName = _resourcePartitionName;
    m_resourcePartitionNameHasBeenSet = true;
}

bool RayClusterEntity::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string RayClusterEntity::GetQueue() const
{
    return m_queue;
}

void RayClusterEntity::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool RayClusterEntity::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

int64_t RayClusterEntity::GetAppId() const
{
    return m_appId;
}

void RayClusterEntity::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool RayClusterEntity::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string RayClusterEntity::GetUin() const
{
    return m_uin;
}

void RayClusterEntity::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool RayClusterEntity::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string RayClusterEntity::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void RayClusterEntity::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool RayClusterEntity::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string RayClusterEntity::GetSubAccountName() const
{
    return m_subAccountName;
}

void RayClusterEntity::SetSubAccountName(const string& _subAccountName)
{
    m_subAccountName = _subAccountName;
    m_subAccountNameHasBeenSet = true;
}

bool RayClusterEntity::SubAccountNameHasBeenSet() const
{
    return m_subAccountNameHasBeenSet;
}

string RayClusterEntity::GetStatus() const
{
    return m_status;
}

void RayClusterEntity::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RayClusterEntity::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RayClusterEntity::GetStatusMessage() const
{
    return m_statusMessage;
}

void RayClusterEntity::SetStatusMessage(const string& _statusMessage)
{
    m_statusMessage = _statusMessage;
    m_statusMessageHasBeenSet = true;
}

bool RayClusterEntity::StatusMessageHasBeenSet() const
{
    return m_statusMessageHasBeenSet;
}

uint64_t RayClusterEntity::GetCreateTime() const
{
    return m_createTime;
}

void RayClusterEntity::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RayClusterEntity::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RayClusterEntity::GetGroupId() const
{
    return m_groupId;
}

void RayClusterEntity::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RayClusterEntity::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string RayClusterEntity::GetGroupName() const
{
    return m_groupName;
}

void RayClusterEntity::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool RayClusterEntity::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string RayClusterEntity::GetResourceConfig() const
{
    return m_resourceConfig;
}

void RayClusterEntity::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool RayClusterEntity::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string RayClusterEntity::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void RayClusterEntity::SetResourceConfigId(const string& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool RayClusterEntity::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string RayClusterEntity::GetImage() const
{
    return m_image;
}

void RayClusterEntity::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool RayClusterEntity::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string RayClusterEntity::GetCatalog() const
{
    return m_catalog;
}

void RayClusterEntity::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool RayClusterEntity::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string RayClusterEntity::GetHistoryUrl() const
{
    return m_historyUrl;
}

void RayClusterEntity::SetHistoryUrl(const string& _historyUrl)
{
    m_historyUrl = _historyUrl;
    m_historyUrlHasBeenSet = true;
}

bool RayClusterEntity::HistoryUrlHasBeenSet() const
{
    return m_historyUrlHasBeenSet;
}

string RayClusterEntity::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void RayClusterEntity::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool RayClusterEntity::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string RayClusterEntity::GetImagePullType() const
{
    return m_imagePullType;
}

void RayClusterEntity::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool RayClusterEntity::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string RayClusterEntity::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void RayClusterEntity::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool RayClusterEntity::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

int64_t RayClusterEntity::GetPriority() const
{
    return m_priority;
}

void RayClusterEntity::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool RayClusterEntity::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

uint64_t RayClusterEntity::GetStartTime() const
{
    return m_startTime;
}

void RayClusterEntity::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RayClusterEntity::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t RayClusterEntity::GetStopTime() const
{
    return m_stopTime;
}

void RayClusterEntity::SetStopTime(const uint64_t& _stopTime)
{
    m_stopTime = _stopTime;
    m_stopTimeHasBeenSet = true;
}

bool RayClusterEntity::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

vector<Tag> RayClusterEntity::GetTags() const
{
    return m_tags;
}

void RayClusterEntity::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RayClusterEntity::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

