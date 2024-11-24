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

#include <tencentcloud/mps/v20190612/model/ImageEncodeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageEncodeConfig::ImageEncodeConfig() :
    m_formatHasBeenSet(false),
    m_qualityHasBeenSet(false)
{
}

CoreInternalOutcome ImageEncodeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageEncodeConfig.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Quality") && !value["Quality"].IsNull())
    {
        if (!value["Quality"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageEncodeConfig.Quality` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quality = value["Quality"].GetInt64();
        m_qualityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageEncodeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quality, allocator);
    }

}


string ImageEncodeConfig::GetFormat() const
{
    return m_format;
}

void ImageEncodeConfig::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ImageEncodeConfig::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

int64_t ImageEncodeConfig::GetQuality() const
{
    return m_quality;
}

void ImageEncodeConfig::SetQuality(const int64_t& _quality)
{
    m_quality = _quality;
    m_qualityHasBeenSet = true;
}

bool ImageEncodeConfig::QualityHasBeenSet() const
{
    return m_qualityHasBeenSet;
}

