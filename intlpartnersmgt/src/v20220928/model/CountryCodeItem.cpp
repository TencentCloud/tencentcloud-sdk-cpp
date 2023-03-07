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

#include <tencentcloud/intlpartnersmgt/v20220928/model/CountryCodeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

CountryCodeItem::CountryCodeItem() :
    m_enNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_iOS2HasBeenSet(false),
    m_iOS3HasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

CoreInternalOutcome CountryCodeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnName") && !value["EnName"].IsNull())
    {
        if (!value["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryCodeItem.EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(value["EnName"].GetString());
        m_enNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryCodeItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IOS2") && !value["IOS2"].IsNull())
    {
        if (!value["IOS2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryCodeItem.IOS2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iOS2 = string(value["IOS2"].GetString());
        m_iOS2HasBeenSet = true;
    }

    if (value.HasMember("IOS3") && !value["IOS3"].IsNull())
    {
        if (!value["IOS3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryCodeItem.IOS3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iOS3 = string(value["IOS3"].GetString());
        m_iOS3HasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CountryCodeItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CountryCodeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iOS2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOS2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iOS2.c_str(), allocator).Move(), allocator);
    }

    if (m_iOS3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOS3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iOS3.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

}


string CountryCodeItem::GetEnName() const
{
    return m_enName;
}

void CountryCodeItem::SetEnName(const string& _enName)
{
    m_enName = _enName;
    m_enNameHasBeenSet = true;
}

bool CountryCodeItem::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string CountryCodeItem::GetName() const
{
    return m_name;
}

void CountryCodeItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CountryCodeItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CountryCodeItem::GetIOS2() const
{
    return m_iOS2;
}

void CountryCodeItem::SetIOS2(const string& _iOS2)
{
    m_iOS2 = _iOS2;
    m_iOS2HasBeenSet = true;
}

bool CountryCodeItem::IOS2HasBeenSet() const
{
    return m_iOS2HasBeenSet;
}

string CountryCodeItem::GetIOS3() const
{
    return m_iOS3;
}

void CountryCodeItem::SetIOS3(const string& _iOS3)
{
    m_iOS3 = _iOS3;
    m_iOS3HasBeenSet = true;
}

bool CountryCodeItem::IOS3HasBeenSet() const
{
    return m_iOS3HasBeenSet;
}

string CountryCodeItem::GetCode() const
{
    return m_code;
}

void CountryCodeItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CountryCodeItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

