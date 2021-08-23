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

#include <tencentcloud/mariadb/v20170312/model/ParamConstraint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

ParamConstraint::ParamConstraint() :
    m_typeHasBeenSet(false),
    m_enumHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_stringHasBeenSet(false)
{
}

CoreInternalOutcome ParamConstraint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamConstraint.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Enum") && !value["Enum"].IsNull())
    {
        if (!value["Enum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamConstraint.Enum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enum = string(value["Enum"].GetString());
        m_enumHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ParamConstraint.Range` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_range.Deserialize(value["Range"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rangeHasBeenSet = true;
    }

    if (value.HasMember("String") && !value["String"].IsNull())
    {
        if (!value["String"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamConstraint.String` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_string = string(value["String"].GetString());
        m_stringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamConstraint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_enumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enum.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_range.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "String";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_string.c_str(), allocator).Move(), allocator);
    }

}


string ParamConstraint::GetType() const
{
    return m_type;
}

void ParamConstraint::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ParamConstraint::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ParamConstraint::GetEnum() const
{
    return m_enum;
}

void ParamConstraint::SetEnum(const string& _enum)
{
    m_enum = _enum;
    m_enumHasBeenSet = true;
}

bool ParamConstraint::EnumHasBeenSet() const
{
    return m_enumHasBeenSet;
}

ConstraintRange ParamConstraint::GetRange() const
{
    return m_range;
}

void ParamConstraint::SetRange(const ConstraintRange& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool ParamConstraint::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

string ParamConstraint::GetString() const
{
    return m_string;
}

void ParamConstraint::SetString(const string& _string)
{
    m_string = _string;
    m_stringHasBeenSet = true;
}

bool ParamConstraint::StringHasBeenSet() const
{
    return m_stringHasBeenSet;
}

