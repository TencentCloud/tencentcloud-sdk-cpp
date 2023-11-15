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

#include <tencentcloud/weilingwith/v20230427/model/AlarmTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

AlarmTypeInfo::AlarmTypeInfo() :
    m_typeHasBeenSet(false),
    m_subTypeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTypeInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTypeInfo.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

}


string AlarmTypeInfo::GetType() const
{
    return m_type;
}

void AlarmTypeInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlarmTypeInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AlarmTypeInfo::GetSubType() const
{
    return m_subType;
}

void AlarmTypeInfo::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool AlarmTypeInfo::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

