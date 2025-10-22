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

#include <tencentcloud/lowcode/v20210108/model/DeployAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DeployAppRequest::DeployAppRequest() :
    m_envIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_buildTypeHasBeenSet(false),
    m_subAppIdsHasBeenSet(false)
{
}

string DeployAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_buildTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buildType.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subAppIds.begin(); itr != m_subAppIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployAppRequest::GetEnvId() const
{
    return m_envId;
}

void DeployAppRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DeployAppRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DeployAppRequest::GetId() const
{
    return m_id;
}

void DeployAppRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeployAppRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DeployAppRequest::GetMode() const
{
    return m_mode;
}

void DeployAppRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DeployAppRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DeployAppRequest::GetBuildType() const
{
    return m_buildType;
}

void DeployAppRequest::SetBuildType(const string& _buildType)
{
    m_buildType = _buildType;
    m_buildTypeHasBeenSet = true;
}

bool DeployAppRequest::BuildTypeHasBeenSet() const
{
    return m_buildTypeHasBeenSet;
}

vector<string> DeployAppRequest::GetSubAppIds() const
{
    return m_subAppIds;
}

void DeployAppRequest::SetSubAppIds(const vector<string>& _subAppIds)
{
    m_subAppIds = _subAppIds;
    m_subAppIdsHasBeenSet = true;
}

bool DeployAppRequest::SubAppIdsHasBeenSet() const
{
    return m_subAppIdsHasBeenSet;
}


