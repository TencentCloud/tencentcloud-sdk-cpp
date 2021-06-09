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

#include <tencentcloud/dts/v20180330/model/ModifySubscribeVipVportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

ModifySubscribeVipVportRequest::ModifySubscribeVipVportRequest() :
    m_subscribeIdHasBeenSet(false),
    m_dstUniqSubnetIdHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_dstPortHasBeenSet(false)
{
}

string ModifySubscribeVipVportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstUniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstUniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstUniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstPort, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySubscribeVipVportRequest::GetSubscribeId() const
{
    return m_subscribeId;
}

void ModifySubscribeVipVportRequest::SetSubscribeId(const string& _subscribeId)
{
    m_subscribeId = _subscribeId;
    m_subscribeIdHasBeenSet = true;
}

bool ModifySubscribeVipVportRequest::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string ModifySubscribeVipVportRequest::GetDstUniqSubnetId() const
{
    return m_dstUniqSubnetId;
}

void ModifySubscribeVipVportRequest::SetDstUniqSubnetId(const string& _dstUniqSubnetId)
{
    m_dstUniqSubnetId = _dstUniqSubnetId;
    m_dstUniqSubnetIdHasBeenSet = true;
}

bool ModifySubscribeVipVportRequest::DstUniqSubnetIdHasBeenSet() const
{
    return m_dstUniqSubnetIdHasBeenSet;
}

string ModifySubscribeVipVportRequest::GetDstIp() const
{
    return m_dstIp;
}

void ModifySubscribeVipVportRequest::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool ModifySubscribeVipVportRequest::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

int64_t ModifySubscribeVipVportRequest::GetDstPort() const
{
    return m_dstPort;
}

void ModifySubscribeVipVportRequest::SetDstPort(const int64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool ModifySubscribeVipVportRequest::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}


