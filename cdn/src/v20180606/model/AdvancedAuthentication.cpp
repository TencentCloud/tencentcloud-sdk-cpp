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

#include <tencentcloud/cdn/v20180606/model/AdvancedAuthentication.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvancedAuthentication::AdvancedAuthentication() :
    m_switchHasBeenSet(false),
    m_typeAHasBeenSet(false),
    m_typeBHasBeenSet(false),
    m_typeCHasBeenSet(false),
    m_typeDHasBeenSet(false),
    m_typeEHasBeenSet(false),
    m_typeFHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedAuthentication::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthentication.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("TypeA") && !value["TypeA"].IsNull())
    {
        if (!value["TypeA"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthentication.TypeA` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_typeA.Deserialize(value["TypeA"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeAHasBeenSet = true;
    }

    if (value.HasMember("TypeB") && !value["TypeB"].IsNull())
    {
        if (!value["TypeB"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthentication.TypeB` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_typeB.Deserialize(value["TypeB"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeBHasBeenSet = true;
    }

    if (value.HasMember("TypeC") && !value["TypeC"].IsNull())
    {
        if (!value["TypeC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthentication.TypeC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_typeC.Deserialize(value["TypeC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeCHasBeenSet = true;
    }

    if (value.HasMember("TypeD") && !value["TypeD"].IsNull())
    {
        if (!value["TypeD"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthentication.TypeD` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_typeD.Deserialize(value["TypeD"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeDHasBeenSet = true;
    }

    if (value.HasMember("TypeE") && !value["TypeE"].IsNull())
    {
        if (!value["TypeE"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthentication.TypeE` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_typeE.Deserialize(value["TypeE"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeEHasBeenSet = true;
    }

    if (value.HasMember("TypeF") && !value["TypeF"].IsNull())
    {
        if (!value["TypeF"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedAuthentication.TypeF` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_typeF.Deserialize(value["TypeF"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeFHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedAuthentication::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_typeAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_typeA.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_typeB.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_typeC.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_typeD.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_typeE.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeFHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeF";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_typeF.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AdvancedAuthentication::GetSwitch() const
{
    return m_switch;
}

void AdvancedAuthentication::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AdvancedAuthentication::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

AdvancedAuthenticationTypeA AdvancedAuthentication::GetTypeA() const
{
    return m_typeA;
}

void AdvancedAuthentication::SetTypeA(const AdvancedAuthenticationTypeA& _typeA)
{
    m_typeA = _typeA;
    m_typeAHasBeenSet = true;
}

bool AdvancedAuthentication::TypeAHasBeenSet() const
{
    return m_typeAHasBeenSet;
}

AdvancedAuthenticationTypeB AdvancedAuthentication::GetTypeB() const
{
    return m_typeB;
}

void AdvancedAuthentication::SetTypeB(const AdvancedAuthenticationTypeB& _typeB)
{
    m_typeB = _typeB;
    m_typeBHasBeenSet = true;
}

bool AdvancedAuthentication::TypeBHasBeenSet() const
{
    return m_typeBHasBeenSet;
}

AdvancedAuthenticationTypeC AdvancedAuthentication::GetTypeC() const
{
    return m_typeC;
}

void AdvancedAuthentication::SetTypeC(const AdvancedAuthenticationTypeC& _typeC)
{
    m_typeC = _typeC;
    m_typeCHasBeenSet = true;
}

bool AdvancedAuthentication::TypeCHasBeenSet() const
{
    return m_typeCHasBeenSet;
}

AdvancedAuthenticationTypeD AdvancedAuthentication::GetTypeD() const
{
    return m_typeD;
}

void AdvancedAuthentication::SetTypeD(const AdvancedAuthenticationTypeD& _typeD)
{
    m_typeD = _typeD;
    m_typeDHasBeenSet = true;
}

bool AdvancedAuthentication::TypeDHasBeenSet() const
{
    return m_typeDHasBeenSet;
}

AdvancedAuthenticationTypeE AdvancedAuthentication::GetTypeE() const
{
    return m_typeE;
}

void AdvancedAuthentication::SetTypeE(const AdvancedAuthenticationTypeE& _typeE)
{
    m_typeE = _typeE;
    m_typeEHasBeenSet = true;
}

bool AdvancedAuthentication::TypeEHasBeenSet() const
{
    return m_typeEHasBeenSet;
}

AdvancedAuthenticationTypeF AdvancedAuthentication::GetTypeF() const
{
    return m_typeF;
}

void AdvancedAuthentication::SetTypeF(const AdvancedAuthenticationTypeF& _typeF)
{
    m_typeF = _typeF;
    m_typeFHasBeenSet = true;
}

bool AdvancedAuthentication::TypeFHasBeenSet() const
{
    return m_typeFHasBeenSet;
}

