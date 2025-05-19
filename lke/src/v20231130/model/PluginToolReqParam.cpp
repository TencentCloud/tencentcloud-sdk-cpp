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

#include <tencentcloud/lke/v20231130/model/PluginToolReqParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

PluginToolReqParam::PluginToolReqParam() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_subParamsHasBeenSet(false),
    m_globalHiddenHasBeenSet(false),
    m_oneOfHasBeenSet(false),
    m_anyOfHasBeenSet(false)
{
}

CoreInternalOutcome PluginToolReqParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginToolReqParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginToolReqParam.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginToolReqParam.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PluginToolReqParam.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginToolReqParam.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("SubParams") && !value["SubParams"].IsNull())
    {
        if (!value["SubParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PluginToolReqParam.SubParams` is not array type"));

        const rapidjson::Value &tmpValue = value["SubParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginToolReqParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subParams.push_back(item);
        }
        m_subParamsHasBeenSet = true;
    }

    if (value.HasMember("GlobalHidden") && !value["GlobalHidden"].IsNull())
    {
        if (!value["GlobalHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PluginToolReqParam.GlobalHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_globalHidden = value["GlobalHidden"].GetBool();
        m_globalHiddenHasBeenSet = true;
    }

    if (value.HasMember("OneOf") && !value["OneOf"].IsNull())
    {
        if (!value["OneOf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PluginToolReqParam.OneOf` is not array type"));

        const rapidjson::Value &tmpValue = value["OneOf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginToolReqParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_oneOf.push_back(item);
        }
        m_oneOfHasBeenSet = true;
    }

    if (value.HasMember("AnyOf") && !value["AnyOf"].IsNull())
    {
        if (!value["AnyOf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PluginToolReqParam.AnyOf` is not array type"));

        const rapidjson::Value &tmpValue = value["AnyOf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginToolReqParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_anyOf.push_back(item);
        }
        m_anyOfHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginToolReqParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_isRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRequired, allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_subParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subParams.begin(); itr != m_subParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_globalHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalHidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalHidden, allocator);
    }

    if (m_oneOfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OneOf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oneOf.begin(); itr != m_oneOf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_anyOfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnyOf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_anyOf.begin(); itr != m_anyOf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PluginToolReqParam::GetName() const
{
    return m_name;
}

void PluginToolReqParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PluginToolReqParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PluginToolReqParam::GetDesc() const
{
    return m_desc;
}

void PluginToolReqParam::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool PluginToolReqParam::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t PluginToolReqParam::GetType() const
{
    return m_type;
}

void PluginToolReqParam::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PluginToolReqParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool PluginToolReqParam::GetIsRequired() const
{
    return m_isRequired;
}

void PluginToolReqParam::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool PluginToolReqParam::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

string PluginToolReqParam::GetDefaultValue() const
{
    return m_defaultValue;
}

void PluginToolReqParam::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool PluginToolReqParam::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

vector<PluginToolReqParam> PluginToolReqParam::GetSubParams() const
{
    return m_subParams;
}

void PluginToolReqParam::SetSubParams(const vector<PluginToolReqParam>& _subParams)
{
    m_subParams = _subParams;
    m_subParamsHasBeenSet = true;
}

bool PluginToolReqParam::SubParamsHasBeenSet() const
{
    return m_subParamsHasBeenSet;
}

bool PluginToolReqParam::GetGlobalHidden() const
{
    return m_globalHidden;
}

void PluginToolReqParam::SetGlobalHidden(const bool& _globalHidden)
{
    m_globalHidden = _globalHidden;
    m_globalHiddenHasBeenSet = true;
}

bool PluginToolReqParam::GlobalHiddenHasBeenSet() const
{
    return m_globalHiddenHasBeenSet;
}

vector<PluginToolReqParam> PluginToolReqParam::GetOneOf() const
{
    return m_oneOf;
}

void PluginToolReqParam::SetOneOf(const vector<PluginToolReqParam>& _oneOf)
{
    m_oneOf = _oneOf;
    m_oneOfHasBeenSet = true;
}

bool PluginToolReqParam::OneOfHasBeenSet() const
{
    return m_oneOfHasBeenSet;
}

vector<PluginToolReqParam> PluginToolReqParam::GetAnyOf() const
{
    return m_anyOf;
}

void PluginToolReqParam::SetAnyOf(const vector<PluginToolReqParam>& _anyOf)
{
    m_anyOf = _anyOf;
    m_anyOfHasBeenSet = true;
}

bool PluginToolReqParam::AnyOfHasBeenSet() const
{
    return m_anyOfHasBeenSet;
}

