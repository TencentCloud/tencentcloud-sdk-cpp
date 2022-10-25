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

#include <tencentcloud/cpdp/v20190820/model/BindOpenBankProfitSharePayeeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BindOpenBankProfitSharePayeeRequest::BindOpenBankProfitSharePayeeRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_accountNoHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_profitSharePayeeInfoHasBeenSet(false),
    m_externalProfitSharingDataHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string BindOpenBankProfitSharePayeeRequest::ToJsonString() const
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

    if (m_accountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountNo.c_str(), allocator).Move(), allocator);
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

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_profitSharePayeeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitSharePayeeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profitSharePayeeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_externalProfitSharingDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalProfitSharingData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalProfitSharingData.c_str(), allocator).Move(), allocator);
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


string BindOpenBankProfitSharePayeeRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void BindOpenBankProfitSharePayeeRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string BindOpenBankProfitSharePayeeRequest::GetAccountNo() const
{
    return m_accountNo;
}

void BindOpenBankProfitSharePayeeRequest::SetAccountNo(const string& _accountNo)
{
    m_accountNo = _accountNo;
    m_accountNoHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeRequest::AccountNoHasBeenSet() const
{
    return m_accountNoHasBeenSet;
}

string BindOpenBankProfitSharePayeeRequest::GetChannelName() const
{
    return m_channelName;
}

void BindOpenBankProfitSharePayeeRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string BindOpenBankProfitSharePayeeRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void BindOpenBankProfitSharePayeeRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string BindOpenBankProfitSharePayeeRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void BindOpenBankProfitSharePayeeRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

OpenBankProfitSharePayeeInfo BindOpenBankProfitSharePayeeRequest::GetProfitSharePayeeInfo() const
{
    return m_profitSharePayeeInfo;
}

void BindOpenBankProfitSharePayeeRequest::SetProfitSharePayeeInfo(const OpenBankProfitSharePayeeInfo& _profitSharePayeeInfo)
{
    m_profitSharePayeeInfo = _profitSharePayeeInfo;
    m_profitSharePayeeInfoHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeRequest::ProfitSharePayeeInfoHasBeenSet() const
{
    return m_profitSharePayeeInfoHasBeenSet;
}

string BindOpenBankProfitSharePayeeRequest::GetExternalProfitSharingData() const
{
    return m_externalProfitSharingData;
}

void BindOpenBankProfitSharePayeeRequest::SetExternalProfitSharingData(const string& _externalProfitSharingData)
{
    m_externalProfitSharingData = _externalProfitSharingData;
    m_externalProfitSharingDataHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeRequest::ExternalProfitSharingDataHasBeenSet() const
{
    return m_externalProfitSharingDataHasBeenSet;
}

string BindOpenBankProfitSharePayeeRequest::GetEnvironment() const
{
    return m_environment;
}

void BindOpenBankProfitSharePayeeRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


