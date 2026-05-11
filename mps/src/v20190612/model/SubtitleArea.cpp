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

#include <tencentcloud/mps/v20190612/model/SubtitleArea.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubtitleArea::SubtitleArea() :
    m_areaHasBeenSet(false),
    m_confidenceHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleArea::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleArea.Area` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_area.Deserialize(value["Area"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleArea.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleArea::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_area.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

}


EraseArea SubtitleArea::GetArea() const
{
    return m_area;
}

void SubtitleArea::SetArea(const EraseArea& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool SubtitleArea::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

double SubtitleArea::GetConfidence() const
{
    return m_confidence;
}

void SubtitleArea::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool SubtitleArea::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

