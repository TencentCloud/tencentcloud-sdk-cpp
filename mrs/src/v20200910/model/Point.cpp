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

#include <tencentcloud/mrs/v20200910/model/Point.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Point::Point() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false)
{
}

CoreInternalOutcome Point::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Point.X` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetInt64();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Point.Y` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetInt64();
        m_yHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Point::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t Point::GetX() const
{
    return m_x;
}

void Point::SetX(const int64_t& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool Point::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

int64_t Point::GetY() const
{
    return m_y;
}

void Point::SetY(const int64_t& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool Point::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

