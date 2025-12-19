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

#include <tencentcloud/wedata/v20210820/model/LineageResouce.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LineageResouce::LineageResouce() :
    m_resourceOriIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_qualifiedIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_resourcePropertiesHasBeenSet(false)
{
}

CoreInternalOutcome LineageResouce::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceOriId") && !value["ResourceOriId"].IsNull())
    {
        if (!value["ResourceOriId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResouce.ResourceOriId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceOriId = string(value["ResourceOriId"].GetString());
        m_resourceOriIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResouce.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResouce.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("QualifiedId") && !value["QualifiedId"].IsNull())
    {
        if (!value["QualifiedId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResouce.QualifiedId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifiedId = string(value["QualifiedId"].GetString());
        m_qualifiedIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResouce.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResouce.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResouce.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResouce.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceProperties") && !value["ResourceProperties"].IsNull())
    {
        if (!value["ResourceProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineageResouce.ResourceProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LineageProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceProperties.push_back(item);
        }
        m_resourcePropertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineageResouce::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceOriIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceOriId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceOriId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifiedIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualifiedId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifiedId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceProperties.begin(); itr != m_resourceProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LineageResouce::GetResourceOriId() const
{
    return m_resourceOriId;
}

void LineageResouce::SetResourceOriId(const string& _resourceOriId)
{
    m_resourceOriId = _resourceOriId;
    m_resourceOriIdHasBeenSet = true;
}

bool LineageResouce::ResourceOriIdHasBeenSet() const
{
    return m_resourceOriIdHasBeenSet;
}

string LineageResouce::GetResourceName() const
{
    return m_resourceName;
}

void LineageResouce::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool LineageResouce::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string LineageResouce::GetResourceType() const
{
    return m_resourceType;
}

void LineageResouce::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool LineageResouce::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string LineageResouce::GetQualifiedId() const
{
    return m_qualifiedId;
}

void LineageResouce::SetQualifiedId(const string& _qualifiedId)
{
    m_qualifiedId = _qualifiedId;
    m_qualifiedIdHasBeenSet = true;
}

bool LineageResouce::QualifiedIdHasBeenSet() const
{
    return m_qualifiedIdHasBeenSet;
}

string LineageResouce::GetDescription() const
{
    return m_description;
}

void LineageResouce::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LineageResouce::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LineageResouce::GetPlatform() const
{
    return m_platform;
}

void LineageResouce::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool LineageResouce::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string LineageResouce::GetCreateTime() const
{
    return m_createTime;
}

void LineageResouce::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LineageResouce::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LineageResouce::GetUpdateTime() const
{
    return m_updateTime;
}

void LineageResouce::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LineageResouce::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<LineageProperty> LineageResouce::GetResourceProperties() const
{
    return m_resourceProperties;
}

void LineageResouce::SetResourceProperties(const vector<LineageProperty>& _resourceProperties)
{
    m_resourceProperties = _resourceProperties;
    m_resourcePropertiesHasBeenSet = true;
}

bool LineageResouce::ResourcePropertiesHasBeenSet() const
{
    return m_resourcePropertiesHasBeenSet;
}

