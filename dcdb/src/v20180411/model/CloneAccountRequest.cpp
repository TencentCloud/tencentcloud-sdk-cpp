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

#include <tencentcloud/dcdb/v20180411/model/CloneAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

CloneAccountRequest::CloneAccountRequest() :
    m_instanceIdHasBeenSet(false),
    m_srcUserHasBeenSet(false),
    m_srcHostHasBeenSet(false),
    m_dstUserHasBeenSet(false),
    m_dstHostHasBeenSet(false),
    m_dstDescHasBeenSet(false)
{
}

string CloneAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcUser.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcHost.c_str(), allocator).Move(), allocator);
    }

    if (m_dstUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstUser.c_str(), allocator).Move(), allocator);
    }

    if (m_dstHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstHost.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloneAccountRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CloneAccountRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CloneAccountRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CloneAccountRequest::GetSrcUser() const
{
    return m_srcUser;
}

void CloneAccountRequest::SetSrcUser(const string& _srcUser)
{
    m_srcUser = _srcUser;
    m_srcUserHasBeenSet = true;
}

bool CloneAccountRequest::SrcUserHasBeenSet() const
{
    return m_srcUserHasBeenSet;
}

string CloneAccountRequest::GetSrcHost() const
{
    return m_srcHost;
}

void CloneAccountRequest::SetSrcHost(const string& _srcHost)
{
    m_srcHost = _srcHost;
    m_srcHostHasBeenSet = true;
}

bool CloneAccountRequest::SrcHostHasBeenSet() const
{
    return m_srcHostHasBeenSet;
}

string CloneAccountRequest::GetDstUser() const
{
    return m_dstUser;
}

void CloneAccountRequest::SetDstUser(const string& _dstUser)
{
    m_dstUser = _dstUser;
    m_dstUserHasBeenSet = true;
}

bool CloneAccountRequest::DstUserHasBeenSet() const
{
    return m_dstUserHasBeenSet;
}

string CloneAccountRequest::GetDstHost() const
{
    return m_dstHost;
}

void CloneAccountRequest::SetDstHost(const string& _dstHost)
{
    m_dstHost = _dstHost;
    m_dstHostHasBeenSet = true;
}

bool CloneAccountRequest::DstHostHasBeenSet() const
{
    return m_dstHostHasBeenSet;
}

string CloneAccountRequest::GetDstDesc() const
{
    return m_dstDesc;
}

void CloneAccountRequest::SetDstDesc(const string& _dstDesc)
{
    m_dstDesc = _dstDesc;
    m_dstDescHasBeenSet = true;
}

bool CloneAccountRequest::DstDescHasBeenSet() const
{
    return m_dstDescHasBeenSet;
}


