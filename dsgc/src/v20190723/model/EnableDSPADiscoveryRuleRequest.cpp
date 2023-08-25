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

#include <tencentcloud/dsgc/v20190723/model/EnableDSPADiscoveryRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

EnableDSPADiscoveryRuleRequest::EnableDSPADiscoveryRuleRequest() :
    m_dspaIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

string EnableDSPADiscoveryRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnableDSPADiscoveryRuleRequest::GetDspaId() const
{
    return m_dspaId;
}

void EnableDSPADiscoveryRuleRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool EnableDSPADiscoveryRuleRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t EnableDSPADiscoveryRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void EnableDSPADiscoveryRuleRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool EnableDSPADiscoveryRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

bool EnableDSPADiscoveryRuleRequest::GetEnable() const
{
    return m_enable;
}

void EnableDSPADiscoveryRuleRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool EnableDSPADiscoveryRuleRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


