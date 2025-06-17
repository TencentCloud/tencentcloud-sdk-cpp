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

#include <tencentcloud/mps/v20190612/model/BlindWatermarkEmbedInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

BlindWatermarkEmbedInfo::BlindWatermarkEmbedInfo() :
    m_embedTextHasBeenSet(false)
{
}

CoreInternalOutcome BlindWatermarkEmbedInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EmbedText") && !value["EmbedText"].IsNull())
    {
        if (!value["EmbedText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlindWatermarkEmbedInfo.EmbedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_embedText = string(value["EmbedText"].GetString());
        m_embedTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlindWatermarkEmbedInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_embedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_embedText.c_str(), allocator).Move(), allocator);
    }

}


string BlindWatermarkEmbedInfo::GetEmbedText() const
{
    return m_embedText;
}

void BlindWatermarkEmbedInfo::SetEmbedText(const string& _embedText)
{
    m_embedText = _embedText;
    m_embedTextHasBeenSet = true;
}

bool BlindWatermarkEmbedInfo::EmbedTextHasBeenSet() const
{
    return m_embedTextHasBeenSet;
}

