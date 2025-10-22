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

#include <tencentcloud/teo/v20220901/model/RuleCodeActionParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleCodeActionParams::RuleCodeActionParams() :
    m_statusCodeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome RuleCodeActionParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCodeActionParams.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCodeActionParams.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCodeActionParams.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleCodeActionParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t RuleCodeActionParams::GetStatusCode() const
{
    return m_statusCode;
}

void RuleCodeActionParams::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool RuleCodeActionParams::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string RuleCodeActionParams::GetName() const
{
    return m_name;
}

void RuleCodeActionParams::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleCodeActionParams::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> RuleCodeActionParams::GetValues() const
{
    return m_values;
}

void RuleCodeActionParams::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool RuleCodeActionParams::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

