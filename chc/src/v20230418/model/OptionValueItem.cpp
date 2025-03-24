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

#include <tencentcloud/chc/v20230418/model/OptionValueItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

OptionValueItem::OptionValueItem() :
    m_optionValueHasBeenSet(false),
    m_selectedHasBeenSet(false)
{
}

CoreInternalOutcome OptionValueItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OptionValue") && !value["OptionValue"].IsNull())
    {
        if (!value["OptionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionValueItem.OptionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optionValue = string(value["OptionValue"].GetString());
        m_optionValueHasBeenSet = true;
    }

    if (value.HasMember("Selected") && !value["Selected"].IsNull())
    {
        if (!value["Selected"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OptionValueItem.Selected` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selected = value["Selected"].GetBool();
        m_selectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OptionValueItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_optionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optionValue.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Selected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selected, allocator);
    }

}


string OptionValueItem::GetOptionValue() const
{
    return m_optionValue;
}

void OptionValueItem::SetOptionValue(const string& _optionValue)
{
    m_optionValue = _optionValue;
    m_optionValueHasBeenSet = true;
}

bool OptionValueItem::OptionValueHasBeenSet() const
{
    return m_optionValueHasBeenSet;
}

bool OptionValueItem::GetSelected() const
{
    return m_selected;
}

void OptionValueItem::SetSelected(const bool& _selected)
{
    m_selected = _selected;
    m_selectedHasBeenSet = true;
}

bool OptionValueItem::SelectedHasBeenSet() const
{
    return m_selectedHasBeenSet;
}

