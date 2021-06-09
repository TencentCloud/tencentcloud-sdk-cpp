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

#include <tencentcloud/batch/v20170312/model/NamedCpmComputeEnv.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

NamedCpmComputeEnv::NamedCpmComputeEnv() :
    m_envNameHasBeenSet(false),
    m_envDataHasBeenSet(false),
    m_desiredComputeNodeCountHasBeenSet(false),
    m_envDescriptionHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_authenticationsHasBeenSet(false),
    m_inputMappingsHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_actionIfComputeNodeInactiveHasBeenSet(false),
    m_resourceMaxRetryCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome NamedCpmComputeEnv::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvName") && !value["EnvName"].IsNull())
    {
        if (!value["EnvName"].IsString())
        {
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(value["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (value.HasMember("EnvData") && !value["EnvData"].IsNull())
    {
        if (!value["EnvData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.EnvData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envData.Deserialize(value["EnvData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envDataHasBeenSet = true;
    }

    if (value.HasMember("DesiredComputeNodeCount") && !value["DesiredComputeNodeCount"].IsNull())
    {
        if (!value["DesiredComputeNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.DesiredComputeNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredComputeNodeCount = value["DesiredComputeNodeCount"].GetInt64();
        m_desiredComputeNodeCountHasBeenSet = true;
    }

    if (value.HasMember("EnvDescription") && !value["EnvDescription"].IsNull())
    {
        if (!value["EnvDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.EnvDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envDescription = string(value["EnvDescription"].GetString());
        m_envDescriptionHasBeenSet = true;
    }

    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (value.HasMember("Authentications") && !value["Authentications"].IsNull())
    {
        if (!value["Authentications"].IsArray())
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.Authentications` is not array type"));

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

    if (value.HasMember("InputMappings") && !value["InputMappings"].IsNull())
    {
        if (!value["InputMappings"].IsArray())
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.InputMappings` is not array type"));

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

    if (value.HasMember("Notifications") && !value["Notifications"].IsNull())
    {
        if (!value["Notifications"].IsObject())
        {
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.Notifications` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notifications.Deserialize(value["Notifications"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notificationsHasBeenSet = true;
    }

    if (value.HasMember("ActionIfComputeNodeInactive") && !value["ActionIfComputeNodeInactive"].IsNull())
    {
        if (!value["ActionIfComputeNodeInactive"].IsString())
        {
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.ActionIfComputeNodeInactive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionIfComputeNodeInactive = string(value["ActionIfComputeNodeInactive"].GetString());
        m_actionIfComputeNodeInactiveHasBeenSet = true;
    }

    if (value.HasMember("ResourceMaxRetryCount") && !value["ResourceMaxRetryCount"].IsNull())
    {
        if (!value["ResourceMaxRetryCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.ResourceMaxRetryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceMaxRetryCount = value["ResourceMaxRetryCount"].GetInt64();
        m_resourceMaxRetryCountHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `NamedCpmComputeEnv.Tags` is not array type"));

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

void NamedCpmComputeEnv::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_envDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_desiredComputeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredComputeNodeCount, allocator);
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

    if (m_notificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notifications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notifications.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionIfComputeNodeInactiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionIfComputeNodeInactive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionIfComputeNodeInactive.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceMaxRetryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMaxRetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceMaxRetryCount, allocator);
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


string NamedCpmComputeEnv::GetEnvName() const
{
    return m_envName;
}

void NamedCpmComputeEnv::SetEnvName(const string& _envName)
{
    m_envName = _envName;
    m_envNameHasBeenSet = true;
}

bool NamedCpmComputeEnv::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

EnvDataCpm NamedCpmComputeEnv::GetEnvData() const
{
    return m_envData;
}

void NamedCpmComputeEnv::SetEnvData(const EnvDataCpm& _envData)
{
    m_envData = _envData;
    m_envDataHasBeenSet = true;
}

bool NamedCpmComputeEnv::EnvDataHasBeenSet() const
{
    return m_envDataHasBeenSet;
}

int64_t NamedCpmComputeEnv::GetDesiredComputeNodeCount() const
{
    return m_desiredComputeNodeCount;
}

void NamedCpmComputeEnv::SetDesiredComputeNodeCount(const int64_t& _desiredComputeNodeCount)
{
    m_desiredComputeNodeCount = _desiredComputeNodeCount;
    m_desiredComputeNodeCountHasBeenSet = true;
}

bool NamedCpmComputeEnv::DesiredComputeNodeCountHasBeenSet() const
{
    return m_desiredComputeNodeCountHasBeenSet;
}

string NamedCpmComputeEnv::GetEnvDescription() const
{
    return m_envDescription;
}

void NamedCpmComputeEnv::SetEnvDescription(const string& _envDescription)
{
    m_envDescription = _envDescription;
    m_envDescriptionHasBeenSet = true;
}

bool NamedCpmComputeEnv::EnvDescriptionHasBeenSet() const
{
    return m_envDescriptionHasBeenSet;
}

string NamedCpmComputeEnv::GetEnvType() const
{
    return m_envType;
}

void NamedCpmComputeEnv::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool NamedCpmComputeEnv::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

vector<Authentication> NamedCpmComputeEnv::GetAuthentications() const
{
    return m_authentications;
}

void NamedCpmComputeEnv::SetAuthentications(const vector<Authentication>& _authentications)
{
    m_authentications = _authentications;
    m_authenticationsHasBeenSet = true;
}

bool NamedCpmComputeEnv::AuthenticationsHasBeenSet() const
{
    return m_authenticationsHasBeenSet;
}

vector<InputMapping> NamedCpmComputeEnv::GetInputMappings() const
{
    return m_inputMappings;
}

void NamedCpmComputeEnv::SetInputMappings(const vector<InputMapping>& _inputMappings)
{
    m_inputMappings = _inputMappings;
    m_inputMappingsHasBeenSet = true;
}

bool NamedCpmComputeEnv::InputMappingsHasBeenSet() const
{
    return m_inputMappingsHasBeenSet;
}

Notification NamedCpmComputeEnv::GetNotifications() const
{
    return m_notifications;
}

void NamedCpmComputeEnv::SetNotifications(const Notification& _notifications)
{
    m_notifications = _notifications;
    m_notificationsHasBeenSet = true;
}

bool NamedCpmComputeEnv::NotificationsHasBeenSet() const
{
    return m_notificationsHasBeenSet;
}

string NamedCpmComputeEnv::GetActionIfComputeNodeInactive() const
{
    return m_actionIfComputeNodeInactive;
}

void NamedCpmComputeEnv::SetActionIfComputeNodeInactive(const string& _actionIfComputeNodeInactive)
{
    m_actionIfComputeNodeInactive = _actionIfComputeNodeInactive;
    m_actionIfComputeNodeInactiveHasBeenSet = true;
}

bool NamedCpmComputeEnv::ActionIfComputeNodeInactiveHasBeenSet() const
{
    return m_actionIfComputeNodeInactiveHasBeenSet;
}

int64_t NamedCpmComputeEnv::GetResourceMaxRetryCount() const
{
    return m_resourceMaxRetryCount;
}

void NamedCpmComputeEnv::SetResourceMaxRetryCount(const int64_t& _resourceMaxRetryCount)
{
    m_resourceMaxRetryCount = _resourceMaxRetryCount;
    m_resourceMaxRetryCountHasBeenSet = true;
}

bool NamedCpmComputeEnv::ResourceMaxRetryCountHasBeenSet() const
{
    return m_resourceMaxRetryCountHasBeenSet;
}

vector<Tag> NamedCpmComputeEnv::GetTags() const
{
    return m_tags;
}

void NamedCpmComputeEnv::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool NamedCpmComputeEnv::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

