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

#include <tencentcloud/cpdp/v20190820/model/BindOpenBankExternalSubMerchantBankAccountResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BindOpenBankExternalSubMerchantBankAccountResult::BindOpenBankExternalSubMerchantBankAccountResult() :
    m_channelApplyIdHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_bindMessageHasBeenSet(false),
    m_externalSubMerchantBankAccountReturnDataHasBeenSet(false),
    m_bindSerialNoHasBeenSet(false)
{
}

CoreInternalOutcome BindOpenBankExternalSubMerchantBankAccountResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelApplyId") && !value["ChannelApplyId"].IsNull())
    {
        if (!value["ChannelApplyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindOpenBankExternalSubMerchantBankAccountResult.ChannelApplyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelApplyId = string(value["ChannelApplyId"].GetString());
        m_channelApplyIdHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindOpenBankExternalSubMerchantBankAccountResult.BindStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = string(value["BindStatus"].GetString());
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("BindMessage") && !value["BindMessage"].IsNull())
    {
        if (!value["BindMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindOpenBankExternalSubMerchantBankAccountResult.BindMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindMessage = string(value["BindMessage"].GetString());
        m_bindMessageHasBeenSet = true;
    }

    if (value.HasMember("ExternalSubMerchantBankAccountReturnData") && !value["ExternalSubMerchantBankAccountReturnData"].IsNull())
    {
        if (!value["ExternalSubMerchantBankAccountReturnData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindOpenBankExternalSubMerchantBankAccountResult.ExternalSubMerchantBankAccountReturnData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalSubMerchantBankAccountReturnData = string(value["ExternalSubMerchantBankAccountReturnData"].GetString());
        m_externalSubMerchantBankAccountReturnDataHasBeenSet = true;
    }

    if (value.HasMember("BindSerialNo") && !value["BindSerialNo"].IsNull())
    {
        if (!value["BindSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindOpenBankExternalSubMerchantBankAccountResult.BindSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindSerialNo = string(value["BindSerialNo"].GetString());
        m_bindSerialNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindOpenBankExternalSubMerchantBankAccountResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelApplyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelApplyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelApplyId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_bindMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_externalSubMerchantBankAccountReturnDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalSubMerchantBankAccountReturnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalSubMerchantBankAccountReturnData.c_str(), allocator).Move(), allocator);
    }

    if (m_bindSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindSerialNo.c_str(), allocator).Move(), allocator);
    }

}


string BindOpenBankExternalSubMerchantBankAccountResult::GetChannelApplyId() const
{
    return m_channelApplyId;
}

void BindOpenBankExternalSubMerchantBankAccountResult::SetChannelApplyId(const string& _channelApplyId)
{
    m_channelApplyId = _channelApplyId;
    m_channelApplyIdHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountResult::ChannelApplyIdHasBeenSet() const
{
    return m_channelApplyIdHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountResult::GetBindStatus() const
{
    return m_bindStatus;
}

void BindOpenBankExternalSubMerchantBankAccountResult::SetBindStatus(const string& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountResult::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountResult::GetBindMessage() const
{
    return m_bindMessage;
}

void BindOpenBankExternalSubMerchantBankAccountResult::SetBindMessage(const string& _bindMessage)
{
    m_bindMessage = _bindMessage;
    m_bindMessageHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountResult::BindMessageHasBeenSet() const
{
    return m_bindMessageHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountResult::GetExternalSubMerchantBankAccountReturnData() const
{
    return m_externalSubMerchantBankAccountReturnData;
}

void BindOpenBankExternalSubMerchantBankAccountResult::SetExternalSubMerchantBankAccountReturnData(const string& _externalSubMerchantBankAccountReturnData)
{
    m_externalSubMerchantBankAccountReturnData = _externalSubMerchantBankAccountReturnData;
    m_externalSubMerchantBankAccountReturnDataHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountResult::ExternalSubMerchantBankAccountReturnDataHasBeenSet() const
{
    return m_externalSubMerchantBankAccountReturnDataHasBeenSet;
}

string BindOpenBankExternalSubMerchantBankAccountResult::GetBindSerialNo() const
{
    return m_bindSerialNo;
}

void BindOpenBankExternalSubMerchantBankAccountResult::SetBindSerialNo(const string& _bindSerialNo)
{
    m_bindSerialNo = _bindSerialNo;
    m_bindSerialNoHasBeenSet = true;
}

bool BindOpenBankExternalSubMerchantBankAccountResult::BindSerialNoHasBeenSet() const
{
    return m_bindSerialNoHasBeenSet;
}

