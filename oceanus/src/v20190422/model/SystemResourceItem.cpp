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

#include <tencentcloud/oceanus/v20190422/model/SystemResourceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

SystemResourceItem::SystemResourceItem() :
    m_resourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_latestResourceConfigVersionHasBeenSet(false),
    m_systemProvideHasBeenSet(false)
{
}

CoreInternalOutcome SystemResourceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemResourceItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemResourceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SystemResourceItem.ResourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetInt64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemResourceItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemResourceItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("LatestResourceConfigVersion") && !value["LatestResourceConfigVersion"].IsNull())
    {
        if (!value["LatestResourceConfigVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SystemResourceItem.LatestResourceConfigVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestResourceConfigVersion = value["LatestResourceConfigVersion"].GetInt64();
        m_latestResourceConfigVersionHasBeenSet = true;
    }

    if (value.HasMember("SystemProvide") && !value["SystemProvide"].IsNull())
    {
        if (!value["SystemProvide"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SystemResourceItem.SystemProvide` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemProvide = value["SystemProvide"].GetInt64();
        m_systemProvideHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SystemResourceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_latestResourceConfigVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestResourceConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestResourceConfigVersion, allocator);
    }

    if (m_systemProvideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemProvide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemProvide, allocator);
    }

}


string SystemResourceItem::GetResourceId() const
{
    return m_resourceId;
}

void SystemResourceItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool SystemResourceItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string SystemResourceItem::GetName() const
{
    return m_name;
}

void SystemResourceItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SystemResourceItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t SystemResourceItem::GetResourceType() const
{
    return m_resourceType;
}

void SystemResourceItem::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool SystemResourceItem::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string SystemResourceItem::GetRemark() const
{
    return m_remark;
}

void SystemResourceItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SystemResourceItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string SystemResourceItem::GetRegion() const
{
    return m_region;
}

void SystemResourceItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SystemResourceItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t SystemResourceItem::GetLatestResourceConfigVersion() const
{
    return m_latestResourceConfigVersion;
}

void SystemResourceItem::SetLatestResourceConfigVersion(const int64_t& _latestResourceConfigVersion)
{
    m_latestResourceConfigVersion = _latestResourceConfigVersion;
    m_latestResourceConfigVersionHasBeenSet = true;
}

bool SystemResourceItem::LatestResourceConfigVersionHasBeenSet() const
{
    return m_latestResourceConfigVersionHasBeenSet;
}

int64_t SystemResourceItem::GetSystemProvide() const
{
    return m_systemProvide;
}

void SystemResourceItem::SetSystemProvide(const int64_t& _systemProvide)
{
    m_systemProvide = _systemProvide;
    m_systemProvideHasBeenSet = true;
}

bool SystemResourceItem::SystemProvideHasBeenSet() const
{
    return m_systemProvideHasBeenSet;
}

