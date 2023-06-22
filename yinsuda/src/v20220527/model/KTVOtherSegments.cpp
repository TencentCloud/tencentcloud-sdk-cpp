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

#include <tencentcloud/yinsuda/v20220527/model/KTVOtherSegments.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

KTVOtherSegments::KTVOtherSegments() :
    m_segmentBeginHasBeenSet(false),
    m_segmentEndHasBeenSet(false)
{
}

CoreInternalOutcome KTVOtherSegments::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentBegin") && !value["SegmentBegin"].IsNull())
    {
        if (!value["SegmentBegin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVOtherSegments.SegmentBegin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentBegin = value["SegmentBegin"].GetInt64();
        m_segmentBeginHasBeenSet = true;
    }

    if (value.HasMember("SegmentEnd") && !value["SegmentEnd"].IsNull())
    {
        if (!value["SegmentEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVOtherSegments.SegmentEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentEnd = value["SegmentEnd"].GetInt64();
        m_segmentEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVOtherSegments::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_segmentBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentBegin, allocator);
    }

    if (m_segmentEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentEnd, allocator);
    }

}


int64_t KTVOtherSegments::GetSegmentBegin() const
{
    return m_segmentBegin;
}

void KTVOtherSegments::SetSegmentBegin(const int64_t& _segmentBegin)
{
    m_segmentBegin = _segmentBegin;
    m_segmentBeginHasBeenSet = true;
}

bool KTVOtherSegments::SegmentBeginHasBeenSet() const
{
    return m_segmentBeginHasBeenSet;
}

int64_t KTVOtherSegments::GetSegmentEnd() const
{
    return m_segmentEnd;
}

void KTVOtherSegments::SetSegmentEnd(const int64_t& _segmentEnd)
{
    m_segmentEnd = _segmentEnd;
    m_segmentEndHasBeenSet = true;
}

bool KTVOtherSegments::SegmentEndHasBeenSet() const
{
    return m_segmentEndHasBeenSet;
}

