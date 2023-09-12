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

#include <tencentcloud/mrs/v20200910/model/SurgeryAnorectal.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SurgeryAnorectal::SurgeryAnorectal() :
    m_textHasBeenSet(false),
    m_digitalRectalExaminationHasBeenSet(false),
    m_hemorrhoidHasBeenSet(false)
{
}

CoreInternalOutcome SurgeryAnorectal::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryAnorectal.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("DigitalRectalExamination") && !value["DigitalRectalExamination"].IsNull())
    {
        if (!value["DigitalRectalExamination"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryAnorectal.DigitalRectalExamination` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_digitalRectalExamination.Deserialize(value["DigitalRectalExamination"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_digitalRectalExaminationHasBeenSet = true;
    }

    if (value.HasMember("Hemorrhoid") && !value["Hemorrhoid"].IsNull())
    {
        if (!value["Hemorrhoid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryAnorectal.Hemorrhoid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hemorrhoid.Deserialize(value["Hemorrhoid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hemorrhoidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SurgeryAnorectal::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_digitalRectalExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DigitalRectalExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_digitalRectalExamination.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hemorrhoidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hemorrhoid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hemorrhoid.ToJsonObject(value[key.c_str()], allocator);
    }

}


KeyValueItem SurgeryAnorectal::GetText() const
{
    return m_text;
}

void SurgeryAnorectal::SetText(const KeyValueItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SurgeryAnorectal::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

KeyValueItem SurgeryAnorectal::GetDigitalRectalExamination() const
{
    return m_digitalRectalExamination;
}

void SurgeryAnorectal::SetDigitalRectalExamination(const KeyValueItem& _digitalRectalExamination)
{
    m_digitalRectalExamination = _digitalRectalExamination;
    m_digitalRectalExaminationHasBeenSet = true;
}

bool SurgeryAnorectal::DigitalRectalExaminationHasBeenSet() const
{
    return m_digitalRectalExaminationHasBeenSet;
}

KeyValueItem SurgeryAnorectal::GetHemorrhoid() const
{
    return m_hemorrhoid;
}

void SurgeryAnorectal::SetHemorrhoid(const KeyValueItem& _hemorrhoid)
{
    m_hemorrhoid = _hemorrhoid;
    m_hemorrhoidHasBeenSet = true;
}

bool SurgeryAnorectal::HemorrhoidHasBeenSet() const
{
    return m_hemorrhoidHasBeenSet;
}

