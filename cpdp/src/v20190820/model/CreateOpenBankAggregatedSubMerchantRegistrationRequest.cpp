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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankAggregatedSubMerchantRegistrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankAggregatedSubMerchantRegistrationRequest::CreateOpenBankAggregatedSubMerchantRegistrationRequest() :
    m_outRegistrationNoHasBeenSet(false),
    m_channelMerchantIdHasBeenSet(false),
    m_outSubMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_outSubMerchantTypeHasBeenSet(false),
    m_outSubMerchantNameHasBeenSet(false),
    m_legalPersonInfoHasBeenSet(false),
    m_businessLicenseInfoHasBeenSet(false),
    m_interConnectionSubMerchantDataHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_outSubMerchantShortNameHasBeenSet(false),
    m_outSubMerchantDescriptionHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_naturalPersonListHasBeenSet(false),
    m_settleInfoHasBeenSet(false),
    m_outSubMerchantExtensionInfoHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_outRegistrationNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutRegistrationNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outRegistrationNo.c_str(), allocator).Move(), allocator);
    }

    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantType.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPersonInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_legalPersonInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_businessLicenseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_businessLicenseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_interConnectionSubMerchantDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterConnectionSubMerchantData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interConnectionSubMerchantData.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantShortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantShortName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantShortName.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_naturalPersonListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NaturalPersonList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_naturalPersonList.begin(); itr != m_naturalPersonList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_settleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_settleInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outSubMerchantExtensionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantExtensionInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outSubMerchantExtensionInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetOutRegistrationNo() const
{
    return m_outRegistrationNo;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetOutRegistrationNo(const string& _outRegistrationNo)
{
    m_outRegistrationNo = _outRegistrationNo;
    m_outRegistrationNoHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::OutRegistrationNoHasBeenSet() const
{
    return m_outRegistrationNoHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetOutSubMerchantId() const
{
    return m_outSubMerchantId;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetOutSubMerchantId(const string& _outSubMerchantId)
{
    m_outSubMerchantId = _outSubMerchantId;
    m_outSubMerchantIdHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::OutSubMerchantIdHasBeenSet() const
{
    return m_outSubMerchantIdHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetOutSubMerchantType() const
{
    return m_outSubMerchantType;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetOutSubMerchantType(const string& _outSubMerchantType)
{
    m_outSubMerchantType = _outSubMerchantType;
    m_outSubMerchantTypeHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::OutSubMerchantTypeHasBeenSet() const
{
    return m_outSubMerchantTypeHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetOutSubMerchantName() const
{
    return m_outSubMerchantName;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetOutSubMerchantName(const string& _outSubMerchantName)
{
    m_outSubMerchantName = _outSubMerchantName;
    m_outSubMerchantNameHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::OutSubMerchantNameHasBeenSet() const
{
    return m_outSubMerchantNameHasBeenSet;
}

LegalPersonInfo CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetLegalPersonInfo() const
{
    return m_legalPersonInfo;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetLegalPersonInfo(const LegalPersonInfo& _legalPersonInfo)
{
    m_legalPersonInfo = _legalPersonInfo;
    m_legalPersonInfoHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::LegalPersonInfoHasBeenSet() const
{
    return m_legalPersonInfoHasBeenSet;
}

BusinessLicenseInfo CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetBusinessLicenseInfo() const
{
    return m_businessLicenseInfo;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetBusinessLicenseInfo(const BusinessLicenseInfo& _businessLicenseInfo)
{
    m_businessLicenseInfo = _businessLicenseInfo;
    m_businessLicenseInfoHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::BusinessLicenseInfoHasBeenSet() const
{
    return m_businessLicenseInfoHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetInterConnectionSubMerchantData() const
{
    return m_interConnectionSubMerchantData;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetInterConnectionSubMerchantData(const string& _interConnectionSubMerchantData)
{
    m_interConnectionSubMerchantData = _interConnectionSubMerchantData;
    m_interConnectionSubMerchantDataHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::InterConnectionSubMerchantDataHasBeenSet() const
{
    return m_interConnectionSubMerchantDataHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetOutSubMerchantShortName() const
{
    return m_outSubMerchantShortName;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetOutSubMerchantShortName(const string& _outSubMerchantShortName)
{
    m_outSubMerchantShortName = _outSubMerchantShortName;
    m_outSubMerchantShortNameHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::OutSubMerchantShortNameHasBeenSet() const
{
    return m_outSubMerchantShortNameHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetOutSubMerchantDescription() const
{
    return m_outSubMerchantDescription;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetOutSubMerchantDescription(const string& _outSubMerchantDescription)
{
    m_outSubMerchantDescription = _outSubMerchantDescription;
    m_outSubMerchantDescriptionHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::OutSubMerchantDescriptionHasBeenSet() const
{
    return m_outSubMerchantDescriptionHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

vector<NaturalPersonInfo> CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetNaturalPersonList() const
{
    return m_naturalPersonList;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetNaturalPersonList(const vector<NaturalPersonInfo>& _naturalPersonList)
{
    m_naturalPersonList = _naturalPersonList;
    m_naturalPersonListHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::NaturalPersonListHasBeenSet() const
{
    return m_naturalPersonListHasBeenSet;
}

SettleInfo CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetSettleInfo() const
{
    return m_settleInfo;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetSettleInfo(const SettleInfo& _settleInfo)
{
    m_settleInfo = _settleInfo;
    m_settleInfoHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::SettleInfoHasBeenSet() const
{
    return m_settleInfoHasBeenSet;
}

OutSubMerchantExtensionInfo CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetOutSubMerchantExtensionInfo() const
{
    return m_outSubMerchantExtensionInfo;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetOutSubMerchantExtensionInfo(const OutSubMerchantExtensionInfo& _outSubMerchantExtensionInfo)
{
    m_outSubMerchantExtensionInfo = _outSubMerchantExtensionInfo;
    m_outSubMerchantExtensionInfoHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::OutSubMerchantExtensionInfoHasBeenSet() const
{
    return m_outSubMerchantExtensionInfoHasBeenSet;
}

string CreateOpenBankAggregatedSubMerchantRegistrationRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateOpenBankAggregatedSubMerchantRegistrationRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateOpenBankAggregatedSubMerchantRegistrationRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


