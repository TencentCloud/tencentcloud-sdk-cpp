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

#include <tencentcloud/cpdp/v20190820/model/OpenBankPayLimitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankPayLimitInfo::OpenBankPayLimitInfo() :
    m_payLimitTypeHasBeenSet(false),
    m_payLimitValueHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankPayLimitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayLimitType") && !value["PayLimitType"].IsNull())
    {
        if (!value["PayLimitType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayLimitInfo.PayLimitType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payLimitType = string(value["PayLimitType"].GetString());
        m_payLimitTypeHasBeenSet = true;
    }

    if (value.HasMember("PayLimitValue") && !value["PayLimitValue"].IsNull())
    {
        if (!value["PayLimitValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayLimitInfo.PayLimitValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payLimitValue = string(value["PayLimitValue"].GetString());
        m_payLimitValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankPayLimitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payLimitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayLimitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payLimitType.c_str(), allocator).Move(), allocator);
    }

    if (m_payLimitValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayLimitValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payLimitValue.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankPayLimitInfo::GetPayLimitType() const
{
    return m_payLimitType;
}

void OpenBankPayLimitInfo::SetPayLimitType(const string& _payLimitType)
{
    m_payLimitType = _payLimitType;
    m_payLimitTypeHasBeenSet = true;
}

bool OpenBankPayLimitInfo::PayLimitTypeHasBeenSet() const
{
    return m_payLimitTypeHasBeenSet;
}

string OpenBankPayLimitInfo::GetPayLimitValue() const
{
    return m_payLimitValue;
}

void OpenBankPayLimitInfo::SetPayLimitValue(const string& _payLimitValue)
{
    m_payLimitValue = _payLimitValue;
    m_payLimitValueHasBeenSet = true;
}

bool OpenBankPayLimitInfo::PayLimitValueHasBeenSet() const
{
    return m_payLimitValueHasBeenSet;
}

