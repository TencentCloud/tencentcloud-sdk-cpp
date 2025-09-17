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

#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkTaskConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ExtractBlindWatermarkTaskConfig::ExtractBlindWatermarkTaskConfig() :
    m_segmentDurationHasBeenSet(false)
{
}

CoreInternalOutcome ExtractBlindWatermarkTaskConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentDuration") && !value["SegmentDuration"].IsNull())
    {
        if (!value["SegmentDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTaskConfig.SegmentDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentDuration = value["SegmentDuration"].GetInt64();
        m_segmentDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtractBlindWatermarkTaskConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_segmentDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentDuration, allocator);
    }

}


int64_t ExtractBlindWatermarkTaskConfig::GetSegmentDuration() const
{
    return m_segmentDuration;
}

void ExtractBlindWatermarkTaskConfig::SetSegmentDuration(const int64_t& _segmentDuration)
{
    m_segmentDuration = _segmentDuration;
    m_segmentDurationHasBeenSet = true;
}

bool ExtractBlindWatermarkTaskConfig::SegmentDurationHasBeenSet() const
{
    return m_segmentDurationHasBeenSet;
}

