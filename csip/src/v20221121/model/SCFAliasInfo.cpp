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

#include <tencentcloud/csip/v20221121/model/SCFAliasInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SCFAliasInfo::SCFAliasInfo() :
    m_nameHasBeenSet(false),
    m_functionVersionHasBeenSet(false)
{
}

CoreInternalOutcome SCFAliasInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCFAliasInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("FunctionVersion") && !value["FunctionVersion"].IsNull())
    {
        if (!value["FunctionVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCFAliasInfo.FunctionVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionVersion = string(value["FunctionVersion"].GetString());
        m_functionVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SCFAliasInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_functionVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionVersion.c_str(), allocator).Move(), allocator);
    }

}


string SCFAliasInfo::GetName() const
{
    return m_name;
}

void SCFAliasInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SCFAliasInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SCFAliasInfo::GetFunctionVersion() const
{
    return m_functionVersion;
}

void SCFAliasInfo::SetFunctionVersion(const string& _functionVersion)
{
    m_functionVersion = _functionVersion;
    m_functionVersionHasBeenSet = true;
}

bool SCFAliasInfo::FunctionVersionHasBeenSet() const
{
    return m_functionVersionHasBeenSet;
}

