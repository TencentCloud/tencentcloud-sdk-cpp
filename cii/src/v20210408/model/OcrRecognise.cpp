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

#include <tencentcloud/cii/v20210408/model/OcrRecognise.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

OcrRecognise::OcrRecognise() :
    m_originalFieldHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_fieldHasBeenSet(false)
{
}

CoreInternalOutcome OcrRecognise::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalField") && !value["OriginalField"].IsNull())
    {
        if (!value["OriginalField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrRecognise.OriginalField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalField = string(value["OriginalField"].GetString());
        m_originalFieldHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrRecognise.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OcrRecognise.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OcrRecognise.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Field") && !value["Field"].IsNull())
    {
        if (!value["Field"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrRecognise.Field` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field = string(value["Field"].GetString());
        m_fieldHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OcrRecognise::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originalFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalField.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

}


string OcrRecognise::GetOriginalField() const
{
    return m_originalField;
}

void OcrRecognise::SetOriginalField(const string& _originalField)
{
    m_originalField = _originalField;
    m_originalFieldHasBeenSet = true;
}

bool OcrRecognise::OriginalFieldHasBeenSet() const
{
    return m_originalFieldHasBeenSet;
}

string OcrRecognise::GetValue() const
{
    return m_value;
}

void OcrRecognise::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool OcrRecognise::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

double OcrRecognise::GetConfidence() const
{
    return m_confidence;
}

void OcrRecognise::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool OcrRecognise::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

Location OcrRecognise::GetLocation() const
{
    return m_location;
}

void OcrRecognise::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool OcrRecognise::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string OcrRecognise::GetField() const
{
    return m_field;
}

void OcrRecognise::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool OcrRecognise::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

