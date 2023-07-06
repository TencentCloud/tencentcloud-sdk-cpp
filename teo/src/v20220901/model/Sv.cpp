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

#include <tencentcloud/teo/v20220901/model/Sv.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

Sv::Sv() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_packHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_protectionSpecsHasBeenSet(false)
{
}

CoreInternalOutcome Sv::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sv.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sv.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Pack") && !value["Pack"].IsNull())
    {
        if (!value["Pack"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sv.Pack` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pack = string(value["Pack"].GetString());
        m_packHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sv.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectionSpecs") && !value["ProtectionSpecs"].IsNull())
    {
        if (!value["ProtectionSpecs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sv.ProtectionSpecs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectionSpecs = string(value["ProtectionSpecs"].GetString());
        m_protectionSpecsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Sv::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_packHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pack.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_protectionSpecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionSpecs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectionSpecs.c_str(), allocator).Move(), allocator);
    }

}


string Sv::GetKey() const
{
    return m_key;
}

void Sv::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool Sv::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string Sv::GetValue() const
{
    return m_value;
}

void Sv::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool Sv::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string Sv::GetPack() const
{
    return m_pack;
}

void Sv::SetPack(const string& _pack)
{
    m_pack = _pack;
    m_packHasBeenSet = true;
}

bool Sv::PackHasBeenSet() const
{
    return m_packHasBeenSet;
}

string Sv::GetInstanceId() const
{
    return m_instanceId;
}

void Sv::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Sv::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Sv::GetProtectionSpecs() const
{
    return m_protectionSpecs;
}

void Sv::SetProtectionSpecs(const string& _protectionSpecs)
{
    m_protectionSpecs = _protectionSpecs;
    m_protectionSpecsHasBeenSet = true;
}

bool Sv::ProtectionSpecsHasBeenSet() const
{
    return m_protectionSpecsHasBeenSet;
}

