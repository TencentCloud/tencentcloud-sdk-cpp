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

#include <tencentcloud/iir/v20200417/model/Location.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iir::V20200417::Model;
using namespace std;

Location::Location() :
    m_xMinHasBeenSet(false),
    m_yMinHasBeenSet(false),
    m_xMaxHasBeenSet(false),
    m_yMaxHasBeenSet(false)
{
}

CoreInternalOutcome Location::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("XMin") && !value["XMin"].IsNull())
    {
        if (!value["XMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Location.XMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xMin = value["XMin"].GetInt64();
        m_xMinHasBeenSet = true;
    }

    if (value.HasMember("YMin") && !value["YMin"].IsNull())
    {
        if (!value["YMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Location.YMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yMin = value["YMin"].GetInt64();
        m_yMinHasBeenSet = true;
    }

    if (value.HasMember("XMax") && !value["XMax"].IsNull())
    {
        if (!value["XMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Location.XMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xMax = value["XMax"].GetInt64();
        m_xMaxHasBeenSet = true;
    }

    if (value.HasMember("YMax") && !value["YMax"].IsNull())
    {
        if (!value["YMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Location.YMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yMax = value["YMax"].GetInt64();
        m_yMaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Location::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xMin, allocator);
    }

    if (m_yMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yMin, allocator);
    }

    if (m_xMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xMax, allocator);
    }

    if (m_yMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yMax, allocator);
    }

}


int64_t Location::GetXMin() const
{
    return m_xMin;
}

void Location::SetXMin(const int64_t& _xMin)
{
    m_xMin = _xMin;
    m_xMinHasBeenSet = true;
}

bool Location::XMinHasBeenSet() const
{
    return m_xMinHasBeenSet;
}

int64_t Location::GetYMin() const
{
    return m_yMin;
}

void Location::SetYMin(const int64_t& _yMin)
{
    m_yMin = _yMin;
    m_yMinHasBeenSet = true;
}

bool Location::YMinHasBeenSet() const
{
    return m_yMinHasBeenSet;
}

int64_t Location::GetXMax() const
{
    return m_xMax;
}

void Location::SetXMax(const int64_t& _xMax)
{
    m_xMax = _xMax;
    m_xMaxHasBeenSet = true;
}

bool Location::XMaxHasBeenSet() const
{
    return m_xMaxHasBeenSet;
}

int64_t Location::GetYMax() const
{
    return m_yMax;
}

void Location::SetYMax(const int64_t& _yMax)
{
    m_yMax = _yMax;
    m_yMaxHasBeenSet = true;
}

bool Location::YMaxHasBeenSet() const
{
    return m_yMaxHasBeenSet;
}

