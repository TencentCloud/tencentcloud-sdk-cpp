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

#include <tencentcloud/vod/v20180717/model/BeautyEffectItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

BeautyEffectItem::BeautyEffectItem() :
    m_switchHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_resourcePathHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

CoreInternalOutcome BeautyEffectItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeautyEffectItem.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeautyEffectItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BeautyEffectItem.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ResourcePath") && !value["ResourcePath"].IsNull())
    {
        if (!value["ResourcePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeautyEffectItem.ResourcePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePath = string(value["ResourcePath"].GetString());
        m_resourcePathHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeautyEffectItem.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BeautyEffectItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_resourcePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePath.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

}


string BeautyEffectItem::GetSwitch() const
{
    return m_switch;
}

void BeautyEffectItem::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool BeautyEffectItem::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string BeautyEffectItem::GetType() const
{
    return m_type;
}

void BeautyEffectItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BeautyEffectItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t BeautyEffectItem::GetValue() const
{
    return m_value;
}

void BeautyEffectItem::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BeautyEffectItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string BeautyEffectItem::GetResourcePath() const
{
    return m_resourcePath;
}

void BeautyEffectItem::SetResourcePath(const string& _resourcePath)
{
    m_resourcePath = _resourcePath;
    m_resourcePathHasBeenSet = true;
}

bool BeautyEffectItem::ResourcePathHasBeenSet() const
{
    return m_resourcePathHasBeenSet;
}

string BeautyEffectItem::GetExtInfo() const
{
    return m_extInfo;
}

void BeautyEffectItem::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool BeautyEffectItem::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

