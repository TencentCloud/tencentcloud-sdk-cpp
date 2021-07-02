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

#include <tencentcloud/mrs/v20200910/model/ImageText.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ImageText::ImageText() :
    m_confidenceHasBeenSet(false),
    m_textHasBeenSet(false),
    m_rotateAngleHasBeenSet(false)
{
}

CoreInternalOutcome ImageText::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImageText.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageText.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("RotateAngle") && !value["RotateAngle"].IsNull())
    {
        if (!value["RotateAngle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ImageText.RotateAngle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rotateAngle = value["RotateAngle"].GetDouble();
        m_rotateAngleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageText::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_rotateAngleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotateAngle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotateAngle, allocator);
    }

}


int64_t ImageText::GetConfidence() const
{
    return m_confidence;
}

void ImageText::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool ImageText::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string ImageText::GetText() const
{
    return m_text;
}

void ImageText::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ImageText::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

double ImageText::GetRotateAngle() const
{
    return m_rotateAngle;
}

void ImageText::SetRotateAngle(const double& _rotateAngle)
{
    m_rotateAngle = _rotateAngle;
    m_rotateAngleHasBeenSet = true;
}

bool ImageText::RotateAngleHasBeenSet() const
{
    return m_rotateAngleHasBeenSet;
}

