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

#include <tencentcloud/ie/v20200304/model/FrameTagItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

FrameTagItem::FrameTagItem() :
    m_startPtsHasBeenSet(false),
    m_endPtsHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_tagItemsHasBeenSet(false)
{
}

CoreInternalOutcome FrameTagItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartPts") && !value["StartPts"].IsNull())
    {
        if (!value["StartPts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameTagItem.StartPts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startPts = value["StartPts"].GetUint64();
        m_startPtsHasBeenSet = true;
    }

    if (value.HasMember("EndPts") && !value["EndPts"].IsNull())
    {
        if (!value["EndPts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameTagItem.EndPts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endPts = value["EndPts"].GetUint64();
        m_endPtsHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameTagItem.Period` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_period = string(value["Period"].GetString());
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("TagItems") && !value["TagItems"].IsNull())
    {
        if (!value["TagItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FrameTagItem.TagItems` is not array type"));

        const rapidjson::Value &tmpValue = value["TagItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagItems.push_back(item);
        }
        m_tagItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameTagItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startPtsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startPts, allocator);
    }

    if (m_endPtsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPts, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }

    if (m_tagItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagItems.begin(); itr != m_tagItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t FrameTagItem::GetStartPts() const
{
    return m_startPts;
}

void FrameTagItem::SetStartPts(const uint64_t& _startPts)
{
    m_startPts = _startPts;
    m_startPtsHasBeenSet = true;
}

bool FrameTagItem::StartPtsHasBeenSet() const
{
    return m_startPtsHasBeenSet;
}

uint64_t FrameTagItem::GetEndPts() const
{
    return m_endPts;
}

void FrameTagItem::SetEndPts(const uint64_t& _endPts)
{
    m_endPts = _endPts;
    m_endPtsHasBeenSet = true;
}

bool FrameTagItem::EndPtsHasBeenSet() const
{
    return m_endPtsHasBeenSet;
}

string FrameTagItem::GetPeriod() const
{
    return m_period;
}

void FrameTagItem::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool FrameTagItem::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<TagItem> FrameTagItem::GetTagItems() const
{
    return m_tagItems;
}

void FrameTagItem::SetTagItems(const vector<TagItem>& _tagItems)
{
    m_tagItems = _tagItems;
    m_tagItemsHasBeenSet = true;
}

bool FrameTagItem::TagItemsHasBeenSet() const
{
    return m_tagItemsHasBeenSet;
}

