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

#include <tencentcloud/apis/v20240801/model/TmsConfigDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

TmsConfigDTO::TmsConfigDTO() :
    m_scopeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_mergeCountHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_interceptMessageHasBeenSet(false)
{
}

CoreInternalOutcome TmsConfigDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TmsConfigDTO.Scope` is not array type"));

        const rapidjson::Value &tmpValue = value["Scope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scope.push_back((*itr).GetString());
        }
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TmsConfigDTO.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TmsConfigDTO.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("MergeCount") && !value["MergeCount"].IsNull())
    {
        if (!value["MergeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TmsConfigDTO.MergeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mergeCount = value["MergeCount"].GetUint64();
        m_mergeCountHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TmsConfigDTO.BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(value["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("InterceptMessage") && !value["InterceptMessage"].IsNull())
    {
        if (!value["InterceptMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TmsConfigDTO.InterceptMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interceptMessage = string(value["InterceptMessage"].GetString());
        m_interceptMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TmsConfigDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scope.begin(); itr != m_scope.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_mergeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mergeCount, allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_interceptMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterceptMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interceptMessage.c_str(), allocator).Move(), allocator);
    }

}


vector<string> TmsConfigDTO::GetScope() const
{
    return m_scope;
}

void TmsConfigDTO::SetScope(const vector<string>& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool TmsConfigDTO::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string TmsConfigDTO::GetMode() const
{
    return m_mode;
}

void TmsConfigDTO::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool TmsConfigDTO::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string TmsConfigDTO::GetAction() const
{
    return m_action;
}

void TmsConfigDTO::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool TmsConfigDTO::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

uint64_t TmsConfigDTO::GetMergeCount() const
{
    return m_mergeCount;
}

void TmsConfigDTO::SetMergeCount(const uint64_t& _mergeCount)
{
    m_mergeCount = _mergeCount;
    m_mergeCountHasBeenSet = true;
}

bool TmsConfigDTO::MergeCountHasBeenSet() const
{
    return m_mergeCountHasBeenSet;
}

string TmsConfigDTO::GetBizType() const
{
    return m_bizType;
}

void TmsConfigDTO::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool TmsConfigDTO::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string TmsConfigDTO::GetInterceptMessage() const
{
    return m_interceptMessage;
}

void TmsConfigDTO::SetInterceptMessage(const string& _interceptMessage)
{
    m_interceptMessage = _interceptMessage;
    m_interceptMessageHasBeenSet = true;
}

bool TmsConfigDTO::InterceptMessageHasBeenSet() const
{
    return m_interceptMessageHasBeenSet;
}

