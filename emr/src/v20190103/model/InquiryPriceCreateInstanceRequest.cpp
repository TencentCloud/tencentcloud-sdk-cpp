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

#include <tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceCreateInstanceRequest::InquiryPriceCreateInstanceRequest() :
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_resourceSpecHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_supportHAHasBeenSet(false),
    m_softwareHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_vPCSettingsHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_unifyMetaInstanceIdHasBeenSet(false),
    m_metaDBInfoHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

string InquiryPriceCreateInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_resourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_currencyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_supportHAHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SupportHA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_supportHA, allocator);
    }

    if (m_softwareHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Software";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_software.begin(); itr != m_software.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vPCSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VPCSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_vPCSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_unifyMetaInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnifyMetaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_unifyMetaInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDBInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetaDBInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_metaDBInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceCreateInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void InquiryPriceCreateInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t InquiryPriceCreateInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void InquiryPriceCreateInstanceRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

NewResourceSpec InquiryPriceCreateInstanceRequest::GetResourceSpec() const
{
    return m_resourceSpec;
}

void InquiryPriceCreateInstanceRequest::SetResourceSpec(const NewResourceSpec& _resourceSpec)
{
    m_resourceSpec = _resourceSpec;
    m_resourceSpecHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::ResourceSpecHasBeenSet() const
{
    return m_resourceSpecHasBeenSet;
}

string InquiryPriceCreateInstanceRequest::GetCurrency() const
{
    return m_currency;
}

void InquiryPriceCreateInstanceRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

uint64_t InquiryPriceCreateInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void InquiryPriceCreateInstanceRequest::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t InquiryPriceCreateInstanceRequest::GetSupportHA() const
{
    return m_supportHA;
}

void InquiryPriceCreateInstanceRequest::SetSupportHA(const uint64_t& _supportHA)
{
    m_supportHA = _supportHA;
    m_supportHAHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::SupportHAHasBeenSet() const
{
    return m_supportHAHasBeenSet;
}

vector<string> InquiryPriceCreateInstanceRequest::GetSoftware() const
{
    return m_software;
}

void InquiryPriceCreateInstanceRequest::SetSoftware(const vector<string>& _software)
{
    m_software = _software;
    m_softwareHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::SoftwareHasBeenSet() const
{
    return m_softwareHasBeenSet;
}

Placement InquiryPriceCreateInstanceRequest::GetPlacement() const
{
    return m_placement;
}

void InquiryPriceCreateInstanceRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

VPCSettings InquiryPriceCreateInstanceRequest::GetVPCSettings() const
{
    return m_vPCSettings;
}

void InquiryPriceCreateInstanceRequest::SetVPCSettings(const VPCSettings& _vPCSettings)
{
    m_vPCSettings = _vPCSettings;
    m_vPCSettingsHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::VPCSettingsHasBeenSet() const
{
    return m_vPCSettingsHasBeenSet;
}

string InquiryPriceCreateInstanceRequest::GetMetaType() const
{
    return m_metaType;
}

void InquiryPriceCreateInstanceRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string InquiryPriceCreateInstanceRequest::GetUnifyMetaInstanceId() const
{
    return m_unifyMetaInstanceId;
}

void InquiryPriceCreateInstanceRequest::SetUnifyMetaInstanceId(const string& _unifyMetaInstanceId)
{
    m_unifyMetaInstanceId = _unifyMetaInstanceId;
    m_unifyMetaInstanceIdHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::UnifyMetaInstanceIdHasBeenSet() const
{
    return m_unifyMetaInstanceIdHasBeenSet;
}

CustomMetaInfo InquiryPriceCreateInstanceRequest::GetMetaDBInfo() const
{
    return m_metaDBInfo;
}

void InquiryPriceCreateInstanceRequest::SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo)
{
    m_metaDBInfo = _metaDBInfo;
    m_metaDBInfoHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::MetaDBInfoHasBeenSet() const
{
    return m_metaDBInfoHasBeenSet;
}

uint64_t InquiryPriceCreateInstanceRequest::GetProductId() const
{
    return m_productId;
}

void InquiryPriceCreateInstanceRequest::SetProductId(const uint64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}


