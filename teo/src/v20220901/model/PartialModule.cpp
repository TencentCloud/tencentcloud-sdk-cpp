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

#include <tencentcloud/teo/v20220901/model/PartialModule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

PartialModule::PartialModule() :
    m_moduleHasBeenSet(false),
    m_includeHasBeenSet(false)
{
}

CoreInternalOutcome PartialModule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartialModule.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("Include") && !value["Include"].IsNull())
    {
        if (!value["Include"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PartialModule.Include` is not array type"));

        const rapidjson::Value &tmpValue = value["Include"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_include.push_back((*itr).GetInt64());
        }
        m_includeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartialModule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_includeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Include";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_include.begin(); itr != m_include.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string PartialModule::GetModule() const
{
    return m_module;
}

void PartialModule::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool PartialModule::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

vector<int64_t> PartialModule::GetInclude() const
{
    return m_include;
}

void PartialModule::SetInclude(const vector<int64_t>& _include)
{
    m_include = _include;
    m_includeHasBeenSet = true;
}

bool PartialModule::IncludeHasBeenSet() const
{
    return m_includeHasBeenSet;
}

