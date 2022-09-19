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

#include <tencentcloud/cloudstudio/v20210524/model/CreateCustomizeTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

CreateCustomizeTemplatesRequest::CreateCustomizeTemplatesRequest() :
    m_cloudStudioSessionTeamHasBeenSet(false),
    m_userDefinedTemplateParamsHasBeenSet(false)
{
}

string CreateCustomizeTemplatesRequest::ToJsonString() const
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

    if (m_userDefinedTemplateParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefinedTemplateParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userDefinedTemplateParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCustomizeTemplatesRequest::GetCloudStudioSessionTeam() const
{
    return m_cloudStudioSessionTeam;
}

void CreateCustomizeTemplatesRequest::SetCloudStudioSessionTeam(const string& _cloudStudioSessionTeam)
{
    m_cloudStudioSessionTeam = _cloudStudioSessionTeam;
    m_cloudStudioSessionTeamHasBeenSet = true;
}

bool CreateCustomizeTemplatesRequest::CloudStudioSessionTeamHasBeenSet() const
{
    return m_cloudStudioSessionTeamHasBeenSet;
}

UserDefinedTemplateParams CreateCustomizeTemplatesRequest::GetUserDefinedTemplateParams() const
{
    return m_userDefinedTemplateParams;
}

void CreateCustomizeTemplatesRequest::SetUserDefinedTemplateParams(const UserDefinedTemplateParams& _userDefinedTemplateParams)
{
    m_userDefinedTemplateParams = _userDefinedTemplateParams;
    m_userDefinedTemplateParamsHasBeenSet = true;
}

bool CreateCustomizeTemplatesRequest::UserDefinedTemplateParamsHasBeenSet() const
{
    return m_userDefinedTemplateParamsHasBeenSet;
}


