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

#include <tencentcloud/dayu/v20180709/model/DeleteCCFrequencyRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DeleteCCFrequencyRulesRequest::DeleteCCFrequencyRulesRequest() :
    m_businessHasBeenSet(false),
    m_cCFrequencyRuleIdHasBeenSet(false)
{
}

string DeleteCCFrequencyRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_cCFrequencyRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCFrequencyRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cCFrequencyRuleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCCFrequencyRulesRequest::GetBusiness() const
{
    return m_business;
}

void DeleteCCFrequencyRulesRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DeleteCCFrequencyRulesRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DeleteCCFrequencyRulesRequest::GetCCFrequencyRuleId() const
{
    return m_cCFrequencyRuleId;
}

void DeleteCCFrequencyRulesRequest::SetCCFrequencyRuleId(const string& _cCFrequencyRuleId)
{
    m_cCFrequencyRuleId = _cCFrequencyRuleId;
    m_cCFrequencyRuleIdHasBeenSet = true;
}

bool DeleteCCFrequencyRulesRequest::CCFrequencyRuleIdHasBeenSet() const
{
    return m_cCFrequencyRuleIdHasBeenSet;
}


