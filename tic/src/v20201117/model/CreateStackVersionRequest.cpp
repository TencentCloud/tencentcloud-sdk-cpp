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

#include <tencentcloud/tic/v20201117/model/CreateStackVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tic::V20201117::Model;
using namespace std;

CreateStackVersionRequest::CreateStackVersionRequest() :
    m_stackIdHasBeenSet(false),
    m_templateUrlHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateStackVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_stackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stackId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStackVersionRequest::GetStackId() const
{
    return m_stackId;
}

void CreateStackVersionRequest::SetStackId(const string& _stackId)
{
    m_stackId = _stackId;
    m_stackIdHasBeenSet = true;
}

bool CreateStackVersionRequest::StackIdHasBeenSet() const
{
    return m_stackIdHasBeenSet;
}

string CreateStackVersionRequest::GetTemplateUrl() const
{
    return m_templateUrl;
}

void CreateStackVersionRequest::SetTemplateUrl(const string& _templateUrl)
{
    m_templateUrl = _templateUrl;
    m_templateUrlHasBeenSet = true;
}

bool CreateStackVersionRequest::TemplateUrlHasBeenSet() const
{
    return m_templateUrlHasBeenSet;
}

string CreateStackVersionRequest::GetVersionName() const
{
    return m_versionName;
}

void CreateStackVersionRequest::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool CreateStackVersionRequest::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string CreateStackVersionRequest::GetDescription() const
{
    return m_description;
}

void CreateStackVersionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateStackVersionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


