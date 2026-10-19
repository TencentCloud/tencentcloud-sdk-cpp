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

#include <tencentcloud/waf/v20180125/model/LLMTokenUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMTokenUsage::LLMTokenUsage() :
    m_promptUsageHasBeenSet(false),
    m_contentTextUsageHasBeenSet(false),
    m_sensitiveDataUsageHasBeenSet(false),
    m_contentImageUsageHasBeenSet(false),
    m_tokenTrendHasBeenSet(false),
    m_imageTrendHasBeenSet(false)
{
}

CoreInternalOutcome LLMTokenUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromptUsage") && !value["PromptUsage"].IsNull())
    {
        if (!value["PromptUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMTokenUsage.PromptUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_promptUsage = value["PromptUsage"].GetInt64();
        m_promptUsageHasBeenSet = true;
    }

    if (value.HasMember("ContentTextUsage") && !value["ContentTextUsage"].IsNull())
    {
        if (!value["ContentTextUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMTokenUsage.ContentTextUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentTextUsage = value["ContentTextUsage"].GetInt64();
        m_contentTextUsageHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataUsage") && !value["SensitiveDataUsage"].IsNull())
    {
        if (!value["SensitiveDataUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMTokenUsage.SensitiveDataUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataUsage = value["SensitiveDataUsage"].GetInt64();
        m_sensitiveDataUsageHasBeenSet = true;
    }

    if (value.HasMember("ContentImageUsage") && !value["ContentImageUsage"].IsNull())
    {
        if (!value["ContentImageUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMTokenUsage.ContentImageUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentImageUsage = value["ContentImageUsage"].GetInt64();
        m_contentImageUsageHasBeenSet = true;
    }

    if (value.HasMember("TokenTrend") && !value["TokenTrend"].IsNull())
    {
        if (!value["TokenTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMTokenUsage.TokenTrend` is not array type"));

        const rapidjson::Value &tmpValue = value["TokenTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LLMTokenTrendItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tokenTrend.push_back(item);
        }
        m_tokenTrendHasBeenSet = true;
    }

    if (value.HasMember("ImageTrend") && !value["ImageTrend"].IsNull())
    {
        if (!value["ImageTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMTokenUsage.ImageTrend` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LLMImageTrendItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageTrend.push_back(item);
        }
        m_imageTrendHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMTokenUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promptUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptUsage, allocator);
    }

    if (m_contentTextUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentTextUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentTextUsage, allocator);
    }

    if (m_sensitiveDataUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDataUsage, allocator);
    }

    if (m_contentImageUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentImageUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentImageUsage, allocator);
    }

    if (m_tokenTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tokenTrend.begin(); itr != m_tokenTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageTrend.begin(); itr != m_imageTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t LLMTokenUsage::GetPromptUsage() const
{
    return m_promptUsage;
}

void LLMTokenUsage::SetPromptUsage(const int64_t& _promptUsage)
{
    m_promptUsage = _promptUsage;
    m_promptUsageHasBeenSet = true;
}

bool LLMTokenUsage::PromptUsageHasBeenSet() const
{
    return m_promptUsageHasBeenSet;
}

int64_t LLMTokenUsage::GetContentTextUsage() const
{
    return m_contentTextUsage;
}

void LLMTokenUsage::SetContentTextUsage(const int64_t& _contentTextUsage)
{
    m_contentTextUsage = _contentTextUsage;
    m_contentTextUsageHasBeenSet = true;
}

bool LLMTokenUsage::ContentTextUsageHasBeenSet() const
{
    return m_contentTextUsageHasBeenSet;
}

int64_t LLMTokenUsage::GetSensitiveDataUsage() const
{
    return m_sensitiveDataUsage;
}

void LLMTokenUsage::SetSensitiveDataUsage(const int64_t& _sensitiveDataUsage)
{
    m_sensitiveDataUsage = _sensitiveDataUsage;
    m_sensitiveDataUsageHasBeenSet = true;
}

bool LLMTokenUsage::SensitiveDataUsageHasBeenSet() const
{
    return m_sensitiveDataUsageHasBeenSet;
}

int64_t LLMTokenUsage::GetContentImageUsage() const
{
    return m_contentImageUsage;
}

void LLMTokenUsage::SetContentImageUsage(const int64_t& _contentImageUsage)
{
    m_contentImageUsage = _contentImageUsage;
    m_contentImageUsageHasBeenSet = true;
}

bool LLMTokenUsage::ContentImageUsageHasBeenSet() const
{
    return m_contentImageUsageHasBeenSet;
}

vector<LLMTokenTrendItem> LLMTokenUsage::GetTokenTrend() const
{
    return m_tokenTrend;
}

void LLMTokenUsage::SetTokenTrend(const vector<LLMTokenTrendItem>& _tokenTrend)
{
    m_tokenTrend = _tokenTrend;
    m_tokenTrendHasBeenSet = true;
}

bool LLMTokenUsage::TokenTrendHasBeenSet() const
{
    return m_tokenTrendHasBeenSet;
}

vector<LLMImageTrendItem> LLMTokenUsage::GetImageTrend() const
{
    return m_imageTrend;
}

void LLMTokenUsage::SetImageTrend(const vector<LLMImageTrendItem>& _imageTrend)
{
    m_imageTrend = _imageTrend;
    m_imageTrendHasBeenSet = true;
}

bool LLMTokenUsage::ImageTrendHasBeenSet() const
{
    return m_imageTrendHasBeenSet;
}

