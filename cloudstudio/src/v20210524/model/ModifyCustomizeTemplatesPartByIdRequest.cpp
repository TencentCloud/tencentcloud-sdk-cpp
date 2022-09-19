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

#include <tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplatesPartByIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

ModifyCustomizeTemplatesPartByIdRequest::ModifyCustomizeTemplatesPartByIdRequest() :
    m_cloudStudioSessionTeamHasBeenSet(false),
    m_idHasBeenSet(false),
    m_userDefinedTemplatePatchedParamsHasBeenSet(false)
{
}

string ModifyCustomizeTemplatesPartByIdRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_userDefinedTemplatePatchedParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefinedTemplatePatchedParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userDefinedTemplatePatchedParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCustomizeTemplatesPartByIdRequest::GetCloudStudioSessionTeam() const
{
    return m_cloudStudioSessionTeam;
}

void ModifyCustomizeTemplatesPartByIdRequest::SetCloudStudioSessionTeam(const string& _cloudStudioSessionTeam)
{
    m_cloudStudioSessionTeam = _cloudStudioSessionTeam;
    m_cloudStudioSessionTeamHasBeenSet = true;
}

bool ModifyCustomizeTemplatesPartByIdRequest::CloudStudioSessionTeamHasBeenSet() const
{
    return m_cloudStudioSessionTeamHasBeenSet;
}

int64_t ModifyCustomizeTemplatesPartByIdRequest::GetId() const
{
    return m_id;
}

void ModifyCustomizeTemplatesPartByIdRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyCustomizeTemplatesPartByIdRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

UserDefinedTemplatePatchedParams ModifyCustomizeTemplatesPartByIdRequest::GetUserDefinedTemplatePatchedParams() const
{
    return m_userDefinedTemplatePatchedParams;
}

void ModifyCustomizeTemplatesPartByIdRequest::SetUserDefinedTemplatePatchedParams(const UserDefinedTemplatePatchedParams& _userDefinedTemplatePatchedParams)
{
    m_userDefinedTemplatePatchedParams = _userDefinedTemplatePatchedParams;
    m_userDefinedTemplatePatchedParamsHasBeenSet = true;
}

bool ModifyCustomizeTemplatesPartByIdRequest::UserDefinedTemplatePatchedParamsHasBeenSet() const
{
    return m_userDefinedTemplatePatchedParamsHasBeenSet;
}


