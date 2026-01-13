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

#include <tencentcloud/tdmq/v20200217/model/ModifyRabbitMQVipInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyRabbitMQVipInstanceRequest::ModifyRabbitMQVipInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_enableDeletionProtectionHasBeenSet(false),
    m_removeAllTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_enableRiskWarningHasBeenSet(false)
{
}

string ModifyRabbitMQVipInstanceRequest::ToJsonString() const
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

    if (m_enableDeletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeletionProtection, allocator);
    }

    if (m_removeAllTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveAllTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeAllTags, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enableRiskWarningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRiskWarning";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRiskWarning, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRabbitMQVipInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyRabbitMQVipInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyRabbitMQVipInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyRabbitMQVipInstanceRequest::GetClusterName() const
{
    return m_clusterName;
}

void ModifyRabbitMQVipInstanceRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ModifyRabbitMQVipInstanceRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ModifyRabbitMQVipInstanceRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRabbitMQVipInstanceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRabbitMQVipInstanceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool ModifyRabbitMQVipInstanceRequest::GetEnableDeletionProtection() const
{
    return m_enableDeletionProtection;
}

void ModifyRabbitMQVipInstanceRequest::SetEnableDeletionProtection(const bool& _enableDeletionProtection)
{
    m_enableDeletionProtection = _enableDeletionProtection;
    m_enableDeletionProtectionHasBeenSet = true;
}

bool ModifyRabbitMQVipInstanceRequest::EnableDeletionProtectionHasBeenSet() const
{
    return m_enableDeletionProtectionHasBeenSet;
}

bool ModifyRabbitMQVipInstanceRequest::GetRemoveAllTags() const
{
    return m_removeAllTags;
}

void ModifyRabbitMQVipInstanceRequest::SetRemoveAllTags(const bool& _removeAllTags)
{
    m_removeAllTags = _removeAllTags;
    m_removeAllTagsHasBeenSet = true;
}

bool ModifyRabbitMQVipInstanceRequest::RemoveAllTagsHasBeenSet() const
{
    return m_removeAllTagsHasBeenSet;
}

vector<Tag> ModifyRabbitMQVipInstanceRequest::GetTags() const
{
    return m_tags;
}

void ModifyRabbitMQVipInstanceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyRabbitMQVipInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool ModifyRabbitMQVipInstanceRequest::GetEnableRiskWarning() const
{
    return m_enableRiskWarning;
}

void ModifyRabbitMQVipInstanceRequest::SetEnableRiskWarning(const bool& _enableRiskWarning)
{
    m_enableRiskWarning = _enableRiskWarning;
    m_enableRiskWarningHasBeenSet = true;
}

bool ModifyRabbitMQVipInstanceRequest::EnableRiskWarningHasBeenSet() const
{
    return m_enableRiskWarningHasBeenSet;
}


