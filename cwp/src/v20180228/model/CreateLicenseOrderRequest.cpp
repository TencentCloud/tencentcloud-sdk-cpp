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

#include <tencentcloud/cwp/v20180228/model/CreateLicenseOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CreateLicenseOrderRequest::CreateLicenseOrderRequest() :
    m_tagsHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_licenseNumHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_autoProtectOpenConfigHasBeenSet(false),
    m_modifyConfigHasBeenSet(false)
{
}

string CreateLicenseOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_licenseType, allocator);
    }

    if (m_licenseNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_licenseNum, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regionId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_autoProtectOpenConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoProtectOpenConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoProtectOpenConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Tags> CreateLicenseOrderRequest::GetTags() const
{
    return m_tags;
}

void CreateLicenseOrderRequest::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateLicenseOrderRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t CreateLicenseOrderRequest::GetLicenseType() const
{
    return m_licenseType;
}

void CreateLicenseOrderRequest::SetLicenseType(const uint64_t& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool CreateLicenseOrderRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

uint64_t CreateLicenseOrderRequest::GetLicenseNum() const
{
    return m_licenseNum;
}

void CreateLicenseOrderRequest::SetLicenseNum(const uint64_t& _licenseNum)
{
    m_licenseNum = _licenseNum;
    m_licenseNumHasBeenSet = true;
}

bool CreateLicenseOrderRequest::LicenseNumHasBeenSet() const
{
    return m_licenseNumHasBeenSet;
}

uint64_t CreateLicenseOrderRequest::GetRegionId() const
{
    return m_regionId;
}

void CreateLicenseOrderRequest::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CreateLicenseOrderRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

uint64_t CreateLicenseOrderRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateLicenseOrderRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateLicenseOrderRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CreateLicenseOrderRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateLicenseOrderRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateLicenseOrderRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

bool CreateLicenseOrderRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateLicenseOrderRequest::SetAutoRenewFlag(const bool& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateLicenseOrderRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CreateLicenseOrderRequest::GetAutoProtectOpenConfig() const
{
    return m_autoProtectOpenConfig;
}

void CreateLicenseOrderRequest::SetAutoProtectOpenConfig(const string& _autoProtectOpenConfig)
{
    m_autoProtectOpenConfig = _autoProtectOpenConfig;
    m_autoProtectOpenConfigHasBeenSet = true;
}

bool CreateLicenseOrderRequest::AutoProtectOpenConfigHasBeenSet() const
{
    return m_autoProtectOpenConfigHasBeenSet;
}

OrderModifyObject CreateLicenseOrderRequest::GetModifyConfig() const
{
    return m_modifyConfig;
}

void CreateLicenseOrderRequest::SetModifyConfig(const OrderModifyObject& _modifyConfig)
{
    m_modifyConfig = _modifyConfig;
    m_modifyConfigHasBeenSet = true;
}

bool CreateLicenseOrderRequest::ModifyConfigHasBeenSet() const
{
    return m_modifyConfigHasBeenSet;
}


