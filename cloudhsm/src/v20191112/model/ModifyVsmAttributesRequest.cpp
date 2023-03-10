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

#include <tencentcloud/cloudhsm/v20191112/model/ModifyVsmAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

ModifyVsmAttributesRequest::ModifyVsmAttributesRequest() :
    m_resourceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_sgIdsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_alarmStatusHasBeenSet(false)
{
}

string ModifyVsmAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sgIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sgIds.begin(); itr != m_sgIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVsmAttributesRequest::GetResourceId() const
{
    return m_resourceId;
}

void ModifyVsmAttributesRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ModifyVsmAttributesRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<string> ModifyVsmAttributesRequest::GetType() const
{
    return m_type;
}

void ModifyVsmAttributesRequest::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyVsmAttributesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyVsmAttributesRequest::GetResourceName() const
{
    return m_resourceName;
}

void ModifyVsmAttributesRequest::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ModifyVsmAttributesRequest::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

vector<string> ModifyVsmAttributesRequest::GetSgIds() const
{
    return m_sgIds;
}

void ModifyVsmAttributesRequest::SetSgIds(const vector<string>& _sgIds)
{
    m_sgIds = _sgIds;
    m_sgIdsHasBeenSet = true;
}

bool ModifyVsmAttributesRequest::SgIdsHasBeenSet() const
{
    return m_sgIdsHasBeenSet;
}

string ModifyVsmAttributesRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyVsmAttributesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyVsmAttributesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyVsmAttributesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifyVsmAttributesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifyVsmAttributesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t ModifyVsmAttributesRequest::GetAlarmStatus() const
{
    return m_alarmStatus;
}

void ModifyVsmAttributesRequest::SetAlarmStatus(const int64_t& _alarmStatus)
{
    m_alarmStatus = _alarmStatus;
    m_alarmStatusHasBeenSet = true;
}

bool ModifyVsmAttributesRequest::AlarmStatusHasBeenSet() const
{
    return m_alarmStatusHasBeenSet;
}


