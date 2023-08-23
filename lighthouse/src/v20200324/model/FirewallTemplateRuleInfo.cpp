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

#include <tencentcloud/lighthouse/v20200324/model/FirewallTemplateRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

FirewallTemplateRuleInfo::FirewallTemplateRuleInfo() :
    m_templateRuleIdHasBeenSet(false),
    m_firewallRuleInfoHasBeenSet(false)
{
}

CoreInternalOutcome FirewallTemplateRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateRuleId") && !value["TemplateRuleId"].IsNull())
    {
        if (!value["TemplateRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateRuleInfo.TemplateRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateRuleId = string(value["TemplateRuleId"].GetString());
        m_templateRuleIdHasBeenSet = true;
    }

    if (value.HasMember("FirewallRuleInfo") && !value["FirewallRuleInfo"].IsNull())
    {
        if (!value["FirewallRuleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateRuleInfo.FirewallRuleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_firewallRuleInfo.Deserialize(value["FirewallRuleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_firewallRuleInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FirewallTemplateRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_firewallRuleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirewallRuleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_firewallRuleInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FirewallTemplateRuleInfo::GetTemplateRuleId() const
{
    return m_templateRuleId;
}

void FirewallTemplateRuleInfo::SetTemplateRuleId(const string& _templateRuleId)
{
    m_templateRuleId = _templateRuleId;
    m_templateRuleIdHasBeenSet = true;
}

bool FirewallTemplateRuleInfo::TemplateRuleIdHasBeenSet() const
{
    return m_templateRuleIdHasBeenSet;
}

FirewallRuleInfo FirewallTemplateRuleInfo::GetFirewallRuleInfo() const
{
    return m_firewallRuleInfo;
}

void FirewallTemplateRuleInfo::SetFirewallRuleInfo(const FirewallRuleInfo& _firewallRuleInfo)
{
    m_firewallRuleInfo = _firewallRuleInfo;
    m_firewallRuleInfoHasBeenSet = true;
}

bool FirewallTemplateRuleInfo::FirewallRuleInfoHasBeenSet() const
{
    return m_firewallRuleInfoHasBeenSet;
}

