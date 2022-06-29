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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankExternalAggregatedSubMerchantRegistrationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::CreateOpenBankExternalAggregatedSubMerchantRegistrationResult() :
    m_registrationStatusHasBeenSet(false),
    m_registrationMessageHasBeenSet(false),
    m_channelRegistrationNoHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistrationStatus") && !value["RegistrationStatus"].IsNull())
    {
        if (!value["RegistrationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankExternalAggregatedSubMerchantRegistrationResult.RegistrationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationStatus = string(value["RegistrationStatus"].GetString());
        m_registrationStatusHasBeenSet = true;
    }

    if (value.HasMember("RegistrationMessage") && !value["RegistrationMessage"].IsNull())
    {
        if (!value["RegistrationMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankExternalAggregatedSubMerchantRegistrationResult.RegistrationMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationMessage = string(value["RegistrationMessage"].GetString());
        m_registrationMessageHasBeenSet = true;
    }

    if (value.HasMember("ChannelRegistrationNo") && !value["ChannelRegistrationNo"].IsNull())
    {
        if (!value["ChannelRegistrationNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankExternalAggregatedSubMerchantRegistrationResult.ChannelRegistrationNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelRegistrationNo = string(value["ChannelRegistrationNo"].GetString());
        m_channelRegistrationNoHasBeenSet = true;
    }

    if (value.HasMember("ChannelSubMerchantId") && !value["ChannelSubMerchantId"].IsNull())
    {
        if (!value["ChannelSubMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankExternalAggregatedSubMerchantRegistrationResult.ChannelSubMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSubMerchantId = string(value["ChannelSubMerchantId"].GetString());
        m_channelSubMerchantIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::GetRegistrationStatus() const
{
    return m_registrationStatus;
}

void CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::SetRegistrationStatus(const string& _registrationStatus)
{
    m_registrationStatus = _registrationStatus;
    m_registrationStatusHasBeenSet = true;
}

bool CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::RegistrationStatusHasBeenSet() const
{
    return m_registrationStatusHasBeenSet;
}

string CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::GetRegistrationMessage() const
{
    return m_registrationMessage;
}

void CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::SetRegistrationMessage(const string& _registrationMessage)
{
    m_registrationMessage = _registrationMessage;
    m_registrationMessageHasBeenSet = true;
}

bool CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::RegistrationMessageHasBeenSet() const
{
    return m_registrationMessageHasBeenSet;
}

string CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::GetChannelRegistrationNo() const
{
    return m_channelRegistrationNo;
}

void CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::SetChannelRegistrationNo(const string& _channelRegistrationNo)
{
    m_channelRegistrationNo = _channelRegistrationNo;
    m_channelRegistrationNoHasBeenSet = true;
}

bool CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::ChannelRegistrationNoHasBeenSet() const
{
    return m_channelRegistrationNoHasBeenSet;
}

string CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool CreateOpenBankExternalAggregatedSubMerchantRegistrationResult::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

