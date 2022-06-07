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

#include <tencentcloud/tione/v20211111/model/CustomTrainingPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CustomTrainingPoint::CustomTrainingPoint() :
    m_xValueHasBeenSet(false),
    m_yValueHasBeenSet(false)
{
}

CoreInternalOutcome CustomTrainingPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("XValue") && !value["XValue"].IsNull())
    {
        if (!value["XValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTrainingPoint.XValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_xValue = value["XValue"].GetDouble();
        m_xValueHasBeenSet = true;
    }

    if (value.HasMember("YValue") && !value["YValue"].IsNull())
    {
        if (!value["YValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTrainingPoint.YValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_yValue = value["YValue"].GetDouble();
        m_yValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomTrainingPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xValue, allocator);
    }

    if (m_yValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yValue, allocator);
    }

}


double CustomTrainingPoint::GetXValue() const
{
    return m_xValue;
}

void CustomTrainingPoint::SetXValue(const double& _xValue)
{
    m_xValue = _xValue;
    m_xValueHasBeenSet = true;
}

bool CustomTrainingPoint::XValueHasBeenSet() const
{
    return m_xValueHasBeenSet;
}

double CustomTrainingPoint::GetYValue() const
{
    return m_yValue;
}

void CustomTrainingPoint::SetYValue(const double& _yValue)
{
    m_yValue = _yValue;
    m_yValueHasBeenSet = true;
}

bool CustomTrainingPoint::YValueHasBeenSet() const
{
    return m_yValueHasBeenSet;
}

