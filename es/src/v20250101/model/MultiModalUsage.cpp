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

#include <tencentcloud/es/v20250101/model/MultiModalUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

MultiModalUsage::MultiModalUsage() :
    m_totalTokensHasBeenSet(false),
    m_totalImagesHasBeenSet(false)
{
}

CoreInternalOutcome MultiModalUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiModalUsage.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalImages") && !value["TotalImages"].IsNull())
    {
        if (!value["TotalImages"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiModalUsage.TotalImages` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalImages = value["TotalImages"].GetUint64();
        m_totalImagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiModalUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

    if (m_totalImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalImages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalImages, allocator);
    }

}


uint64_t MultiModalUsage::GetTotalTokens() const
{
    return m_totalTokens;
}

void MultiModalUsage::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool MultiModalUsage::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

uint64_t MultiModalUsage::GetTotalImages() const
{
    return m_totalImages;
}

void MultiModalUsage::SetTotalImages(const uint64_t& _totalImages)
{
    m_totalImages = _totalImages;
    m_totalImagesHasBeenSet = true;
}

bool MultiModalUsage::TotalImagesHasBeenSet() const
{
    return m_totalImagesHasBeenSet;
}

