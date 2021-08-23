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

#include <tencentcloud/ie/v20200304/model/MediaCuttingTimeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaCuttingTimeInfo::MediaCuttingTimeInfo() :
    m_typeHasBeenSet(false),
    m_pointSetHasBeenSet(false),
    m_intervalPointHasBeenSet(false),
    m_sectionSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaCuttingTimeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingTimeInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PointSet") && !value["PointSet"].IsNull())
    {
        if (!value["PointSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaCuttingTimeInfo.PointSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PointSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pointSet.push_back((*itr).GetInt64());
        }
        m_pointSetHasBeenSet = true;
    }

    if (value.HasMember("IntervalPoint") && !value["IntervalPoint"].IsNull())
    {
        if (!value["IntervalPoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingTimeInfo.IntervalPoint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intervalPoint.Deserialize(value["IntervalPoint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intervalPointHasBeenSet = true;
    }

    if (value.HasMember("SectionSet") && !value["SectionSet"].IsNull())
    {
        if (!value["SectionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaCuttingTimeInfo.SectionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SectionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SectionTime item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sectionSet.push_back(item);
        }
        m_sectionSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCuttingTimeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pointSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PointSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pointSet.begin(); itr != m_pointSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_intervalPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intervalPoint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sectionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SectionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sectionSet.begin(); itr != m_sectionSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MediaCuttingTimeInfo::GetType() const
{
    return m_type;
}

void MediaCuttingTimeInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaCuttingTimeInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<int64_t> MediaCuttingTimeInfo::GetPointSet() const
{
    return m_pointSet;
}

void MediaCuttingTimeInfo::SetPointSet(const vector<int64_t>& _pointSet)
{
    m_pointSet = _pointSet;
    m_pointSetHasBeenSet = true;
}

bool MediaCuttingTimeInfo::PointSetHasBeenSet() const
{
    return m_pointSetHasBeenSet;
}

IntervalTime MediaCuttingTimeInfo::GetIntervalPoint() const
{
    return m_intervalPoint;
}

void MediaCuttingTimeInfo::SetIntervalPoint(const IntervalTime& _intervalPoint)
{
    m_intervalPoint = _intervalPoint;
    m_intervalPointHasBeenSet = true;
}

bool MediaCuttingTimeInfo::IntervalPointHasBeenSet() const
{
    return m_intervalPointHasBeenSet;
}

vector<SectionTime> MediaCuttingTimeInfo::GetSectionSet() const
{
    return m_sectionSet;
}

void MediaCuttingTimeInfo::SetSectionSet(const vector<SectionTime>& _sectionSet)
{
    m_sectionSet = _sectionSet;
    m_sectionSetHasBeenSet = true;
}

bool MediaCuttingTimeInfo::SectionSetHasBeenSet() const
{
    return m_sectionSetHasBeenSet;
}

