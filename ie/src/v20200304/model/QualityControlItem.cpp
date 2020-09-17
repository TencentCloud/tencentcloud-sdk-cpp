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

#include <tencentcloud/ie/v20200304/model/QualityControlItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

QualityControlItem::QualityControlItem() :
    m_confidenceHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_areaCoordsSetHasBeenSet(false)
{
}

CoreInternalOutcome QualityControlItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `QualityControlItem.Confidence` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetUint64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `QualityControlItem.StartTimeOffset` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `QualityControlItem.EndTimeOffset` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("AreaCoordsSet") && !value["AreaCoordsSet"].IsNull())
    {
        if (!value["AreaCoordsSet"].IsArray())
            return CoreInternalOutcome(Error("response `QualityControlItem.AreaCoordsSet` is not array type"));

        const Value &tmpValue = value["AreaCoordsSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaCoordsSet.push_back((*itr).GetUint64());
        }
        m_areaCoordsSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityControlItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_areaCoordsSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AreaCoordsSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_areaCoordsSet.begin(); itr != m_areaCoordsSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

}


uint64_t QualityControlItem::GetConfidence() const
{
    return m_confidence;
}

void QualityControlItem::SetConfidence(const uint64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool QualityControlItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double QualityControlItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void QualityControlItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool QualityControlItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double QualityControlItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void QualityControlItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool QualityControlItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

vector<uint64_t> QualityControlItem::GetAreaCoordsSet() const
{
    return m_areaCoordsSet;
}

void QualityControlItem::SetAreaCoordsSet(const vector<uint64_t>& _areaCoordsSet)
{
    m_areaCoordsSet = _areaCoordsSet;
    m_areaCoordsSetHasBeenSet = true;
}

bool QualityControlItem::AreaCoordsSetHasBeenSet() const
{
    return m_areaCoordsSetHasBeenSet;
}

