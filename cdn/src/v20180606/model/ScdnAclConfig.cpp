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

#include <tencentcloud/cdn/v20180606/model/ScdnAclConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnAclConfig::ScdnAclConfig() :
    m_switchHasBeenSet(false),
    m_scriptDataHasBeenSet(false),
    m_errorPageHasBeenSet(false),
    m_advancedScriptDataHasBeenSet(false)
{
}

CoreInternalOutcome ScdnAclConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnAclConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ScriptData") && !value["ScriptData"].IsNull())
    {
        if (!value["ScriptData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnAclConfig.ScriptData` is not array type"));

        const rapidjson::Value &tmpValue = value["ScriptData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScdnAclGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scriptData.push_back(item);
        }
        m_scriptDataHasBeenSet = true;
    }

    if (value.HasMember("ErrorPage") && !value["ErrorPage"].IsNull())
    {
        if (!value["ErrorPage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnAclConfig.ErrorPage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorPage.Deserialize(value["ErrorPage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorPageHasBeenSet = true;
    }

    if (value.HasMember("AdvancedScriptData") && !value["AdvancedScriptData"].IsNull())
    {
        if (!value["AdvancedScriptData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnAclConfig.AdvancedScriptData` is not array type"));

        const rapidjson::Value &tmpValue = value["AdvancedScriptData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdvancedScdnAclGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_advancedScriptData.push_back(item);
        }
        m_advancedScriptDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnAclConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scriptData.begin(); itr != m_scriptData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errorPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorPage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advancedScriptDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedScriptData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_advancedScriptData.begin(); itr != m_advancedScriptData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ScdnAclConfig::GetSwitch() const
{
    return m_switch;
}

void ScdnAclConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ScdnAclConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<ScdnAclGroup> ScdnAclConfig::GetScriptData() const
{
    return m_scriptData;
}

void ScdnAclConfig::SetScriptData(const vector<ScdnAclGroup>& _scriptData)
{
    m_scriptData = _scriptData;
    m_scriptDataHasBeenSet = true;
}

bool ScdnAclConfig::ScriptDataHasBeenSet() const
{
    return m_scriptDataHasBeenSet;
}

ScdnErrorPage ScdnAclConfig::GetErrorPage() const
{
    return m_errorPage;
}

void ScdnAclConfig::SetErrorPage(const ScdnErrorPage& _errorPage)
{
    m_errorPage = _errorPage;
    m_errorPageHasBeenSet = true;
}

bool ScdnAclConfig::ErrorPageHasBeenSet() const
{
    return m_errorPageHasBeenSet;
}

vector<AdvancedScdnAclGroup> ScdnAclConfig::GetAdvancedScriptData() const
{
    return m_advancedScriptData;
}

void ScdnAclConfig::SetAdvancedScriptData(const vector<AdvancedScdnAclGroup>& _advancedScriptData)
{
    m_advancedScriptData = _advancedScriptData;
    m_advancedScriptDataHasBeenSet = true;
}

bool ScdnAclConfig::AdvancedScriptDataHasBeenSet() const
{
    return m_advancedScriptDataHasBeenSet;
}

