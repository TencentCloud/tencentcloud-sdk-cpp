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

#include <tencentcloud/cls/v20201016/model/AccessControlRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AccessControlRule::AccessControlRule() :
    m_cidrBlocksHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_accessModeHasBeenSet(false)
{
}

CoreInternalOutcome AccessControlRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CidrBlocks") && !value["CidrBlocks"].IsNull())
    {
        if (!value["CidrBlocks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessControlRule.CidrBlocks` is not array type"));

        const rapidjson::Value &tmpValue = value["CidrBlocks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cidrBlocks.push_back((*itr).GetString());
        }
        m_cidrBlocksHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRule.AccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = string(value["AccessMode"].GetString());
        m_accessModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessControlRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cidrBlocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlocks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cidrBlocks.begin(); itr != m_cidrBlocks.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

}


vector<string> AccessControlRule::GetCidrBlocks() const
{
    return m_cidrBlocks;
}

void AccessControlRule::SetCidrBlocks(const vector<string>& _cidrBlocks)
{
    m_cidrBlocks = _cidrBlocks;
    m_cidrBlocksHasBeenSet = true;
}

bool AccessControlRule::CidrBlocksHasBeenSet() const
{
    return m_cidrBlocksHasBeenSet;
}

string AccessControlRule::GetAction() const
{
    return m_action;
}

void AccessControlRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AccessControlRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string AccessControlRule::GetAccessMode() const
{
    return m_accessMode;
}

void AccessControlRule::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool AccessControlRule::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

