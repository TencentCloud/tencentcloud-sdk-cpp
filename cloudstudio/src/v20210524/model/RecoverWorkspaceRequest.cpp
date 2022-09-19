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

#include <tencentcloud/cloudstudio/v20210524/model/RecoverWorkspaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

RecoverWorkspaceRequest::RecoverWorkspaceRequest() :
    m_cloudStudioSessionTeamHasBeenSet(false),
    m_spaceKeyHasBeenSet(false)
{
}

string RecoverWorkspaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cloudStudioSessionTeamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudStudioSessionTeam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudStudioSessionTeam.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecoverWorkspaceRequest::GetCloudStudioSessionTeam() const
{
    return m_cloudStudioSessionTeam;
}

void RecoverWorkspaceRequest::SetCloudStudioSessionTeam(const string& _cloudStudioSessionTeam)
{
    m_cloudStudioSessionTeam = _cloudStudioSessionTeam;
    m_cloudStudioSessionTeamHasBeenSet = true;
}

bool RecoverWorkspaceRequest::CloudStudioSessionTeamHasBeenSet() const
{
    return m_cloudStudioSessionTeamHasBeenSet;
}

string RecoverWorkspaceRequest::GetSpaceKey() const
{
    return m_spaceKey;
}

void RecoverWorkspaceRequest::SetSpaceKey(const string& _spaceKey)
{
    m_spaceKey = _spaceKey;
    m_spaceKeyHasBeenSet = true;
}

bool RecoverWorkspaceRequest::SpaceKeyHasBeenSet() const
{
    return m_spaceKeyHasBeenSet;
}


