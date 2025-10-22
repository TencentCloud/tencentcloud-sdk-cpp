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

#include <tencentcloud/waf/v20180125/model/TokenDisplaySetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

TokenDisplaySetting::TokenDisplaySetting() :
    m_displayWithPayloadEnableHasBeenSet(false),
    m_fieldNameHasBeenSet(false)
{
}

CoreInternalOutcome TokenDisplaySetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisplayWithPayloadEnable") && !value["DisplayWithPayloadEnable"].IsNull())
    {
        if (!value["DisplayWithPayloadEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TokenDisplaySetting.DisplayWithPayloadEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_displayWithPayloadEnable = value["DisplayWithPayloadEnable"].GetBool();
        m_displayWithPayloadEnableHasBeenSet = true;
    }

    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenDisplaySetting.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenDisplaySetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_displayWithPayloadEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayWithPayloadEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayWithPayloadEnable, allocator);
    }

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

}


bool TokenDisplaySetting::GetDisplayWithPayloadEnable() const
{
    return m_displayWithPayloadEnable;
}

void TokenDisplaySetting::SetDisplayWithPayloadEnable(const bool& _displayWithPayloadEnable)
{
    m_displayWithPayloadEnable = _displayWithPayloadEnable;
    m_displayWithPayloadEnableHasBeenSet = true;
}

bool TokenDisplaySetting::DisplayWithPayloadEnableHasBeenSet() const
{
    return m_displayWithPayloadEnableHasBeenSet;
}

string TokenDisplaySetting::GetFieldName() const
{
    return m_fieldName;
}

void TokenDisplaySetting::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool TokenDisplaySetting::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

