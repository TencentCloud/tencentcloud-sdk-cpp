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

#include <tencentcloud/tdmysql/v20211122/model/CharsetCollationItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

CharsetCollationItem::CharsetCollationItem() :
    m_charsetNameHasBeenSet(false),
    m_collationsHasBeenSet(false),
    m_defaultCollationHasBeenSet(false)
{
}

CoreInternalOutcome CharsetCollationItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CharsetName") && !value["CharsetName"].IsNull())
    {
        if (!value["CharsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CharsetCollationItem.CharsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_charsetName = string(value["CharsetName"].GetString());
        m_charsetNameHasBeenSet = true;
    }

    if (value.HasMember("Collations") && !value["Collations"].IsNull())
    {
        if (!value["Collations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CharsetCollationItem.Collations` is not array type"));

        const rapidjson::Value &tmpValue = value["Collations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_collations.push_back((*itr).GetString());
        }
        m_collationsHasBeenSet = true;
    }

    if (value.HasMember("DefaultCollation") && !value["DefaultCollation"].IsNull())
    {
        if (!value["DefaultCollation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CharsetCollationItem.DefaultCollation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultCollation = string(value["DefaultCollation"].GetString());
        m_defaultCollationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CharsetCollationItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_charsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_charsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_collationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_collations.begin(); itr != m_collations.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_defaultCollationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCollation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultCollation.c_str(), allocator).Move(), allocator);
    }

}


string CharsetCollationItem::GetCharsetName() const
{
    return m_charsetName;
}

void CharsetCollationItem::SetCharsetName(const string& _charsetName)
{
    m_charsetName = _charsetName;
    m_charsetNameHasBeenSet = true;
}

bool CharsetCollationItem::CharsetNameHasBeenSet() const
{
    return m_charsetNameHasBeenSet;
}

vector<string> CharsetCollationItem::GetCollations() const
{
    return m_collations;
}

void CharsetCollationItem::SetCollations(const vector<string>& _collations)
{
    m_collations = _collations;
    m_collationsHasBeenSet = true;
}

bool CharsetCollationItem::CollationsHasBeenSet() const
{
    return m_collationsHasBeenSet;
}

string CharsetCollationItem::GetDefaultCollation() const
{
    return m_defaultCollation;
}

void CharsetCollationItem::SetDefaultCollation(const string& _defaultCollation)
{
    m_defaultCollation = _defaultCollation;
    m_defaultCollationHasBeenSet = true;
}

bool CharsetCollationItem::DefaultCollationHasBeenSet() const
{
    return m_defaultCollationHasBeenSet;
}

