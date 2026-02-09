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

#include <tencentcloud/tcb/v20180608/model/CreateBillDealRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateBillDealRequest::CreateBillDealRequest() :
    m_dealTypeHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_createAndPayHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_enableExcessHasBeenSet(false),
    m_modifyPackageIdHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_envTagsHasBeenSet(false)
{
}

string CreateBillDealRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dealType.c_str(), allocator).Move(), allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_createAndPayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAndPay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createAndPay, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableExcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableExcess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableExcess, allocator);
    }

    if (m_modifyPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_resourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceTypes.begin(); itr != m_resourceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_envTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envTags.begin(); itr != m_envTags.end(); ++itr, ++i)
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


string CreateBillDealRequest::GetDealType() const
{
    return m_dealType;
}

void CreateBillDealRequest::SetDealType(const string& _dealType)
{
    m_dealType = _dealType;
    m_dealTypeHasBeenSet = true;
}

bool CreateBillDealRequest::DealTypeHasBeenSet() const
{
    return m_dealTypeHasBeenSet;
}

string CreateBillDealRequest::GetProductType() const
{
    return m_productType;
}

void CreateBillDealRequest::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool CreateBillDealRequest::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string CreateBillDealRequest::GetPackageId() const
{
    return m_packageId;
}

void CreateBillDealRequest::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool CreateBillDealRequest::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

bool CreateBillDealRequest::GetCreateAndPay() const
{
    return m_createAndPay;
}

void CreateBillDealRequest::SetCreateAndPay(const bool& _createAndPay)
{
    m_createAndPay = _createAndPay;
    m_createAndPayHasBeenSet = true;
}

bool CreateBillDealRequest::CreateAndPayHasBeenSet() const
{
    return m_createAndPayHasBeenSet;
}

uint64_t CreateBillDealRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateBillDealRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateBillDealRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateBillDealRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateBillDealRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateBillDealRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string CreateBillDealRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateBillDealRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateBillDealRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CreateBillDealRequest::GetSource() const
{
    return m_source;
}

void CreateBillDealRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateBillDealRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateBillDealRequest::GetAlias() const
{
    return m_alias;
}

void CreateBillDealRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CreateBillDealRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CreateBillDealRequest::GetEnvId() const
{
    return m_envId;
}

void CreateBillDealRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateBillDealRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

bool CreateBillDealRequest::GetEnableExcess() const
{
    return m_enableExcess;
}

void CreateBillDealRequest::SetEnableExcess(const bool& _enableExcess)
{
    m_enableExcess = _enableExcess;
    m_enableExcessHasBeenSet = true;
}

bool CreateBillDealRequest::EnableExcessHasBeenSet() const
{
    return m_enableExcessHasBeenSet;
}

string CreateBillDealRequest::GetModifyPackageId() const
{
    return m_modifyPackageId;
}

void CreateBillDealRequest::SetModifyPackageId(const string& _modifyPackageId)
{
    m_modifyPackageId = _modifyPackageId;
    m_modifyPackageIdHasBeenSet = true;
}

bool CreateBillDealRequest::ModifyPackageIdHasBeenSet() const
{
    return m_modifyPackageIdHasBeenSet;
}

string CreateBillDealRequest::GetExtension() const
{
    return m_extension;
}

void CreateBillDealRequest::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool CreateBillDealRequest::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

bool CreateBillDealRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateBillDealRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateBillDealRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateBillDealRequest::GetResourceTypes() const
{
    return m_resourceTypes;
}

void CreateBillDealRequest::SetResourceTypes(const vector<string>& _resourceTypes)
{
    m_resourceTypes = _resourceTypes;
    m_resourceTypesHasBeenSet = true;
}

bool CreateBillDealRequest::ResourceTypesHasBeenSet() const
{
    return m_resourceTypesHasBeenSet;
}

vector<Tag> CreateBillDealRequest::GetEnvTags() const
{
    return m_envTags;
}

void CreateBillDealRequest::SetEnvTags(const vector<Tag>& _envTags)
{
    m_envTags = _envTags;
    m_envTagsHasBeenSet = true;
}

bool CreateBillDealRequest::EnvTagsHasBeenSet() const
{
    return m_envTagsHasBeenSet;
}


