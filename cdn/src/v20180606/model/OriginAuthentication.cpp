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

#include <tencentcloud/cdn/v20180606/model/OriginAuthentication.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

OriginAuthentication::OriginAuthentication() :
    m_switchHasBeenSet(false),
    m_typeAHasBeenSet(false)
{
}

CoreInternalOutcome OriginAuthentication::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginAuthentication.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("TypeA") && !value["TypeA"].IsNull())
    {
        if (!value["TypeA"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OriginAuthentication.TypeA` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_typeA.Deserialize(value["TypeA"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeAHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginAuthentication::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string OriginAuthentication::GetSwitch() const
{
    return m_switch;
}

void OriginAuthentication::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool OriginAuthentication::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

OriginAuthenticationTypeA OriginAuthentication::GetTypeA() const
{
    return m_typeA;
}

void OriginAuthentication::SetTypeA(const OriginAuthenticationTypeA& _typeA)
{
    m_typeA = _typeA;
    m_typeAHasBeenSet = true;
}

bool OriginAuthentication::TypeAHasBeenSet() const
{
    return m_typeAHasBeenSet;
}

