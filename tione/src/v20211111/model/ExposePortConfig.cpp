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

#include <tencentcloud/tione/v20211111/model/ExposePortConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ExposePortConfig::ExposePortConfig() :
    m_enableHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clbIdHasBeenSet(false),
    m_clbHostHasBeenSet(false)
{
}

CoreInternalOutcome ExposePortConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExposePortConfig.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposePortConfig.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ClbId") && !value["ClbId"].IsNull())
    {
        if (!value["ClbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposePortConfig.ClbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clbId = string(value["ClbId"].GetString());
        m_clbIdHasBeenSet = true;
    }

    if (value.HasMember("ClbHost") && !value["ClbHost"].IsNull())
    {
        if (!value["ClbHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposePortConfig.ClbHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clbHost = string(value["ClbHost"].GetString());
        m_clbHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExposePortConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_clbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clbId.c_str(), allocator).Move(), allocator);
    }

    if (m_clbHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClbHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clbHost.c_str(), allocator).Move(), allocator);
    }

}


bool ExposePortConfig::GetEnable() const
{
    return m_enable;
}

void ExposePortConfig::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ExposePortConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ExposePortConfig::GetVpcId() const
{
    return m_vpcId;
}

void ExposePortConfig::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ExposePortConfig::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ExposePortConfig::GetClbId() const
{
    return m_clbId;
}

void ExposePortConfig::SetClbId(const string& _clbId)
{
    m_clbId = _clbId;
    m_clbIdHasBeenSet = true;
}

bool ExposePortConfig::ClbIdHasBeenSet() const
{
    return m_clbIdHasBeenSet;
}

string ExposePortConfig::GetClbHost() const
{
    return m_clbHost;
}

void ExposePortConfig::SetClbHost(const string& _clbHost)
{
    m_clbHost = _clbHost;
    m_clbHostHasBeenSet = true;
}

bool ExposePortConfig::ClbHostHasBeenSet() const
{
    return m_clbHostHasBeenSet;
}

