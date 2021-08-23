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

#include <tencentcloud/ocr/v20181119/model/QrcodePositionObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QrcodePositionObj::QrcodePositionObj() :
    m_leftTopHasBeenSet(false),
    m_rightTopHasBeenSet(false),
    m_rightBottomHasBeenSet(false),
    m_leftBottomHasBeenSet(false)
{
}

CoreInternalOutcome QrcodePositionObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LeftTop") && !value["LeftTop"].IsNull())
    {
        if (!value["LeftTop"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodePositionObj.LeftTop` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_leftTop.Deserialize(value["LeftTop"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_leftTopHasBeenSet = true;
    }

    if (value.HasMember("RightTop") && !value["RightTop"].IsNull())
    {
        if (!value["RightTop"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodePositionObj.RightTop` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rightTop.Deserialize(value["RightTop"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rightTopHasBeenSet = true;
    }

    if (value.HasMember("RightBottom") && !value["RightBottom"].IsNull())
    {
        if (!value["RightBottom"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodePositionObj.RightBottom` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rightBottom.Deserialize(value["RightBottom"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rightBottomHasBeenSet = true;
    }

    if (value.HasMember("LeftBottom") && !value["LeftBottom"].IsNull())
    {
        if (!value["LeftBottom"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodePositionObj.LeftBottom` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_leftBottom.Deserialize(value["LeftBottom"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_leftBottomHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QrcodePositionObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_leftTopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftTop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_leftTop.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rightTopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightTop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rightTop.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rightBottomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightBottom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rightBottom.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_leftBottomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftBottom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_leftBottom.ToJsonObject(value[key.c_str()], allocator);
    }

}


Coord QrcodePositionObj::GetLeftTop() const
{
    return m_leftTop;
}

void QrcodePositionObj::SetLeftTop(const Coord& _leftTop)
{
    m_leftTop = _leftTop;
    m_leftTopHasBeenSet = true;
}

bool QrcodePositionObj::LeftTopHasBeenSet() const
{
    return m_leftTopHasBeenSet;
}

Coord QrcodePositionObj::GetRightTop() const
{
    return m_rightTop;
}

void QrcodePositionObj::SetRightTop(const Coord& _rightTop)
{
    m_rightTop = _rightTop;
    m_rightTopHasBeenSet = true;
}

bool QrcodePositionObj::RightTopHasBeenSet() const
{
    return m_rightTopHasBeenSet;
}

Coord QrcodePositionObj::GetRightBottom() const
{
    return m_rightBottom;
}

void QrcodePositionObj::SetRightBottom(const Coord& _rightBottom)
{
    m_rightBottom = _rightBottom;
    m_rightBottomHasBeenSet = true;
}

bool QrcodePositionObj::RightBottomHasBeenSet() const
{
    return m_rightBottomHasBeenSet;
}

Coord QrcodePositionObj::GetLeftBottom() const
{
    return m_leftBottom;
}

void QrcodePositionObj::SetLeftBottom(const Coord& _leftBottom)
{
    m_leftBottom = _leftBottom;
    m_leftBottomHasBeenSet = true;
}

bool QrcodePositionObj::LeftBottomHasBeenSet() const
{
    return m_leftBottomHasBeenSet;
}

