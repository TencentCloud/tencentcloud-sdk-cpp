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

#include <tencentcloud/tci/v20190318/model/LightStandard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

LightStandard::LightStandard() :
    m_nameHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

CoreInternalOutcome LightStandard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LightStandard.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LightStandard.Range` is not array type"));

        const rapidjson::Value &tmpValue = value["Range"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_range.push_back((*itr).GetDouble());
        }
        m_rangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LightStandard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_range.begin(); itr != m_range.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


string LightStandard::GetName() const
{
    return m_name;
}

void LightStandard::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LightStandard::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<double> LightStandard::GetRange() const
{
    return m_range;
}

void LightStandard::SetRange(const vector<double>& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool LightStandard::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

