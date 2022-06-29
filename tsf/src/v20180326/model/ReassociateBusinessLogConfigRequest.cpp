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

#include <tencentcloud/tsf/v20180326/model/ReassociateBusinessLogConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ReassociateBusinessLogConfigRequest::ReassociateBusinessLogConfigRequest() :
    m_configIdHasBeenSet(false),
    m_newConfigIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string ReassociateBusinessLogConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_newConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReassociateBusinessLogConfigRequest::GetConfigId() const
{
    return m_configId;
}

void ReassociateBusinessLogConfigRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ReassociateBusinessLogConfigRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ReassociateBusinessLogConfigRequest::GetNewConfigId() const
{
    return m_newConfigId;
}

void ReassociateBusinessLogConfigRequest::SetNewConfigId(const string& _newConfigId)
{
    m_newConfigId = _newConfigId;
    m_newConfigIdHasBeenSet = true;
}

bool ReassociateBusinessLogConfigRequest::NewConfigIdHasBeenSet() const
{
    return m_newConfigIdHasBeenSet;
}

string ReassociateBusinessLogConfigRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ReassociateBusinessLogConfigRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ReassociateBusinessLogConfigRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ReassociateBusinessLogConfigRequest::GetGroupId() const
{
    return m_groupId;
}

void ReassociateBusinessLogConfigRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ReassociateBusinessLogConfigRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


