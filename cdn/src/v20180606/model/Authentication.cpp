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

#include <tencentcloud/cdn/v20180606/model/Authentication.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

Authentication::Authentication() :
    m_switchHasBeenSet(false),
    m_authAlgorithmHasBeenSet(false),
    m_typeAHasBeenSet(false),
    m_typeBHasBeenSet(false),
    m_typeCHasBeenSet(false),
    m_typeDHasBeenSet(false)
{
}

CoreInternalOutcome Authentication::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authentication.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("AuthAlgorithm") && !value["AuthAlgorithm"].IsNull())
    {
        if (!value["AuthAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authentication.AuthAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authAlgorithm = string(value["AuthAlgorithm"].GetString());
        m_authAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("TypeA") && !value["TypeA"].IsNull())
    {
        if (!value["TypeA"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Authentication.TypeA` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Authentication.TypeB` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Authentication.TypeC` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Authentication.TypeD` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_typeD.Deserialize(value["TypeD"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Authentication::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_authAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authAlgorithm.c_str(), allocator).Move(), allocator);
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

}


string Authentication::GetSwitch() const
{
    return m_switch;
}

void Authentication::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool Authentication::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string Authentication::GetAuthAlgorithm() const
{
    return m_authAlgorithm;
}

void Authentication::SetAuthAlgorithm(const string& _authAlgorithm)
{
    m_authAlgorithm = _authAlgorithm;
    m_authAlgorithmHasBeenSet = true;
}

bool Authentication::AuthAlgorithmHasBeenSet() const
{
    return m_authAlgorithmHasBeenSet;
}

AuthenticationTypeA Authentication::GetTypeA() const
{
    return m_typeA;
}

void Authentication::SetTypeA(const AuthenticationTypeA& _typeA)
{
    m_typeA = _typeA;
    m_typeAHasBeenSet = true;
}

bool Authentication::TypeAHasBeenSet() const
{
    return m_typeAHasBeenSet;
}

AuthenticationTypeB Authentication::GetTypeB() const
{
    return m_typeB;
}

void Authentication::SetTypeB(const AuthenticationTypeB& _typeB)
{
    m_typeB = _typeB;
    m_typeBHasBeenSet = true;
}

bool Authentication::TypeBHasBeenSet() const
{
    return m_typeBHasBeenSet;
}

AuthenticationTypeC Authentication::GetTypeC() const
{
    return m_typeC;
}

void Authentication::SetTypeC(const AuthenticationTypeC& _typeC)
{
    m_typeC = _typeC;
    m_typeCHasBeenSet = true;
}

bool Authentication::TypeCHasBeenSet() const
{
    return m_typeCHasBeenSet;
}

AuthenticationTypeD Authentication::GetTypeD() const
{
    return m_typeD;
}

void Authentication::SetTypeD(const AuthenticationTypeD& _typeD)
{
    m_typeD = _typeD;
    m_typeDHasBeenSet = true;
}

bool Authentication::TypeDHasBeenSet() const
{
    return m_typeDHasBeenSet;
}

