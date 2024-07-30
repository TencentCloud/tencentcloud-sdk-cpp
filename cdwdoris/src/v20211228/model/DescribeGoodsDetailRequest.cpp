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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeGoodsDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeGoodsDetailRequest::DescribeGoodsDetailRequest() :
    m_caseHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_haFlagHasBeenSet(false),
    m_haTypeHasBeenSet(false),
    m_userVPCIdHasBeenSet(false),
    m_userSubnetIdHasBeenSet(false),
    m_productVersionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_modifySpecHasBeenSet(false),
    m_chargePropertiesHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clsLogSetIdHasBeenSet(false),
    m_userSubnetIPNumHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_hourToPrepaidHasBeenSet(false),
    m_dorisUserPwdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_caseSensitiveHasBeenSet(false),
    m_rollingRestartHasBeenSet(false),
    m_enableMultiZonesHasBeenSet(false),
    m_userMultiZoneInfosHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

string DescribeGoodsDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_caseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Case";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_case.c_str(), allocator).Move(), allocator);
    }

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

    if (m_haTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_haType, allocator);
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modifySpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifySpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifySpec.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_clsLogSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsLogSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubnetIPNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubnetIPNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userSubnetIPNum, allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_hourToPrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HourToPrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hourToPrepaid, allocator);
    }

    if (m_dorisUserPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DorisUserPwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dorisUserPwd.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_caseSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseSensitive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_caseSensitive, allocator);
    }

    if (m_rollingRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollingRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollingRestart, allocator);
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
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userMultiZoneInfos.begin(); itr != m_userMultiZoneInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_details.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGoodsDetailRequest::GetCase() const
{
    return m_case;
}

