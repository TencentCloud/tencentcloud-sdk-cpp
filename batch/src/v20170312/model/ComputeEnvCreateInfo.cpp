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

#include <tencentcloud/batch/v20170312/model/ComputeEnvCreateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

ComputeEnvCreateInfo::ComputeEnvCreateInfo() :
    m_envIdHasBeenSet(false),
    m_envNameHasBeenSet(false),
    m_envDescriptionHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_envDataHasBeenSet(false),
    m_mountDataDisksHasBeenSet(false),
    m_inputMappingsHasBeenSet(false),
    m_authenticationsHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_desiredComputeNodeCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome ComputeEnvCreateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("EnvName") && !value["EnvName"].IsNull())
    {
        if (!value["EnvName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(value["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (value.HasMember("EnvDescription") && !value["EnvDescription"].IsNull())
    {
        if (!value["EnvDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.EnvDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envDescription = string(value["EnvDescription"].GetString());
        m_envDescriptionHasBeenSet = true;
    }

    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (value.HasMember("EnvData") && !value["EnvData"].IsNull())
    {
        if (!value["EnvData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.EnvData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envData.Deserialize(value["EnvData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envDataHasBeenSet = true;
    }

    if (value.HasMember("MountDataDisks") && !value["MountDataDisks"].IsNull())
    {
        if (!value["MountDataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.MountDataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["MountDataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MountDataDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mountDataDisks.push_back(item);
        }
        m_mountDataDisksHasBeenSet = true;
    }

    if (value.HasMember("InputMappings") && !value["InputMappings"].IsNull())
    {
        if (!value["InputMappings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.InputMappings` is not array type"));

        const rapidjson::Value &tmpValue = value["InputMappings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputMappings.push_back(item);
        }
        m_inputMappingsHasBeenSet = true;
    }

    if (value.HasMember("Authentications") && !value["Authentications"].IsNull())
    {
        if (!value["Authentications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.Authentications` is not array type"));

        const rapidjson::Value &tmpValue = value["Authentications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Authentication item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authentications.push_back(item);
        }
        m_authenticationsHasBeenSet = true;
    }

    if (value.HasMember("Notifications") && !value["Notifications"].IsNull())
    {
        if (!value["Notifications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.Notifications` is not array type"));

        const rapidjson::Value &tmpValue = value["Notifications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Notification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notifications.push_back(item);
        }
        m_notificationsHasBeenSet = true;
    }

    if (value.HasMember("DesiredComputeNodeCount") && !value["DesiredComputeNodeCount"].IsNull())
    {
        if (!value["DesiredComputeNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.DesiredComputeNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredComputeNodeCount = value["DesiredComputeNodeCount"].GetUint64();
        m_desiredComputeNodeCountHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeEnvCreateInfo.Tags` is not array type"));

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

void ComputeEnvCreateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_envNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_envDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_envDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mountDataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountDataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mountDataDisks.begin(); itr != m_mountDataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inputMappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputMappings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputMappings.begin(); itr != m_inputMappings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authenticationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authentications.begin(); itr != m_authentications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_notificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notifications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notifications.begin(); itr != m_notifications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_desiredComputeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredComputeNodeCount, allocator);
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


string ComputeEnvCreateInfo::GetEnvId() const
{
    return m_envId;
}

void ComputeEnvCreateInfo::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ComputeEnvCreateInfo::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ComputeEnvCreateInfo::GetEnvName() const
{
    return m_envName;
}

void ComputeEnvCreateInfo::SetEnvName(const string& _envName)
{
    m_envName = _envName;
    m_envNameHasBeenSet = true;
}

bool ComputeEnvCreateInfo::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

string ComputeEnvCreateInfo::GetEnvDescription() const
{
    return m_envDescription;
}

void ComputeEnvCreateInfo::SetEnvDescription(const string& _envDescription)
{
    m_envDescription = _envDescription;
    m_envDescriptionHasBeenSet = true;
}

bool ComputeEnvCreateInfo::EnvDescriptionHasBeenSet() const
{
    return m_envDescriptionHasBeenSet;
}

string ComputeEnvCreateInfo::GetEnvType() const
{
    return m_envType;
}

void ComputeEnvCreateInfo::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool ComputeEnvCreateInfo::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

EnvData ComputeEnvCreateInfo::GetEnvData() const
{
    return m_envData;
}

void ComputeEnvCreateInfo::SetEnvData(const EnvData& _envData)
{
    m_envData = _envData;
    m_envDataHasBeenSet = true;
}

bool ComputeEnvCreateInfo::EnvDataHasBeenSet() const
{
    return m_envDataHasBeenSet;
}

vector<MountDataDisk> ComputeEnvCreateInfo::GetMountDataDisks() const
{
    return m_mountDataDisks;
}

void ComputeEnvCreateInfo::SetMountDataDisks(const vector<MountDataDisk>& _mountDataDisks)
{
    m_mountDataDisks = _mountDataDisks;
    m_mountDataDisksHasBeenSet = true;
}

bool ComputeEnvCreateInfo::MountDataDisksHasBeenSet() const
{
    return m_mountDataDisksHasBeenSet;
}

vector<InputMapping> ComputeEnvCreateInfo::GetInputMappings() const
{
    return m_inputMappings;
}

void ComputeEnvCreateInfo::SetInputMappings(const vector<InputMapping>& _inputMappings)
{
    m_inputMappings = _inputMappings;
    m_inputMappingsHasBeenSet = true;
}

bool ComputeEnvCreateInfo::InputMappingsHasBeenSet() const
{
    return m_inputMappingsHasBeenSet;
}

vector<Authentication> ComputeEnvCreateInfo::GetAuthentications() const
{
    return m_authentications;
}

void ComputeEnvCreateInfo::SetAuthentications(const vector<Authentication>& _authentications)
{
    m_authentications = _authentications;
    m_authenticationsHasBeenSet = true;
}

bool ComputeEnvCreateInfo::AuthenticationsHasBeenSet() const
{
    return m_authenticationsHasBeenSet;
}

vector<Notification> ComputeEnvCreateInfo::GetNotifications() const
{
    return m_notifications;
}

void ComputeEnvCreateInfo::SetNotifications(const vector<Notification>& _notifications)
{
    m_notifications = _notifications;
    m_notificationsHasBeenSet = true;
}

bool ComputeEnvCreateInfo::NotificationsHasBeenSet() const
{
    return m_notificationsHasBeenSet;
}

uint64_t ComputeEnvCreateInfo::GetDesiredComputeNodeCount() const
{
    return m_desiredComputeNodeCount;
}

void ComputeEnvCreateInfo::SetDesiredComputeNodeCount(const uint64_t& _desiredComputeNodeCount)
{
    m_desiredComputeNodeCount = _desiredComputeNodeCount;
    m_desiredComputeNodeCountHasBeenSet = true;
}

bool ComputeEnvCreateInfo::DesiredComputeNodeCountHasBeenSet() const
{
    return m_desiredComputeNodeCountHasBeenSet;
}

vector<Tag> ComputeEnvCreateInfo::GetTags() const
{
    return m_tags;
}

void ComputeEnvCreateInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ComputeEnvCreateInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

