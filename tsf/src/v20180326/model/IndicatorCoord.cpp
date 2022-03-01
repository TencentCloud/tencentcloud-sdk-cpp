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

#include <tencentcloud/tsf/v20180326/model/IndicatorCoord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

IndicatorCoord::IndicatorCoord() :
    m_coordXHasBeenSet(false),
    m_coordYHasBeenSet(false),
    m_coordTagHasBeenSet(false)
{
}

CoreInternalOutcome IndicatorCoord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CoordX") && !value["CoordX"].IsNull())
    {
        if (!value["CoordX"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorCoord.CoordX` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coordX = string(value["CoordX"].GetString());
        m_coordXHasBeenSet = true;
    }

    if (value.HasMember("CoordY") && !value["CoordY"].IsNull())
    {
        if (!value["CoordY"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorCoord.CoordY` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coordY = string(value["CoordY"].GetString());
        m_coordYHasBeenSet = true;
    }

    if (value.HasMember("CoordTag") && !value["CoordTag"].IsNull())
    {
        if (!value["CoordTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorCoord.CoordTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coordTag = string(value["CoordTag"].GetString());
        m_coordTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndicatorCoord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coordXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoordX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coordX.c_str(), allocator).Move(), allocator);
    }

    if (m_coordYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoordY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coordY.c_str(), allocator).Move(), allocator);
    }

    if (m_coordTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoordTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coordTag.c_str(), allocator).Move(), allocator);
    }

}


string IndicatorCoord::GetCoordX() const
{
    return m_coordX;
}

void IndicatorCoord::SetCoordX(const string& _coordX)
{
    m_coordX = _coordX;
    m_coordXHasBeenSet = true;
}

bool IndicatorCoord::CoordXHasBeenSet() const
{
    return m_coordXHasBeenSet;
}

string IndicatorCoord::GetCoordY() const
{
    return m_coordY;
}

void IndicatorCoord::SetCoordY(const string& _coordY)
{
    m_coordY = _coordY;
    m_coordYHasBeenSet = true;
}

bool IndicatorCoord::CoordYHasBeenSet() const
{
    return m_coordYHasBeenSet;
}

string IndicatorCoord::GetCoordTag() const
{
    return m_coordTag;
}

void IndicatorCoord::SetCoordTag(const string& _coordTag)
{
    m_coordTag = _coordTag;
    m_coordTagHasBeenSet = true;
}

bool IndicatorCoord::CoordTagHasBeenSet() const
{
    return m_coordTagHasBeenSet;
}

