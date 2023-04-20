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

#include <tencentcloud/lighthouse/v20200324/model/CreateBlueprintRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

CreateBlueprintRequest::CreateBlueprintRequest() :
    m_blueprintNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_forcePowerOffHasBeenSet(false)
{
}

string CreateBlueprintRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_blueprintNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blueprintName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_forcePowerOffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForcePowerOff";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forcePowerOff, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBlueprintRequest::GetBlueprintName() const
{
    return m_blueprintName;
}

void CreateBlueprintRequest::SetBlueprintName(const string& _blueprintName)
{
    m_blueprintName = _blueprintName;
    m_blueprintNameHasBeenSet = true;
}

bool CreateBlueprintRequest::BlueprintNameHasBeenSet() const
{
    return m_blueprintNameHasBeenSet;
}

string CreateBlueprintRequest::GetDescription() const
{
    return m_description;
}

void CreateBlueprintRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateBlueprintRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateBlueprintRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateBlueprintRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateBlueprintRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool CreateBlueprintRequest::GetForcePowerOff() const
{
    return m_forcePowerOff;
}

void CreateBlueprintRequest::SetForcePowerOff(const bool& _forcePowerOff)
{
    m_forcePowerOff = _forcePowerOff;
    m_forcePowerOffHasBeenSet = true;
}

bool CreateBlueprintRequest::ForcePowerOffHasBeenSet() const
{
    return m_forcePowerOffHasBeenSet;
}


