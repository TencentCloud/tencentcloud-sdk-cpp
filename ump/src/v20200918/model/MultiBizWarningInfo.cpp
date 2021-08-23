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

#include <tencentcloud/ump/v20200918/model/MultiBizWarningInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

MultiBizWarningInfo::MultiBizWarningInfo() :
    m_warningTypeHasBeenSet(false),
    m_warningAreaSizeHasBeenSet(false),
    m_warningLocationHasBeenSet(false),
    m_warningAreaContourHasBeenSet(false)
{
}

CoreInternalOutcome MultiBizWarningInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WarningType") && !value["WarningType"].IsNull())
    {
        if (!value["WarningType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiBizWarningInfo.WarningType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warningType = value["WarningType"].GetInt64();
        m_warningTypeHasBeenSet = true;
    }

    if (value.HasMember("WarningAreaSize") && !value["WarningAreaSize"].IsNull())
    {
        if (!value["WarningAreaSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MultiBizWarningInfo.WarningAreaSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_warningAreaSize = value["WarningAreaSize"].GetDouble();
        m_warningAreaSizeHasBeenSet = true;
    }

    if (value.HasMember("WarningLocation") && !value["WarningLocation"].IsNull())
    {
        if (!value["WarningLocation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiBizWarningInfo.WarningLocation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_warningLocation.Deserialize(value["WarningLocation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_warningLocationHasBeenSet = true;
    }

    if (value.HasMember("WarningAreaContour") && !value["WarningAreaContour"].IsNull())
    {
        if (!value["WarningAreaContour"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiBizWarningInfo.WarningAreaContour` is not array type"));

        const rapidjson::Value &tmpValue = value["WarningAreaContour"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_warningAreaContour.push_back(item);
        }
        m_warningAreaContourHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiBizWarningInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_warningTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warningType, allocator);
    }

    if (m_warningAreaSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningAreaSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warningAreaSize, allocator);
    }

    if (m_warningLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_warningLocation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_warningAreaContourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningAreaContour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_warningAreaContour.begin(); itr != m_warningAreaContour.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t MultiBizWarningInfo::GetWarningType() const
{
    return m_warningType;
}

void MultiBizWarningInfo::SetWarningType(const int64_t& _warningType)
{
    m_warningType = _warningType;
    m_warningTypeHasBeenSet = true;
}

bool MultiBizWarningInfo::WarningTypeHasBeenSet() const
{
    return m_warningTypeHasBeenSet;
}

double MultiBizWarningInfo::GetWarningAreaSize() const
{
    return m_warningAreaSize;
}

void MultiBizWarningInfo::SetWarningAreaSize(const double& _warningAreaSize)
{
    m_warningAreaSize = _warningAreaSize;
    m_warningAreaSizeHasBeenSet = true;
}

bool MultiBizWarningInfo::WarningAreaSizeHasBeenSet() const
{
    return m_warningAreaSizeHasBeenSet;
}

Point MultiBizWarningInfo::GetWarningLocation() const
{
    return m_warningLocation;
}

void MultiBizWarningInfo::SetWarningLocation(const Point& _warningLocation)
{
    m_warningLocation = _warningLocation;
    m_warningLocationHasBeenSet = true;
}

bool MultiBizWarningInfo::WarningLocationHasBeenSet() const
{
    return m_warningLocationHasBeenSet;
}

vector<Point> MultiBizWarningInfo::GetWarningAreaContour() const
{
    return m_warningAreaContour;
}

void MultiBizWarningInfo::SetWarningAreaContour(const vector<Point>& _warningAreaContour)
{
    m_warningAreaContour = _warningAreaContour;
    m_warningAreaContourHasBeenSet = true;
}

bool MultiBizWarningInfo::WarningAreaContourHasBeenSet() const
{
    return m_warningAreaContourHasBeenSet;
}

