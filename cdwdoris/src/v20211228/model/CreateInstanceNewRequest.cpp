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

#include <tencentcloud/cdwdoris/v20211228/model/CreateInstanceNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

CreateInstanceNewRequest::CreateInstanceNewRequest() :
    m_zoneHasBeenSet(false),
    m_feSpecHasBeenSet(false),
    m_beSpecHasBeenSet(false),
    m_haFlagHasBeenSet(false),
    m_userVPCIdHasBeenSet(false),
    m_userSubnetIdHasBeenSet(false),
    m_productVersionHasBeenSet(false),
    m_chargePropertiesHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_dorisUserPwdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_haTypeHasBeenSet(false),
    m_caseSensitiveHasBeenSet(false),
    m_enableMultiZonesHasBeenSet(false),
    m_userMultiZoneInfosHasBeenSet(false),
    m_userMultiZoneInfoArrHasBeenSet(false),
    m_isSSCHasBeenSet(false),
    m_sSCCUHasBeenSet(false),
    m_cacheDiskSizeHasBeenSet(false),
    m_cacheDataDiskSizeHasBeenSet(false)
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

    if (m_feSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_feSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_beSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_beSpec.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_dorisUserPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DorisUserPwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dorisUserPwd.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_haTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_haType, allocator);
    }

    if (m_caseSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseSensitive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_caseSensitive, allocator);
    }

    if (m_enableMultiZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMultiZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMultiZones, allocator);
    }

    if (m_userMultiZoneInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserMultiZoneInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userMultiZoneInfos.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userMultiZoneInfoArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserMultiZoneInfoArr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userMultiZoneInfoArr.begin(); itr != m_userMultiZoneInfoArr.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isSSCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSSC";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSSC, allocator);
    }

    if (m_sSCCUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSCCU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sSCCU, allocator);
    }

    if (m_cacheDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheDiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cacheDiskSize.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheDataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheDataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cacheDataDiskSize, allocator);
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

CreateInstanceSpec CreateInstanceNewRequest::GetFeSpec() const
{
    return m_feSpec;
}

void CreateInstanceNewRequest::SetFeSpec(const CreateInstanceSpec& _feSpec)
{
    m_feSpec = _feSpec;
    m_feSpecHasBeenSet = true;
}

bool CreateInstanceNewRequest::FeSpecHasBeenSet() const
{
    return m_feSpecHasBeenSet;
}

CreateInstanceSpec CreateInstanceNewRequest::GetBeSpec() const
{
    return m_beSpec;
}

void CreateInstanceNewRequest::SetBeSpec(const CreateInstanceSpec& _beSpec)
{
    m_beSpec = _beSpec;
    m_beSpecHasBeenSet = true;
}

