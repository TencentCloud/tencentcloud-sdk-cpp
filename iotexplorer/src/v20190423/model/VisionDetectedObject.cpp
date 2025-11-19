/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/iotexplorer/v20190423/model/VisionDetectedObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

VisionDetectedObject::VisionDetectedObject() :
    m_timeHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_confidenceHasBeenSet(false)
{
}

CoreInternalOutcome VisionDetectedObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VisionDetectedObject.Time` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetDouble();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ClassName") && !value["ClassName"].IsNull())
    {
        if (!value["ClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionDetectedObject.ClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_className = string(value["ClassName"].GetString());
        m_classNameHasBeenSet = true;
    }

    if (value.HasMember("BoundingBox") && !value["BoundingBox"].IsNull())
    {
        if (!value["BoundingBox"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VisionDetectedObject.BoundingBox` is not array type"));

        const rapidjson::Value &tmpValue = value["BoundingBox"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_boundingBox.push_back((*itr).GetDouble());
        }
        m_boundingBoxHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VisionDetectedObject.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VisionDetectedObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_classNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_className.c_str(), allocator).Move(), allocator);
    }

    if (m_boundingBoxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundingBox";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_boundingBox.begin(); itr != m_boundingBox.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

}


double VisionDetectedObject::GetTime() const
{
    return m_time;
}

void VisionDetectedObject::SetTime(const double& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool VisionDetectedObject::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string VisionDetectedObject::GetClassName() const
{
    return m_className;
}

void VisionDetectedObject::SetClassName(const string& _className)
{
    m_className = _className;
    m_classNameHasBeenSet = true;
}

bool VisionDetectedObject::ClassNameHasBeenSet() const
{
    return m_classNameHasBeenSet;
}

vector<double> VisionDetectedObject::GetBoundingBox() const
{
    return m_boundingBox;
}

void VisionDetectedObject::SetBoundingBox(const vector<double>& _boundingBox)
{
    m_boundingBox = _boundingBox;
    m_boundingBoxHasBeenSet = true;
}

bool VisionDetectedObject::BoundingBoxHasBeenSet() const
{
    return m_boundingBoxHasBeenSet;
}

double VisionDetectedObject::GetConfidence() const
{
    return m_confidence;
}

void VisionDetectedObject::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool VisionDetectedObject::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

