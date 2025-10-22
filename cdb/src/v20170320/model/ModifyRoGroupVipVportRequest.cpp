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

#include <tencentcloud/cdb/v20170320/model/ModifyRoGroupVipVportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyRoGroupVipVportRequest::ModifyRoGroupVipVportRequest() :
    m_uGroupIdHasBeenSet(false),
    m_dstIpHasBeenSet(false),
    m_dstPortHasBeenSet(false)
{
}

string ModifyRoGroupVipVportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uGroupId.c_str(), allocator).Move(), allocator);
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


string ModifyRoGroupVipVportRequest::GetUGroupId() const
{
    return m_uGroupId;
}

void ModifyRoGroupVipVportRequest::SetUGroupId(const string& _uGroupId)
{
    m_uGroupId = _uGroupId;
    m_uGroupIdHasBeenSet = true;
}

bool ModifyRoGroupVipVportRequest::UGroupIdHasBeenSet() const
{
    return m_uGroupIdHasBeenSet;
}

string ModifyRoGroupVipVportRequest::GetDstIp() const
{
    return m_dstIp;
}

void ModifyRoGroupVipVportRequest::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool ModifyRoGroupVipVportRequest::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}

int64_t ModifyRoGroupVipVportRequest::GetDstPort() const
{
    return m_dstPort;
}

void ModifyRoGroupVipVportRequest::SetDstPort(const int64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool ModifyRoGroupVipVportRequest::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}


