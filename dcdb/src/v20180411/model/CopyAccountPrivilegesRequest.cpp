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

#include <tencentcloud/dcdb/v20180411/model/CopyAccountPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

CopyAccountPrivilegesRequest::CopyAccountPrivilegesRequest() :
    m_instanceIdHasBeenSet(false),
    m_srcUserNameHasBeenSet(false),
    m_srcHostHasBeenSet(false),
    m_dstUserNameHasBeenSet(false),
    m_dstHostHasBeenSet(false),
    m_srcReadOnlyHasBeenSet(false),
    m_dstReadOnlyHasBeenSet(false)
{
}

string CopyAccountPrivilegesRequest::ToJsonString() const
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

    if (m_srcUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcUserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcHost.c_str(), allocator).Move(), allocator);
    }

    if (m_dstUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstUserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstHost.c_str(), allocator).Move(), allocator);
    }

    if (m_srcReadOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcReadOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcReadOnly.c_str(), allocator).Move(), allocator);
    }

    if (m_dstReadOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstReadOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstReadOnly.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CopyAccountPrivilegesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CopyAccountPrivilegesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CopyAccountPrivilegesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CopyAccountPrivilegesRequest::GetSrcUserName() const
{
    return m_srcUserName;
}

void CopyAccountPrivilegesRequest::SetSrcUserName(const string& _srcUserName)
{
    m_srcUserName = _srcUserName;
    m_srcUserNameHasBeenSet = true;
}

bool CopyAccountPrivilegesRequest::SrcUserNameHasBeenSet() const
{
    return m_srcUserNameHasBeenSet;
}

string CopyAccountPrivilegesRequest::GetSrcHost() const
{
    return m_srcHost;
}

void CopyAccountPrivilegesRequest::SetSrcHost(const string& _srcHost)
{
    m_srcHost = _srcHost;
    m_srcHostHasBeenSet = true;
}

bool CopyAccountPrivilegesRequest::SrcHostHasBeenSet() const
{
    return m_srcHostHasBeenSet;
}

string CopyAccountPrivilegesRequest::GetDstUserName() const
{
    return m_dstUserName;
}

void CopyAccountPrivilegesRequest::SetDstUserName(const string& _dstUserName)
{
    m_dstUserName = _dstUserName;
    m_dstUserNameHasBeenSet = true;
}

bool CopyAccountPrivilegesRequest::DstUserNameHasBeenSet() const
{
    return m_dstUserNameHasBeenSet;
}

string CopyAccountPrivilegesRequest::GetDstHost() const
{
    return m_dstHost;
}

void CopyAccountPrivilegesRequest::SetDstHost(const string& _dstHost)
{
    m_dstHost = _dstHost;
    m_dstHostHasBeenSet = true;
}

bool CopyAccountPrivilegesRequest::DstHostHasBeenSet() const
{
    return m_dstHostHasBeenSet;
}

string CopyAccountPrivilegesRequest::GetSrcReadOnly() const
{
    return m_srcReadOnly;
}

void CopyAccountPrivilegesRequest::SetSrcReadOnly(const string& _srcReadOnly)
{
    m_srcReadOnly = _srcReadOnly;
    m_srcReadOnlyHasBeenSet = true;
}

bool CopyAccountPrivilegesRequest::SrcReadOnlyHasBeenSet() const
{
    return m_srcReadOnlyHasBeenSet;
}

string CopyAccountPrivilegesRequest::GetDstReadOnly() const
{
    return m_dstReadOnly;
}

void CopyAccountPrivilegesRequest::SetDstReadOnly(const string& _dstReadOnly)
{
    m_dstReadOnly = _dstReadOnly;
    m_dstReadOnlyHasBeenSet = true;
}

bool CopyAccountPrivilegesRequest::DstReadOnlyHasBeenSet() const
{
    return m_dstReadOnlyHasBeenSet;
}


