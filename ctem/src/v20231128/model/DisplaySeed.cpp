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

#include <tencentcloud/ctem/v20231128/model/DisplaySeed.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplaySeed::DisplaySeed() :
    m_idHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_isValidHasBeenSet(false)
{
}

CoreInternalOutcome DisplaySeed::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySeed.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySeed.CustomerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = value["CustomerId"].GetInt64();
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySeed.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySeed.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySeed.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySeed.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySeed.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("IsValid") && !value["IsValid"].IsNull())
    {
        if (!value["IsValid"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySeed.IsValid` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isValid = value["IsValid"].GetBool();
        m_isValidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplaySeed::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerId, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isValidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsValid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isValid, allocator);
    }

}


int64_t DisplaySeed::GetId() const
{
    return m_id;
}

void DisplaySeed::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplaySeed::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t DisplaySeed::GetCustomerId() const
{
    return m_customerId;
}

void DisplaySeed::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool DisplaySeed::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string DisplaySeed::GetCategory() const
{
    return m_category;
}

void DisplaySeed::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DisplaySeed::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DisplaySeed::GetValue() const
{
    return m_value;
}

void DisplaySeed::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DisplaySeed::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string DisplaySeed::GetMd5() const
{
    return m_md5;
}

void DisplaySeed::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool DisplaySeed::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string DisplaySeed::GetSource() const
{
    return m_source;
}

void DisplaySeed::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DisplaySeed::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DisplaySeed::GetCreateAt() const
{
    return m_createAt;
}

void DisplaySeed::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool DisplaySeed::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

bool DisplaySeed::GetIsValid() const
{
    return m_isValid;
}

void DisplaySeed::SetIsValid(const bool& _isValid)
{
    m_isValid = _isValid;
    m_isValidHasBeenSet = true;
}

bool DisplaySeed::IsValidHasBeenSet() const
{
    return m_isValidHasBeenSet;
}

