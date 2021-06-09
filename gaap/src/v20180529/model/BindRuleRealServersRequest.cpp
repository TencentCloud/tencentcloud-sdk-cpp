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

#include <tencentcloud/gaap/v20180529/model/BindRuleRealServersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

BindRuleRealServersRequest::BindRuleRealServersRequest() :
    m_ruleIdHasBeenSet(false),
    m_realServerBindSetHasBeenSet(false)
{
}

string BindRuleRealServersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerBindSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerBindSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_realServerBindSet.begin(); itr != m_realServerBindSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindRuleRealServersRequest::GetRuleId() const
{
    return m_ruleId;
}

void BindRuleRealServersRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BindRuleRealServersRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<RealServerBindSetReq> BindRuleRealServersRequest::GetRealServerBindSet() const
{
    return m_realServerBindSet;
}

void BindRuleRealServersRequest::SetRealServerBindSet(const vector<RealServerBindSetReq>& _realServerBindSet)
{
    m_realServerBindSet = _realServerBindSet;
    m_realServerBindSetHasBeenSet = true;
}

bool BindRuleRealServersRequest::RealServerBindSetHasBeenSet() const
{
    return m_realServerBindSetHasBeenSet;
}


