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

#include <tencentcloud/mps/v20190612/model/EraseArea.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

EraseArea::EraseArea() :
    m_leftTopXHasBeenSet(false),
    m_leftTopYHasBeenSet(false),
    m_rightBottomXHasBeenSet(false),
    m_rightBottomYHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

CoreInternalOutcome EraseArea::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LeftTopX") && !value["LeftTopX"].IsNull())
    {
        if (!value["LeftTopX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EraseArea.LeftTopX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftTopX = value["LeftTopX"].GetDouble();
        m_leftTopXHasBeenSet = true;
    }

    if (value.HasMember("LeftTopY") && !value["LeftTopY"].IsNull())
    {
        if (!value["LeftTopY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EraseArea.LeftTopY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftTopY = value["LeftTopY"].GetDouble();
        m_leftTopYHasBeenSet = true;
    }

    if (value.HasMember("RightBottomX") && !value["RightBottomX"].IsNull())
    {
        if (!value["RightBottomX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EraseArea.RightBottomX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rightBottomX = value["RightBottomX"].GetDouble();
        m_rightBottomXHasBeenSet = true;
    }

    if (value.HasMember("RightBottomY") && !value["RightBottomY"].IsNull())
    {
        if (!value["RightBottomY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EraseArea.RightBottomY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rightBottomY = value["RightBottomY"].GetDouble();
        m_rightBottomYHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EraseArea.Unit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unit = value["Unit"].GetUint64();
        m_unitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EraseArea::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_leftTopXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftTopX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftTopX, allocator);
    }

    if (m_leftTopYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftTopY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftTopY, allocator);
    }

    if (m_rightBottomXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightBottomX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rightBottomX, allocator);
    }

    if (m_rightBottomYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightBottomY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rightBottomY, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unit, allocator);
    }

}


double EraseArea::GetLeftTopX() const
{
    return m_leftTopX;
}

void EraseArea::SetLeftTopX(const double& _leftTopX)
{
    m_leftTopX = _leftTopX;
    m_leftTopXHasBeenSet = true;
}

bool EraseArea::LeftTopXHasBeenSet() const
{
    return m_leftTopXHasBeenSet;
}

double EraseArea::GetLeftTopY() const
{
    return m_leftTopY;
}

void EraseArea::SetLeftTopY(const double& _leftTopY)
{
    m_leftTopY = _leftTopY;
    m_leftTopYHasBeenSet = true;
}

bool EraseArea::LeftTopYHasBeenSet() const
{
    return m_leftTopYHasBeenSet;
}

double EraseArea::GetRightBottomX() const
{
    return m_rightBottomX;
}

void EraseArea::SetRightBottomX(const double& _rightBottomX)
{
    m_rightBottomX = _rightBottomX;
    m_rightBottomXHasBeenSet = true;
}

bool EraseArea::RightBottomXHasBeenSet() const
{
    return m_rightBottomXHasBeenSet;
}

double EraseArea::GetRightBottomY() const
{
    return m_rightBottomY;
}

void EraseArea::SetRightBottomY(const double& _rightBottomY)
{
    m_rightBottomY = _rightBottomY;
    m_rightBottomYHasBeenSet = true;
}

bool EraseArea::RightBottomYHasBeenSet() const
{
    return m_rightBottomYHasBeenSet;
}

uint64_t EraseArea::GetUnit() const
{
    return m_unit;
}

void EraseArea::SetUnit(const uint64_t& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool EraseArea::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

