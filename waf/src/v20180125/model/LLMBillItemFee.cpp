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

#include <tencentcloud/waf/v20180125/model/LLMBillItemFee.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMBillItemFee::LLMBillItemFee() :
    m_promptAttackFeeHasBeenSet(false),
    m_contentTextFeeHasBeenSet(false),
    m_contentImageFeeHasBeenSet(false),
    m_sensitiveDataFeeHasBeenSet(false)
{
}

CoreInternalOutcome LLMBillItemFee::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromptAttackFee") && !value["PromptAttackFee"].IsNull())
    {
        if (!value["PromptAttackFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMBillItemFee.PromptAttackFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptAttackFee = string(value["PromptAttackFee"].GetString());
        m_promptAttackFeeHasBeenSet = true;
    }

    if (value.HasMember("ContentTextFee") && !value["ContentTextFee"].IsNull())
    {
        if (!value["ContentTextFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMBillItemFee.ContentTextFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentTextFee = string(value["ContentTextFee"].GetString());
        m_contentTextFeeHasBeenSet = true;
    }

    if (value.HasMember("ContentImageFee") && !value["ContentImageFee"].IsNull())
    {
        if (!value["ContentImageFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMBillItemFee.ContentImageFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentImageFee = string(value["ContentImageFee"].GetString());
        m_contentImageFeeHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataFee") && !value["SensitiveDataFee"].IsNull())
    {
        if (!value["SensitiveDataFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMBillItemFee.SensitiveDataFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataFee = string(value["SensitiveDataFee"].GetString());
        m_sensitiveDataFeeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMBillItemFee::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

}


string LLMBillItemFee::GetPromptAttackFee() const
{
    return m_promptAttackFee;
}

void LLMBillItemFee::SetPromptAttackFee(const string& _promptAttackFee)
{
    m_promptAttackFee = _promptAttackFee;
    m_promptAttackFeeHasBeenSet = true;
}

bool LLMBillItemFee::PromptAttackFeeHasBeenSet() const
{
    return m_promptAttackFeeHasBeenSet;
}

string LLMBillItemFee::GetContentTextFee() const
{
    return m_contentTextFee;
}

void LLMBillItemFee::SetContentTextFee(const string& _contentTextFee)
{
    m_contentTextFee = _contentTextFee;
    m_contentTextFeeHasBeenSet = true;
}

bool LLMBillItemFee::ContentTextFeeHasBeenSet() const
{
    return m_contentTextFeeHasBeenSet;
}

string LLMBillItemFee::GetContentImageFee() const
{
    return m_contentImageFee;
}

void LLMBillItemFee::SetContentImageFee(const string& _contentImageFee)
{
    m_contentImageFee = _contentImageFee;
    m_contentImageFeeHasBeenSet = true;
}

bool LLMBillItemFee::ContentImageFeeHasBeenSet() const
{
    return m_contentImageFeeHasBeenSet;
}

string LLMBillItemFee::GetSensitiveDataFee() const
{
    return m_sensitiveDataFee;
}

void LLMBillItemFee::SetSensitiveDataFee(const string& _sensitiveDataFee)
{
    m_sensitiveDataFee = _sensitiveDataFee;
    m_sensitiveDataFeeHasBeenSet = true;
}

bool LLMBillItemFee::SensitiveDataFeeHasBeenSet() const
{
    return m_sensitiveDataFeeHasBeenSet;
}

