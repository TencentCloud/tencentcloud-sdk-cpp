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

#include <tencentcloud/cdb/v20170320/model/AuditFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AuditFilter::AuditFilter() :
    m_typeHasBeenSet(false),
    m_compareHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome AuditFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditFilter.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Compare") && !value["Compare"].IsNull())
    {
        if (!value["Compare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditFilter.Compare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compare = string(value["Compare"].GetString());
        m_compareHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditFilter.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_compareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compare.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string AuditFilter::GetType() const
{
    return m_type;
}

void AuditFilter::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AuditFilter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AuditFilter::GetCompare() const
{
    return m_compare;
}

void AuditFilter::SetCompare(const string& _compare)
{
    m_compare = _compare;
    m_compareHasBeenSet = true;
}

bool AuditFilter::CompareHasBeenSet() const
{
    return m_compareHasBeenSet;
}

string AuditFilter::GetValue() const
{
    return m_value;
}

void AuditFilter::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AuditFilter::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

