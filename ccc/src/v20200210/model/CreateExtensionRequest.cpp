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

#include <tencentcloud/ccc/v20200210/model/CreateExtensionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateExtensionRequest::CreateExtensionRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_extensionIdHasBeenSet(false),
    m_extensionNameHasBeenSet(false),
    m_skillGroupIdsHasBeenSet(false),
    m_relationHasBeenSet(false)
{
}

string CreateExtensionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_extensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extensionName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skillGroupIds.begin(); itr != m_skillGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_relationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_relation.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateExtensionRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateExtensionRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateExtensionRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateExtensionRequest::GetExtensionId() const
{
    return m_extensionId;
}

void CreateExtensionRequest::SetExtensionId(const string& _extensionId)
{
    m_extensionId = _extensionId;
    m_extensionIdHasBeenSet = true;
}

bool CreateExtensionRequest::ExtensionIdHasBeenSet() const
{
    return m_extensionIdHasBeenSet;
}

string CreateExtensionRequest::GetExtensionName() const
{
    return m_extensionName;
}

void CreateExtensionRequest::SetExtensionName(const string& _extensionName)
{
    m_extensionName = _extensionName;
    m_extensionNameHasBeenSet = true;
}

bool CreateExtensionRequest::ExtensionNameHasBeenSet() const
{
    return m_extensionNameHasBeenSet;
}

vector<uint64_t> CreateExtensionRequest::GetSkillGroupIds() const
{
    return m_skillGroupIds;
}

void CreateExtensionRequest::SetSkillGroupIds(const vector<uint64_t>& _skillGroupIds)
{
    m_skillGroupIds = _skillGroupIds;
    m_skillGroupIdsHasBeenSet = true;
}

bool CreateExtensionRequest::SkillGroupIdsHasBeenSet() const
{
    return m_skillGroupIdsHasBeenSet;
}

string CreateExtensionRequest::GetRelation() const
{
    return m_relation;
}

void CreateExtensionRequest::SetRelation(const string& _relation)
{
    m_relation = _relation;
    m_relationHasBeenSet = true;
}

bool CreateExtensionRequest::RelationHasBeenSet() const
{
    return m_relationHasBeenSet;
}


