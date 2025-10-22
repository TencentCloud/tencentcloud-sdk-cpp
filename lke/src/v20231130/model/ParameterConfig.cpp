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

#include <tencentcloud/lke/v20231130/model/ParameterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ParameterConfig::ParameterConfig() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_subParamsHasBeenSet(false),
    m_oneOfHasBeenSet(false),
    m_anyOfHasBeenSet(false)
{
}

CoreInternalOutcome ParameterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterConfig.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterConfig.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterConfig.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("SubParams") && !value["SubParams"].IsNull())
    {
        if (!value["SubParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParameterConfig.SubParams` is not array type"));

        const rapidjson::Value &tmpValue = value["SubParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterConfig item;
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

    if (value.HasMember("OneOf") && !value["OneOf"].IsNull())
    {
        if (!value["OneOf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParameterConfig.OneOf` is not array type"));

        const rapidjson::Value &tmpValue = value["OneOf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterConfig item;
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
            return CoreInternalOutcome(Core::Error("response `ParameterConfig.AnyOf` is not array type"));

        const rapidjson::Value &tmpValue = value["AnyOf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterConfig item;
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

void ParameterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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


string ParameterConfig::GetName() const
{
    return m_name;
}

void ParameterConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ParameterConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ParameterConfig::GetDescription() const
{
    return m_description;
}

void ParameterConfig::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ParameterConfig::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ParameterConfig::GetType() const
{
    return m_type;
}

void ParameterConfig::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ParameterConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool ParameterConfig::GetIsRequired() const
{
    return m_isRequired;
}

void ParameterConfig::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool ParameterConfig::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

vector<ParameterConfig> ParameterConfig::GetSubParams() const
{
    return m_subParams;
}

void ParameterConfig::SetSubParams(const vector<ParameterConfig>& _subParams)
{
    m_subParams = _subParams;
    m_subParamsHasBeenSet = true;
}

bool ParameterConfig::SubParamsHasBeenSet() const
{
    return m_subParamsHasBeenSet;
}

vector<ParameterConfig> ParameterConfig::GetOneOf() const
{
    return m_oneOf;
}

void ParameterConfig::SetOneOf(const vector<ParameterConfig>& _oneOf)
{
    m_oneOf = _oneOf;
    m_oneOfHasBeenSet = true;
}

bool ParameterConfig::OneOfHasBeenSet() const
{
    return m_oneOfHasBeenSet;
}

vector<ParameterConfig> ParameterConfig::GetAnyOf() const
{
    return m_anyOf;
}

void ParameterConfig::SetAnyOf(const vector<ParameterConfig>& _anyOf)
{
    m_anyOf = _anyOf;
    m_anyOfHasBeenSet = true;
}

bool ParameterConfig::AnyOfHasBeenSet() const
{
    return m_anyOfHasBeenSet;
}

