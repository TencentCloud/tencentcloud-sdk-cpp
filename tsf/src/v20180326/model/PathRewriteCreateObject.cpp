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

#include <tencentcloud/tsf/v20180326/model/PathRewriteCreateObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

PathRewriteCreateObject::PathRewriteCreateObject() :
    m_gatewayGroupIdHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_replacementHasBeenSet(false),
    m_blockedHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

CoreInternalOutcome PathRewriteCreateObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayGroupId") && !value["GatewayGroupId"].IsNull())
    {
        if (!value["GatewayGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathRewriteCreateObject.GatewayGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayGroupId = string(value["GatewayGroupId"].GetString());
        m_gatewayGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathRewriteCreateObject.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }

    if (value.HasMember("Replacement") && !value["Replacement"].IsNull())
    {
        if (!value["Replacement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathRewriteCreateObject.Replacement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replacement = string(value["Replacement"].GetString());
        m_replacementHasBeenSet = true;
    }

    if (value.HasMember("Blocked") && !value["Blocked"].IsNull())
    {
        if (!value["Blocked"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathRewriteCreateObject.Blocked` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blocked = string(value["Blocked"].GetString());
        m_blockedHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PathRewriteCreateObject.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PathRewriteCreateObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

    if (m_replacementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replacement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replacement.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blocked.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

}


string PathRewriteCreateObject::GetGatewayGroupId() const
{
    return m_gatewayGroupId;
}

void PathRewriteCreateObject::SetGatewayGroupId(const string& _gatewayGroupId)
{
    m_gatewayGroupId = _gatewayGroupId;
    m_gatewayGroupIdHasBeenSet = true;
}

bool PathRewriteCreateObject::GatewayGroupIdHasBeenSet() const
{
    return m_gatewayGroupIdHasBeenSet;
}

string PathRewriteCreateObject::GetRegex() const
{
    return m_regex;
}

void PathRewriteCreateObject::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool PathRewriteCreateObject::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

string PathRewriteCreateObject::GetReplacement() const
{
    return m_replacement;
}

void PathRewriteCreateObject::SetReplacement(const string& _replacement)
{
    m_replacement = _replacement;
    m_replacementHasBeenSet = true;
}

bool PathRewriteCreateObject::ReplacementHasBeenSet() const
{
    return m_replacementHasBeenSet;
}

string PathRewriteCreateObject::GetBlocked() const
{
    return m_blocked;
}

void PathRewriteCreateObject::SetBlocked(const string& _blocked)
{
    m_blocked = _blocked;
    m_blockedHasBeenSet = true;
}

bool PathRewriteCreateObject::BlockedHasBeenSet() const
{
    return m_blockedHasBeenSet;
}

int64_t PathRewriteCreateObject::GetOrder() const
{
    return m_order;
}

void PathRewriteCreateObject::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool PathRewriteCreateObject::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

