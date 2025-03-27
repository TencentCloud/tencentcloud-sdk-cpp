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

#include <tencentcloud/partners/v20180321/model/DescribeClientSwitchTraTaskInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeClientSwitchTraTaskInfoRequest::DescribeClientSwitchTraTaskInfoRequest() :
    m_clientUinHasBeenSet(false),
    m_switchTypeHasBeenSet(false)
{
}

string DescribeClientSwitchTraTaskInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientUin.c_str(), allocator).Move(), allocator);
    }

    if (m_switchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeClientSwitchTraTaskInfoRequest::GetClientUin() const
{
    return m_clientUin;
}

void DescribeClientSwitchTraTaskInfoRequest::SetClientUin(const string& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool DescribeClientSwitchTraTaskInfoRequest::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

int64_t DescribeClientSwitchTraTaskInfoRequest::GetSwitchType() const
{
    return m_switchType;
}

void DescribeClientSwitchTraTaskInfoRequest::SetSwitchType(const int64_t& _switchType)
{
    m_switchType = _switchType;
    m_switchTypeHasBeenSet = true;
}

bool DescribeClientSwitchTraTaskInfoRequest::SwitchTypeHasBeenSet() const
{
    return m_switchTypeHasBeenSet;
}


