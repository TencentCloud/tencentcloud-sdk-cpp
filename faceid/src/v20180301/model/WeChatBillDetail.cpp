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

#include <tencentcloud/faceid/v20180301/model/WeChatBillDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

WeChatBillDetail::WeChatBillDetail() :
    m_bizTokenHasBeenSet(false),
    m_chargeCountHasBeenSet(false),
    m_chargeDetailsHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome WeChatBillDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BizToken") && !value["BizToken"].IsNull())
    {
        if (!value["BizToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatBillDetail.BizToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizToken = string(value["BizToken"].GetString());
        m_bizTokenHasBeenSet = true;
    }

    if (value.HasMember("ChargeCount") && !value["ChargeCount"].IsNull())
    {
        if (!value["ChargeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatBillDetail.ChargeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeCount = value["ChargeCount"].GetUint64();
        m_chargeCountHasBeenSet = true;
    }

    if (value.HasMember("ChargeDetails") && !value["ChargeDetails"].IsNull())
    {
        if (!value["ChargeDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WeChatBillDetail.ChargeDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["ChargeDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChargeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_chargeDetails.push_back(item);
        }
        m_chargeDetailsHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeChatBillDetail.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeChatBillDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bizTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizToken.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeCount, allocator);
    }

    if (m_chargeDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_chargeDetails.begin(); itr != m_chargeDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

}


string WeChatBillDetail::GetBizToken() const
{
    return m_bizToken;
}

void WeChatBillDetail::SetBizToken(const string& _bizToken)
{
    m_bizToken = _bizToken;
    m_bizTokenHasBeenSet = true;
}

bool WeChatBillDetail::BizTokenHasBeenSet() const
{
    return m_bizTokenHasBeenSet;
}

uint64_t WeChatBillDetail::GetChargeCount() const
{
    return m_chargeCount;
}

void WeChatBillDetail::SetChargeCount(const uint64_t& _chargeCount)
{
    m_chargeCount = _chargeCount;
    m_chargeCountHasBeenSet = true;
}

bool WeChatBillDetail::ChargeCountHasBeenSet() const
{
    return m_chargeCountHasBeenSet;
}

vector<ChargeDetail> WeChatBillDetail::GetChargeDetails() const
{
    return m_chargeDetails;
}

void WeChatBillDetail::SetChargeDetails(const vector<ChargeDetail>& _chargeDetails)
{
    m_chargeDetails = _chargeDetails;
    m_chargeDetailsHasBeenSet = true;
}

bool WeChatBillDetail::ChargeDetailsHasBeenSet() const
{
    return m_chargeDetailsHasBeenSet;
}

string WeChatBillDetail::GetRuleId() const
{
    return m_ruleId;
}

void WeChatBillDetail::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool WeChatBillDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

