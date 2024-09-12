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

#include <tencentcloud/dlc/v20210125/model/ResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ResourceInfo::ResourceInfo() :
    m_attributionTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_favorHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome ResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttributionType") && !value["AttributionType"].IsNull())
    {
        if (!value["AttributionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.AttributionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributionType = string(value["AttributionType"].GetString());
        m_attributionTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Instance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instance = string(value["Instance"].GetString());
        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("Favor") && !value["Favor"].IsNull())
    {
        if (!value["Favor"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Favor` is not array type"));

        const rapidjson::Value &tmpValue = value["Favor"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FavorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_favor.push_back(item);
        }
        m_favorHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attributionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributionType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_favorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Favor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_favor.begin(); itr != m_favor.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

}


string ResourceInfo::GetAttributionType() const
{
    return m_attributionType;
}

void ResourceInfo::SetAttributionType(const string& _attributionType)
{
    m_attributionType = _attributionType;
    m_attributionTypeHasBeenSet = true;
}

bool ResourceInfo::AttributionTypeHasBeenSet() const
{
    return m_attributionTypeHasBeenSet;
}

string ResourceInfo::GetResourceType() const
{
    return m_resourceType;
}

void ResourceInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourceInfo::GetName() const
{
    return m_name;
}

void ResourceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ResourceInfo::GetInstance() const
{
    return m_instance;
}

void ResourceInfo::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool ResourceInfo::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

vector<FavorInfo> ResourceInfo::GetFavor() const
{
    return m_favor;
}

void ResourceInfo::SetFavor(const vector<FavorInfo>& _favor)
{
    m_favor = _favor;
    m_favorHasBeenSet = true;
}

bool ResourceInfo::FavorHasBeenSet() const
{
    return m_favorHasBeenSet;
}

int64_t ResourceInfo::GetStatus() const
{
    return m_status;
}

void ResourceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResourceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ResourceInfo::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void ResourceInfo::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool ResourceInfo::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

