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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankSubMerchantRateConfigureRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankSubMerchantRateConfigureRequest::CreateOpenBankSubMerchantRateConfigureRequest() :
    m_channelRegistrationNoHasBeenSet(false),
    m_outProductFeeNoHasBeenSet(false),
    m_channelMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_feeModeHasBeenSet(false),
    m_feeValueHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_minFeeHasBeenSet(false),
    m_maxFeeHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_feeRangeListHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateOpenBankSubMerchantRateConfigureRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelRegistrationNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelRegistrationNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelRegistrationNo.c_str(), allocator).Move(), allocator);
    }

    if (m_outProductFeeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutProductFeeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outProductFeeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_payChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_feeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_feeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_feeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_feeValue, allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_minFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinFee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minFee, allocator);
    }

    if (m_maxFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFee, allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_feeRangeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeRangeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_feeRangeList.begin(); itr != m_feeRangeList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string CreateOpenBankSubMerchantRateConfigureRequest::GetChannelRegistrationNo() const
{
    return m_channelRegistrationNo;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetChannelRegistrationNo(const string& _channelRegistrationNo)
{
    m_channelRegistrationNo = _channelRegistrationNo;
    m_channelRegistrationNoHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::ChannelRegistrationNoHasBeenSet() const
{
    return m_channelRegistrationNoHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetOutProductFeeNo() const
{
    return m_outProductFeeNo;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetOutProductFeeNo(const string& _outProductFeeNo)
{
    m_outProductFeeNo = _outProductFeeNo;
    m_outProductFeeNoHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::OutProductFeeNoHasBeenSet() const
{
    return m_outProductFeeNoHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetPayType() const
{
    return m_payType;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetPayChannel() const
{
    return m_payChannel;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetFeeMode() const
{
    return m_feeMode;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetFeeMode(const string& _feeMode)
{
    m_feeMode = _feeMode;
    m_feeModeHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::FeeModeHasBeenSet() const
{
    return m_feeModeHasBeenSet;
}

uint64_t CreateOpenBankSubMerchantRateConfigureRequest::GetFeeValue() const
{
    return m_feeValue;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetFeeValue(const uint64_t& _feeValue)
{
    m_feeValue = _feeValue;
    m_feeValueHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::FeeValueHasBeenSet() const
{
    return m_feeValueHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

uint64_t CreateOpenBankSubMerchantRateConfigureRequest::GetMinFee() const
{
    return m_minFee;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetMinFee(const uint64_t& _minFee)
{
    m_minFee = _minFee;
    m_minFeeHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::MinFeeHasBeenSet() const
{
    return m_minFeeHasBeenSet;
}

uint64_t CreateOpenBankSubMerchantRateConfigureRequest::GetMaxFee() const
{
    return m_maxFee;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetMaxFee(const uint64_t& _maxFee)
{
    m_maxFee = _maxFee;
    m_maxFeeHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::MaxFeeHasBeenSet() const
{
    return m_maxFeeHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

vector<FeeRangInfo> CreateOpenBankSubMerchantRateConfigureRequest::GetFeeRangeList() const
{
    return m_feeRangeList;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetFeeRangeList(const vector<FeeRangInfo>& _feeRangeList)
{
    m_feeRangeList = _feeRangeList;
    m_feeRangeListHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::FeeRangeListHasBeenSet() const
{
    return m_feeRangeListHasBeenSet;
}

string CreateOpenBankSubMerchantRateConfigureRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateOpenBankSubMerchantRateConfigureRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateOpenBankSubMerchantRateConfigureRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


