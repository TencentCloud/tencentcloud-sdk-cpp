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

#include <tencentcloud/cpdp/v20190820/model/OpenBankRechargePayeeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankRechargePayeeInfo::OpenBankRechargePayeeInfo() :
    m_payeeIdHasBeenSet(false),
    m_payeeIdTypeHasBeenSet(false),
    m_payeeNameHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankRechargePayeeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayeeId") && !value["PayeeId"].IsNull())
    {
        if (!value["PayeeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRechargePayeeInfo.PayeeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeId = string(value["PayeeId"].GetString());
        m_payeeIdHasBeenSet = true;
    }

    if (value.HasMember("PayeeIdType") && !value["PayeeIdType"].IsNull())
    {
        if (!value["PayeeIdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRechargePayeeInfo.PayeeIdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeIdType = string(value["PayeeIdType"].GetString());
        m_payeeIdTypeHasBeenSet = true;
    }

    if (value.HasMember("PayeeName") && !value["PayeeName"].IsNull())
    {
        if (!value["PayeeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankRechargePayeeInfo.PayeeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeName = string(value["PayeeName"].GetString());
        m_payeeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankRechargePayeeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeIdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeName.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankRechargePayeeInfo::GetPayeeId() const
{
    return m_payeeId;
}

void OpenBankRechargePayeeInfo::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool OpenBankRechargePayeeInfo::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string OpenBankRechargePayeeInfo::GetPayeeIdType() const
{
    return m_payeeIdType;
}

void OpenBankRechargePayeeInfo::SetPayeeIdType(const string& _payeeIdType)
{
    m_payeeIdType = _payeeIdType;
    m_payeeIdTypeHasBeenSet = true;
}

bool OpenBankRechargePayeeInfo::PayeeIdTypeHasBeenSet() const
{
    return m_payeeIdTypeHasBeenSet;
}

string OpenBankRechargePayeeInfo::GetPayeeName() const
{
    return m_payeeName;
}

void OpenBankRechargePayeeInfo::SetPayeeName(const string& _payeeName)
{
    m_payeeName = _payeeName;
    m_payeeNameHasBeenSet = true;
}

bool OpenBankRechargePayeeInfo::PayeeNameHasBeenSet() const
{
    return m_payeeNameHasBeenSet;
}

