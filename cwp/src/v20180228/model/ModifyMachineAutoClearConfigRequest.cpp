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

#include <tencentcloud/cwp/v20180228/model/ModifyMachineAutoClearConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyMachineAutoClearConfigRequest::ModifyMachineAutoClearConfigRequest() :
    m_clearRuleHasBeenSet(false)
{
}

string ModifyMachineAutoClearConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clearRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearRule, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyMachineAutoClearConfigRequest::GetClearRule() const
{
    return m_clearRule;
}

void ModifyMachineAutoClearConfigRequest::SetClearRule(const uint64_t& _clearRule)
{
    m_clearRule = _clearRule;
    m_clearRuleHasBeenSet = true;
}

bool ModifyMachineAutoClearConfigRequest::ClearRuleHasBeenSet() const
{
    return m_clearRuleHasBeenSet;
}


