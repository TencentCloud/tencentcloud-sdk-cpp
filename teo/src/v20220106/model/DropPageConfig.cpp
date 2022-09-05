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

#include <tencentcloud/teo/v20220106/model/DropPageConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DropPageConfig::DropPageConfig() :
    m_switchHasBeenSet(false),
    m_wafHasBeenSet(false),
    m_aclHasBeenSet(false)
{
}

CoreInternalOutcome DropPageConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Waf") && !value["Waf"].IsNull())
    {
        if (!value["Waf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageConfig.Waf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waf.Deserialize(value["Waf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wafHasBeenSet = true;
    }

    if (value.HasMember("Acl") && !value["Acl"].IsNull())
    {
        if (!value["Acl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageConfig.Acl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_acl.Deserialize(value["Acl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aclHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DropPageConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_wafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Waf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Acl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_acl.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DropPageConfig::GetSwitch() const
{
    return m_switch;
}

void DropPageConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DropPageConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

DropPageDetail DropPageConfig::GetWaf() const
{
    return m_waf;
}

void DropPageConfig::SetWaf(const DropPageDetail& _waf)
{
    m_waf = _waf;
    m_wafHasBeenSet = true;
}

bool DropPageConfig::WafHasBeenSet() const
{
    return m_wafHasBeenSet;
}

DropPageDetail DropPageConfig::GetAcl() const
{
    return m_acl;
}

void DropPageConfig::SetAcl(const DropPageDetail& _acl)
{
    m_acl = _acl;
    m_aclHasBeenSet = true;
}

bool DropPageConfig::AclHasBeenSet() const
{
    return m_aclHasBeenSet;
}

