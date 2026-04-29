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

#include <tencentcloud/ioa/v20220601/model/DescribeAccountResourcesItems.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAccountResourcesItems::DescribeAccountResourcesItems() :
    m_areaIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_fromSourceIdHasBeenSet(false),
    m_isInheritedHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_namePathHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_isInheritedSwitchHasBeenSet(false),
    m_idHasBeenSet(false),
    m_areaNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountResourcesItems::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AreaId") && !value["AreaId"].IsNull())
    {
        if (!value["AreaId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.AreaId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_areaId = value["AreaId"].GetUint64();
        m_areaIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.ResourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetUint64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.ResourceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = value["ResourceId"].GetUint64();
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("FromSourceId") && !value["FromSourceId"].IsNull())
    {
        if (!value["FromSourceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.FromSourceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fromSourceId = value["FromSourceId"].GetUint64();
        m_fromSourceIdHasBeenSet = true;
    }

    if (value.HasMember("IsInherited") && !value["IsInherited"].IsNull())
    {
        if (!value["IsInherited"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.IsInherited` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isInherited = value["IsInherited"].GetBool();
        m_isInheritedHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("NamePath") && !value["NamePath"].IsNull())
    {
        if (!value["NamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.NamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namePath = string(value["NamePath"].GetString());
        m_namePathHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("IsInheritedSwitch") && !value["IsInheritedSwitch"].IsNull())
    {
        if (!value["IsInheritedSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.IsInheritedSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isInheritedSwitch = value["IsInheritedSwitch"].GetUint64();
        m_isInheritedSwitchHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AreaName") && !value["AreaName"].IsNull())
    {
        if (!value["AreaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountResourcesItems.AreaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaName = string(value["AreaName"].GetString());
        m_areaNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAccountResourcesItems::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_areaId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceId, allocator);
    }

    if (m_fromSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fromSourceId, allocator);
    }

    if (m_isInheritedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInherited";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInherited, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_namePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namePath.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_isInheritedSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInheritedSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInheritedSwitch, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_areaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DescribeAccountResourcesItems::GetAreaId() const
{
    return m_areaId;
}

void DescribeAccountResourcesItems::SetAreaId(const uint64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool DescribeAccountResourcesItems::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

string DescribeAccountResourcesItems::GetDescription() const
{
    return m_description;
}

void DescribeAccountResourcesItems::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeAccountResourcesItems::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DescribeAccountResourcesItems::GetResourceType() const
{
    return m_resourceType;
}

void DescribeAccountResourcesItems::SetResourceType(const uint64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeAccountResourcesItems::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t DescribeAccountResourcesItems::GetResourceId() const
{
    return m_resourceId;
}

void DescribeAccountResourcesItems::SetResourceId(const uint64_t& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeAccountResourcesItems::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t DescribeAccountResourcesItems::GetFromSourceId() const
{
    return m_fromSourceId;
}

void DescribeAccountResourcesItems::SetFromSourceId(const uint64_t& _fromSourceId)
{
    m_fromSourceId = _fromSourceId;
    m_fromSourceIdHasBeenSet = true;
}

bool DescribeAccountResourcesItems::FromSourceIdHasBeenSet() const
{
    return m_fromSourceIdHasBeenSet;
}

bool DescribeAccountResourcesItems::GetIsInherited() const
{
    return m_isInherited;
}

void DescribeAccountResourcesItems::SetIsInherited(const bool& _isInherited)
{
    m_isInherited = _isInherited;
    m_isInheritedHasBeenSet = true;
}

bool DescribeAccountResourcesItems::IsInheritedHasBeenSet() const
{
    return m_isInheritedHasBeenSet;
}

int64_t DescribeAccountResourcesItems::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeAccountResourcesItems::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeAccountResourcesItems::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeAccountResourcesItems::GetNamePath() const
{
    return m_namePath;
}

void DescribeAccountResourcesItems::SetNamePath(const string& _namePath)
{
    m_namePath = _namePath;
    m_namePathHasBeenSet = true;
}

bool DescribeAccountResourcesItems::NamePathHasBeenSet() const
{
    return m_namePathHasBeenSet;
}

int64_t DescribeAccountResourcesItems::GetAccessType() const
{
    return m_accessType;
}

void DescribeAccountResourcesItems::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool DescribeAccountResourcesItems::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string DescribeAccountResourcesItems::GetResourceName() const
{
    return m_resourceName;
}

void DescribeAccountResourcesItems::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool DescribeAccountResourcesItems::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

uint64_t DescribeAccountResourcesItems::GetIsInheritedSwitch() const
{
    return m_isInheritedSwitch;
}

void DescribeAccountResourcesItems::SetIsInheritedSwitch(const uint64_t& _isInheritedSwitch)
{
    m_isInheritedSwitch = _isInheritedSwitch;
    m_isInheritedSwitchHasBeenSet = true;
}

bool DescribeAccountResourcesItems::IsInheritedSwitchHasBeenSet() const
{
    return m_isInheritedSwitchHasBeenSet;
}

uint64_t DescribeAccountResourcesItems::GetId() const
{
    return m_id;
}

void DescribeAccountResourcesItems::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeAccountResourcesItems::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeAccountResourcesItems::GetAreaName() const
{
    return m_areaName;
}

void DescribeAccountResourcesItems::SetAreaName(const string& _areaName)
{
    m_areaName = _areaName;
    m_areaNameHasBeenSet = true;
}

bool DescribeAccountResourcesItems::AreaNameHasBeenSet() const
{
    return m_areaNameHasBeenSet;
}

