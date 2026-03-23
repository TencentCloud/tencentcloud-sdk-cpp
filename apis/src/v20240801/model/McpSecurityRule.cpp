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

#include <tencentcloud/apis/v20240801/model/McpSecurityRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

McpSecurityRule::McpSecurityRule() :
    m_iDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_actHasBeenSet(false)
{
}

CoreInternalOutcome McpSecurityRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRule.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Act") && !value["Act"].IsNull())
    {
        if (!value["Act"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpSecurityRule.Act` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_act = string(value["Act"].GetString());
        m_actHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McpSecurityRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_actHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Act";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_act.c_str(), allocator).Move(), allocator);
    }

}


string McpSecurityRule::GetID() const
{
    return m_iD;
}

void McpSecurityRule::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool McpSecurityRule::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string McpSecurityRule::GetStatus() const
{
    return m_status;
}

void McpSecurityRule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool McpSecurityRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string McpSecurityRule::GetAct() const
{
    return m_act;
}

void McpSecurityRule::SetAct(const string& _act)
{
    m_act = _act;
    m_actHasBeenSet = true;
}

bool McpSecurityRule::ActHasBeenSet() const
{
    return m_actHasBeenSet;
}

