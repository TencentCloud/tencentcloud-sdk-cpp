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

#include <tencentcloud/pts/v20210728/model/LabelWithValues.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

LabelWithValues::LabelWithValues() :
    m_labelNameHasBeenSet(false),
    m_labelValuesHasBeenSet(false)
{
}

CoreInternalOutcome LabelWithValues::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelWithValues.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("LabelValues") && !value["LabelValues"].IsNull())
    {
        if (!value["LabelValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelWithValues.LabelValues` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelValues.push_back((*itr).GetString());
        }
        m_labelValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelWithValues::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelValues.begin(); itr != m_labelValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string LabelWithValues::GetLabelName() const
{
    return m_labelName;
}

void LabelWithValues::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool LabelWithValues::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

vector<string> LabelWithValues::GetLabelValues() const
{
    return m_labelValues;
}

void LabelWithValues::SetLabelValues(const vector<string>& _labelValues)
{
    m_labelValues = _labelValues;
    m_labelValuesHasBeenSet = true;
}

bool LabelWithValues::LabelValuesHasBeenSet() const
{
    return m_labelValuesHasBeenSet;
}

