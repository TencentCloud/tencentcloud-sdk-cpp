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

#include <tencentcloud/tiia/v20190529/model/BodyAttributes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

BodyAttributes::BodyAttributes() :
    m_labelHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome BodyAttributes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BodyAttributes.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BodyAttributes.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BodyAttributes.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BodyAttributes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string BodyAttributes::GetLabel() const
{
    return m_label;
}

void BodyAttributes::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool BodyAttributes::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

double BodyAttributes::GetConfidence() const
{
    return m_confidence;
}

void BodyAttributes::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool BodyAttributes::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string BodyAttributes::GetName() const
{
    return m_name;
}

void BodyAttributes::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BodyAttributes::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

