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

#include <tencentcloud/trtc/v20190722/model/VoiceConversationVisionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VoiceConversationVisionConfig::VoiceConversationVisionConfig() :
    m_enableHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_cloudStorageHasBeenSet(false)
{
}

CoreInternalOutcome VoiceConversationVisionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationVisionConfig.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationVisionConfig.StorageType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetUint64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("CloudStorage") && !value["CloudStorage"].IsNull())
    {
        if (!value["CloudStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationVisionConfig.CloudStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cloudStorage.Deserialize(value["CloudStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cloudStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceConversationVisionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageType, allocator);
    }

    if (m_cloudStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cloudStorage.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool VoiceConversationVisionConfig::GetEnable() const
{
    return m_enable;
}

void VoiceConversationVisionConfig::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool VoiceConversationVisionConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t VoiceConversationVisionConfig::GetStorageType() const
{
    return m_storageType;
}

void VoiceConversationVisionConfig::SetStorageType(const uint64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool VoiceConversationVisionConfig::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

CloudStorage VoiceConversationVisionConfig::GetCloudStorage() const
{
    return m_cloudStorage;
}

void VoiceConversationVisionConfig::SetCloudStorage(const CloudStorage& _cloudStorage)
{
    m_cloudStorage = _cloudStorage;
    m_cloudStorageHasBeenSet = true;
}

bool VoiceConversationVisionConfig::CloudStorageHasBeenSet() const
{
    return m_cloudStorageHasBeenSet;
}

