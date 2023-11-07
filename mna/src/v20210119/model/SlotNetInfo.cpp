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

#include <tencentcloud/mna/v20210119/model/SlotNetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

SlotNetInfo::SlotNetInfo() :
    m_netInfoNameHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_currentHasBeenSet(false)
{
}

CoreInternalOutcome SlotNetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetInfoName") && !value["NetInfoName"].IsNull())
    {
        if (!value["NetInfoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotNetInfo.NetInfoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netInfoName = string(value["NetInfoName"].GetString());
        m_netInfoNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotNetInfo.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("Current") && !value["Current"].IsNull())
    {
        if (!value["Current"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlotNetInfo.Current` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_current = value["Current"].GetDouble();
        m_currentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlotNetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_netInfoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetInfoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netInfoName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_currentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Current";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_current, allocator);
    }

}


string SlotNetInfo::GetNetInfoName() const
{
    return m_netInfoName;
}

void SlotNetInfo::SetNetInfoName(const string& _netInfoName)
{
    m_netInfoName = _netInfoName;
    m_netInfoNameHasBeenSet = true;
}

bool SlotNetInfo::NetInfoNameHasBeenSet() const
{
    return m_netInfoNameHasBeenSet;
}

string SlotNetInfo::GetPublicIP() const
{
    return m_publicIP;
}

void SlotNetInfo::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool SlotNetInfo::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

double SlotNetInfo::GetCurrent() const
{
    return m_current;
}

void SlotNetInfo::SetCurrent(const double& _current)
{
    m_current = _current;
    m_currentHasBeenSet = true;
}

bool SlotNetInfo::CurrentHasBeenSet() const
{
    return m_currentHasBeenSet;
}

