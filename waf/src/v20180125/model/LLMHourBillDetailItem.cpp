/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/waf/v20180125/model/LLMHourBillDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMHourBillDetailItem::LLMHourBillDetailItem() :
    m_timeRangeHasBeenSet(false),
    m_promptAttackUsageHasBeenSet(false),
    m_contentTextUsageHasBeenSet(false),
    m_contentImageUsageHasBeenSet(false),
    m_sensitiveDataUsageHasBeenSet(false),
    m_promptAttackFeeHasBeenSet(false),
    m_contentTextFeeHasBeenSet(false),
    m_contentImageFeeHasBeenSet(false),
    m_sensitiveDataFeeHasBeenSet(false),
    m_totalFeeHasBeenSet(false)
{
}

CoreInternalOutcome LLMHourBillDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeRange") && !value["TimeRange"].IsNull())
    {
        if (!value["TimeRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.TimeRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRange = string(value["TimeRange"].GetString());
        m_timeRangeHasBeenSet = true;
    }

    if (value.HasMember("PromptAttackUsage") && !value["PromptAttackUsage"].IsNull())
    {
        if (!value["PromptAttackUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.PromptAttackUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_promptAttackUsage = value["PromptAttackUsage"].GetInt64();
        m_promptAttackUsageHasBeenSet = true;
    }

    if (value.HasMember("ContentTextUsage") && !value["ContentTextUsage"].IsNull())
    {
        if (!value["ContentTextUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.ContentTextUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentTextUsage = value["ContentTextUsage"].GetInt64();
        m_contentTextUsageHasBeenSet = true;
    }

    if (value.HasMember("ContentImageUsage") && !value["ContentImageUsage"].IsNull())
    {
        if (!value["ContentImageUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.ContentImageUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentImageUsage = value["ContentImageUsage"].GetInt64();
        m_contentImageUsageHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataUsage") && !value["SensitiveDataUsage"].IsNull())
    {
        if (!value["SensitiveDataUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.SensitiveDataUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataUsage = value["SensitiveDataUsage"].GetInt64();
        m_sensitiveDataUsageHasBeenSet = true;
    }

    if (value.HasMember("PromptAttackFee") && !value["PromptAttackFee"].IsNull())
    {
        if (!value["PromptAttackFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.PromptAttackFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptAttackFee = string(value["PromptAttackFee"].GetString());
        m_promptAttackFeeHasBeenSet = true;
    }

    if (value.HasMember("ContentTextFee") && !value["ContentTextFee"].IsNull())
    {
        if (!value["ContentTextFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.ContentTextFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentTextFee = string(value["ContentTextFee"].GetString());
        m_contentTextFeeHasBeenSet = true;
    }

    if (value.HasMember("ContentImageFee") && !value["ContentImageFee"].IsNull())
    {
        if (!value["ContentImageFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.ContentImageFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentImageFee = string(value["ContentImageFee"].GetString());
        m_contentImageFeeHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataFee") && !value["SensitiveDataFee"].IsNull())
    {
        if (!value["SensitiveDataFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.SensitiveDataFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataFee = string(value["SensitiveDataFee"].GetString());
        m_sensitiveDataFeeHasBeenSet = true;
    }

    if (value.HasMember("TotalFee") && !value["TotalFee"].IsNull())
    {
        if (!value["TotalFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillDetailItem.TotalFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalFee = string(value["TotalFee"].GetString());
        m_totalFeeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMHourBillDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRange.c_str(), allocator).Move(), allocator);
    }

    if (m_promptAttackUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptAttackUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptAttackUsage, allocator);
    }

    if (m_contentTextUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentTextUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentTextUsage, allocator);
    }

    if (m_contentImageUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentImageUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentImageUsage, allocator);
    }

    if (m_sensitiveDataUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDataUsage, allocator);
    }

    if (m_promptAttackFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptAttackFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptAttackFee.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTextFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentTextFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentTextFee.c_str(), allocator).Move(), allocator);
    }

    if (m_contentImageFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentImageFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentImageFee.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveDataFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sensitiveDataFee.c_str(), allocator).Move(), allocator);
    }

    if (m_totalFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalFee.c_str(), allocator).Move(), allocator);
    }

}


string LLMHourBillDetailItem::GetTimeRange() const
{
    return m_timeRange;
}

void LLMHourBillDetailItem::SetTimeRange(const string& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool LLMHourBillDetailItem::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}

int64_t LLMHourBillDetailItem::GetPromptAttackUsage() const
{
    return m_promptAttackUsage;
}

void LLMHourBillDetailItem::SetPromptAttackUsage(const int64_t& _promptAttackUsage)
{
    m_promptAttackUsage = _promptAttackUsage;
    m_promptAttackUsageHasBeenSet = true;
}

bool LLMHourBillDetailItem::PromptAttackUsageHasBeenSet() const
{
    return m_promptAttackUsageHasBeenSet;
}

int64_t LLMHourBillDetailItem::GetContentTextUsage() const
{
    return m_contentTextUsage;
}

void LLMHourBillDetailItem::SetContentTextUsage(const int64_t& _contentTextUsage)
{
    m_contentTextUsage = _contentTextUsage;
    m_contentTextUsageHasBeenSet = true;
}

bool LLMHourBillDetailItem::ContentTextUsageHasBeenSet() const
{
    return m_contentTextUsageHasBeenSet;
}

int64_t LLMHourBillDetailItem::GetContentImageUsage() const
{
    return m_contentImageUsage;
}

void LLMHourBillDetailItem::SetContentImageUsage(const int64_t& _contentImageUsage)
{
    m_contentImageUsage = _contentImageUsage;
    m_contentImageUsageHasBeenSet = true;
}

bool LLMHourBillDetailItem::ContentImageUsageHasBeenSet() const
{
    return m_contentImageUsageHasBeenSet;
}

int64_t LLMHourBillDetailItem::GetSensitiveDataUsage() const
{
    return m_sensitiveDataUsage;
}

void LLMHourBillDetailItem::SetSensitiveDataUsage(const int64_t& _sensitiveDataUsage)
{
    m_sensitiveDataUsage = _sensitiveDataUsage;
    m_sensitiveDataUsageHasBeenSet = true;
}

bool LLMHourBillDetailItem::SensitiveDataUsageHasBeenSet() const
{
    return m_sensitiveDataUsageHasBeenSet;
}

string LLMHourBillDetailItem::GetPromptAttackFee() const
{
    return m_promptAttackFee;
}

void LLMHourBillDetailItem::SetPromptAttackFee(const string& _promptAttackFee)
{
    m_promptAttackFee = _promptAttackFee;
    m_promptAttackFeeHasBeenSet = true;
}

bool LLMHourBillDetailItem::PromptAttackFeeHasBeenSet() const
{
    return m_promptAttackFeeHasBeenSet;
}

string LLMHourBillDetailItem::GetContentTextFee() const
{
    return m_contentTextFee;
}

void LLMHourBillDetailItem::SetContentTextFee(const string& _contentTextFee)
{
    m_contentTextFee = _contentTextFee;
    m_contentTextFeeHasBeenSet = true;
}

bool LLMHourBillDetailItem::ContentTextFeeHasBeenSet() const
{
    return m_contentTextFeeHasBeenSet;
}

string LLMHourBillDetailItem::GetContentImageFee() const
{
    return m_contentImageFee;
}

void LLMHourBillDetailItem::SetContentImageFee(const string& _contentImageFee)
{
    m_contentImageFee = _contentImageFee;
    m_contentImageFeeHasBeenSet = true;
}

bool LLMHourBillDetailItem::ContentImageFeeHasBeenSet() const
{
    return m_contentImageFeeHasBeenSet;
}

string LLMHourBillDetailItem::GetSensitiveDataFee() const
{
    return m_sensitiveDataFee;
}

void LLMHourBillDetailItem::SetSensitiveDataFee(const string& _sensitiveDataFee)
{
    m_sensitiveDataFee = _sensitiveDataFee;
    m_sensitiveDataFeeHasBeenSet = true;
}

bool LLMHourBillDetailItem::SensitiveDataFeeHasBeenSet() const
{
    return m_sensitiveDataFeeHasBeenSet;
}

string LLMHourBillDetailItem::GetTotalFee() const
{
    return m_totalFee;
}

void LLMHourBillDetailItem::SetTotalFee(const string& _totalFee)
{
    m_totalFee = _totalFee;
    m_totalFeeHasBeenSet = true;
}

bool LLMHourBillDetailItem::TotalFeeHasBeenSet() const
{
    return m_totalFeeHasBeenSet;
}

