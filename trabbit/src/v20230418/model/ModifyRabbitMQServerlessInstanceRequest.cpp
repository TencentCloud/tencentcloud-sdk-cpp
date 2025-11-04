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

#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

ModifyRabbitMQServerlessInstanceRequest::ModifyRabbitMQServerlessInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_traceFlagHasBeenSet(false),
    m_sendReceiveRatioHasBeenSet(false),
    m_deleteAllTagsHasBeenSet(false),
    m_instanceTagsHasBeenSet(false)
{
}

string ModifyRabbitMQServerlessInstanceRequest::ToJsonString() const
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

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_traceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_traceFlag, allocator);
    }

    if (m_sendReceiveRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendReceiveRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sendReceiveRatio, allocator);
    }

    if (m_deleteAllTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteAllTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteAllTags, allocator);
    }

    if (m_instanceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTags.begin(); itr != m_instanceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRabbitMQServerlessInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyRabbitMQServerlessInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyRabbitMQServerlessInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyRabbitMQServerlessInstanceRequest::GetClusterName() const
{
    return m_clusterName;
}

void ModifyRabbitMQServerlessInstanceRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ModifyRabbitMQServerlessInstanceRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ModifyRabbitMQServerlessInstanceRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRabbitMQServerlessInstanceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRabbitMQServerlessInstanceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool ModifyRabbitMQServerlessInstanceRequest::GetTraceFlag() const
{
    return m_traceFlag;
}

void ModifyRabbitMQServerlessInstanceRequest::SetTraceFlag(const bool& _traceFlag)
{
    m_traceFlag = _traceFlag;
    m_traceFlagHasBeenSet = true;
}

bool ModifyRabbitMQServerlessInstanceRequest::TraceFlagHasBeenSet() const
{
    return m_traceFlagHasBeenSet;
}

double ModifyRabbitMQServerlessInstanceRequest::GetSendReceiveRatio() const
{
    return m_sendReceiveRatio;
}

void ModifyRabbitMQServerlessInstanceRequest::SetSendReceiveRatio(const double& _sendReceiveRatio)
{
    m_sendReceiveRatio = _sendReceiveRatio;
    m_sendReceiveRatioHasBeenSet = true;
}

bool ModifyRabbitMQServerlessInstanceRequest::SendReceiveRatioHasBeenSet() const
{
    return m_sendReceiveRatioHasBeenSet;
}

bool ModifyRabbitMQServerlessInstanceRequest::GetDeleteAllTags() const
{
    return m_deleteAllTags;
}

void ModifyRabbitMQServerlessInstanceRequest::SetDeleteAllTags(const bool& _deleteAllTags)
{
    m_deleteAllTags = _deleteAllTags;
    m_deleteAllTagsHasBeenSet = true;
}

bool ModifyRabbitMQServerlessInstanceRequest::DeleteAllTagsHasBeenSet() const
{
    return m_deleteAllTagsHasBeenSet;
}

vector<RabbitMQServerlessTag> ModifyRabbitMQServerlessInstanceRequest::GetInstanceTags() const
{
    return m_instanceTags;
}

void ModifyRabbitMQServerlessInstanceRequest::SetInstanceTags(const vector<RabbitMQServerlessTag>& _instanceTags)
{
    m_instanceTags = _instanceTags;
    m_instanceTagsHasBeenSet = true;
}

bool ModifyRabbitMQServerlessInstanceRequest::InstanceTagsHasBeenSet() const
{
    return m_instanceTagsHasBeenSet;
}


