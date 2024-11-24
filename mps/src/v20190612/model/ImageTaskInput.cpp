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

#include <tencentcloud/mps/v20190612/model/ImageTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageTaskInput::ImageTaskInput() :
    m_encodeConfigHasBeenSet(false),
    m_enhanceConfigHasBeenSet(false)
{
}

CoreInternalOutcome ImageTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EncodeConfig") && !value["EncodeConfig"].IsNull())
    {
        if (!value["EncodeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.EncodeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_encodeConfig.Deserialize(value["EncodeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_encodeConfigHasBeenSet = true;
    }

    if (value.HasMember("EnhanceConfig") && !value["EnhanceConfig"].IsNull())
    {
        if (!value["EnhanceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.EnhanceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enhanceConfig.Deserialize(value["EnhanceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enhanceConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encodeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enhanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhanceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


ImageEncodeConfig ImageTaskInput::GetEncodeConfig() const
{
    return m_encodeConfig;
}

void ImageTaskInput::SetEncodeConfig(const ImageEncodeConfig& _encodeConfig)
{
    m_encodeConfig = _encodeConfig;
    m_encodeConfigHasBeenSet = true;
}

bool ImageTaskInput::EncodeConfigHasBeenSet() const
{
    return m_encodeConfigHasBeenSet;
}

ImageEnhanceConfig ImageTaskInput::GetEnhanceConfig() const
{
    return m_enhanceConfig;
}

void ImageTaskInput::SetEnhanceConfig(const ImageEnhanceConfig& _enhanceConfig)
{
    m_enhanceConfig = _enhanceConfig;
    m_enhanceConfigHasBeenSet = true;
}

bool ImageTaskInput::EnhanceConfigHasBeenSet() const
{
    return m_enhanceConfigHasBeenSet;
}

