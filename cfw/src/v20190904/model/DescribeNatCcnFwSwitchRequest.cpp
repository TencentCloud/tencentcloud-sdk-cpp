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

#include <tencentcloud/cfw/v20190904/model/DescribeNatCcnFwSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeNatCcnFwSwitchRequest::DescribeNatCcnFwSwitchRequest() :
    m_natInsIdHasBeenSet(false),
    m_ccnIdHasBeenSet(false)
{
}

string DescribeNatCcnFwSwitchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNatCcnFwSwitchRequest::GetNatInsId() const
{
    return m_natInsId;
}

void DescribeNatCcnFwSwitchRequest::SetNatInsId(const string& _natInsId)
{
    m_natInsId = _natInsId;
    m_natInsIdHasBeenSet = true;
}

bool DescribeNatCcnFwSwitchRequest::NatInsIdHasBeenSet() const
{
    return m_natInsIdHasBeenSet;
}

string DescribeNatCcnFwSwitchRequest::GetCcnId() const
{
    return m_ccnId;
}

void DescribeNatCcnFwSwitchRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool DescribeNatCcnFwSwitchRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}


