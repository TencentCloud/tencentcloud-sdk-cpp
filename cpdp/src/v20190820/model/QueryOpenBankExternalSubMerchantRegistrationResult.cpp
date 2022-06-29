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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankExternalSubMerchantRegistrationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankExternalSubMerchantRegistrationResult::QueryOpenBankExternalSubMerchantRegistrationResult() :
    m_registrationStatusHasBeenSet(false),
    m_registrationMessageHasBeenSet(false),
    m_channelRegistrationNoHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_outSubMerchantNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_businessLicenseNumberHasBeenSet(false),
    m_legalNameHasBeenSet(false),
    m_externalReturnDataHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankExternalSubMerchantRegistrationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistrationStatus") && !value["RegistrationStatus"].IsNull())
    {
        if (!value["RegistrationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.RegistrationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationStatus = string(value["RegistrationStatus"].GetString());
        m_registrationStatusHasBeenSet = true;
    }

    if (value.HasMember("RegistrationMessage") && !value["RegistrationMessage"].IsNull())
    {
        if (!value["RegistrationMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.RegistrationMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationMessage = string(value["RegistrationMessage"].GetString());
        m_registrationMessageHasBeenSet = true;
    }

    if (value.HasMember("ChannelRegistrationNo") && !value["ChannelRegistrationNo"].IsNull())
    {
        if (!value["ChannelRegistrationNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.ChannelRegistrationNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelRegistrationNo = string(value["ChannelRegistrationNo"].GetString());
        m_channelRegistrationNoHasBeenSet = true;
    }

    if (value.HasMember("ChannelSubMerchantId") && !value["ChannelSubMerchantId"].IsNull())
    {
        if (!value["ChannelSubMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.ChannelSubMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSubMerchantId = string(value["ChannelSubMerchantId"].GetString());
        m_channelSubMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("OutSubMerchantName") && !value["OutSubMerchantName"].IsNull())
    {
        if (!value["OutSubMerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.OutSubMerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outSubMerchantName = string(value["OutSubMerchantName"].GetString());
        m_outSubMerchantNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("PaymentMethod") && !value["PaymentMethod"].IsNull())
    {
        if (!value["PaymentMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.PaymentMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentMethod = string(value["PaymentMethod"].GetString());
        m_paymentMethodHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicenseNumber") && !value["BusinessLicenseNumber"].IsNull())
    {
        if (!value["BusinessLicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.BusinessLicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseNumber = string(value["BusinessLicenseNumber"].GetString());
        m_businessLicenseNumberHasBeenSet = true;
    }

    if (value.HasMember("LegalName") && !value["LegalName"].IsNull())
    {
        if (!value["LegalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.LegalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalName = string(value["LegalName"].GetString());
        m_legalNameHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnData") && !value["ExternalReturnData"].IsNull())
    {
        if (!value["ExternalReturnData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantRegistrationResult.ExternalReturnData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnData = string(value["ExternalReturnData"].GetString());
        m_externalReturnDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankExternalSubMerchantRegistrationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registrationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_channelRegistrationNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelRegistrationNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelRegistrationNo.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outSubMerchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnData.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankExternalSubMerchantRegistrationResult::GetRegistrationStatus() const
{
    return m_registrationStatus;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetRegistrationStatus(const string& _registrationStatus)
{
    m_registrationStatus = _registrationStatus;
    m_registrationStatusHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::RegistrationStatusHasBeenSet() const
{
    return m_registrationStatusHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationResult::GetRegistrationMessage() const
{
    return m_registrationMessage;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetRegistrationMessage(const string& _registrationMessage)
{
    m_registrationMessage = _registrationMessage;
    m_registrationMessageHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::RegistrationMessageHasBeenSet() const
{
    return m_registrationMessageHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationResult::GetChannelRegistrationNo() const
{
    return m_channelRegistrationNo;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetChannelRegistrationNo(const string& _channelRegistrationNo)
{
    m_channelRegistrationNo = _channelRegistrationNo;
    m_channelRegistrationNoHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::ChannelRegistrationNoHasBeenSet() const
{
    return m_channelRegistrationNoHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationResult::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationResult::GetOutSubMerchantName() const
{
    return m_outSubMerchantName;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetOutSubMerchantName(const string& _outSubMerchantName)
{
    m_outSubMerchantName = _outSubMerchantName;
    m_outSubMerchantNameHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::OutSubMerchantNameHasBeenSet() const
{
    return m_outSubMerchantNameHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationResult::GetChannelName() const
{
    return m_channelName;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationResult::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationResult::GetBusinessLicenseNumber() const
{
    return m_businessLicenseNumber;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetBusinessLicenseNumber(const string& _businessLicenseNumber)
{
    m_businessLicenseNumber = _businessLicenseNumber;
    m_businessLicenseNumberHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::BusinessLicenseNumberHasBeenSet() const
{
    return m_businessLicenseNumberHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationResult::GetLegalName() const
{
    return m_legalName;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationResult::GetExternalReturnData() const
{
    return m_externalReturnData;
}

void QueryOpenBankExternalSubMerchantRegistrationResult::SetExternalReturnData(const string& _externalReturnData)
{
    m_externalReturnData = _externalReturnData;
    m_externalReturnDataHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationResult::ExternalReturnDataHasBeenSet() const
{
    return m_externalReturnDataHasBeenSet;
}

