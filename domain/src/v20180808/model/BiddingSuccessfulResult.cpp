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

#include <tencentcloud/domain/v20180808/model/BiddingSuccessfulResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

BiddingSuccessfulResult::BiddingSuccessfulResult() :
    m_payEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome BiddingSuccessfulResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayEndTime") && !value["PayEndTime"].IsNull())
    {
        if (!value["PayEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingSuccessfulResult.PayEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payEndTime = string(value["PayEndTime"].GetString());
        m_payEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BiddingSuccessfulResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payEndTime.c_str(), allocator).Move(), allocator);
    }

}


string BiddingSuccessfulResult::GetPayEndTime() const
{
    return m_payEndTime;
}

void BiddingSuccessfulResult::SetPayEndTime(const string& _payEndTime)
{
    m_payEndTime = _payEndTime;
    m_payEndTimeHasBeenSet = true;
}

bool BiddingSuccessfulResult::PayEndTimeHasBeenSet() const
{
    return m_payEndTimeHasBeenSet;
}