bool CreateInstanceNewRequest::BeSpecHasBeenSet() const
{
    return m_beSpecHasBeenSet;
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

ChargeProperties CreateInstanceNewRequest::GetChargeProperties() const
{
    return m_chargeProperties;
}

void CreateInstanceNewRequest::SetChargeProperties(const ChargeProperties& _chargeProperties)
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

string CreateInstanceNewRequest::GetDorisUserPwd() const
{
    return m_dorisUserPwd;
}

void CreateInstanceNewRequest::SetDorisUserPwd(const string& _dorisUserPwd)
{
    m_dorisUserPwd = _dorisUserPwd;
    m_dorisUserPwdHasBeenSet = true;
}

bool CreateInstanceNewRequest::DorisUserPwdHasBeenSet() const
{
    return m_dorisUserPwdHasBeenSet;
}

vector<Tag> CreateInstanceNewRequest::GetTags() const
{
    return m_tags;
}

void CreateInstanceNewRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateInstanceNewRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CreateInstanceNewRequest::GetHaType() const
{
    return m_haType;
}

void CreateInstanceNewRequest::SetHaType(const int64_t& _haType)
{
    m_haType = _haType;
    m_haTypeHasBeenSet = true;
}

bool CreateInstanceNewRequest::HaTypeHasBeenSet() const
{
    return m_haTypeHasBeenSet;
}

int64_t CreateInstanceNewRequest::GetCaseSensitive() const
{
    return m_caseSensitive;
}

void CreateInstanceNewRequest::SetCaseSensitive(const int64_t& _caseSensitive)
{
    m_caseSensitive = _caseSensitive;
    m_caseSensitiveHasBeenSet = true;
}

bool CreateInstanceNewRequest::CaseSensitiveHasBeenSet() const
{
    return m_caseSensitiveHasBeenSet;
}

bool CreateInstanceNewRequest::GetEnableMultiZones() const
{
    return m_enableMultiZones;
}

void CreateInstanceNewRequest::SetEnableMultiZones(const bool& _enableMultiZones)
{
    m_enableMultiZones = _enableMultiZones;
    m_enableMultiZonesHasBeenSet = true;
}

bool CreateInstanceNewRequest::EnableMultiZonesHasBeenSet() const
{
    return m_enableMultiZonesHasBeenSet;
}

NetworkInfo CreateInstanceNewRequest::GetUserMultiZoneInfos() const
{
    return m_userMultiZoneInfos;
}

void CreateInstanceNewRequest::SetUserMultiZoneInfos(const NetworkInfo& _userMultiZoneInfos)
{
    m_userMultiZoneInfos = _userMultiZoneInfos;
    m_userMultiZoneInfosHasBeenSet = true;
}

bool CreateInstanceNewRequest::UserMultiZoneInfosHasBeenSet() const
{
    return m_userMultiZoneInfosHasBeenSet;
}

vector<NetworkInfo> CreateInstanceNewRequest::GetUserMultiZoneInfoArr() const
{
    return m_userMultiZoneInfoArr;
}

void CreateInstanceNewRequest::SetUserMultiZoneInfoArr(const vector<NetworkInfo>& _userMultiZoneInfoArr)
{
    m_userMultiZoneInfoArr = _userMultiZoneInfoArr;
    m_userMultiZoneInfoArrHasBeenSet = true;
}

bool CreateInstanceNewRequest::UserMultiZoneInfoArrHasBeenSet() const
{
    return m_userMultiZoneInfoArrHasBeenSet;
}

bool CreateInstanceNewRequest::GetIsSSC() const
{
    return m_isSSC;
}

void CreateInstanceNewRequest::SetIsSSC(const bool& _isSSC)
{
    m_isSSC = _isSSC;
    m_isSSCHasBeenSet = true;
}

bool CreateInstanceNewRequest::IsSSCHasBeenSet() const
{
    return m_isSSCHasBeenSet;
}

int64_t CreateInstanceNewRequest::GetSSCCU() const
{
    return m_sSCCU;
}

void CreateInstanceNewRequest::SetSSCCU(const int64_t& _sSCCU)
{
    m_sSCCU = _sSCCU;
    m_sSCCUHasBeenSet = true;
}

bool CreateInstanceNewRequest::SSCCUHasBeenSet() const
{
    return m_sSCCUHasBeenSet;
}

string CreateInstanceNewRequest::GetCacheDiskSize() const
{
    return m_cacheDiskSize;
}

void CreateInstanceNewRequest::SetCacheDiskSize(const string& _cacheDiskSize)
{
    m_cacheDiskSize = _cacheDiskSize;
    m_cacheDiskSizeHasBeenSet = true;
}

bool CreateInstanceNewRequest::CacheDiskSizeHasBeenSet() const
{
    return m_cacheDiskSizeHasBeenSet;
}

int64_t CreateInstanceNewRequest::GetCacheDataDiskSize() const
{
    return m_cacheDataDiskSize;
}

void CreateInstanceNewRequest::SetCacheDataDiskSize(const int64_t& _cacheDataDiskSize)
{
    m_cacheDataDiskSize = _cacheDataDiskSize;
    m_cacheDataDiskSizeHasBeenSet = true;
}

bool CreateInstanceNewRequest::CacheDataDiskSizeHasBeenSet() const
{
    return m_cacheDataDiskSizeHasBeenSet;
}


