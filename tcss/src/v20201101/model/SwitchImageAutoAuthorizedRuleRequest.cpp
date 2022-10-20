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

#include <tencentcloud/tcss/v20201101/model/SwitchImageAutoAuthorizedRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SwitchImageAutoAuthorizedRuleRequest::SwitchImageAutoAuthorizedRuleRequest() :
    m_isEnabledHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string SwitchImageAutoAuthorizedRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SwitchImageAutoAuthorizedRuleRequest::GetIsEnabled() const
{
    return m_isEnabled;
}

void SwitchImageAutoAuthorizedRuleRequest::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool SwitchImageAutoAuthorizedRuleRequest::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

int64_t SwitchImageAutoAuthorizedRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void SwitchImageAutoAuthorizedRuleRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SwitchImageAutoAuthorizedRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


