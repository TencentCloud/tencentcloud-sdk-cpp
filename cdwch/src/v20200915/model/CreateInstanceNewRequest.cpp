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

#include <tencentcloud/cdwch/v20200915/model/CreateInstanceNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

CreateInstanceNewRequest::CreateInstanceNewRequest() :
    m_zoneHasBeenSet(false),
    m_haFlagHasBeenSet(false),
    m_userVPCIdHasBeenSet(false),
    m_userSubnetIdHasBeenSet(false),
    m_productVersionHasBeenSet(false),
    m_chargePropertiesHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_dataSpecHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clsLogSetIdHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_mountDiskTypeHasBeenSet(false),
    m_hAZkHasBeenSet(false),
    m_commonSpecHasBeenSet(false),
    m_tagItemsHasBeenSet(false),
    m_secondaryZoneInfoHasBeenSet(false)
{
}

string CreateInstanceNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_haFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_haFlag, allocator);
    }

    if (m_userVPCIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVPCId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userVPCId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_productVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_chargePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chargeProperties.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tags.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clsLogSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsLogSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_mountDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountDiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mountDiskType, allocator);
    }

    if (m_hAZkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HAZk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hAZk, allocator);
    }

    if (m_commonSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_commonSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagItems.begin(); itr != m_tagItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_secondaryZoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_secondaryZoneInfo.begin(); itr != m_secondaryZoneInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceNewRequest::GetZone() const
{
    return m_zone;
}

void CreateInstanceNewRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateInstanceNewRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

bool CreateInstanceNewRequest::GetHaFlag() const
{
    return m_haFlag;
}

void CreateInstanceNewRequest::SetHaFlag(const bool& _haFlag)
{
    m_haFlag = _haFlag;
    m_haFlagHasBeenSet = true;
}

bool CreateInstanceNewRequest::HaFlagHasBeenSet() const
{
    return m_haFlagHasBeenSet;
}

string CreateInstanceNewRequest::GetUserVPCId() const
{
    return m_userVPCId;
}

void CreateInstanceNewRequest::SetUserVPCId(const string& _userVPCId)
{
    m_userVPCId = _userVPCId;
    m_userVPCIdHasBeenSet = true;
}

bool CreateInstanceNewRequest::UserVPCIdHasBeenSet() const
{
    return m_userVPCIdHasBeenSet;
}

string CreateInstanceNewRequest::GetUserSubnetId() const
{
    return m_userSubnetId;
}

void CreateInstanceNewRequest::SetUserSubnetId(const string& _userSubnetId)
{
    m_userSubnetId = _userSubnetId;
    m_userSubnetIdHasBeenSet = true;
}

bool CreateInstanceNewRequest::UserSubnetIdHasBeenSet() const
{
    return m_userSubnetIdHasBeenSet;
}

string CreateInstanceNewRequest::GetProductVersion() const
{
    return m_productVersion;
}

void CreateInstanceNewRequest::SetProductVersion(const string& _productVersion)
{
    m_productVersion = _productVersion;
    m_productVersionHasBeenSet = true;
}

bool CreateInstanceNewRequest::ProductVersionHasBeenSet() const
{
    return m_productVersionHasBeenSet;
}

Charge CreateInstanceNewRequest::GetChargeProperties() const
{
    return m_chargeProperties;
}

void CreateInstanceNewRequest::SetChargeProperties(const Charge& _chargeProperties)
{
    m_chargeProperties = _chargeProperties;
    m_chargePropertiesHasBeenSet = true;
}

bool CreateInstanceNewRequest::ChargePropertiesHasBeenSet() const
{
    return m_chargePropertiesHasBeenSet;
}

string CreateInstanceNewRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstanceNewRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstanceNewRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

NodeSpec CreateInstanceNewRequest::GetDataSpec() const
{
    return m_dataSpec;
}

void CreateInstanceNewRequest::SetDataSpec(const NodeSpec& _dataSpec)
{
    m_dataSpec = _dataSpec;
    m_dataSpecHasBeenSet = true;
}

bool CreateInstanceNewRequest::DataSpecHasBeenSet() const
{
    return m_dataSpecHasBeenSet;
}

Tag CreateInstanceNewRequest::GetTags() const
{
    return m_tags;
}

void CreateInstanceNewRequest::SetTags(const Tag& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateInstanceNewRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateInstanceNewRequest::GetClsLogSetId() const
{
    return m_clsLogSetId;
}

void CreateInstanceNewRequest::SetClsLogSetId(const string& _clsLogSetId)
{
    m_clsLogSetId = _clsLogSetId;
    m_clsLogSetIdHasBeenSet = true;
}

bool CreateInstanceNewRequest::ClsLogSetIdHasBeenSet() const
{
    return m_clsLogSetIdHasBeenSet;
}

string CreateInstanceNewRequest::GetCosBucketName() const
{
    return m_cosBucketName;
}

void CreateInstanceNewRequest::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool CreateInstanceNewRequest::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

int64_t CreateInstanceNewRequest::GetMountDiskType() const
{
    return m_mountDiskType;
}

void CreateInstanceNewRequest::SetMountDiskType(const int64_t& _mountDiskType)
{
    m_mountDiskType = _mountDiskType;
    m_mountDiskTypeHasBeenSet = true;
}

bool CreateInstanceNewRequest::MountDiskTypeHasBeenSet() const
{
    return m_mountDiskTypeHasBeenSet;
}

bool CreateInstanceNewRequest::GetHAZk() const
{
    return m_hAZk;
}

void CreateInstanceNewRequest::SetHAZk(const bool& _hAZk)
{
    m_hAZk = _hAZk;
    m_hAZkHasBeenSet = true;
}

bool CreateInstanceNewRequest::HAZkHasBeenSet() const
{
    return m_hAZkHasBeenSet;
}

NodeSpec CreateInstanceNewRequest::GetCommonSpec() const
{
    return m_commonSpec;
}

void CreateInstanceNewRequest::SetCommonSpec(const NodeSpec& _commonSpec)
{
    m_commonSpec = _commonSpec;
    m_commonSpecHasBeenSet = true;
}

bool CreateInstanceNewRequest::CommonSpecHasBeenSet() const
{
    return m_commonSpecHasBeenSet;
}

vector<Tag> CreateInstanceNewRequest::GetTagItems() const
{
    return m_tagItems;
}

void CreateInstanceNewRequest::SetTagItems(const vector<Tag>& _tagItems)
{
    m_tagItems = _tagItems;
    m_tagItemsHasBeenSet = true;
}

bool CreateInstanceNewRequest::TagItemsHasBeenSet() const
{
    return m_tagItemsHasBeenSet;
}

vector<SecondaryZoneInfo> CreateInstanceNewRequest::GetSecondaryZoneInfo() const
{
    return m_secondaryZoneInfo;
}

void CreateInstanceNewRequest::SetSecondaryZoneInfo(const vector<SecondaryZoneInfo>& _secondaryZoneInfo)
{
    m_secondaryZoneInfo = _secondaryZoneInfo;
    m_secondaryZoneInfoHasBeenSet = true;
}

bool CreateInstanceNewRequest::SecondaryZoneInfoHasBeenSet() const
{
    return m_secondaryZoneInfoHasBeenSet;
}


