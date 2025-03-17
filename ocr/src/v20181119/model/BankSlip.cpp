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

#include <tencentcloud/ocr/v20181119/model/BankSlip.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BankSlip::BankSlip() :
    m_bankSlipInfosHasBeenSet(false),
    m_commonBankSlipInfosHasBeenSet(false)
{
}

CoreInternalOutcome BankSlip::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BankSlipInfos") && !value["BankSlipInfos"].IsNull())
    {
        if (!value["BankSlipInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BankSlip.BankSlipInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["BankSlipInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BankSlipInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bankSlipInfos.push_back(item);
        }
        m_bankSlipInfosHasBeenSet = true;
    }

    if (value.HasMember("CommonBankSlipInfos") && !value["CommonBankSlipInfos"].IsNull())
    {
        if (!value["CommonBankSlipInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BankSlip.CommonBankSlipInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["CommonBankSlipInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BankSlipInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_commonBankSlipInfos.push_back(item);
        }
        m_commonBankSlipInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BankSlip::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bankSlipInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankSlipInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bankSlipInfos.begin(); itr != m_bankSlipInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_commonBankSlipInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonBankSlipInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_commonBankSlipInfos.begin(); itr != m_commonBankSlipInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<BankSlipInfo> BankSlip::GetBankSlipInfos() const
{
    return m_bankSlipInfos;
}

void BankSlip::SetBankSlipInfos(const vector<BankSlipInfo>& _bankSlipInfos)
{
    m_bankSlipInfos = _bankSlipInfos;
    m_bankSlipInfosHasBeenSet = true;
}

bool BankSlip::BankSlipInfosHasBeenSet() const
{
    return m_bankSlipInfosHasBeenSet;
}

vector<BankSlipInfo> BankSlip::GetCommonBankSlipInfos() const
{
    return m_commonBankSlipInfos;
}

void BankSlip::SetCommonBankSlipInfos(const vector<BankSlipInfo>& _commonBankSlipInfos)
{
    m_commonBankSlipInfos = _commonBankSlipInfos;
    m_commonBankSlipInfosHasBeenSet = true;
}

bool BankSlip::CommonBankSlipInfosHasBeenSet() const
{
    return m_commonBankSlipInfosHasBeenSet;
}

