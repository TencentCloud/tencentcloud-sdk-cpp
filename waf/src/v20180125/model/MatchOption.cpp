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

#include <tencentcloud/waf/v20180125/model/MatchOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

MatchOption::MatchOption() :
    m_paramsHasBeenSet(false),
    m_funcHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome MatchOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchOption.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("Func") && !value["Func"].IsNull())
    {
        if (!value["Func"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchOption.Func` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_func = string(value["Func"].GetString());
        m_funcHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchOption.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MatchOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_funcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Func";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_func.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string MatchOption::GetParams() const
{
    return m_params;
}

void MatchOption::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool MatchOption::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string MatchOption::GetFunc() const
{
    return m_func;
}

void MatchOption::SetFunc(const string& _func)
{
    m_func = _func;
    m_funcHasBeenSet = true;
}

bool MatchOption::FuncHasBeenSet() const
{
    return m_funcHasBeenSet;
}

string MatchOption::GetContent() const
{
    return m_content;
}

void MatchOption::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool MatchOption::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

