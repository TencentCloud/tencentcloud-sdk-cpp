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

#include <tencentcloud/sts/v20180813/model/AssumeRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sts::V20180813::Model;
using namespace std;

AssumeRoleRequest::AssumeRoleRequest() :
    m_roleArnHasBeenSet(false),
    m_roleSessionNameHasBeenSet(false),
    m_durationSecondsHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string AssumeRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleArn.c_str(), allocator).Move(), allocator);
    }

    if (m_roleSessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleSessionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleSessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durationSeconds, allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
    }

    if (m_externalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssumeRoleRequest::GetRoleArn() const
{
    return m_roleArn;
}

void AssumeRoleRequest::SetRoleArn(const string& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool AssumeRoleRequest::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string AssumeRoleRequest::GetRoleSessionName() const
{
    return m_roleSessionName;
}

void AssumeRoleRequest::SetRoleSessionName(const string& _roleSessionName)
{
    m_roleSessionName = _roleSessionName;
    m_roleSessionNameHasBeenSet = true;
}

bool AssumeRoleRequest::RoleSessionNameHasBeenSet() const
{
    return m_roleSessionNameHasBeenSet;
}

uint64_t AssumeRoleRequest::GetDurationSeconds() const
{
    return m_durationSeconds;
}

void AssumeRoleRequest::SetDurationSeconds(const uint64_t& _durationSeconds)
{
    m_durationSeconds = _durationSeconds;
    m_durationSecondsHasBeenSet = true;
}

bool AssumeRoleRequest::DurationSecondsHasBeenSet() const
{
    return m_durationSecondsHasBeenSet;
}

string AssumeRoleRequest::GetPolicy() const
{
    return m_policy;
}

void AssumeRoleRequest::SetPolicy(const string& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool AssumeRoleRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string AssumeRoleRequest::GetExternalId() const
{
    return m_externalId;
}

void AssumeRoleRequest::SetExternalId(const string& _externalId)
{
    m_externalId = _externalId;
    m_externalIdHasBeenSet = true;
}

bool AssumeRoleRequest::ExternalIdHasBeenSet() const
{
    return m_externalIdHasBeenSet;
}

vector<Tag> AssumeRoleRequest::GetTags() const
{
    return m_tags;
}

void AssumeRoleRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AssumeRoleRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