void DescribeGoodsDetailRequest::SetCase(const string& _case)
{
    m_case = _case;
    m_caseHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::CaseHasBeenSet() const
{
    return m_caseHasBeenSet;
}

string DescribeGoodsDetailRequest::GetZone() const
{
    return m_zone;
}

void DescribeGoodsDetailRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

bool DescribeGoodsDetailRequest::GetHaFlag() const
{
    return m_haFlag;
}

void DescribeGoodsDetailRequest::SetHaFlag(const bool& _haFlag)
{
    m_haFlag = _haFlag;
    m_haFlagHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::HaFlagHasBeenSet() const
{
    return m_haFlagHasBeenSet;
}

int64_t DescribeGoodsDetailRequest::GetHaType() const
{
    return m_haType;
}

void DescribeGoodsDetailRequest::SetHaType(const int64_t& _haType)
{
    m_haType = _haType;
    m_haTypeHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::HaTypeHasBeenSet() const
{
    return m_haTypeHasBeenSet;
}

string DescribeGoodsDetailRequest::GetUserVPCId() const
{
    return m_userVPCId;
}

void DescribeGoodsDetailRequest::SetUserVPCId(const string& _userVPCId)
{
    m_userVPCId = _userVPCId;
    m_userVPCIdHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::UserVPCIdHasBeenSet() const
{
    return m_userVPCIdHasBeenSet;
}

string DescribeGoodsDetailRequest::GetUserSubnetId() const
{
    return m_userSubnetId;
}

void DescribeGoodsDetailRequest::SetUserSubnetId(const string& _userSubnetId)
{
    m_userSubnetId = _userSubnetId;
    m_userSubnetIdHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::UserSubnetIdHasBeenSet() const
{
    return m_userSubnetIdHasBeenSet;
}

string DescribeGoodsDetailRequest::GetProductVersion() const
{
    return m_productVersion;
}

void DescribeGoodsDetailRequest::SetProductVersion(const string& _productVersion)
{
    m_productVersion = _productVersion;
    m_productVersionHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::ProductVersionHasBeenSet() const
{
    return m_productVersionHasBeenSet;
}

string DescribeGoodsDetailRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeGoodsDetailRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<ResourceNodeSpec> DescribeGoodsDetailRequest::GetResources() const
{
    return m_resources;
}

void DescribeGoodsDetailRequest::SetResources(const vector<ResourceNodeSpec>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

ResourceNodeSpec DescribeGoodsDetailRequest::GetModifySpec() const
{
    return m_modifySpec;
}

void DescribeGoodsDetailRequest::SetModifySpec(const ResourceNodeSpec& _modifySpec)
{
    m_modifySpec = _modifySpec;
    m_modifySpecHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::ModifySpecHasBeenSet() const
{
    return m_modifySpecHasBeenSet;
}

ChargeProperties DescribeGoodsDetailRequest::GetChargeProperties() const
{
    return m_chargeProperties;
}

void DescribeGoodsDetailRequest::SetChargeProperties(const ChargeProperties& _chargeProperties)
{
    m_chargeProperties = _chargeProperties;
    m_chargePropertiesHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::ChargePropertiesHasBeenSet() const
{
    return m_chargePropertiesHasBeenSet;
}

string DescribeGoodsDetailRequest::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeGoodsDetailRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<Tag> DescribeGoodsDetailRequest::GetTags() const
{
    return m_tags;
}

void DescribeGoodsDetailRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeGoodsDetailRequest::GetClsLogSetId() const
{
    return m_clsLogSetId;
}

void DescribeGoodsDetailRequest::SetClsLogSetId(const string& _clsLogSetId)
{
    m_clsLogSetId = _clsLogSetId;
    m_clsLogSetIdHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::ClsLogSetIdHasBeenSet() const
{
    return m_clsLogSetIdHasBeenSet;
}

int64_t DescribeGoodsDetailRequest::GetUserSubnetIPNum() const
{
    return m_userSubnetIPNum;
}

void DescribeGoodsDetailRequest::SetUserSubnetIPNum(const int64_t& _userSubnetIPNum)
{
    m_userSubnetIPNum = _userSubnetIPNum;
    m_userSubnetIPNumHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::UserSubnetIPNumHasBeenSet() const
{
    return m_userSubnetIPNumHasBeenSet;
}

string DescribeGoodsDetailRequest::GetCosBucketName() const
{
    return m_cosBucketName;
}

void DescribeGoodsDetailRequest::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

bool DescribeGoodsDetailRequest::GetHourToPrepaid() const
{
    return m_hourToPrepaid;
}

void DescribeGoodsDetailRequest::SetHourToPrepaid(const bool& _hourToPrepaid)
{
    m_hourToPrepaid = _hourToPrepaid;
    m_hourToPrepaidHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::HourToPrepaidHasBeenSet() const
{
    return m_hourToPrepaidHasBeenSet;
}

string DescribeGoodsDetailRequest::GetDorisUserPwd() const
{
    return m_dorisUserPwd;
}

void DescribeGoodsDetailRequest::SetDorisUserPwd(const string& _dorisUserPwd)
{
    m_dorisUserPwd = _dorisUserPwd;
    m_dorisUserPwdHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::DorisUserPwdHasBeenSet() const
{
    return m_dorisUserPwdHasBeenSet;
}

string DescribeGoodsDetailRequest::GetLogType() const
{
    return m_logType;
}

void DescribeGoodsDetailRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

int64_t DescribeGoodsDetailRequest::GetCaseSensitive() const
{
    return m_caseSensitive;
}

void DescribeGoodsDetailRequest::SetCaseSensitive(const int64_t& _caseSensitive)
{
    m_caseSensitive = _caseSensitive;
    m_caseSensitiveHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::CaseSensitiveHasBeenSet() const
{
    return m_caseSensitiveHasBeenSet;
}

bool DescribeGoodsDetailRequest::GetRollingRestart() const
{
    return m_rollingRestart;
}

void DescribeGoodsDetailRequest::SetRollingRestart(const bool& _rollingRestart)
{
    m_rollingRestart = _rollingRestart;
    m_rollingRestartHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::RollingRestartHasBeenSet() const
{
    return m_rollingRestartHasBeenSet;
}

bool DescribeGoodsDetailRequest::GetEnableMultiZones() const
{
    return m_enableMultiZones;
}

void DescribeGoodsDetailRequest::SetEnableMultiZones(const bool& _enableMultiZones)
{
    m_enableMultiZones = _enableMultiZones;
    m_enableMultiZonesHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::EnableMultiZonesHasBeenSet() const
{
    return m_enableMultiZonesHasBeenSet;
}

vector<NetworkInfo> DescribeGoodsDetailRequest::GetUserMultiZoneInfos() const
{
    return m_userMultiZoneInfos;
}

void DescribeGoodsDetailRequest::SetUserMultiZoneInfos(const vector<NetworkInfo>& _userMultiZoneInfos)
{
    m_userMultiZoneInfos = _userMultiZoneInfos;
    m_userMultiZoneInfosHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::UserMultiZoneInfosHasBeenSet() const
{
    return m_userMultiZoneInfosHasBeenSet;
}

InstanceDetail DescribeGoodsDetailRequest::GetDetails() const
{
    return m_details;
}

void DescribeGoodsDetailRequest::SetDetails(const InstanceDetail& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool DescribeGoodsDetailRequest::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}


