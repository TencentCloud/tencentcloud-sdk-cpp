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

#include <tencentcloud/cpdp/v20190820/model/TransferSinglePayData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

TransferSinglePayData::TransferSinglePayData() :
    m_tradeSerialNoHasBeenSet(false)
{
}

CoreInternalOutcome TransferSinglePayData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TradeSerialNo") && !value["TradeSerialNo"].IsNull())
    {
        if (!value["TradeSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferSinglePayData.TradeSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeSerialNo = string(value["TradeSerialNo"].GetString());
        m_tradeSerialNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransferSinglePayData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tradeSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeSerialNo.c_str(), allocator).Move(), allocator);
    }

}


string TransferSinglePayData::GetTradeSerialNo() const
{
    return m_tradeSerialNo;
}

void TransferSinglePayData::SetTradeSerialNo(const string& _tradeSerialNo)
{
    m_tradeSerialNo = _tradeSerialNo;
    m_tradeSerialNoHasBeenSet = true;
}

bool TransferSinglePayData::TradeSerialNoHasBeenSet() const
{
    return m_tradeSerialNoHasBeenSet;
}

