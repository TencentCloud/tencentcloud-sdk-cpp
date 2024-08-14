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

#include <tencentcloud/billing/v20180709/model/UsageRecords.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

UsageRecords::UsageRecords() :
    m_usedAmountHasBeenSet(false),
    m_usedTimeHasBeenSet(false),
    m_usageDetailsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_voucherIdHasBeenSet(false),
    m_paySceneHasBeenSet(false),
    m_seqIdHasBeenSet(false)
{
}

CoreInternalOutcome UsageRecords::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsedAmount") && !value["UsedAmount"].IsNull())
    {
        if (!value["UsedAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRecords.UsedAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmount = value["UsedAmount"].GetInt64();
        m_usedAmountHasBeenSet = true;
    }

    if (value.HasMember("UsedTime") && !value["UsedTime"].IsNull())
    {
        if (!value["UsedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRecords.UsedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedTime = string(value["UsedTime"].GetString());
        m_usedTimeHasBeenSet = true;
    }

    if (value.HasMember("UsageDetails") && !value["UsageDetails"].IsNull())
    {
        if (!value["UsageDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsageRecords.UsageDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["UsageDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsageDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usageDetails.push_back(item);
        }
        m_usageDetailsHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRecords.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("VoucherId") && !value["VoucherId"].IsNull())
    {
        if (!value["VoucherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRecords.VoucherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherId = string(value["VoucherId"].GetString());
        m_voucherIdHasBeenSet = true;
    }

    if (value.HasMember("PayScene") && !value["PayScene"].IsNull())
    {
        if (!value["PayScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRecords.PayScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payScene = string(value["PayScene"].GetString());
        m_paySceneHasBeenSet = true;
    }

    if (value.HasMember("SeqId") && !value["SeqId"].IsNull())
    {
        if (!value["SeqId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageRecords.SeqId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seqId = string(value["SeqId"].GetString());
        m_seqIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageRecords::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usedAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedAmount, allocator);
    }

    if (m_usedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usageDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usageDetails.begin(); itr != m_usageDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherId.c_str(), allocator).Move(), allocator);
    }

    if (m_paySceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payScene.c_str(), allocator).Move(), allocator);
    }

    if (m_seqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeqId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seqId.c_str(), allocator).Move(), allocator);
    }

}


int64_t UsageRecords::GetUsedAmount() const
{
    return m_usedAmount;
}

void UsageRecords::SetUsedAmount(const int64_t& _usedAmount)
{
    m_usedAmount = _usedAmount;
    m_usedAmountHasBeenSet = true;
}

bool UsageRecords::UsedAmountHasBeenSet() const
{
    return m_usedAmountHasBeenSet;
}

string UsageRecords::GetUsedTime() const
{
    return m_usedTime;
}

void UsageRecords::SetUsedTime(const string& _usedTime)
{
    m_usedTime = _usedTime;
    m_usedTimeHasBeenSet = true;
}

bool UsageRecords::UsedTimeHasBeenSet() const
{
    return m_usedTimeHasBeenSet;
}

vector<UsageDetails> UsageRecords::GetUsageDetails() const
{
    return m_usageDetails;
}

void UsageRecords::SetUsageDetails(const vector<UsageDetails>& _usageDetails)
{
    m_usageDetails = _usageDetails;
    m_usageDetailsHasBeenSet = true;
}

bool UsageRecords::UsageDetailsHasBeenSet() const
{
    return m_usageDetailsHasBeenSet;
}

string UsageRecords::GetPayMode() const
{
    return m_payMode;
}

void UsageRecords::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool UsageRecords::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string UsageRecords::GetVoucherId() const
{
    return m_voucherId;
}

void UsageRecords::SetVoucherId(const string& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool UsageRecords::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

string UsageRecords::GetPayScene() const
{
    return m_payScene;
}

void UsageRecords::SetPayScene(const string& _payScene)
{
    m_payScene = _payScene;
    m_paySceneHasBeenSet = true;
}

bool UsageRecords::PaySceneHasBeenSet() const
{
    return m_paySceneHasBeenSet;
}

string UsageRecords::GetSeqId() const
{
    return m_seqId;
}

void UsageRecords::SetSeqId(const string& _seqId)
{
    m_seqId = _seqId;
    m_seqIdHasBeenSet = true;
}

bool UsageRecords::SeqIdHasBeenSet() const
{
    return m_seqIdHasBeenSet;
}

