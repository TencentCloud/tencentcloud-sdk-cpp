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

#include <tencentcloud/postgres/v20170312/model/ParamEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ParamEntry::ParamEntry() :
    m_nameHasBeenSet(false),
    m_expectedValueHasBeenSet(false)
{
}

CoreInternalOutcome ParamEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamEntry.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ExpectedValue") && !value["ExpectedValue"].IsNull())
    {
        if (!value["ExpectedValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamEntry.ExpectedValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectedValue = string(value["ExpectedValue"].GetString());
        m_expectedValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_expectedValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectedValue.c_str(), allocator).Move(), allocator);
    }

}


string ParamEntry::GetName() const
{
    return m_name;
}

void ParamEntry::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ParamEntry::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ParamEntry::GetExpectedValue() const
{
    return m_expectedValue;
}

void ParamEntry::SetExpectedValue(const string& _expectedValue)
{
    m_expectedValue = _expectedValue;
    m_expectedValueHasBeenSet = true;
}

bool ParamEntry::ExpectedValueHasBeenSet() const
{
    return m_expectedValueHasBeenSet;
}

