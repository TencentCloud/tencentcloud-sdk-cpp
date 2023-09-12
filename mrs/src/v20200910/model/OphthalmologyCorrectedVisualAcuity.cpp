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

#include <tencentcloud/mrs/v20200910/model/OphthalmologyCorrectedVisualAcuity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

OphthalmologyCorrectedVisualAcuity::OphthalmologyCorrectedVisualAcuity() :
    m_leftEyeVisualHasBeenSet(false),
    m_textHasBeenSet(false),
    m_rightEyeVisualHasBeenSet(false)
{
}

CoreInternalOutcome OphthalmologyCorrectedVisualAcuity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LeftEyeVisual") && !value["LeftEyeVisual"].IsNull())
    {
        if (!value["LeftEyeVisual"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OphthalmologyCorrectedVisualAcuity.LeftEyeVisual` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_leftEyeVisual.Deserialize(value["LeftEyeVisual"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_leftEyeVisualHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OphthalmologyCorrectedVisualAcuity.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("RightEyeVisual") && !value["RightEyeVisual"].IsNull())
    {
        if (!value["RightEyeVisual"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OphthalmologyCorrectedVisualAcuity.RightEyeVisual` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rightEyeVisual.Deserialize(value["RightEyeVisual"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rightEyeVisualHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OphthalmologyCorrectedVisualAcuity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_leftEyeVisualHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEyeVisual";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_leftEyeVisual.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rightEyeVisualHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEyeVisual";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rightEyeVisual.ToJsonObject(value[key.c_str()], allocator);
    }

}


KeyValueItem OphthalmologyCorrectedVisualAcuity::GetLeftEyeVisual() const
{
    return m_leftEyeVisual;
}

void OphthalmologyCorrectedVisualAcuity::SetLeftEyeVisual(const KeyValueItem& _leftEyeVisual)
{
    m_leftEyeVisual = _leftEyeVisual;
    m_leftEyeVisualHasBeenSet = true;
}

bool OphthalmologyCorrectedVisualAcuity::LeftEyeVisualHasBeenSet() const
{
    return m_leftEyeVisualHasBeenSet;
}

KeyValueItem OphthalmologyCorrectedVisualAcuity::GetText() const
{
    return m_text;
}

void OphthalmologyCorrectedVisualAcuity::SetText(const KeyValueItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool OphthalmologyCorrectedVisualAcuity::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

KeyValueItem OphthalmologyCorrectedVisualAcuity::GetRightEyeVisual() const
{
    return m_rightEyeVisual;
}

void OphthalmologyCorrectedVisualAcuity::SetRightEyeVisual(const KeyValueItem& _rightEyeVisual)
{
    m_rightEyeVisual = _rightEyeVisual;
    m_rightEyeVisualHasBeenSet = true;
}

bool OphthalmologyCorrectedVisualAcuity::RightEyeVisualHasBeenSet() const
{
    return m_rightEyeVisualHasBeenSet;
}

