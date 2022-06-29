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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankMerchantResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankMerchantResult::CreateOpenBankMerchantResult() :
    m_channelMerchantIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateOpenBankMerchantResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelMerchantId") && !value["ChannelMerchantId"].IsNull())
    {
        if (!value["ChannelMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankMerchantResult.ChannelMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelMerchantId = string(value["ChannelMerchantId"].GetString());
        m_channelMerchantIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOpenBankMerchantResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

}


string CreateOpenBankMerchantResult::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void CreateOpenBankMerchantResult::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool CreateOpenBankMerchantResult::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

