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

#include <tencentcloud/cwp/v20180228/model/AccountStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AccountStatistics::AccountStatistics() :
    m_usernameHasBeenSet(false),
    m_machineNumHasBeenSet(false)
{
}

CoreInternalOutcome AccountStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountStatistics.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("MachineNum") && !value["MachineNum"].IsNull())
    {
        if (!value["MachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountStatistics.MachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineNum = value["MachineNum"].GetUint64();
        m_machineNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineNum, allocator);
    }

}


string AccountStatistics::GetUsername() const
{
    return m_username;
}

void AccountStatistics::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool AccountStatistics::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

uint64_t AccountStatistics::GetMachineNum() const
{
    return m_machineNum;
}

void AccountStatistics::SetMachineNum(const uint64_t& _machineNum)
{
    m_machineNum = _machineNum;
    m_machineNumHasBeenSet = true;
}

bool AccountStatistics::MachineNumHasBeenSet() const
{
    return m_machineNumHasBeenSet;
}

