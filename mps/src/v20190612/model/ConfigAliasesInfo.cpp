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

#include <tencentcloud/mps/v20190612/model/ConfigAliasesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ConfigAliasesInfo::ConfigAliasesInfo() :
    m_paramNameHasBeenSet(false),
    m_aliasValueListHasBeenSet(false)
{
}

CoreInternalOutcome ConfigAliasesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigAliasesInfo.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("AliasValueList") && !value["AliasValueList"].IsNull())
    {
        if (!value["AliasValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigAliasesInfo.AliasValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["AliasValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AliasValueConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aliasValueList.push_back(item);
        }
        m_aliasValueListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigAliasesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aliasValueList.begin(); itr != m_aliasValueList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ConfigAliasesInfo::GetParamName() const
{
    return m_paramName;
}

void ConfigAliasesInfo::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool ConfigAliasesInfo::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

vector<AliasValueConf> ConfigAliasesInfo::GetAliasValueList() const
{
    return m_aliasValueList;
}

void ConfigAliasesInfo::SetAliasValueList(const vector<AliasValueConf>& _aliasValueList)
{
    m_aliasValueList = _aliasValueList;
    m_aliasValueListHasBeenSet = true;
}

bool ConfigAliasesInfo::AliasValueListHasBeenSet() const
{
    return m_aliasValueListHasBeenSet;
}

