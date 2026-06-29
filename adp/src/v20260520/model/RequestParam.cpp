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

#include <tencentcloud/adp/v20260520/model/RequestParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

RequestParam::RequestParam() :
    m_anyOfHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isGlobalHiddenHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_oneOfHasBeenSet(false),
    m_subParamsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome RequestParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AnyOf") && !value["AnyOf"].IsNull())
    {
        if (!value["AnyOf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RequestParam.AnyOf` is not array type"));

        const rapidjson::Value &tmpValue = value["AnyOf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestParam item;
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

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestParam.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestParam.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IsGlobalHidden") && !value["IsGlobalHidden"].IsNull())
    {
        if (!value["IsGlobalHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RequestParam.IsGlobalHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobalHidden = value["IsGlobalHidden"].GetBool();
        m_isGlobalHiddenHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RequestParam.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("OneOf") && !value["OneOf"].IsNull())
    {
        if (!value["OneOf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RequestParam.OneOf` is not array type"));

        const rapidjson::Value &tmpValue = value["OneOf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestParam item;
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

    if (value.HasMember("SubParams") && !value["SubParams"].IsNull())
    {
        if (!value["SubParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RequestParam.SubParams` is not array type"));

        const rapidjson::Value &tmpValue = value["SubParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestParam item;
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

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestParam.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobalHidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobalHidden, allocator);
    }

    if (m_isRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRequired, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


vector<RequestParam> RequestParam::GetAnyOf() const
{
    return m_anyOf;
}

void RequestParam::SetAnyOf(const vector<RequestParam>& _anyOf)
{
    m_anyOf = _anyOf;
    m_anyOfHasBeenSet = true;
}

bool RequestParam::AnyOfHasBeenSet() const
{
    return m_anyOfHasBeenSet;
}

string RequestParam::GetDefaultValue() const
{
    return m_defaultValue;
}

void RequestParam::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool RequestParam::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string RequestParam::GetDescription() const
{
    return m_description;
}

void RequestParam::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RequestParam::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool RequestParam::GetIsGlobalHidden() const
{
    return m_isGlobalHidden;
}

void RequestParam::SetIsGlobalHidden(const bool& _isGlobalHidden)
{
    m_isGlobalHidden = _isGlobalHidden;
    m_isGlobalHiddenHasBeenSet = true;
}

bool RequestParam::IsGlobalHiddenHasBeenSet() const
{
    return m_isGlobalHiddenHasBeenSet;
}

bool RequestParam::GetIsRequired() const
{
    return m_isRequired;
}

void RequestParam::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool RequestParam::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

string RequestParam::GetName() const
{
    return m_name;
}

void RequestParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RequestParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<RequestParam> RequestParam::GetOneOf() const
{
    return m_oneOf;
}

void RequestParam::SetOneOf(const vector<RequestParam>& _oneOf)
{
    m_oneOf = _oneOf;
    m_oneOfHasBeenSet = true;
}

bool RequestParam::OneOfHasBeenSet() const
{
    return m_oneOfHasBeenSet;
}

vector<RequestParam> RequestParam::GetSubParams() const
{
    return m_subParams;
}

void RequestParam::SetSubParams(const vector<RequestParam>& _subParams)
{
    m_subParams = _subParams;
    m_subParamsHasBeenSet = true;
}

bool RequestParam::SubParamsHasBeenSet() const
{
    return m_subParamsHasBeenSet;
}

int64_t RequestParam::GetType() const
{
    return m_type;
}

void RequestParam::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RequestParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

