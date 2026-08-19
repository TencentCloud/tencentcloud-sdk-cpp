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

#include <tencentcloud/csip/v20221121/model/NetworkSegment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

NetworkSegment::NetworkSegment() :
    m_segmentHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome NetworkSegment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Segment") && !value["Segment"].IsNull())
    {
        if (!value["Segment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkSegment.Segment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segment = string(value["Segment"].GetString());
        m_segmentHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkSegment.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkSegment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_segmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Segment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segment.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string NetworkSegment::GetSegment() const
{
    return m_segment;
}

void NetworkSegment::SetSegment(const string& _segment)
{
    m_segment = _segment;
    m_segmentHasBeenSet = true;
}

bool NetworkSegment::SegmentHasBeenSet() const
{
    return m_segmentHasBeenSet;
}

string NetworkSegment::GetDesc() const
{
    return m_desc;
}

void NetworkSegment::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool NetworkSegment::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

