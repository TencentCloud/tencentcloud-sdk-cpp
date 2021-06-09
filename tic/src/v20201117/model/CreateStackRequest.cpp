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

#include <tencentcloud/tic/v20201117/model/CreateStackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tic::V20201117::Model;
using namespace std;

CreateStackRequest::CreateStackRequest() :
    m_stackNameHasBeenSet(false),
    m_stackRegionHasBeenSet(false),
    m_templateUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateStackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_stackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StackName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stackName.c_str(), allocator).Move(), allocator);
    }

    if (m_stackRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StackRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stackRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_templateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateUrl.c_str(), allocator).Move(), allocator);
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


string CreateStackRequest::GetStackName() const
{
    return m_stackName;
}

void CreateStackRequest::SetStackName(const string& _stackName)
{
    m_stackName = _stackName;
    m_stackNameHasBeenSet = true;
}

bool CreateStackRequest::StackNameHasBeenSet() const
{
    return m_stackNameHasBeenSet;
}

string CreateStackRequest::GetStackRegion() const
{
    return m_stackRegion;
}

void CreateStackRequest::SetStackRegion(const string& _stackRegion)
{
    m_stackRegion = _stackRegion;
    m_stackRegionHasBeenSet = true;
}

bool CreateStackRequest::StackRegionHasBeenSet() const
{
    return m_stackRegionHasBeenSet;
}

string CreateStackRequest::GetTemplateUrl() const
{
    return m_templateUrl;
}

void CreateStackRequest::SetTemplateUrl(const string& _templateUrl)
{
    m_templateUrl = _templateUrl;
    m_templateUrlHasBeenSet = true;
}

bool CreateStackRequest::TemplateUrlHasBeenSet() const
{
    return m_templateUrlHasBeenSet;
}

string CreateStackRequest::GetDescription() const
{
    return m_description;
}

void CreateStackRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateStackRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


