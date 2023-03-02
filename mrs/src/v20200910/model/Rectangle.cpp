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

#include <tencentcloud/mrs/v20200910/model/Rectangle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Rectangle::Rectangle() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_wHasBeenSet(false),
    m_hHasBeenSet(false)
{
}

CoreInternalOutcome Rectangle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Rectangle.X` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetInt64();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Rectangle.Y` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetInt64();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("W") && !value["W"].IsNull())
    {
        if (!value["W"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Rectangle.W` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_w = value["W"].GetInt64();
        m_wHasBeenSet = true;
    }

    if (value.HasMember("H") && !value["H"].IsNull())
    {
        if (!value["H"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Rectangle.H` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_h = value["H"].GetInt64();
        m_hHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Rectangle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_x, allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
    }

    if (m_wHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "W";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_w, allocator);
    }

    if (m_hHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "H";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_h, allocator);
    }

}


int64_t Rectangle::GetX() const
{
    return m_x;
}

void Rectangle::SetX(const int64_t& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool Rectangle::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

int64_t Rectangle::GetY() const
{
    return m_y;
}

void Rectangle::SetY(const int64_t& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool Rectangle::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

int64_t Rectangle::GetW() const
{
    return m_w;
}

void Rectangle::SetW(const int64_t& _w)
{
    m_w = _w;
    m_wHasBeenSet = true;
}

bool Rectangle::WHasBeenSet() const
{
    return m_wHasBeenSet;
}

int64_t Rectangle::GetH() const
{
    return m_h;
}

void Rectangle::SetH(const int64_t& _h)
{
    m_h = _h;
    m_hHasBeenSet = true;
}

bool Rectangle::HHasBeenSet() const
{
    return m_hHasBeenSet;
}

