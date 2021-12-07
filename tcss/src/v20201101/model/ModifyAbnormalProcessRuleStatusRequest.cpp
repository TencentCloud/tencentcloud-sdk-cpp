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

#include <tencentcloud/tcss/v20201101/model/ModifyAbnormalProcessRuleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyAbnormalProcessRuleStatusRequest::ModifyAbnormalProcessRuleStatusRequest() :
    m_ruleIdSetHasBeenSet(false),
    m_isEnableHasBeenSet(false)
{
}

string ModifyAbnormalProcessRuleStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIdSet.begin(); itr != m_ruleIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyAbnormalProcessRuleStatusRequest::GetRuleIdSet() const
{
    return m_ruleIdSet;
}

void ModifyAbnormalProcessRuleStatusRequest::SetRuleIdSet(const vector<string>& _ruleIdSet)
{
    m_ruleIdSet = _ruleIdSet;
    m_ruleIdSetHasBeenSet = true;
}

bool ModifyAbnormalProcessRuleStatusRequest::RuleIdSetHasBeenSet() const
{
    return m_ruleIdSetHasBeenSet;
}

bool ModifyAbnormalProcessRuleStatusRequest::GetIsEnable() const
{
    return m_isEnable;
}

void ModifyAbnormalProcessRuleStatusRequest::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool ModifyAbnormalProcessRuleStatusRequest::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}


