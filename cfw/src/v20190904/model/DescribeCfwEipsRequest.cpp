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

#include <tencentcloud/cfw/v20190904/model/DescribeCfwEipsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace rapidjson;
using namespace std;

DescribeCfwEipsRequest::DescribeCfwEipsRequest() :
    m_modeHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_cfwInstanceHasBeenSet(false)
{
}

string DescribeCfwEipsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_natGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_cfwInstanceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CfwInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cfwInstance.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeCfwEipsRequest::GetMode() const
{
    return m_mode;
}

void DescribeCfwEipsRequest::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribeCfwEipsRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribeCfwEipsRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void DescribeCfwEipsRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool DescribeCfwEipsRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

string DescribeCfwEipsRequest::GetCfwInstance() const
{
    return m_cfwInstance;
}

void DescribeCfwEipsRequest::SetCfwInstance(const string& _cfwInstance)
{
    m_cfwInstance = _cfwInstance;
    m_cfwInstanceHasBeenSet = true;
}

bool DescribeCfwEipsRequest::CfwInstanceHasBeenSet() const
{
    return m_cfwInstanceHasBeenSet;
}


