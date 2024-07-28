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

#include <tencentcloud/cfg/v20210820/model/ActionFieldConfigDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

ActionFieldConfigDetail::ActionFieldConfigDetail() :
    m_typeHasBeenSet(false),
    m_lableHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_configHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_validateHasBeenSet(false),
    m_visibleHasBeenSet(false)
{
}

CoreInternalOutcome ActionFieldConfigDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigDetail.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Lable") && !value["Lable"].IsNull())
    {
        if (!value["Lable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigDetail.Lable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lable = string(value["Lable"].GetString());
        m_lableHasBeenSet = true;
    }

    if (value.HasMember("Field") && !value["Field"].IsNull())
    {
        if (!value["Field"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigDetail.Field` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field = string(value["Field"].GetString());
        m_fieldHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigDetail.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigDetail.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigDetail.Required` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetUint64();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("Validate") && !value["Validate"].IsNull())
    {
        if (!value["Validate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigDetail.Validate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validate = string(value["Validate"].GetString());
        m_validateHasBeenSet = true;
    }

    if (value.HasMember("Visible") && !value["Visible"].IsNull())
    {
        if (!value["Visible"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFieldConfigDetail.Visible` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visible = string(value["Visible"].GetString());
        m_visibleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionFieldConfigDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_lableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lable.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_validateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Validate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validate.c_str(), allocator).Move(), allocator);
    }

    if (m_visibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Visible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visible.c_str(), allocator).Move(), allocator);
    }

}


string ActionFieldConfigDetail::GetType() const
{
    return m_type;
}

void ActionFieldConfigDetail::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ActionFieldConfigDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ActionFieldConfigDetail::GetLable() const
{
    return m_lable;
}

void ActionFieldConfigDetail::SetLable(const string& _lable)
{
    m_lable = _lable;
    m_lableHasBeenSet = true;
}

bool ActionFieldConfigDetail::LableHasBeenSet() const
{
    return m_lableHasBeenSet;
}

string ActionFieldConfigDetail::GetField() const
{
    return m_field;
}

void ActionFieldConfigDetail::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool ActionFieldConfigDetail::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string ActionFieldConfigDetail::GetDefaultValue() const
{
    return m_defaultValue;
}

void ActionFieldConfigDetail::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ActionFieldConfigDetail::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string ActionFieldConfigDetail::GetConfig() const
{
    return m_config;
}

void ActionFieldConfigDetail::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ActionFieldConfigDetail::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

uint64_t ActionFieldConfigDetail::GetRequired() const
{
    return m_required;
}

void ActionFieldConfigDetail::SetRequired(const uint64_t& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool ActionFieldConfigDetail::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

string ActionFieldConfigDetail::GetValidate() const
{
    return m_validate;
}

void ActionFieldConfigDetail::SetValidate(const string& _validate)
{
    m_validate = _validate;
    m_validateHasBeenSet = true;
}

bool ActionFieldConfigDetail::ValidateHasBeenSet() const
{
    return m_validateHasBeenSet;
}

string ActionFieldConfigDetail::GetVisible() const
{
    return m_visible;
}

void ActionFieldConfigDetail::SetVisible(const string& _visible)
{
    m_visible = _visible;
    m_visibleHasBeenSet = true;
}

bool ActionFieldConfigDetail::VisibleHasBeenSet() const
{
    return m_visibleHasBeenSet;
}

