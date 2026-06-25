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

#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelFallbackRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CloudNativeAPIGatewayLLMModelFallbackRule::CloudNativeAPIGatewayLLMModelFallbackRule() :
    m_fallbackModelsHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayLLMModelFallbackRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FallbackModels") && !value["FallbackModels"].IsNull())
    {
        if (!value["FallbackModels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelFallbackRule.FallbackModels` is not array type"));

        const rapidjson::Value &tmpValue = value["FallbackModels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fallbackModels.push_back((*itr).GetString());
        }
        m_fallbackModelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayLLMModelFallbackRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fallbackModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallbackModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fallbackModels.begin(); itr != m_fallbackModels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> CloudNativeAPIGatewayLLMModelFallbackRule::GetFallbackModels() const
{
    return m_fallbackModels;
}

void CloudNativeAPIGatewayLLMModelFallbackRule::SetFallbackModels(const vector<string>& _fallbackModels)
{
    m_fallbackModels = _fallbackModels;
    m_fallbackModelsHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelFallbackRule::FallbackModelsHasBeenSet() const
{
    return m_fallbackModelsHasBeenSet;
}

