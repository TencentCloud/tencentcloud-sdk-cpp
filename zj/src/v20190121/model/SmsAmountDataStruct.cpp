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

#include <tencentcloud/zj/v20190121/model/SmsAmountDataStruct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

SmsAmountDataStruct::SmsAmountDataStruct() :
    m_smsCampaignAmountHasBeenSet(false),
    m_smsCampaignConsumeHasBeenSet(false),
    m_smsSendAmountHasBeenSet(false),
    m_smsSendConsumeHasBeenSet(false),
    m_mmsCampaignAmountHasBeenSet(false),
    m_mmsCampaignConsumeHasBeenSet(false),
    m_mmsSendAmountHasBeenSet(false),
    m_mmsSendConsumeHasBeenSet(false)
{
}

CoreInternalOutcome SmsAmountDataStruct::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SmsCampaignAmount") && !value["SmsCampaignAmount"].IsNull())
    {
        if (!value["SmsCampaignAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsAmountDataStruct.SmsCampaignAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_smsCampaignAmount = value["SmsCampaignAmount"].GetUint64();
        m_smsCampaignAmountHasBeenSet = true;
    }

    if (value.HasMember("SmsCampaignConsume") && !value["SmsCampaignConsume"].IsNull())
    {
        if (!value["SmsCampaignConsume"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsAmountDataStruct.SmsCampaignConsume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_smsCampaignConsume = value["SmsCampaignConsume"].GetUint64();
        m_smsCampaignConsumeHasBeenSet = true;
    }

    if (value.HasMember("SmsSendAmount") && !value["SmsSendAmount"].IsNull())
    {
        if (!value["SmsSendAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsAmountDataStruct.SmsSendAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_smsSendAmount = value["SmsSendAmount"].GetUint64();
        m_smsSendAmountHasBeenSet = true;
    }

    if (value.HasMember("SmsSendConsume") && !value["SmsSendConsume"].IsNull())
    {
        if (!value["SmsSendConsume"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsAmountDataStruct.SmsSendConsume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_smsSendConsume = value["SmsSendConsume"].GetUint64();
        m_smsSendConsumeHasBeenSet = true;
    }

    if (value.HasMember("MmsCampaignAmount") && !value["MmsCampaignAmount"].IsNull())
    {
        if (!value["MmsCampaignAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsAmountDataStruct.MmsCampaignAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mmsCampaignAmount = value["MmsCampaignAmount"].GetUint64();
        m_mmsCampaignAmountHasBeenSet = true;
    }

    if (value.HasMember("MmsCampaignConsume") && !value["MmsCampaignConsume"].IsNull())
    {
        if (!value["MmsCampaignConsume"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsAmountDataStruct.MmsCampaignConsume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mmsCampaignConsume = value["MmsCampaignConsume"].GetUint64();
        m_mmsCampaignConsumeHasBeenSet = true;
    }

    if (value.HasMember("MmsSendAmount") && !value["MmsSendAmount"].IsNull())
    {
        if (!value["MmsSendAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsAmountDataStruct.MmsSendAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mmsSendAmount = value["MmsSendAmount"].GetUint64();
        m_mmsSendAmountHasBeenSet = true;
    }

    if (value.HasMember("MmsSendConsume") && !value["MmsSendConsume"].IsNull())
    {
        if (!value["MmsSendConsume"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsAmountDataStruct.MmsSendConsume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mmsSendConsume = value["MmsSendConsume"].GetUint64();
        m_mmsSendConsumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsAmountDataStruct::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_smsCampaignAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SmsCampaignAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smsCampaignAmount, allocator);
    }

    if (m_smsCampaignConsumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SmsCampaignConsume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smsCampaignConsume, allocator);
    }

    if (m_smsSendAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SmsSendAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smsSendAmount, allocator);
    }

    if (m_smsSendConsumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SmsSendConsume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smsSendConsume, allocator);
    }

    if (m_mmsCampaignAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MmsCampaignAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mmsCampaignAmount, allocator);
    }

    if (m_mmsCampaignConsumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MmsCampaignConsume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mmsCampaignConsume, allocator);
    }

    if (m_mmsSendAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MmsSendAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mmsSendAmount, allocator);
    }

    if (m_mmsSendConsumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MmsSendConsume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mmsSendConsume, allocator);
    }

}


uint64_t SmsAmountDataStruct::GetSmsCampaignAmount() const
{
    return m_smsCampaignAmount;
}

void SmsAmountDataStruct::SetSmsCampaignAmount(const uint64_t& _smsCampaignAmount)
{
    m_smsCampaignAmount = _smsCampaignAmount;
    m_smsCampaignAmountHasBeenSet = true;
}

bool SmsAmountDataStruct::SmsCampaignAmountHasBeenSet() const
{
    return m_smsCampaignAmountHasBeenSet;
}

uint64_t SmsAmountDataStruct::GetSmsCampaignConsume() const
{
    return m_smsCampaignConsume;
}

void SmsAmountDataStruct::SetSmsCampaignConsume(const uint64_t& _smsCampaignConsume)
{
    m_smsCampaignConsume = _smsCampaignConsume;
    m_smsCampaignConsumeHasBeenSet = true;
}

bool SmsAmountDataStruct::SmsCampaignConsumeHasBeenSet() const
{
    return m_smsCampaignConsumeHasBeenSet;
}

uint64_t SmsAmountDataStruct::GetSmsSendAmount() const
{
    return m_smsSendAmount;
}

void SmsAmountDataStruct::SetSmsSendAmount(const uint64_t& _smsSendAmount)
{
    m_smsSendAmount = _smsSendAmount;
    m_smsSendAmountHasBeenSet = true;
}

bool SmsAmountDataStruct::SmsSendAmountHasBeenSet() const
{
    return m_smsSendAmountHasBeenSet;
}

uint64_t SmsAmountDataStruct::GetSmsSendConsume() const
{
    return m_smsSendConsume;
}

void SmsAmountDataStruct::SetSmsSendConsume(const uint64_t& _smsSendConsume)
{
    m_smsSendConsume = _smsSendConsume;
    m_smsSendConsumeHasBeenSet = true;
}

bool SmsAmountDataStruct::SmsSendConsumeHasBeenSet() const
{
    return m_smsSendConsumeHasBeenSet;
}

uint64_t SmsAmountDataStruct::GetMmsCampaignAmount() const
{
    return m_mmsCampaignAmount;
}

void SmsAmountDataStruct::SetMmsCampaignAmount(const uint64_t& _mmsCampaignAmount)
{
    m_mmsCampaignAmount = _mmsCampaignAmount;
    m_mmsCampaignAmountHasBeenSet = true;
}

bool SmsAmountDataStruct::MmsCampaignAmountHasBeenSet() const
{
    return m_mmsCampaignAmountHasBeenSet;
}

uint64_t SmsAmountDataStruct::GetMmsCampaignConsume() const
{
    return m_mmsCampaignConsume;
}

void SmsAmountDataStruct::SetMmsCampaignConsume(const uint64_t& _mmsCampaignConsume)
{
    m_mmsCampaignConsume = _mmsCampaignConsume;
    m_mmsCampaignConsumeHasBeenSet = true;
}

bool SmsAmountDataStruct::MmsCampaignConsumeHasBeenSet() const
{
    return m_mmsCampaignConsumeHasBeenSet;
}

uint64_t SmsAmountDataStruct::GetMmsSendAmount() const
{
    return m_mmsSendAmount;
}

void SmsAmountDataStruct::SetMmsSendAmount(const uint64_t& _mmsSendAmount)
{
    m_mmsSendAmount = _mmsSendAmount;
    m_mmsSendAmountHasBeenSet = true;
}

bool SmsAmountDataStruct::MmsSendAmountHasBeenSet() const
{
    return m_mmsSendAmountHasBeenSet;
}

uint64_t SmsAmountDataStruct::GetMmsSendConsume() const
{
    return m_mmsSendConsume;
}

void SmsAmountDataStruct::SetMmsSendConsume(const uint64_t& _mmsSendConsume)
{
    m_mmsSendConsume = _mmsSendConsume;
    m_mmsSendConsumeHasBeenSet = true;
}

bool SmsAmountDataStruct::MmsSendConsumeHasBeenSet() const
{
    return m_mmsSendConsumeHasBeenSet;
}

