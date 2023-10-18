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

#include <tencentcloud/oceanus/v20190422/model/LogicalType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

LogicalType::LogicalType() :
    m_typeHasBeenSet(false),
    m_nullAbleHasBeenSet(false),
    m_lengthHasBeenSet(false)
{
}

CoreInternalOutcome LogicalType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogicalType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("NullAble") && !value["NullAble"].IsNull())
    {
        if (!value["NullAble"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogicalType.NullAble` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nullAble = value["NullAble"].GetBool();
        m_nullAbleHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogicalType.Length` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetInt64();
        m_lengthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogicalType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nullAbleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NullAble";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nullAble, allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

}


string LogicalType::GetType() const
{
    return m_type;
}

void LogicalType::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LogicalType::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool LogicalType::GetNullAble() const
{
    return m_nullAble;
}

void LogicalType::SetNullAble(const bool& _nullAble)
{
    m_nullAble = _nullAble;
    m_nullAbleHasBeenSet = true;
}

bool LogicalType::NullAbleHasBeenSet() const
{
    return m_nullAbleHasBeenSet;
}

int64_t LogicalType::GetLength() const
{
    return m_length;
}

void LogicalType::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool LogicalType::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

