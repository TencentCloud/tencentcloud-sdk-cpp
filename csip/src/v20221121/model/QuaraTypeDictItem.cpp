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

#include <tencentcloud/csip/v20221121/model/QuaraTypeDictItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

QuaraTypeDictItem::QuaraTypeDictItem() :
    m_codeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recommendHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome QuaraTypeDictItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuaraTypeDictItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuaraTypeDictItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Recommend") && !value["Recommend"].IsNull())
    {
        if (!value["Recommend"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QuaraTypeDictItem.Recommend` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_recommend = value["Recommend"].GetBool();
        m_recommendHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuaraTypeDictItem.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuaraTypeDictItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_recommendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recommend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recommend, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string QuaraTypeDictItem::GetCode() const
{
    return m_code;
}

void QuaraTypeDictItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool QuaraTypeDictItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string QuaraTypeDictItem::GetName() const
{
    return m_name;
}

void QuaraTypeDictItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QuaraTypeDictItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool QuaraTypeDictItem::GetRecommend() const
{
    return m_recommend;
}

void QuaraTypeDictItem::SetRecommend(const bool& _recommend)
{
    m_recommend = _recommend;
    m_recommendHasBeenSet = true;
}

bool QuaraTypeDictItem::RecommendHasBeenSet() const
{
    return m_recommendHasBeenSet;
}

string QuaraTypeDictItem::GetDesc() const
{
    return m_desc;
}

void QuaraTypeDictItem::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool QuaraTypeDictItem::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

