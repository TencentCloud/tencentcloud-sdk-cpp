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

#include <tencentcloud/tcb/v20180608/model/BindServiceList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

BindServiceList::BindServiceList() :
    m_mcpHasBeenSet(false),
    m_apisHasBeenSet(false),
    m_otherHasBeenSet(false)
{
}

CoreInternalOutcome BindServiceList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mcp") && !value["Mcp"].IsNull())
    {
        if (!value["Mcp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindServiceList.Mcp` is not array type"));

        const rapidjson::Value &tmpValue = value["Mcp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mcp.push_back(item);
        }
        m_mcpHasBeenSet = true;
    }

    if (value.HasMember("Apis") && !value["Apis"].IsNull())
    {
        if (!value["Apis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindServiceList.Apis` is not array type"));

        const rapidjson::Value &tmpValue = value["Apis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apis.push_back(item);
        }
        m_apisHasBeenSet = true;
    }

    if (value.HasMember("Other") && !value["Other"].IsNull())
    {
        if (!value["Other"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindServiceList.Other` is not array type"));

        const rapidjson::Value &tmpValue = value["Other"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_other.push_back(item);
        }
        m_otherHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindServiceList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mcpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mcp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mcp.begin(); itr != m_mcp.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_apisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Apis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apis.begin(); itr != m_apis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_otherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Other";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_other.begin(); itr != m_other.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<BindService> BindServiceList::GetMcp() const
{
    return m_mcp;
}

void BindServiceList::SetMcp(const vector<BindService>& _mcp)
{
    m_mcp = _mcp;
    m_mcpHasBeenSet = true;
}

bool BindServiceList::McpHasBeenSet() const
{
    return m_mcpHasBeenSet;
}

vector<BindService> BindServiceList::GetApis() const
{
    return m_apis;
}

void BindServiceList::SetApis(const vector<BindService>& _apis)
{
    m_apis = _apis;
    m_apisHasBeenSet = true;
}

bool BindServiceList::ApisHasBeenSet() const
{
    return m_apisHasBeenSet;
}

vector<BindService> BindServiceList::GetOther() const
{
    return m_other;
}

void BindServiceList::SetOther(const vector<BindService>& _other)
{
    m_other = _other;
    m_otherHasBeenSet = true;
}

bool BindServiceList::OtherHasBeenSet() const
{
    return m_otherHasBeenSet;
}

