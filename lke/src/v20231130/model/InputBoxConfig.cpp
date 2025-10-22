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

#include <tencentcloud/lke/v20231130/model/InputBoxConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

InputBoxConfig::InputBoxConfig() :
    m_inputBoxButtonsHasBeenSet(false)
{
}

CoreInternalOutcome InputBoxConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputBoxButtons") && !value["InputBoxButtons"].IsNull())
    {
        if (!value["InputBoxButtons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InputBoxConfig.InputBoxButtons` is not array type"));

        const rapidjson::Value &tmpValue = value["InputBoxButtons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputBoxButtons.push_back((*itr).GetUint64());
        }
        m_inputBoxButtonsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputBoxConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputBoxButtonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputBoxButtons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputBoxButtons.begin(); itr != m_inputBoxButtons.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


vector<uint64_t> InputBoxConfig::GetInputBoxButtons() const
{
    return m_inputBoxButtons;
}

void InputBoxConfig::SetInputBoxButtons(const vector<uint64_t>& _inputBoxButtons)
{
    m_inputBoxButtons = _inputBoxButtons;
    m_inputBoxButtonsHasBeenSet = true;
}

bool InputBoxConfig::InputBoxButtonsHasBeenSet() const
{
    return m_inputBoxButtonsHasBeenSet;
}

