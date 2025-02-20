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

#include <tencentcloud/mqtt/v20240516/model/PriceTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

PriceTag::PriceTag() :
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_stepHasBeenSet(false)
{
}

CoreInternalOutcome PriceTag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceTag.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceTag.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceTag.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceTag.Step` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_step = value["Step"].GetInt64();
        m_stepHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PriceTag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_step, allocator);
    }

}


string PriceTag::GetName() const
{
    return m_name;
}

void PriceTag::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PriceTag::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PriceTag::GetCategory() const
{
    return m_category;
}

void PriceTag::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool PriceTag::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string PriceTag::GetCode() const
{
    return m_code;
}

void PriceTag::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool PriceTag::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

int64_t PriceTag::GetStep() const
{
    return m_step;
}

void PriceTag::SetStep(const int64_t& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool PriceTag::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

