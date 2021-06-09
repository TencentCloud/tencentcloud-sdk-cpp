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

#include <tencentcloud/cdb/v20170320/model/ModifyNameOrDescByDpIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyNameOrDescByDpIdRequest::ModifyNameOrDescByDpIdRequest() :
    m_deployGroupIdHasBeenSet(false),
    m_deployGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyNameOrDescByDpIdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployGroupName.c_str(), allocator).Move(), allocator);
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


string ModifyNameOrDescByDpIdRequest::GetDeployGroupId() const
{
    return m_deployGroupId;
}

void ModifyNameOrDescByDpIdRequest::SetDeployGroupId(const string& _deployGroupId)
{
    m_deployGroupId = _deployGroupId;
    m_deployGroupIdHasBeenSet = true;
}

bool ModifyNameOrDescByDpIdRequest::DeployGroupIdHasBeenSet() const
{
    return m_deployGroupIdHasBeenSet;
}

string ModifyNameOrDescByDpIdRequest::GetDeployGroupName() const
{
    return m_deployGroupName;
}

void ModifyNameOrDescByDpIdRequest::SetDeployGroupName(const string& _deployGroupName)
{
    m_deployGroupName = _deployGroupName;
    m_deployGroupNameHasBeenSet = true;
}

bool ModifyNameOrDescByDpIdRequest::DeployGroupNameHasBeenSet() const
{
    return m_deployGroupNameHasBeenSet;
}

string ModifyNameOrDescByDpIdRequest::GetDescription() const
{
    return m_description;
}

void ModifyNameOrDescByDpIdRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyNameOrDescByDpIdRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


