/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/alb/v20251030/model/NotifyUnbindTargetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

NotifyUnbindTargetRequest::NotifyUnbindTargetRequest() :
    m_ipsHasBeenSet(false),
    m_numericVpcIdHasBeenSet(false)
{
}

string NotifyUnbindTargetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ips.begin(); itr != m_ips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_numericVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumericVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_numericVpcId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> NotifyUnbindTargetRequest::GetIps() const
{
    return m_ips;
}

void NotifyUnbindTargetRequest::SetIps(const vector<string>& _ips)
{
    m_ips = _ips;
    m_ipsHasBeenSet = true;
}

bool NotifyUnbindTargetRequest::IpsHasBeenSet() const
{
    return m_ipsHasBeenSet;
}

uint64_t NotifyUnbindTargetRequest::GetNumericVpcId() const
{
    return m_numericVpcId;
}

void NotifyUnbindTargetRequest::SetNumericVpcId(const uint64_t& _numericVpcId)
{
    m_numericVpcId = _numericVpcId;
    m_numericVpcIdHasBeenSet = true;
}

bool NotifyUnbindTargetRequest::NumericVpcIdHasBeenSet() const
{
    return m_numericVpcIdHasBeenSet;
}


