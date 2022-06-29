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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankSubMerchantRateConfigureResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankSubMerchantRateConfigureResult::QueryOpenBankSubMerchantRateConfigureResult() :
    m_dealStatusHasBeenSet(false),
    m_dealMessageHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankSubMerchantRateConfigureResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealStatus") && !value["DealStatus"].IsNull())
    {
        if (!value["DealStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSubMerchantRateConfigureResult.DealStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealStatus = string(value["DealStatus"].GetString());
        m_dealStatusHasBeenSet = true;
    }

    if (value.HasMember("DealMessage") && !value["DealMessage"].IsNull())
    {
        if (!value["DealMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSubMerchantRateConfigureResult.DealMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealMessage = string(value["DealMessage"].GetString());
        m_dealMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankSubMerchantRateConfigureResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dealMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealMessage.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankSubMerchantRateConfigureResult::GetDealStatus() const
{
    return m_dealStatus;
}

void QueryOpenBankSubMerchantRateConfigureResult::SetDealStatus(const string& _dealStatus)
{
    m_dealStatus = _dealStatus;
    m_dealStatusHasBeenSet = true;
}

bool QueryOpenBankSubMerchantRateConfigureResult::DealStatusHasBeenSet() const
{
    return m_dealStatusHasBeenSet;
}

string QueryOpenBankSubMerchantRateConfigureResult::GetDealMessage() const
{
    return m_dealMessage;
}

void QueryOpenBankSubMerchantRateConfigureResult::SetDealMessage(const string& _dealMessage)
{
    m_dealMessage = _dealMessage;
    m_dealMessageHasBeenSet = true;
}

bool QueryOpenBankSubMerchantRateConfigureResult::DealMessageHasBeenSet() const
{
    return m_dealMessageHasBeenSet;
}

