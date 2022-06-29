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

#include <tencentcloud/cpdp/v20190820/model/FeeRangInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

FeeRangInfo::FeeRangInfo() :
    m_cardTypeHasBeenSet(false),
    m_rangeStartValueHasBeenSet(false),
    m_rangeEndValueHasBeenSet(false),
    m_rangeFeeModeHasBeenSet(false),
    m_feeValueHasBeenSet(false),
    m_minFeeHasBeenSet(false),
    m_maxFeeHasBeenSet(false)
{
}

CoreInternalOutcome FeeRangInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CardType") && !value["CardType"].IsNull())
    {
        if (!value["CardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeeRangInfo.CardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardType = string(value["CardType"].GetString());
        m_cardTypeHasBeenSet = true;
    }

    if (value.HasMember("RangeStartValue") && !value["RangeStartValue"].IsNull())
    {
        if (!value["RangeStartValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FeeRangInfo.RangeStartValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rangeStartValue = value["RangeStartValue"].GetUint64();
        m_rangeStartValueHasBeenSet = true;
    }

    if (value.HasMember("RangeEndValue") && !value["RangeEndValue"].IsNull())
    {
        if (!value["RangeEndValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FeeRangInfo.RangeEndValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rangeEndValue = value["RangeEndValue"].GetUint64();
        m_rangeEndValueHasBeenSet = true;
    }

    if (value.HasMember("RangeFeeMode") && !value["RangeFeeMode"].IsNull())
    {
        if (!value["RangeFeeMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeeRangInfo.RangeFeeMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rangeFeeMode = string(value["RangeFeeMode"].GetString());
        m_rangeFeeModeHasBeenSet = true;
    }

    if (value.HasMember("FeeValue") && !value["FeeValue"].IsNull())
    {
        if (!value["FeeValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FeeRangInfo.FeeValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_feeValue = value["FeeValue"].GetUint64();
        m_feeValueHasBeenSet = true;
    }

    if (value.HasMember("MinFee") && !value["MinFee"].IsNull())
    {
        if (!value["MinFee"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FeeRangInfo.MinFee` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minFee = value["MinFee"].GetUint64();
        m_minFeeHasBeenSet = true;
    }

    if (value.HasMember("MaxFee") && !value["MaxFee"].IsNull())
    {
        if (!value["MaxFee"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FeeRangInfo.MaxFee` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxFee = value["MaxFee"].GetUint64();
        m_maxFeeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FeeRangInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardType.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeStartValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeStartValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rangeStartValue, allocator);
    }

    if (m_rangeEndValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeEndValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rangeEndValue, allocator);
    }

    if (m_rangeFeeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeFeeMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rangeFeeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_feeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeValue, allocator);
    }

    if (m_minFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minFee, allocator);
    }

    if (m_maxFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxFee, allocator);
    }

}


string FeeRangInfo::GetCardType() const
{
    return m_cardType;
}

void FeeRangInfo::SetCardType(const string& _cardType)
{
    m_cardType = _cardType;
    m_cardTypeHasBeenSet = true;
}

bool FeeRangInfo::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

uint64_t FeeRangInfo::GetRangeStartValue() const
{
    return m_rangeStartValue;
}

void FeeRangInfo::SetRangeStartValue(const uint64_t& _rangeStartValue)
{
    m_rangeStartValue = _rangeStartValue;
    m_rangeStartValueHasBeenSet = true;
}

bool FeeRangInfo::RangeStartValueHasBeenSet() const
{
    return m_rangeStartValueHasBeenSet;
}

uint64_t FeeRangInfo::GetRangeEndValue() const
{
    return m_rangeEndValue;
}

void FeeRangInfo::SetRangeEndValue(const uint64_t& _rangeEndValue)
{
    m_rangeEndValue = _rangeEndValue;
    m_rangeEndValueHasBeenSet = true;
}

bool FeeRangInfo::RangeEndValueHasBeenSet() const
{
    return m_rangeEndValueHasBeenSet;
}

string FeeRangInfo::GetRangeFeeMode() const
{
    return m_rangeFeeMode;
}

void FeeRangInfo::SetRangeFeeMode(const string& _rangeFeeMode)
{
    m_rangeFeeMode = _rangeFeeMode;
    m_rangeFeeModeHasBeenSet = true;
}

bool FeeRangInfo::RangeFeeModeHasBeenSet() const
{
    return m_rangeFeeModeHasBeenSet;
}

uint64_t FeeRangInfo::GetFeeValue() const
{
    return m_feeValue;
}

void FeeRangInfo::SetFeeValue(const uint64_t& _feeValue)
{
    m_feeValue = _feeValue;
    m_feeValueHasBeenSet = true;
}

bool FeeRangInfo::FeeValueHasBeenSet() const
{
    return m_feeValueHasBeenSet;
}

uint64_t FeeRangInfo::GetMinFee() const
{
    return m_minFee;
}

void FeeRangInfo::SetMinFee(const uint64_t& _minFee)
{
    m_minFee = _minFee;
    m_minFeeHasBeenSet = true;
}

bool FeeRangInfo::MinFeeHasBeenSet() const
{
    return m_minFeeHasBeenSet;
}

uint64_t FeeRangInfo::GetMaxFee() const
{
    return m_maxFee;
}

void FeeRangInfo::SetMaxFee(const uint64_t& _maxFee)
{
    m_maxFee = _maxFee;
    m_maxFeeHasBeenSet = true;
}

bool FeeRangInfo::MaxFeeHasBeenSet() const
{
    return m_maxFeeHasBeenSet;
}

