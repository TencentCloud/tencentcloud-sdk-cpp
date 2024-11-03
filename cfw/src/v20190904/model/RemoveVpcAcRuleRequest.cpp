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

#include <tencentcloud/cfw/v20190904/model/RemoveVpcAcRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

RemoveVpcAcRuleRequest::RemoveVpcAcRuleRequest() :
    m_ruleUuidsHasBeenSet(false),
    m_ipVersionHasBeenSet(false)
{
}

string RemoveVpcAcRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleUuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleUuids.begin(); itr != m_ruleUuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> RemoveVpcAcRuleRequest::GetRuleUuids() const
{
    return m_ruleUuids;
}

void RemoveVpcAcRuleRequest::SetRuleUuids(const vector<int64_t>& _ruleUuids)
{
    m_ruleUuids = _ruleUuids;
    m_ruleUuidsHasBeenSet = true;
}

bool RemoveVpcAcRuleRequest::RuleUuidsHasBeenSet() const
{
    return m_ruleUuidsHasBeenSet;
}

uint64_t RemoveVpcAcRuleRequest::GetIpVersion() const
{
    return m_ipVersion;
}

void RemoveVpcAcRuleRequest::SetIpVersion(const uint64_t& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool RemoveVpcAcRuleRequest::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}


