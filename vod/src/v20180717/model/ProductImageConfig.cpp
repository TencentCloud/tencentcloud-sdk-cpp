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

#include <tencentcloud/vod/v20180717/model/ProductImageConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProductImageConfig::ProductImageConfig() :
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_productDescHasBeenSet(false),
    m_moreRequirementHasBeenSet(false),
    m_outputImageCountHasBeenSet(false)
{
}

CoreInternalOutcome ProductImageConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductImageConfig.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("NegativePrompt") && !value["NegativePrompt"].IsNull())
    {
        if (!value["NegativePrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductImageConfig.NegativePrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_negativePrompt = string(value["NegativePrompt"].GetString());
        m_negativePromptHasBeenSet = true;
    }

    if (value.HasMember("ProductDesc") && !value["ProductDesc"].IsNull())
    {
        if (!value["ProductDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductImageConfig.ProductDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDesc = string(value["ProductDesc"].GetString());
        m_productDescHasBeenSet = true;
    }

    if (value.HasMember("MoreRequirement") && !value["MoreRequirement"].IsNull())
    {
        if (!value["MoreRequirement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductImageConfig.MoreRequirement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moreRequirement = string(value["MoreRequirement"].GetString());
        m_moreRequirementHasBeenSet = true;
    }

    if (value.HasMember("OutputImageCount") && !value["OutputImageCount"].IsNull())
    {
        if (!value["OutputImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductImageConfig.OutputImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputImageCount = value["OutputImageCount"].GetUint64();
        m_outputImageCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductImageConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_negativePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegativePrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_negativePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_productDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_moreRequirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MoreRequirement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moreRequirement.c_str(), allocator).Move(), allocator);
    }

    if (m_outputImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputImageCount, allocator);
    }

}


string ProductImageConfig::GetPrompt() const
{
    return m_prompt;
}

void ProductImageConfig::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool ProductImageConfig::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string ProductImageConfig::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void ProductImageConfig::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool ProductImageConfig::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

string ProductImageConfig::GetProductDesc() const
{
    return m_productDesc;
}

void ProductImageConfig::SetProductDesc(const string& _productDesc)
{
    m_productDesc = _productDesc;
    m_productDescHasBeenSet = true;
}

bool ProductImageConfig::ProductDescHasBeenSet() const
{
    return m_productDescHasBeenSet;
}

string ProductImageConfig::GetMoreRequirement() const
{
    return m_moreRequirement;
}

void ProductImageConfig::SetMoreRequirement(const string& _moreRequirement)
{
    m_moreRequirement = _moreRequirement;
    m_moreRequirementHasBeenSet = true;
}

bool ProductImageConfig::MoreRequirementHasBeenSet() const
{
    return m_moreRequirementHasBeenSet;
}

uint64_t ProductImageConfig::GetOutputImageCount() const
{
    return m_outputImageCount;
}

void ProductImageConfig::SetOutputImageCount(const uint64_t& _outputImageCount)
{
    m_outputImageCount = _outputImageCount;
    m_outputImageCountHasBeenSet = true;
}

bool ProductImageConfig::OutputImageCountHasBeenSet() const
{
    return m_outputImageCountHasBeenSet;
}

