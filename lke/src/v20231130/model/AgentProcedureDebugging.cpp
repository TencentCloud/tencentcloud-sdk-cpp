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

#include <tencentcloud/lke/v20231130/model/AgentProcedureDebugging.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentProcedureDebugging::AgentProcedureDebugging() :
    m_contentHasBeenSet(false),
    m_displayContentHasBeenSet(false),
    m_displayTypeHasBeenSet(false),
    m_quoteInfosHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_displayStatusHasBeenSet(false),
    m_sandboxUrlHasBeenSet(false),
    m_displayUrlHasBeenSet(false)
{
}

CoreInternalOutcome AgentProcedureDebugging::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedureDebugging.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("DisplayContent") && !value["DisplayContent"].IsNull())
    {
        if (!value["DisplayContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedureDebugging.DisplayContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayContent = string(value["DisplayContent"].GetString());
        m_displayContentHasBeenSet = true;
    }

    if (value.HasMember("DisplayType") && !value["DisplayType"].IsNull())
    {
        if (!value["DisplayType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedureDebugging.DisplayType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_displayType = value["DisplayType"].GetUint64();
        m_displayTypeHasBeenSet = true;
    }

    if (value.HasMember("QuoteInfos") && !value["QuoteInfos"].IsNull())
    {
        if (!value["QuoteInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentProcedureDebugging.QuoteInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["QuoteInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuoteInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_quoteInfos.push_back(item);
        }
        m_quoteInfosHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentProcedureDebugging.References` is not array type"));

        const rapidjson::Value &tmpValue = value["References"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentReference item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_references.push_back(item);
        }
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("DisplayStatus") && !value["DisplayStatus"].IsNull())
    {
        if (!value["DisplayStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedureDebugging.DisplayStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayStatus = string(value["DisplayStatus"].GetString());
        m_displayStatusHasBeenSet = true;
    }

    if (value.HasMember("SandboxUrl") && !value["SandboxUrl"].IsNull())
    {
        if (!value["SandboxUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedureDebugging.SandboxUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sandboxUrl = string(value["SandboxUrl"].GetString());
        m_sandboxUrlHasBeenSet = true;
    }

    if (value.HasMember("DisplayUrl") && !value["DisplayUrl"].IsNull())
    {
        if (!value["DisplayUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProcedureDebugging.DisplayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayUrl = string(value["DisplayUrl"].GetString());
        m_displayUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentProcedureDebugging::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_displayContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayContent.c_str(), allocator).Move(), allocator);
    }

    if (m_displayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayType, allocator);
    }

    if (m_quoteInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuoteInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quoteInfos.begin(); itr != m_quoteInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_references.begin(); itr != m_references.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_displayStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_sandboxUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SandboxUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sandboxUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_displayUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayUrl.c_str(), allocator).Move(), allocator);
    }

}


string AgentProcedureDebugging::GetContent() const
{
    return m_content;
}

void AgentProcedureDebugging::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AgentProcedureDebugging::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string AgentProcedureDebugging::GetDisplayContent() const
{
    return m_displayContent;
}

void AgentProcedureDebugging::SetDisplayContent(const string& _displayContent)
{
    m_displayContent = _displayContent;
    m_displayContentHasBeenSet = true;
}

bool AgentProcedureDebugging::DisplayContentHasBeenSet() const
{
    return m_displayContentHasBeenSet;
}

uint64_t AgentProcedureDebugging::GetDisplayType() const
{
    return m_displayType;
}

void AgentProcedureDebugging::SetDisplayType(const uint64_t& _displayType)
{
    m_displayType = _displayType;
    m_displayTypeHasBeenSet = true;
}

bool AgentProcedureDebugging::DisplayTypeHasBeenSet() const
{
    return m_displayTypeHasBeenSet;
}

vector<QuoteInfo> AgentProcedureDebugging::GetQuoteInfos() const
{
    return m_quoteInfos;
}

void AgentProcedureDebugging::SetQuoteInfos(const vector<QuoteInfo>& _quoteInfos)
{
    m_quoteInfos = _quoteInfos;
    m_quoteInfosHasBeenSet = true;
}

bool AgentProcedureDebugging::QuoteInfosHasBeenSet() const
{
    return m_quoteInfosHasBeenSet;
}

vector<AgentReference> AgentProcedureDebugging::GetReferences() const
{
    return m_references;
}

void AgentProcedureDebugging::SetReferences(const vector<AgentReference>& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool AgentProcedureDebugging::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string AgentProcedureDebugging::GetDisplayStatus() const
{
    return m_displayStatus;
}

void AgentProcedureDebugging::SetDisplayStatus(const string& _displayStatus)
{
    m_displayStatus = _displayStatus;
    m_displayStatusHasBeenSet = true;
}

bool AgentProcedureDebugging::DisplayStatusHasBeenSet() const
{
    return m_displayStatusHasBeenSet;
}

string AgentProcedureDebugging::GetSandboxUrl() const
{
    return m_sandboxUrl;
}

void AgentProcedureDebugging::SetSandboxUrl(const string& _sandboxUrl)
{
    m_sandboxUrl = _sandboxUrl;
    m_sandboxUrlHasBeenSet = true;
}

bool AgentProcedureDebugging::SandboxUrlHasBeenSet() const
{
    return m_sandboxUrlHasBeenSet;
}

string AgentProcedureDebugging::GetDisplayUrl() const
{
    return m_displayUrl;
}

void AgentProcedureDebugging::SetDisplayUrl(const string& _displayUrl)
{
    m_displayUrl = _displayUrl;
    m_displayUrlHasBeenSet = true;
}

bool AgentProcedureDebugging::DisplayUrlHasBeenSet() const
{
    return m_displayUrlHasBeenSet;
}

