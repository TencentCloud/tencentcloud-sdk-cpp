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

#include <tencentcloud/wedata/v20250806/model/LineageResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

LineageResource::LineageResource() :
    m_resourceUniqueIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_lineageNodeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_resourcePropertiesHasBeenSet(false)
{
}

CoreInternalOutcome LineageResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceUniqueId") && !value["ResourceUniqueId"].IsNull())
    {
        if (!value["ResourceUniqueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResource.ResourceUniqueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUniqueId = string(value["ResourceUniqueId"].GetString());
        m_resourceUniqueIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResource.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResource.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("LineageNodeId") && !value["LineageNodeId"].IsNull())
    {
        if (!value["LineageNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResource.LineageNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineageNodeId = string(value["LineageNodeId"].GetString());
        m_lineageNodeIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResource.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResource.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResource.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageResource.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceProperties") && !value["ResourceProperties"].IsNull())
    {
        if (!value["ResourceProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineageResource.ResourceProperties` is not array type"));

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

void LineageResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceUniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUniqueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUniqueId.c_str(), allocator).Move(), allocator);
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

    if (m_lineageNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineageNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineageNodeId.c_str(), allocator).Move(), allocator);
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


string LineageResource::GetResourceUniqueId() const
{
    return m_resourceUniqueId;
}

void LineageResource::SetResourceUniqueId(const string& _resourceUniqueId)
{
    m_resourceUniqueId = _resourceUniqueId;
    m_resourceUniqueIdHasBeenSet = true;
}

bool LineageResource::ResourceUniqueIdHasBeenSet() const
{
    return m_resourceUniqueIdHasBeenSet;
}

string LineageResource::GetResourceName() const
{
    return m_resourceName;
}

void LineageResource::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool LineageResource::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string LineageResource::GetResourceType() const
{
    return m_resourceType;
}

void LineageResource::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool LineageResource::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string LineageResource::GetLineageNodeId() const
{
    return m_lineageNodeId;
}

void LineageResource::SetLineageNodeId(const string& _lineageNodeId)
{
    m_lineageNodeId = _lineageNodeId;
    m_lineageNodeIdHasBeenSet = true;
}

bool LineageResource::LineageNodeIdHasBeenSet() const
{
    return m_lineageNodeIdHasBeenSet;
}

string LineageResource::GetDescription() const
{
    return m_description;
}

void LineageResource::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LineageResource::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LineageResource::GetPlatform() const
{
    return m_platform;
}

void LineageResource::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool LineageResource::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string LineageResource::GetCreateTime() const
{
    return m_createTime;
}

void LineageResource::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LineageResource::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LineageResource::GetUpdateTime() const
{
    return m_updateTime;
}

void LineageResource::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LineageResource::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<LineageProperty> LineageResource::GetResourceProperties() const
{
    return m_resourceProperties;
}

void LineageResource::SetResourceProperties(const vector<LineageProperty>& _resourceProperties)
{
    m_resourceProperties = _resourceProperties;
    m_resourcePropertiesHasBeenSet = true;
}

bool LineageResource::ResourcePropertiesHasBeenSet() const
{
    return m_resourcePropertiesHasBeenSet;
}

