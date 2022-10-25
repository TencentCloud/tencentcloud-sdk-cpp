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

#include <tencentcloud/cpdp/v20190820/model/ApplyOpenBankSettleOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyOpenBankSettleOrderRequest::ApplyOpenBankSettleOrderRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_outSettleIdHasBeenSet(false),
    m_settleAmountHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_settleDetailHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_externalSettleDataHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string ApplyOpenBankSettleOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outSettleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSettleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSettleId.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_settleAmount, allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_settleDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_settleDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_externalSettleDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalSettleData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalSettleData.c_str(), allocator).Move(), allocator);
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


string ApplyOpenBankSettleOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void ApplyOpenBankSettleOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string ApplyOpenBankSettleOrderRequest::GetOutSettleId() const
{
    return m_outSettleId;
}

void ApplyOpenBankSettleOrderRequest::SetOutSettleId(const string& _outSettleId)
{
    m_outSettleId = _outSettleId;
    m_outSettleIdHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::OutSettleIdHasBeenSet() const
{
    return m_outSettleIdHasBeenSet;
}

int64_t ApplyOpenBankSettleOrderRequest::GetSettleAmount() const
{
    return m_settleAmount;
}

void ApplyOpenBankSettleOrderRequest::SetSettleAmount(const int64_t& _settleAmount)
{
    m_settleAmount = _settleAmount;
    m_settleAmountHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::SettleAmountHasBeenSet() const
{
    return m_settleAmountHasBeenSet;
}

string ApplyOpenBankSettleOrderRequest::GetChannelName() const
{
    return m_channelName;
}

void ApplyOpenBankSettleOrderRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string ApplyOpenBankSettleOrderRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void ApplyOpenBankSettleOrderRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string ApplyOpenBankSettleOrderRequest::GetSettleDetail() const
{
    return m_settleDetail;
}

void ApplyOpenBankSettleOrderRequest::SetSettleDetail(const string& _settleDetail)
{
    m_settleDetail = _settleDetail;
    m_settleDetailHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::SettleDetailHasBeenSet() const
{
    return m_settleDetailHasBeenSet;
}

string ApplyOpenBankSettleOrderRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void ApplyOpenBankSettleOrderRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string ApplyOpenBankSettleOrderRequest::GetRemark() const
{
    return m_remark;
}

void ApplyOpenBankSettleOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ApplyOpenBankSettleOrderRequest::GetExternalSettleData() const
{
    return m_externalSettleData;
}

void ApplyOpenBankSettleOrderRequest::SetExternalSettleData(const string& _externalSettleData)
{
    m_externalSettleData = _externalSettleData;
    m_externalSettleDataHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::ExternalSettleDataHasBeenSet() const
{
    return m_externalSettleDataHasBeenSet;
}

string ApplyOpenBankSettleOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void ApplyOpenBankSettleOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


