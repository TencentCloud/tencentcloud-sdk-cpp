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

#include <tencentcloud/antiddos/v20200309/model/CreateBgpInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CreateBgpInstanceRequest::CreateBgpInstanceRequest() :
    m_instanceChargeTypeHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_enterprisePackageConfigHasBeenSet(false),
    m_standardPackageConfigHasBeenSet(false),
    m_standardPlusPackageConfigHasBeenSet(false),
    m_tagInfoListHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string CreateBgpInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enterprisePackageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterprisePackageConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enterprisePackageConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_standardPackageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardPackageConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_standardPackageConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_standardPlusPackageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardPlusPackageConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_standardPlusPackageConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInfoList.begin(); itr != m_tagInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBgpInstanceRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateBgpInstanceRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateBgpInstanceRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string CreateBgpInstanceRequest::GetPackageType() const
{
    return m_packageType;
}

void CreateBgpInstanceRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool CreateBgpInstanceRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

uint64_t CreateBgpInstanceRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateBgpInstanceRequest::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateBgpInstanceRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

InstanceChargePrepaid CreateBgpInstanceRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreateBgpInstanceRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreateBgpInstanceRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

EnterprisePackageConfig CreateBgpInstanceRequest::GetEnterprisePackageConfig() const
{
    return m_enterprisePackageConfig;
}

void CreateBgpInstanceRequest::SetEnterprisePackageConfig(const EnterprisePackageConfig& _enterprisePackageConfig)
{
    m_enterprisePackageConfig = _enterprisePackageConfig;
    m_enterprisePackageConfigHasBeenSet = true;
}

bool CreateBgpInstanceRequest::EnterprisePackageConfigHasBeenSet() const
{
    return m_enterprisePackageConfigHasBeenSet;
}

StandardPackageConfig CreateBgpInstanceRequest::GetStandardPackageConfig() const
{
    return m_standardPackageConfig;
}

void CreateBgpInstanceRequest::SetStandardPackageConfig(const StandardPackageConfig& _standardPackageConfig)
{
    m_standardPackageConfig = _standardPackageConfig;
    m_standardPackageConfigHasBeenSet = true;
}

bool CreateBgpInstanceRequest::StandardPackageConfigHasBeenSet() const
{
    return m_standardPackageConfigHasBeenSet;
}

StandardPlusPackageConfig CreateBgpInstanceRequest::GetStandardPlusPackageConfig() const
{
    return m_standardPlusPackageConfig;
}

void CreateBgpInstanceRequest::SetStandardPlusPackageConfig(const StandardPlusPackageConfig& _standardPlusPackageConfig)
{
    m_standardPlusPackageConfig = _standardPlusPackageConfig;
    m_standardPlusPackageConfigHasBeenSet = true;
}

bool CreateBgpInstanceRequest::StandardPlusPackageConfigHasBeenSet() const
{
    return m_standardPlusPackageConfigHasBeenSet;
}

vector<TagInfo> CreateBgpInstanceRequest::GetTagInfoList() const
{
    return m_tagInfoList;
}

void CreateBgpInstanceRequest::SetTagInfoList(const vector<TagInfo>& _tagInfoList)
{
    m_tagInfoList = _tagInfoList;
    m_tagInfoListHasBeenSet = true;
}

bool CreateBgpInstanceRequest::TagInfoListHasBeenSet() const
{
    return m_tagInfoListHasBeenSet;
}

bool CreateBgpInstanceRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateBgpInstanceRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateBgpInstanceRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


