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

#include <tencentcloud/csip/v20221121/model/MachineLoginType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

MachineLoginType::MachineLoginType() :
    m_instanceIdHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_loginTypeHasBeenSet(false)
{
}

CoreInternalOutcome MachineLoginType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLoginType.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLoginType.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("LoginType") && !value["LoginType"].IsNull())
    {
        if (!value["LoginType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLoginType.LoginType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginType = value["LoginType"].GetUint64();
        m_loginTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineLoginType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_loginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginType, allocator);
    }

}


string MachineLoginType::GetInstanceId() const
{
    return m_instanceId;
}

void MachineLoginType::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MachineLoginType::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MachineLoginType::GetQuuid() const
{
    return m_quuid;
}

void MachineLoginType::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool MachineLoginType::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t MachineLoginType::GetLoginType() const
{
    return m_loginType;
}

void MachineLoginType::SetLoginType(const uint64_t& _loginType)
{
    m_loginType = _loginType;
    m_loginTypeHasBeenSet = true;
}

bool MachineLoginType::LoginTypeHasBeenSet() const
{
    return m_loginTypeHasBeenSet;
}

