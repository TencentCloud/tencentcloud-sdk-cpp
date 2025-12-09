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

#include <tencentcloud/hunyuan/v20230901/model/PromptTokensDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

PromptTokensDetails::PromptTokensDetails() :
    m_cachedTokensHasBeenSet(false)
{
}

CoreInternalOutcome PromptTokensDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CachedTokens") && !value["CachedTokens"].IsNull())
    {
        if (!value["CachedTokens"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTokensDetails.CachedTokens` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cachedTokens = string(value["CachedTokens"].GetString());
        m_cachedTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromptTokensDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cachedTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CachedTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cachedTokens.c_str(), allocator).Move(), allocator);
    }

}


string PromptTokensDetails::GetCachedTokens() const
{
    return m_cachedTokens;
}

void PromptTokensDetails::SetCachedTokens(const string& _cachedTokens)
{
    m_cachedTokens = _cachedTokens;
    m_cachedTokensHasBeenSet = true;
}

bool PromptTokensDetails::CachedTokensHasBeenSet() const
{
    return m_cachedTokensHasBeenSet;
}

