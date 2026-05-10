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

#include <tencentcloud/vod/v20180717/model/MPSEraseTimeArea.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSEraseTimeArea::MPSEraseTimeArea() :
    m_beginMsHasBeenSet(false),
    m_endMsHasBeenSet(false),
    m_areasHasBeenSet(false)
{
}

CoreInternalOutcome MPSEraseTimeArea::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BeginMs") && !value["BeginMs"].IsNull())
    {
        if (!value["BeginMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSEraseTimeArea.BeginMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beginMs = value["BeginMs"].GetUint64();
        m_beginMsHasBeenSet = true;
    }

    if (value.HasMember("EndMs") && !value["EndMs"].IsNull())
    {
        if (!value["EndMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSEraseTimeArea.EndMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endMs = value["EndMs"].GetUint64();
        m_endMsHasBeenSet = true;
    }

    if (value.HasMember("Areas") && !value["Areas"].IsNull())
    {
        if (!value["Areas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSEraseTimeArea.Areas` is not array type"));

        const rapidjson::Value &tmpValue = value["Areas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MPSEraseArea item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_areas.push_back(item);
        }
        m_areasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSEraseTimeArea::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginMs, allocator);
    }

    if (m_endMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endMs, allocator);
    }

    if (m_areasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Areas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_areas.begin(); itr != m_areas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t MPSEraseTimeArea::GetBeginMs() const
{
    return m_beginMs;
}

void MPSEraseTimeArea::SetBeginMs(const uint64_t& _beginMs)
{
    m_beginMs = _beginMs;
    m_beginMsHasBeenSet = true;
}

bool MPSEraseTimeArea::BeginMsHasBeenSet() const
{
    return m_beginMsHasBeenSet;
}

uint64_t MPSEraseTimeArea::GetEndMs() const
{
    return m_endMs;
}

void MPSEraseTimeArea::SetEndMs(const uint64_t& _endMs)
{
    m_endMs = _endMs;
    m_endMsHasBeenSet = true;
}

bool MPSEraseTimeArea::EndMsHasBeenSet() const
{
    return m_endMsHasBeenSet;
}

vector<MPSEraseArea> MPSEraseTimeArea::GetAreas() const
{
    return m_areas;
}

void MPSEraseTimeArea::SetAreas(const vector<MPSEraseArea>& _areas)
{
    m_areas = _areas;
    m_areasHasBeenSet = true;
}

bool MPSEraseTimeArea::AreasHasBeenSet() const
{
    return m_areasHasBeenSet;
}

