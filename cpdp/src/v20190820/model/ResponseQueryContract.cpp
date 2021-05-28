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

#include <tencentcloud/cpdp/v20190820/model/ResponseQueryContract.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

ResponseQueryContract::ResponseQueryContract() :
    m_externalReturnCodeHasBeenSet(false),
    m_externalReturnMessageHasBeenSet(false),
    m_externalReturnDataHasBeenSet(false),
    m_channelMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_channelAppIdHasBeenSet(false),
    m_channelSubAppIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_returnContractInfoHasBeenSet(false),
    m_notifyUrlHasBeenSet(false)
{
}

CoreInternalOutcome ResponseQueryContract::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalReturnCode") && !value["ExternalReturnCode"].IsNull())
    {
        if (!value["ExternalReturnCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.ExternalReturnCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnCode = string(value["ExternalReturnCode"].GetString());
        m_externalReturnCodeHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnMessage") && !value["ExternalReturnMessage"].IsNull())
    {
        if (!value["ExternalReturnMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.ExternalReturnMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnMessage = string(value["ExternalReturnMessage"].GetString());
        m_externalReturnMessageHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnData") && !value["ExternalReturnData"].IsNull())
    {
        if (!value["ExternalReturnData"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.ExternalReturnData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnData = string(value["ExternalReturnData"].GetString());
        m_externalReturnDataHasBeenSet = true;
    }

    if (value.HasMember("ChannelMerchantId") && !value["ChannelMerchantId"].IsNull())
    {
        if (!value["ChannelMerchantId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.ChannelMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelMerchantId = string(value["ChannelMerchantId"].GetString());
        m_channelMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelSubMerchantId") && !value["ChannelSubMerchantId"].IsNull())
    {
        if (!value["ChannelSubMerchantId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.ChannelSubMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSubMerchantId = string(value["ChannelSubMerchantId"].GetString());
        m_channelSubMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelAppId") && !value["ChannelAppId"].IsNull())
    {
        if (!value["ChannelAppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.ChannelAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelAppId = string(value["ChannelAppId"].GetString());
        m_channelAppIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelSubAppId") && !value["ChannelSubAppId"].IsNull())
    {
        if (!value["ChannelSubAppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.ChannelSubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSubAppId = string(value["ChannelSubAppId"].GetString());
        m_channelSubAppIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("ReturnContractInfo") && !value["ReturnContractInfo"].IsNull())
    {
        if (!value["ReturnContractInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.ReturnContractInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_returnContractInfo.Deserialize(value["ReturnContractInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_returnContractInfoHasBeenSet = true;
    }

    if (value.HasMember("NotifyUrl") && !value["NotifyUrl"].IsNull())
    {
        if (!value["NotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseQueryContract.NotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyUrl = string(value["NotifyUrl"].GetString());
        m_notifyUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResponseQueryContract::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_externalReturnCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExternalReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_externalReturnCode.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnMessageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExternalReturnMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_externalReturnMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExternalReturnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_externalReturnData.c_str(), allocator).Move(), allocator);
    }

    if (m_channelMerchantIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubMerchantIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_channelAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelSubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_channelSubAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_returnContractInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReturnContractInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_returnContractInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

}


string ResponseQueryContract::GetExternalReturnCode() const
{
    return m_externalReturnCode;
}

void ResponseQueryContract::SetExternalReturnCode(const string& _externalReturnCode)
{
    m_externalReturnCode = _externalReturnCode;
    m_externalReturnCodeHasBeenSet = true;
}

bool ResponseQueryContract::ExternalReturnCodeHasBeenSet() const
{
    return m_externalReturnCodeHasBeenSet;
}

string ResponseQueryContract::GetExternalReturnMessage() const
{
    return m_externalReturnMessage;
}

void ResponseQueryContract::SetExternalReturnMessage(const string& _externalReturnMessage)
{
    m_externalReturnMessage = _externalReturnMessage;
    m_externalReturnMessageHasBeenSet = true;
}

bool ResponseQueryContract::ExternalReturnMessageHasBeenSet() const
{
    return m_externalReturnMessageHasBeenSet;
}

string ResponseQueryContract::GetExternalReturnData() const
{
    return m_externalReturnData;
}

void ResponseQueryContract::SetExternalReturnData(const string& _externalReturnData)
{
    m_externalReturnData = _externalReturnData;
    m_externalReturnDataHasBeenSet = true;
}

bool ResponseQueryContract::ExternalReturnDataHasBeenSet() const
{
    return m_externalReturnDataHasBeenSet;
}

string ResponseQueryContract::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void ResponseQueryContract::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool ResponseQueryContract::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string ResponseQueryContract::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void ResponseQueryContract::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool ResponseQueryContract::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string ResponseQueryContract::GetChannelAppId() const
{
    return m_channelAppId;
}

void ResponseQueryContract::SetChannelAppId(const string& _channelAppId)
{
    m_channelAppId = _channelAppId;
    m_channelAppIdHasBeenSet = true;
}

bool ResponseQueryContract::ChannelAppIdHasBeenSet() const
{
    return m_channelAppIdHasBeenSet;
}

string ResponseQueryContract::GetChannelSubAppId() const
{
    return m_channelSubAppId;
}

void ResponseQueryContract::SetChannelSubAppId(const string& _channelSubAppId)
{
    m_channelSubAppId = _channelSubAppId;
    m_channelSubAppIdHasBeenSet = true;
}

bool ResponseQueryContract::ChannelSubAppIdHasBeenSet() const
{
    return m_channelSubAppIdHasBeenSet;
}

string ResponseQueryContract::GetChannelName() const
{
    return m_channelName;
}

void ResponseQueryContract::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ResponseQueryContract::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

ReturnContractInfo ResponseQueryContract::GetReturnContractInfo() const
{
    return m_returnContractInfo;
}

void ResponseQueryContract::SetReturnContractInfo(const ReturnContractInfo& _returnContractInfo)
{
    m_returnContractInfo = _returnContractInfo;
    m_returnContractInfoHasBeenSet = true;
}

bool ResponseQueryContract::ReturnContractInfoHasBeenSet() const
{
    return m_returnContractInfoHasBeenSet;
}

string ResponseQueryContract::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void ResponseQueryContract::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool ResponseQueryContract::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

