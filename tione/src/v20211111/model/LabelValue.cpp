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

#include <tencentcloud/tione/v20211111/model/LabelValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

LabelValue::LabelValue() :
    m_labelNameHasBeenSet(false),
    m_labelColorHasBeenSet(false)
{
}

CoreInternalOutcome LabelValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelValue.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("LabelColor") && !value["LabelColor"].IsNull())
    {
        if (!value["LabelColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelValue.LabelColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelColor = string(value["LabelColor"].GetString());
        m_labelColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelColor.c_str(), allocator).Move(), allocator);
    }

}


string LabelValue::GetLabelName() const
{
    return m_labelName;
}

void LabelValue::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool LabelValue::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

string LabelValue::GetLabelColor() const
{
    return m_labelColor;
}

void LabelValue::SetLabelColor(const string& _labelColor)
{
    m_labelColor = _labelColor;
    m_labelColorHasBeenSet = true;
}

bool LabelValue::LabelColorHasBeenSet() const
{
    return m_labelColorHasBeenSet;
}

