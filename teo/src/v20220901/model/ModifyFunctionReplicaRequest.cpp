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

#include <tencentcloud/teo/v20220901/model/ModifyFunctionReplicaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyFunctionReplicaRequest::ModifyFunctionReplicaRequest() :
    m_zoneIdHasBeenSet(false),
    m_functionIdHasBeenSet(false),
    m_replicaNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyFunctionReplicaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replicaName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFunctionReplicaRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyFunctionReplicaRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyFunctionReplicaRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyFunctionReplicaRequest::GetFunctionId() const
{
    return m_functionId;
}

void ModifyFunctionReplicaRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool ModifyFunctionReplicaRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string ModifyFunctionReplicaRequest::GetReplicaName() const
{
    return m_replicaName;
}

void ModifyFunctionReplicaRequest::SetReplicaName(const string& _replicaName)
{
    m_replicaName = _replicaName;
    m_replicaNameHasBeenSet = true;
}

bool ModifyFunctionReplicaRequest::ReplicaNameHasBeenSet() const
{
    return m_replicaNameHasBeenSet;
}

string ModifyFunctionReplicaRequest::GetContent() const
{
    return m_content;
}

void ModifyFunctionReplicaRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyFunctionReplicaRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ModifyFunctionReplicaRequest::GetRemark() const
{
    return m_remark;
}

void ModifyFunctionReplicaRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyFunctionReplicaRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


