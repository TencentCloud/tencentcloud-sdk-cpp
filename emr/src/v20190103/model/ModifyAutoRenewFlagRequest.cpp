/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/emr/v20190103/model/ModifyAutoRenewFlagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyAutoRenewFlagRequest::ModifyAutoRenewFlagRequest() :
    m_instanceIdHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_computeResourceIdHasBeenSet(false)
{
}

string ModifyAutoRenewFlagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_computeResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_computeResourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAutoRenewFlagRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAutoRenewFlagRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAutoRenewFlagRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ModifyAutoRenewFlagRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void ModifyAutoRenewFlagRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool ModifyAutoRenewFlagRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string ModifyAutoRenewFlagRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void ModifyAutoRenewFlagRequest::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool ModifyAutoRenewFlagRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string ModifyAutoRenewFlagRequest::GetComputeResourceId() const
{
    return m_computeResourceId;
}

void ModifyAutoRenewFlagRequest::SetComputeResourceId(const string& _computeResourceId)
{
    m_computeResourceId = _computeResourceId;
    m_computeResourceIdHasBeenSet = true;
}

bool ModifyAutoRenewFlagRequest::ComputeResourceIdHasBeenSet() const
{
    return m_computeResourceIdHasBeenSet;
}


