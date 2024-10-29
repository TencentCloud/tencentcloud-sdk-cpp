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

#include <tencentcloud/cloudaudit/v20190319/model/ResourceField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

ResourceField::ResourceField() :
    m_resourceTypeHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_eventNamesHasBeenSet(false)
{
}

CoreInternalOutcome ResourceField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceField.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceField.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("EventNames") && !value["EventNames"].IsNull())
    {
        if (!value["EventNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceField.EventNames` is not array type"));

        const rapidjson::Value &tmpValue = value["EventNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eventNames.push_back((*itr).GetString());
        }
        m_eventNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventNames.begin(); itr != m_eventNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ResourceField::GetResourceType() const
{
    return m_resourceType;
}

void ResourceField::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceField::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourceField::GetActionType() const
{
    return m_actionType;
}

void ResourceField::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ResourceField::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

vector<string> ResourceField::GetEventNames() const
{
    return m_eventNames;
}

void ResourceField::SetEventNames(const vector<string>& _eventNames)
{
    m_eventNames = _eventNames;
    m_eventNamesHasBeenSet = true;
}

bool ResourceField::EventNamesHasBeenSet() const
{
    return m_eventNamesHasBeenSet;
}

