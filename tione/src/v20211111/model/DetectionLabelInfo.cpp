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

#include <tencentcloud/tione/v20211111/model/DetectionLabelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DetectionLabelInfo::DetectionLabelInfo() :
    m_pointsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_frameTypeHasBeenSet(false)
{
}

CoreInternalOutcome DetectionLabelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectionLabelInfo.Points` is not array type"));

        const rapidjson::Value &tmpValue = value["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PointInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_points.push_back(item);
        }
        m_pointsHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectionLabelInfo.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labels.push_back((*itr).GetString());
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("FrameType") && !value["FrameType"].IsNull())
    {
        if (!value["FrameType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectionLabelInfo.FrameType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameType = string(value["FrameType"].GetString());
        m_frameTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectionLabelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Points";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_points.begin(); itr != m_points.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_frameTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameType.c_str(), allocator).Move(), allocator);
    }

}


vector<PointInfo> DetectionLabelInfo::GetPoints() const
{
    return m_points;
}

void DetectionLabelInfo::SetPoints(const vector<PointInfo>& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool DetectionLabelInfo::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

vector<string> DetectionLabelInfo::GetLabels() const
{
    return m_labels;
}

void DetectionLabelInfo::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DetectionLabelInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string DetectionLabelInfo::GetFrameType() const
{
    return m_frameType;
}

void DetectionLabelInfo::SetFrameType(const string& _frameType)
{
    m_frameType = _frameType;
    m_frameTypeHasBeenSet = true;
}

bool DetectionLabelInfo::FrameTypeHasBeenSet() const
{
    return m_frameTypeHasBeenSet;
}

