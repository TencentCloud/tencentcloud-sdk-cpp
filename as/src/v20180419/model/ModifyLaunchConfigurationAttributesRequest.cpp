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

#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

ModifyLaunchConfigurationAttributesRequest::ModifyLaunchConfigurationAttributesRequest() :
    m_launchConfigurationIdHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_instanceTypesCheckPolicyHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
}

string ModifyLaunchConfigurationAttributesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_launchConfigurationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTypesCheckPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceTypesCheckPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceTypesCheckPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigurationNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaunchConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_launchConfigurationName.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userData.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLaunchConfigurationAttributesRequest::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void ModifyLaunchConfigurationAttributesRequest::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetImageId() const
{
    return m_imageId;
}

void ModifyLaunchConfigurationAttributesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

vector<string> ModifyLaunchConfigurationAttributesRequest::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void ModifyLaunchConfigurationAttributesRequest::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetInstanceTypesCheckPolicy() const
{
    return m_instanceTypesCheckPolicy;
}

void ModifyLaunchConfigurationAttributesRequest::SetInstanceTypesCheckPolicy(const string& _instanceTypesCheckPolicy)
{
    m_instanceTypesCheckPolicy = _instanceTypesCheckPolicy;
    m_instanceTypesCheckPolicyHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::InstanceTypesCheckPolicyHasBeenSet() const
{
    return m_instanceTypesCheckPolicyHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetLaunchConfigurationName() const
{
    return m_launchConfigurationName;
}

void ModifyLaunchConfigurationAttributesRequest::SetLaunchConfigurationName(const string& _launchConfigurationName)
{
    m_launchConfigurationName = _launchConfigurationName;
    m_launchConfigurationNameHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::LaunchConfigurationNameHasBeenSet() const
{
    return m_launchConfigurationNameHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetUserData() const
{
    return m_userData;
}

void ModifyLaunchConfigurationAttributesRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}


