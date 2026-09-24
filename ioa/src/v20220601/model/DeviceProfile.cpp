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

#include <tencentcloud/ioa/v20220601/model/DeviceProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeviceProfile::DeviceProfile() :
    m_valueHasBeenSet(false),
    m_fieldIdHasBeenSet(false),
    m_midHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_isMustHasBeenSet(false),
    m_isCustomHasBeenSet(false)
{
}

CoreInternalOutcome DeviceProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("FieldId") && !value["FieldId"].IsNull())
    {
        if (!value["FieldId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.FieldId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldId = value["FieldId"].GetInt64();
        m_fieldIdHasBeenSet = true;
    }

    if (value.HasMember("Mid") && !value["Mid"].IsNull())
    {
        if (!value["Mid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.Mid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mid = string(value["Mid"].GetString());
        m_midHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.Options` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_options = string(value["Options"].GetString());
        m_optionsHasBeenSet = true;
    }

    if (value.HasMember("IsMust") && !value["IsMust"].IsNull())
    {
        if (!value["IsMust"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.IsMust` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isMust = string(value["IsMust"].GetString());
        m_isMustHasBeenSet = true;
    }

    if (value.HasMember("IsCustom") && !value["IsCustom"].IsNull())
    {
        if (!value["IsCustom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceProfile.IsCustom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isCustom = string(value["IsCustom"].GetString());
        m_isCustomHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldId, allocator);
    }

    if (m_midHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mid.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_options.c_str(), allocator).Move(), allocator);
    }

    if (m_isMustHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isMust.c_str(), allocator).Move(), allocator);
    }

    if (m_isCustomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCustom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isCustom.c_str(), allocator).Move(), allocator);
    }

}


string DeviceProfile::GetValue() const
{
    return m_value;
}

void DeviceProfile::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DeviceProfile::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t DeviceProfile::GetFieldId() const
{
    return m_fieldId;
}

void DeviceProfile::SetFieldId(const int64_t& _fieldId)
{
    m_fieldId = _fieldId;
    m_fieldIdHasBeenSet = true;
}

bool DeviceProfile::FieldIdHasBeenSet() const
{
    return m_fieldIdHasBeenSet;
}

string DeviceProfile::GetMid() const
{
    return m_mid;
}

void DeviceProfile::SetMid(const string& _mid)
{
    m_mid = _mid;
    m_midHasBeenSet = true;
}

bool DeviceProfile::MidHasBeenSet() const
{
    return m_midHasBeenSet;
}

string DeviceProfile::GetTitle() const
{
    return m_title;
}

void DeviceProfile::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DeviceProfile::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t DeviceProfile::GetType() const
{
    return m_type;
}

void DeviceProfile::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeviceProfile::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DeviceProfile::GetOptions() const
{
    return m_options;
}

void DeviceProfile::SetOptions(const string& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool DeviceProfile::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

string DeviceProfile::GetIsMust() const
{
    return m_isMust;
}

void DeviceProfile::SetIsMust(const string& _isMust)
{
    m_isMust = _isMust;
    m_isMustHasBeenSet = true;
}

bool DeviceProfile::IsMustHasBeenSet() const
{
    return m_isMustHasBeenSet;
}

string DeviceProfile::GetIsCustom() const
{
    return m_isCustom;
}

void DeviceProfile::SetIsCustom(const string& _isCustom)
{
    m_isCustom = _isCustom;
    m_isCustomHasBeenSet = true;
}

bool DeviceProfile::IsCustomHasBeenSet() const
{
    return m_isCustomHasBeenSet;
}

