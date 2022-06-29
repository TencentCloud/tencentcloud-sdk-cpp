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

#include <tencentcloud/cii/v20210408/model/Point.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

Point::Point() :
    m_xCoordinateHasBeenSet(false),
    m_yCoordinateHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome Point::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("XCoordinate") && !value["XCoordinate"].IsNull())
    {
        if (!value["XCoordinate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Point.XCoordinate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xCoordinate = value["XCoordinate"].GetInt64();
        m_xCoordinateHasBeenSet = true;
    }

    if (value.HasMember("YCoordinate") && !value["YCoordinate"].IsNull())
    {
        if (!value["YCoordinate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Point.YCoordinate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yCoordinate = value["YCoordinate"].GetInt64();
        m_yCoordinateHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Point.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Point::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xCoordinate, allocator);
    }

    if (m_yCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yCoordinate, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


int64_t Point::GetXCoordinate() const
{
    return m_xCoordinate;
}

void Point::SetXCoordinate(const int64_t& _xCoordinate)
{
    m_xCoordinate = _xCoordinate;
    m_xCoordinateHasBeenSet = true;
}

bool Point::XCoordinateHasBeenSet() const
{
    return m_xCoordinateHasBeenSet;
}

int64_t Point::GetYCoordinate() const
{
    return m_yCoordinate;
}

void Point::SetYCoordinate(const int64_t& _yCoordinate)
{
    m_yCoordinate = _yCoordinate;
    m_yCoordinateHasBeenSet = true;
}

bool Point::YCoordinateHasBeenSet() const
{
    return m_yCoordinateHasBeenSet;
}

int64_t Point::GetPage() const
{
    return m_page;
}

void Point::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool Point::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

