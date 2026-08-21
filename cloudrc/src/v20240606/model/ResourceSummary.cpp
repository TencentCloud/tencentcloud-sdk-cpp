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

#include <tencentcloud/cloudrc/v20240606/model/ResourceSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudrc::V20240606::Model;
using namespace std;

ResourceSummary::ResourceSummary() :
    m_resourceIdHasBeenSet(false),
    m_resourceAliasHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_zoneCodeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome ResourceSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceAlias") && !value["ResourceAlias"].IsNull())
    {
        if (!value["ResourceAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.ResourceAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceAlias = string(value["ResourceAlias"].GetString());
        m_resourceAliasHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("ZoneCode") && !value["ZoneCode"].IsNull())
    {
        if (!value["ZoneCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.ZoneCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneCode = string(value["ZoneCode"].GetString());
        m_zoneCodeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddress") && !value["PrivateIpAddress"].IsNull())
    {
        if (!value["PrivateIpAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.PrivateIpAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddress.push_back((*itr).GetString());
        }
        m_privateIpAddressHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.PublicIpAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddress.push_back((*itr).GetString());
        }
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceSummary.Tags` is not array type"));

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

void ResourceSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneCode.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddress.begin(); itr != m_privateIpAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddress.begin(); itr != m_publicIpAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string ResourceSummary::GetResourceId() const
{
    return m_resourceId;
}

void ResourceSummary::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceSummary::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ResourceSummary::GetResourceAlias() const
{
    return m_resourceAlias;
}

void ResourceSummary::SetResourceAlias(const string& _resourceAlias)
{
    m_resourceAlias = _resourceAlias;
    m_resourceAliasHasBeenSet = true;
}

bool ResourceSummary::ResourceAliasHasBeenSet() const
{
    return m_resourceAliasHasBeenSet;
}

int64_t ResourceSummary::GetUin() const
{
    return m_uin;
}

void ResourceSummary::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ResourceSummary::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string ResourceSummary::GetResourceType() const
{
    return m_resourceType;
}

void ResourceSummary::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceSummary::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourceSummary::GetRegionCode() const
{
    return m_regionCode;
}

void ResourceSummary::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool ResourceSummary::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string ResourceSummary::GetZoneCode() const
{
    return m_zoneCode;
}

void ResourceSummary::SetZoneCode(const string& _zoneCode)
{
    m_zoneCode = _zoneCode;
    m_zoneCodeHasBeenSet = true;
}

bool ResourceSummary::ZoneCodeHasBeenSet() const
{
    return m_zoneCodeHasBeenSet;
}

string ResourceSummary::GetPayMode() const
{
    return m_payMode;
}

void ResourceSummary::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ResourceSummary::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string ResourceSummary::GetCreateTime() const
{
    return m_createTime;
}

void ResourceSummary::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ResourceSummary::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ResourceSummary::GetExpireTime() const
{
    return m_expireTime;
}

void ResourceSummary::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ResourceSummary::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<string> ResourceSummary::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void ResourceSummary::SetPrivateIpAddress(const vector<string>& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool ResourceSummary::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

vector<string> ResourceSummary::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

void ResourceSummary::SetPublicIpAddress(const vector<string>& _publicIpAddress)
{
    m_publicIpAddress = _publicIpAddress;
    m_publicIpAddressHasBeenSet = true;
}

bool ResourceSummary::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

vector<Tag> ResourceSummary::GetTags() const
{
    return m_tags;
}

void ResourceSummary::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ResourceSummary::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

