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

#include <tencentcloud/tag/v20180813/model/AddProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

AddProjectRequest::AddProjectRequest() :
    m_projectNameHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

string AddProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddProjectRequest::GetProjectName() const
{
    return m_projectName;
}

void AddProjectRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AddProjectRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string AddProjectRequest::GetInfo() const
{
    return m_info;
}

void AddProjectRequest::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool AddProjectRequest::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}


