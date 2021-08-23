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

#include <tencentcloud/iot/v20180123/model/BoolData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

BoolData::BoolData() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

CoreInternalOutcome BoolData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BoolData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BoolData.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BoolData.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BoolData.Range` is not array type"));

        const rapidjson::Value &tmpValue = value["Range"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_range.push_back((*itr).GetBool());
        }
        m_rangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BoolData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_range.begin(); itr != m_range.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetBool(*itr), allocator);
        }
    }

}


string BoolData::GetName() const
{
    return m_name;
}

void BoolData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BoolData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BoolData::GetDesc() const
{
    return m_desc;
}

void BoolData::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool BoolData::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string BoolData::GetMode() const
{
    return m_mode;
}

void BoolData::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool BoolData::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<bool> BoolData::GetRange() const
{
    return m_range;
}

void BoolData::SetRange(const vector<bool>& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool BoolData::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

