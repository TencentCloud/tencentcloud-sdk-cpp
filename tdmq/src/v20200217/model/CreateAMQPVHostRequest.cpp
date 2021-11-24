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

#include <tencentcloud/tdmq/v20200217/model/CreateAMQPVHostRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateAMQPVHostRequest::CreateAMQPVHostRequest() :
    m_clusterIdHasBeenSet(false),
    m_vHostIdHasBeenSet(false),
    m_msgTtlHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateAMQPVHostRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VHostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vHostId.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTtl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgTtl, allocator);
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


string CreateAMQPVHostRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateAMQPVHostRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateAMQPVHostRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateAMQPVHostRequest::GetVHostId() const
{
    return m_vHostId;
}

void CreateAMQPVHostRequest::SetVHostId(const string& _vHostId)
{
    m_vHostId = _vHostId;
    m_vHostIdHasBeenSet = true;
}

bool CreateAMQPVHostRequest::VHostIdHasBeenSet() const
{
    return m_vHostIdHasBeenSet;
}

uint64_t CreateAMQPVHostRequest::GetMsgTtl() const
{
    return m_msgTtl;
}

void CreateAMQPVHostRequest::SetMsgTtl(const uint64_t& _msgTtl)
{
    m_msgTtl = _msgTtl;
    m_msgTtlHasBeenSet = true;
}

bool CreateAMQPVHostRequest::MsgTtlHasBeenSet() const
{
    return m_msgTtlHasBeenSet;
}

string CreateAMQPVHostRequest::GetRemark() const
{
    return m_remark;
}

void CreateAMQPVHostRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateAMQPVHostRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


