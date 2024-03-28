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

#include <tencentcloud/tione/v20211111/model/ImageFIlter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ImageFIlter::ImageFIlter() :
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_negativeHasBeenSet(false)
{
}

CoreInternalOutcome ImageFIlter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageFIlter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageFIlter.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("Negative") && !value["Negative"].IsNull())
    {
        if (!value["Negative"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageFIlter.Negative` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_negative = value["Negative"].GetBool();
        m_negativeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageFIlter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_negativeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Negative";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_negative, allocator);
    }

}


string ImageFIlter::GetName() const
{
    return m_name;
}

void ImageFIlter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageFIlter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ImageFIlter::GetValues() const
{
    return m_values;
}

void ImageFIlter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool ImageFIlter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

bool ImageFIlter::GetNegative() const
{
    return m_negative;
}

void ImageFIlter::SetNegative(const bool& _negative)
{
    m_negative = _negative;
    m_negativeHasBeenSet = true;
}

bool ImageFIlter::NegativeHasBeenSet() const
{
    return m_negativeHasBeenSet;
}

