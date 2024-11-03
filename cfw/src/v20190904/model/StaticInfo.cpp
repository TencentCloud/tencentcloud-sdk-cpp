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

#include <tencentcloud/cfw/v20190904/model/StaticInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

StaticInfo::StaticInfo() :
    m_addressHasBeenSet(false),
    m_insIDHasBeenSet(false),
    m_insNameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_numHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

CoreInternalOutcome StaticInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("InsID") && !value["InsID"].IsNull())
    {
        if (!value["InsID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticInfo.InsID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insID = string(value["InsID"].GetString());
        m_insIDHasBeenSet = true;
    }

    if (value.HasMember("InsName") && !value["InsName"].IsNull())
    {
        if (!value["InsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticInfo.InsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insName = string(value["InsName"].GetString());
        m_insNameHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaticInfo.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaticInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_insIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insID.c_str(), allocator).Move(), allocator);
    }

    if (m_insNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

}


string StaticInfo::GetAddress() const
{
    return m_address;
}

void StaticInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool StaticInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string StaticInfo::GetInsID() const
{
    return m_insID;
}

void StaticInfo::SetInsID(const string& _insID)
{
    m_insID = _insID;
    m_insIDHasBeenSet = true;
}

bool StaticInfo::InsIDHasBeenSet() const
{
    return m_insIDHasBeenSet;
}

string StaticInfo::GetInsName() const
{
    return m_insName;
}

void StaticInfo::SetInsName(const string& _insName)
{
    m_insName = _insName;
    m_insNameHasBeenSet = true;
}

bool StaticInfo::InsNameHasBeenSet() const
{
    return m_insNameHasBeenSet;
}

string StaticInfo::GetIp() const
{
    return m_ip;
}

void StaticInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool StaticInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t StaticInfo::GetNum() const
{
    return m_num;
}

void StaticInfo::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool StaticInfo::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

string StaticInfo::GetPort() const
{
    return m_port;
}

void StaticInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool StaticInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

