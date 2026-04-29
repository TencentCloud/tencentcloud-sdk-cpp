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

#include <tencentcloud/ocr/v20181119/model/CoordList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

CoordList::CoordList() :
    m_topLeftHasBeenSet(false),
    m_topRightHasBeenSet(false),
    m_bottomLeftHasBeenSet(false),
    m_bottomRightHasBeenSet(false)
{
}

CoreInternalOutcome CoordList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopLeft") && !value["TopLeft"].IsNull())
    {
        if (!value["TopLeft"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CoordList.TopLeft` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_topLeft.Deserialize(value["TopLeft"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_topLeftHasBeenSet = true;
    }

    if (value.HasMember("TopRight") && !value["TopRight"].IsNull())
    {
        if (!value["TopRight"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CoordList.TopRight` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_topRight.Deserialize(value["TopRight"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_topRightHasBeenSet = true;
    }

    if (value.HasMember("BottomLeft") && !value["BottomLeft"].IsNull())
    {
        if (!value["BottomLeft"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CoordList.BottomLeft` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bottomLeft.Deserialize(value["BottomLeft"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bottomLeftHasBeenSet = true;
    }

    if (value.HasMember("BottomRight") && !value["BottomRight"].IsNull())
    {
        if (!value["BottomRight"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CoordList.BottomRight` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bottomRight.Deserialize(value["BottomRight"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bottomRightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoordList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_topLeft.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_topRightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopRight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_topRight.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bottomLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BottomLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bottomLeft.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bottomRightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BottomRight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bottomRight.ToJsonObject(value[key.c_str()], allocator);
    }

}


Coord CoordList::GetTopLeft() const
{
    return m_topLeft;
}

void CoordList::SetTopLeft(const Coord& _topLeft)
{
    m_topLeft = _topLeft;
    m_topLeftHasBeenSet = true;
}

bool CoordList::TopLeftHasBeenSet() const
{
    return m_topLeftHasBeenSet;
}

Coord CoordList::GetTopRight() const
{
    return m_topRight;
}

void CoordList::SetTopRight(const Coord& _topRight)
{
    m_topRight = _topRight;
    m_topRightHasBeenSet = true;
}

bool CoordList::TopRightHasBeenSet() const
{
    return m_topRightHasBeenSet;
}

Coord CoordList::GetBottomLeft() const
{
    return m_bottomLeft;
}

void CoordList::SetBottomLeft(const Coord& _bottomLeft)
{
    m_bottomLeft = _bottomLeft;
    m_bottomLeftHasBeenSet = true;
}

bool CoordList::BottomLeftHasBeenSet() const
{
    return m_bottomLeftHasBeenSet;
}

Coord CoordList::GetBottomRight() const
{
    return m_bottomRight;
}

void CoordList::SetBottomRight(const Coord& _bottomRight)
{
    m_bottomRight = _bottomRight;
    m_bottomRightHasBeenSet = true;
}

bool CoordList::BottomRightHasBeenSet() const
{
    return m_bottomRightHasBeenSet;
}

