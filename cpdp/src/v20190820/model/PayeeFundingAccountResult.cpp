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

#include <tencentcloud/cpdp/v20190820/model/PayeeFundingAccountResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayeeFundingAccountResult::PayeeFundingAccountResult() :
    m_fundingAccountBindSerialNoHasBeenSet(false)
{
}

CoreInternalOutcome PayeeFundingAccountResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FundingAccountBindSerialNo") && !value["FundingAccountBindSerialNo"].IsNull())
    {
        if (!value["FundingAccountBindSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeFundingAccountResult.FundingAccountBindSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fundingAccountBindSerialNo = string(value["FundingAccountBindSerialNo"].GetString());
        m_fundingAccountBindSerialNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayeeFundingAccountResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fundingAccountBindSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountBindSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fundingAccountBindSerialNo.c_str(), allocator).Move(), allocator);
    }

}


string PayeeFundingAccountResult::GetFundingAccountBindSerialNo() const
{
    return m_fundingAccountBindSerialNo;
}

void PayeeFundingAccountResult::SetFundingAccountBindSerialNo(const string& _fundingAccountBindSerialNo)
{
    m_fundingAccountBindSerialNo = _fundingAccountBindSerialNo;
    m_fundingAccountBindSerialNoHasBeenSet = true;
}

bool PayeeFundingAccountResult::FundingAccountBindSerialNoHasBeenSet() const
{
    return m_fundingAccountBindSerialNoHasBeenSet;
}

