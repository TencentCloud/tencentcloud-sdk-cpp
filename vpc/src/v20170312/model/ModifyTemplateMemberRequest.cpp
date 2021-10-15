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

#include <tencentcloud/vpc/v20170312/model/ModifyTemplateMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyTemplateMemberRequest::ModifyTemplateMemberRequest() :
    m_templateIdHasBeenSet(false),
    m_originalTemplateMemberHasBeenSet(false),
    m_templateMemberHasBeenSet(false)
{
}

string ModifyTemplateMemberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_originalTemplateMemberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalTemplateMember";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originalTemplateMember.begin(); itr != m_originalTemplateMember.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_templateMemberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateMember";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateMember.begin(); itr != m_templateMember.end(); ++itr, ++i)
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


string ModifyTemplateMemberRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyTemplateMemberRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyTemplateMemberRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<MemberInfo> ModifyTemplateMemberRequest::GetOriginalTemplateMember() const
{
    return m_originalTemplateMember;
}

void ModifyTemplateMemberRequest::SetOriginalTemplateMember(const vector<MemberInfo>& _originalTemplateMember)
{
    m_originalTemplateMember = _originalTemplateMember;
    m_originalTemplateMemberHasBeenSet = true;
}

bool ModifyTemplateMemberRequest::OriginalTemplateMemberHasBeenSet() const
{
    return m_originalTemplateMemberHasBeenSet;
}

vector<MemberInfo> ModifyTemplateMemberRequest::GetTemplateMember() const
{
    return m_templateMember;
}

void ModifyTemplateMemberRequest::SetTemplateMember(const vector<MemberInfo>& _templateMember)
{
    m_templateMember = _templateMember;
    m_templateMemberHasBeenSet = true;
}

bool ModifyTemplateMemberRequest::TemplateMemberHasBeenSet() const
{
    return m_templateMemberHasBeenSet;
}


