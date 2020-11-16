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

#include <tencentcloud/tci/v20190318/model/BodyMovementResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

BodyMovementResult::BodyMovementResult() :
    m_confidenceHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_movementsHasBeenSet(false),
    m_topHasBeenSet(false),
    m_widthHasBeenSet(false)
{
}

CoreInternalOutcome BodyMovementResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `BodyMovementResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BodyMovementResult.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BodyMovementResult.Left` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetInt64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Movements") && !value["Movements"].IsNull())
    {
        if (!value["Movements"].IsString())
        {
            return CoreInternalOutcome(Error("response `BodyMovementResult.Movements` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_movements = string(value["Movements"].GetString());
        m_movementsHasBeenSet = true;
    }

    if (value.HasMember("Top") && !value["Top"].IsNull())
    {
        if (!value["Top"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BodyMovementResult.Top` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_top = value["Top"].GetInt64();
        m_topHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BodyMovementResult.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BodyMovementResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_heightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_leftHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
    }

    if (m_movementsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Movements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_movements.c_str(), allocator).Move(), allocator);
    }

    if (m_topHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Top";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_top, allocator);
    }

    if (m_widthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

}


double BodyMovementResult::GetConfidence() const
{
    return m_confidence;
}

void BodyMovementResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool BodyMovementResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t BodyMovementResult::GetHeight() const
{
    return m_height;
}

void BodyMovementResult::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool BodyMovementResult::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t BodyMovementResult::GetLeft() const
{
    return m_left;
}

void BodyMovementResult::SetLeft(const int64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool BodyMovementResult::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

string BodyMovementResult::GetMovements() const
{
    return m_movements;
}

void BodyMovementResult::SetMovements(const string& _movements)
{
    m_movements = _movements;
    m_movementsHasBeenSet = true;
}

bool BodyMovementResult::MovementsHasBeenSet() const
{
    return m_movementsHasBeenSet;
}

int64_t BodyMovementResult::GetTop() const
{
    return m_top;
}

void BodyMovementResult::SetTop(const int64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool BodyMovementResult::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

int64_t BodyMovementResult::GetWidth() const
{
    return m_width;
}

void BodyMovementResult::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool BodyMovementResult::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

