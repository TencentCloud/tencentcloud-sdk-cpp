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

#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

WorkspaceInfo::WorkspaceInfo() :
    m_workspaceIdHasBeenSet(false),
    m_spaceKeyHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.WorkspaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = value["WorkspaceId"].GetInt64();
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceKey") && !value["SpaceKey"].IsNull())
    {
        if (!value["SpaceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceInfo.SpaceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceKey = string(value["SpaceKey"].GetString());
        m_spaceKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_spaceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceKey.c_str(), allocator).Move(), allocator);
    }

}


int64_t WorkspaceInfo::GetWorkspaceId() const
{
    return m_workspaceId;
}

void WorkspaceInfo::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool WorkspaceInfo::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string WorkspaceInfo::GetSpaceKey() const
{
    return m_spaceKey;
}

void WorkspaceInfo::SetSpaceKey(const string& _spaceKey)
{
    m_spaceKey = _spaceKey;
    m_spaceKeyHasBeenSet = true;
}

bool WorkspaceInfo::SpaceKeyHasBeenSet() const
{
    return m_spaceKeyHasBeenSet;
}

