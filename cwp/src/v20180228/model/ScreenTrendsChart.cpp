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

#include <tencentcloud/cwp/v20180228/model/ScreenTrendsChart.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScreenTrendsChart::ScreenTrendsChart() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ScreenTrendsChart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTrendsChart.X` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_x = string(value["X"].GetString());
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTrendsChart.Y` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetUint64();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenTrendsChart.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScreenTrendsChart::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_x.c_str(), allocator).Move(), allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string ScreenTrendsChart::GetX() const
{
    return m_x;
}

void ScreenTrendsChart::SetX(const string& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool ScreenTrendsChart::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

uint64_t ScreenTrendsChart::GetY() const
{
    return m_y;
}

void ScreenTrendsChart::SetY(const uint64_t& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool ScreenTrendsChart::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

string ScreenTrendsChart::GetType() const
{
    return m_type;
}

void ScreenTrendsChart::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ScreenTrendsChart::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

