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

#include <tencentcloud/cpdp/v20190820/model/UnbindOpenBankExternalSubMerchantBankAccountResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UnbindOpenBankExternalSubMerchantBankAccountResult::UnbindOpenBankExternalSubMerchantBankAccountResult() :
    m_channelApplyIdHasBeenSet(false),
    m_unbindStatusHasBeenSet(false),
    m_unbindMessageHasBeenSet(false)
{
}

CoreInternalOutcome UnbindOpenBankExternalSubMerchantBankAccountResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelApplyId") && !value["ChannelApplyId"].IsNull())
    {
        if (!value["ChannelApplyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnbindOpenBankExternalSubMerchantBankAccountResult.ChannelApplyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelApplyId = string(value["ChannelApplyId"].GetString());
        m_channelApplyIdHasBeenSet = true;
    }

    if (value.HasMember("UnbindStatus") && !value["UnbindStatus"].IsNull())
    {
        if (!value["UnbindStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnbindOpenBankExternalSubMerchantBankAccountResult.UnbindStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unbindStatus = string(value["UnbindStatus"].GetString());
        m_unbindStatusHasBeenSet = true;
    }

    if (value.HasMember("UnbindMessage") && !value["UnbindMessage"].IsNull())
    {
        if (!value["UnbindMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnbindOpenBankExternalSubMerchantBankAccountResult.UnbindMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unbindMessage = string(value["UnbindMessage"].GetString());
        m_unbindMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnbindOpenBankExternalSubMerchantBankAccountResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelApplyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelApplyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelApplyId.c_str(), allocator).Move(), allocator);
    }

    if (m_unbindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnbindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unbindStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_unbindMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnbindMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unbindMessage.c_str(), allocator).Move(), allocator);
    }

}


string UnbindOpenBankExternalSubMerchantBankAccountResult::GetChannelApplyId() const
{
    return m_channelApplyId;
}

void UnbindOpenBankExternalSubMerchantBankAccountResult::SetChannelApplyId(const string& _channelApplyId)
{
    m_channelApplyId = _channelApplyId;
    m_channelApplyIdHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountResult::ChannelApplyIdHasBeenSet() const
{
    return m_channelApplyIdHasBeenSet;
}

string UnbindOpenBankExternalSubMerchantBankAccountResult::GetUnbindStatus() const
{
    return m_unbindStatus;
}

void UnbindOpenBankExternalSubMerchantBankAccountResult::SetUnbindStatus(const string& _unbindStatus)
{
    m_unbindStatus = _unbindStatus;
    m_unbindStatusHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountResult::UnbindStatusHasBeenSet() const
{
    return m_unbindStatusHasBeenSet;
}

string UnbindOpenBankExternalSubMerchantBankAccountResult::GetUnbindMessage() const
{
    return m_unbindMessage;
}

void UnbindOpenBankExternalSubMerchantBankAccountResult::SetUnbindMessage(const string& _unbindMessage)
{
    m_unbindMessage = _unbindMessage;
    m_unbindMessageHasBeenSet = true;
}

bool UnbindOpenBankExternalSubMerchantBankAccountResult::UnbindMessageHasBeenSet() const
{
    return m_unbindMessageHasBeenSet;
}

