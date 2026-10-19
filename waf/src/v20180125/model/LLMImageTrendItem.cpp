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

#include <tencentcloud/waf/v20180125/model/LLMImageTrendItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMImageTrendItem::LLMImageTrendItem() :
    m_dayTimeHasBeenSet(false),
    m_imageUsageHasBeenSet(false)
{
}

CoreInternalOutcome LLMImageTrendItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DayTime") && !value["DayTime"].IsNull())
    {
        if (!value["DayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMImageTrendItem.DayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayTime = string(value["DayTime"].GetString());
        m_dayTimeHasBeenSet = true;
    }

    if (value.HasMember("ImageUsage") && !value["ImageUsage"].IsNull())
    {
        if (!value["ImageUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMImageTrendItem.ImageUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageUsage = value["ImageUsage"].GetInt64();
        m_imageUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMImageTrendItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageUsage, allocator);
    }

}


string LLMImageTrendItem::GetDayTime() const
{
    return m_dayTime;
}

void LLMImageTrendItem::SetDayTime(const string& _dayTime)
{
    m_dayTime = _dayTime;
    m_dayTimeHasBeenSet = true;
}

bool LLMImageTrendItem::DayTimeHasBeenSet() const
{
    return m_dayTimeHasBeenSet;
}

int64_t LLMImageTrendItem::GetImageUsage() const
{
    return m_imageUsage;
}

void LLMImageTrendItem::SetImageUsage(const int64_t& _imageUsage)
{
    m_imageUsage = _imageUsage;
    m_imageUsageHasBeenSet = true;
}

bool LLMImageTrendItem::ImageUsageHasBeenSet() const
{
    return m_imageUsageHasBeenSet;
}

