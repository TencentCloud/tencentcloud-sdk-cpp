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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankExternalSubMerchantRegistrationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankExternalSubMerchantRegistrationResult::CreateOpenBankExternalSubMerchantRegistrationResult() :
    m_registrationStatusHasBeenSet(false),
    m_registrationMessageHasBeenSet(false),
    m_channelRegistrationNoHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_externalReturnDataHasBeenSet(false)
{
}

CoreInternalOutcome CreateOpenBankExternalSubMerchantRegistrationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistrationStatus") && !value["RegistrationStatus"].IsNull())
    {
        if (!value["RegistrationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankExternalSubMerchantRegistrationResult.RegistrationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationStatus = string(value["RegistrationStatus"].GetString());
        m_registrationStatusHasBeenSet = true;
    }

    if (value.HasMember("RegistrationMessage") && !value["RegistrationMessage"].IsNull())
    {
        if (!value["RegistrationMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankExternalSubMerchantRegistrationResult.RegistrationMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationMessage = string(value["RegistrationMessage"].GetString());
        m_registrationMessageHasBeenSet = true;
    }

    if (value.HasMember("ChannelRegistrationNo") && !value["ChannelRegistrationNo"].IsNull())
    {
        if (!value["ChannelRegistrationNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankExternalSubMerchantRegistrationResult.ChannelRegistrationNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelRegistrationNo = string(value["ChannelRegistrationNo"].GetString());
        m_channelRegistrationNoHasBeenSet = true;
    }

    if (value.HasMember("ChannelSubMerchantId") && !value["ChannelSubMerchantId"].IsNull())
    {
        if (!value["ChannelSubMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankExternalSubMerchantRegistrationResult.ChannelSubMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSubMerchantId = string(value["ChannelSubMerchantId"].GetString());
        m_channelSubMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnData") && !value["ExternalReturnData"].IsNull())
    {
        if (!value["ExternalReturnData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankExternalSubMerchantRegistrationResult.ExternalReturnData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnData = string(value["ExternalReturnData"].GetString());
        m_externalReturnDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOpenBankExternalSubMerchantRegistrationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_externalReturnDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnData.c_str(), allocator).Move(), allocator);
    }

}


string CreateOpenBankExternalSubMerchantRegistrationResult::GetRegistrationStatus() const
{
    return m_registrationStatus;
}

void CreateOpenBankExternalSubMerchantRegistrationResult::SetRegistrationStatus(const string& _registrationStatus)
{
    m_registrationStatus = _registrationStatus;
    m_registrationStatusHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationResult::RegistrationStatusHasBeenSet() const
{
    return m_registrationStatusHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationResult::GetRegistrationMessage() const
{
    return m_registrationMessage;
}

void CreateOpenBankExternalSubMerchantRegistrationResult::SetRegistrationMessage(const string& _registrationMessage)
{
    m_registrationMessage = _registrationMessage;
    m_registrationMessageHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationResult::RegistrationMessageHasBeenSet() const
{
    return m_registrationMessageHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationResult::GetChannelRegistrationNo() const
{
    return m_channelRegistrationNo;
}

void CreateOpenBankExternalSubMerchantRegistrationResult::SetChannelRegistrationNo(const string& _channelRegistrationNo)
{
    m_channelRegistrationNo = _channelRegistrationNo;
    m_channelRegistrationNoHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationResult::ChannelRegistrationNoHasBeenSet() const
{
    return m_channelRegistrationNoHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationResult::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void CreateOpenBankExternalSubMerchantRegistrationResult::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationResult::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string CreateOpenBankExternalSubMerchantRegistrationResult::GetExternalReturnData() const
{
    return m_externalReturnData;
}

void CreateOpenBankExternalSubMerchantRegistrationResult::SetExternalReturnData(const string& _externalReturnData)
{
    m_externalReturnData = _externalReturnData;
    m_externalReturnDataHasBeenSet = true;
}

bool CreateOpenBankExternalSubMerchantRegistrationResult::ExternalReturnDataHasBeenSet() const
{
    return m_externalReturnDataHasBeenSet;
}

