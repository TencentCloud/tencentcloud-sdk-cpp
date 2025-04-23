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

#include <tencentcloud/mps/v20190612/model/CreateLiveRecordTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateLiveRecordTemplateRequest::CreateLiveRecordTemplateRequest() :
    m_hLSConfigureHasBeenSet(false),
    m_mP4ConfigureHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateLiveRecordTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_hLSConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HLSConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hLSConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mP4ConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MP4Configure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mP4Configure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


HLSConfigureInfo CreateLiveRecordTemplateRequest::GetHLSConfigure() const
{
    return m_hLSConfigure;
}

void CreateLiveRecordTemplateRequest::SetHLSConfigure(const HLSConfigureInfo& _hLSConfigure)
{
    m_hLSConfigure = _hLSConfigure;
    m_hLSConfigureHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::HLSConfigureHasBeenSet() const
{
    return m_hLSConfigureHasBeenSet;
}

MP4ConfigureInfo CreateLiveRecordTemplateRequest::GetMP4Configure() const
{
    return m_mP4Configure;
}

void CreateLiveRecordTemplateRequest::SetMP4Configure(const MP4ConfigureInfo& _mP4Configure)
{
    m_mP4Configure = _mP4Configure;
    m_mP4ConfigureHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::MP4ConfigureHasBeenSet() const
{
    return m_mP4ConfigureHasBeenSet;
}

string CreateLiveRecordTemplateRequest::GetName() const
{
    return m_name;
}

void CreateLiveRecordTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateLiveRecordTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateLiveRecordTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateLiveRecordTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


