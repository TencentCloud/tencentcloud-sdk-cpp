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

#include <tencentcloud/dlc/v20210125/model/MlFlowServerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MlFlowServerInfo::MlFlowServerInfo() :
    m_serverIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_resourcePartitionNameHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_trackingUriHasBeenSet(false),
    m_uiUrlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_storageConfigHasBeenSet(false),
    m_storageModeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome MlFlowServerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServerId") && !value["ServerId"].IsNull())
    {
        if (!value["ServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.ServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverId = string(value["ServerId"].GetString());
        m_serverIdHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionId") && !value["ResourcePartitionId"].IsNull())
    {
        if (!value["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(value["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionName") && !value["ResourcePartitionName"].IsNull())
    {
        if (!value["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(value["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("TrackingUri") && !value["TrackingUri"].IsNull())
    {
        if (!value["TrackingUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.TrackingUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trackingUri = string(value["TrackingUri"].GetString());
        m_trackingUriHasBeenSet = true;
    }

    if (value.HasMember("UiUrl") && !value["UiUrl"].IsNull())
    {
        if (!value["UiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.UiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uiUrl = string(value["UiUrl"].GetString());
        m_uiUrlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("StorageConfig") && !value["StorageConfig"].IsNull())
    {
        if (!value["StorageConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.StorageConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageConfig = string(value["StorageConfig"].GetString());
        m_storageConfigHasBeenSet = true;
    }

    if (value.HasMember("StorageMode") && !value["StorageMode"].IsNull())
    {
        if (!value["StorageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.StorageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageMode = string(value["StorageMode"].GetString());
        m_storageModeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MlFlowServerInfo.Tags` is not array type"));

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

void MlFlowServerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
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

    if (m_trackingUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackingUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trackingUri.c_str(), allocator).Move(), allocator);
    }

    if (m_uiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_storageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_storageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageMode.c_str(), allocator).Move(), allocator);
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

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
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


string MlFlowServerInfo::GetServerId() const
{
    return m_serverId;
}

void MlFlowServerInfo::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool MlFlowServerInfo::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string MlFlowServerInfo::GetServerName() const
{
    return m_serverName;
}

void MlFlowServerInfo::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool MlFlowServerInfo::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string MlFlowServerInfo::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void MlFlowServerInfo::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool MlFlowServerInfo::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string MlFlowServerInfo::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

void MlFlowServerInfo::SetResourcePartitionName(const string& _resourcePartitionName)
{
    m_resourcePartitionName = _resourcePartitionName;
    m_resourcePartitionNameHasBeenSet = true;
}

bool MlFlowServerInfo::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string MlFlowServerInfo::GetQueue() const
{
    return m_queue;
}

void MlFlowServerInfo::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool MlFlowServerInfo::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string MlFlowServerInfo::GetTrackingUri() const
{
    return m_trackingUri;
}

void MlFlowServerInfo::SetTrackingUri(const string& _trackingUri)
{
    m_trackingUri = _trackingUri;
    m_trackingUriHasBeenSet = true;
}

bool MlFlowServerInfo::TrackingUriHasBeenSet() const
{
    return m_trackingUriHasBeenSet;
}

string MlFlowServerInfo::GetUiUrl() const
{
    return m_uiUrl;
}

void MlFlowServerInfo::SetUiUrl(const string& _uiUrl)
{
    m_uiUrl = _uiUrl;
    m_uiUrlHasBeenSet = true;
}

bool MlFlowServerInfo::UiUrlHasBeenSet() const
{
    return m_uiUrlHasBeenSet;
}

string MlFlowServerInfo::GetStatus() const
{
    return m_status;
}

void MlFlowServerInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MlFlowServerInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MlFlowServerInfo::GetErrorMessage() const
{
    return m_errorMessage;
}

void MlFlowServerInfo::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool MlFlowServerInfo::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string MlFlowServerInfo::GetImage() const
{
    return m_image;
}

void MlFlowServerInfo::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool MlFlowServerInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string MlFlowServerInfo::GetStorageConfig() const
{
    return m_storageConfig;
}

void MlFlowServerInfo::SetStorageConfig(const string& _storageConfig)
{
    m_storageConfig = _storageConfig;
    m_storageConfigHasBeenSet = true;
}

bool MlFlowServerInfo::StorageConfigHasBeenSet() const
{
    return m_storageConfigHasBeenSet;
}

string MlFlowServerInfo::GetStorageMode() const
{
    return m_storageMode;
}

void MlFlowServerInfo::SetStorageMode(const string& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool MlFlowServerInfo::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

int64_t MlFlowServerInfo::GetAppId() const
{
    return m_appId;
}

void MlFlowServerInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool MlFlowServerInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string MlFlowServerInfo::GetUin() const
{
    return m_uin;
}

void MlFlowServerInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool MlFlowServerInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t MlFlowServerInfo::GetCreateTime() const
{
    return m_createTime;
}

void MlFlowServerInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MlFlowServerInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t MlFlowServerInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void MlFlowServerInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MlFlowServerInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string MlFlowServerInfo::GetResourceConfig() const
{
    return m_resourceConfig;
}

void MlFlowServerInfo::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool MlFlowServerInfo::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

vector<Tag> MlFlowServerInfo::GetTags() const
{
    return m_tags;
}

void MlFlowServerInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MlFlowServerInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

