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

#include <tencentcloud/lkeap/v20240522/model/SegmentationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

SegmentationConfig::SegmentationConfig() :
    m_maxChunkSizeHasBeenSet(false)
{
}

CoreInternalOutcome SegmentationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxChunkSize") && !value["MaxChunkSize"].IsNull())
    {
        if (!value["MaxChunkSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationConfig.MaxChunkSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxChunkSize = value["MaxChunkSize"].GetInt64();
        m_maxChunkSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SegmentationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxChunkSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxChunkSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxChunkSize, allocator);
    }

}


int64_t SegmentationConfig::GetMaxChunkSize() const
{
    return m_maxChunkSize;
}

void SegmentationConfig::SetMaxChunkSize(const int64_t& _maxChunkSize)
{
    m_maxChunkSize = _maxChunkSize;
    m_maxChunkSizeHasBeenSet = true;
}

bool SegmentationConfig::MaxChunkSizeHasBeenSet() const
{
    return m_maxChunkSizeHasBeenSet;
}

