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

#include <tencentcloud/teo/v20220901/model/UpstreamURLRewriteParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

UpstreamURLRewriteParameters::UpstreamURLRewriteParameters() :
    m_typeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_regexHasBeenSet(false)
{
}

CoreInternalOutcome UpstreamURLRewriteParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamURLRewriteParameters.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamURLRewriteParameters.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamURLRewriteParameters.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamURLRewriteParameters.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpstreamURLRewriteParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

}


string UpstreamURLRewriteParameters::GetType() const
{
    return m_type;
}

void UpstreamURLRewriteParameters::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpstreamURLRewriteParameters::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UpstreamURLRewriteParameters::GetAction() const
{
    return m_action;
}

void UpstreamURLRewriteParameters::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool UpstreamURLRewriteParameters::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string UpstreamURLRewriteParameters::GetValue() const
{
    return m_value;
}

void UpstreamURLRewriteParameters::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool UpstreamURLRewriteParameters::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string UpstreamURLRewriteParameters::GetRegex() const
{
    return m_regex;
}

void UpstreamURLRewriteParameters::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool UpstreamURLRewriteParameters::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

