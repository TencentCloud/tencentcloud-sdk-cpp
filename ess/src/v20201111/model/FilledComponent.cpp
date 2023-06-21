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

#include <tencentcloud/ess/v20201111/model/FilledComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FilledComponent::FilledComponent() :
    m_componentIdHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentFillStatusHasBeenSet(false),
    m_componentValueHasBeenSet(false),
    m_componentRecipientIdHasBeenSet(false),
    m_imageUrlHasBeenSet(false)
{
}

CoreInternalOutcome FilledComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentId") && !value["ComponentId"].IsNull())
    {
        if (!value["ComponentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilledComponent.ComponentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentId = string(value["ComponentId"].GetString());
        m_componentIdHasBeenSet = true;
    }

    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilledComponent.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentFillStatus") && !value["ComponentFillStatus"].IsNull())
    {
        if (!value["ComponentFillStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilledComponent.ComponentFillStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentFillStatus = string(value["ComponentFillStatus"].GetString());
        m_componentFillStatusHasBeenSet = true;
    }

    if (value.HasMember("ComponentValue") && !value["ComponentValue"].IsNull())
    {
        if (!value["ComponentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilledComponent.ComponentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentValue = string(value["ComponentValue"].GetString());
        m_componentValueHasBeenSet = true;
    }

    if (value.HasMember("ComponentRecipientId") && !value["ComponentRecipientId"].IsNull())
    {
        if (!value["ComponentRecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilledComponent.ComponentRecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentRecipientId = string(value["ComponentRecipientId"].GetString());
        m_componentRecipientIdHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilledComponent.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilledComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentId.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentFillStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentFillStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentFillStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_componentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_componentRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentRecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

}


string FilledComponent::GetComponentId() const
{
    return m_componentId;
}

void FilledComponent::SetComponentId(const string& _componentId)
{
    m_componentId = _componentId;
    m_componentIdHasBeenSet = true;
}

bool FilledComponent::ComponentIdHasBeenSet() const
{
    return m_componentIdHasBeenSet;
}

string FilledComponent::GetComponentName() const
{
    return m_componentName;
}

void FilledComponent::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool FilledComponent::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

string FilledComponent::GetComponentFillStatus() const
{
    return m_componentFillStatus;
}

void FilledComponent::SetComponentFillStatus(const string& _componentFillStatus)
{
    m_componentFillStatus = _componentFillStatus;
    m_componentFillStatusHasBeenSet = true;
}

bool FilledComponent::ComponentFillStatusHasBeenSet() const
{
    return m_componentFillStatusHasBeenSet;
}

string FilledComponent::GetComponentValue() const
{
    return m_componentValue;
}

void FilledComponent::SetComponentValue(const string& _componentValue)
{
    m_componentValue = _componentValue;
    m_componentValueHasBeenSet = true;
}

bool FilledComponent::ComponentValueHasBeenSet() const
{
    return m_componentValueHasBeenSet;
}

string FilledComponent::GetComponentRecipientId() const
{
    return m_componentRecipientId;
}

void FilledComponent::SetComponentRecipientId(const string& _componentRecipientId)
{
    m_componentRecipientId = _componentRecipientId;
    m_componentRecipientIdHasBeenSet = true;
}

bool FilledComponent::ComponentRecipientIdHasBeenSet() const
{
    return m_componentRecipientIdHasBeenSet;
}

string FilledComponent::GetImageUrl() const
{
    return m_imageUrl;
}

void FilledComponent::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool FilledComponent::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

