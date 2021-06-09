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

#include <tencentcloud/cvm/v20170312/model/ModifyInstancesVpcAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ModifyInstancesVpcAttributeRequest::ModifyInstancesVpcAttributeRequest() :
    m_instanceIdsHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_forceStopHasBeenSet(false),
    m_reserveHostNameHasBeenSet(false)
{
}

string ModifyInstancesVpcAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_virtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_forceStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceStop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceStop, allocator);
    }

    if (m_reserveHostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveHostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reserveHostName, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyInstancesVpcAttributeRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyInstancesVpcAttributeRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyInstancesVpcAttributeRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

VirtualPrivateCloud ModifyInstancesVpcAttributeRequest::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void ModifyInstancesVpcAttributeRequest::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool ModifyInstancesVpcAttributeRequest::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

bool ModifyInstancesVpcAttributeRequest::GetForceStop() const
{
    return m_forceStop;
}

void ModifyInstancesVpcAttributeRequest::SetForceStop(const bool& _forceStop)
{
    m_forceStop = _forceStop;
    m_forceStopHasBeenSet = true;
}

bool ModifyInstancesVpcAttributeRequest::ForceStopHasBeenSet() const
{
    return m_forceStopHasBeenSet;
}

bool ModifyInstancesVpcAttributeRequest::GetReserveHostName() const
{
    return m_reserveHostName;
}

void ModifyInstancesVpcAttributeRequest::SetReserveHostName(const bool& _reserveHostName)
{
    m_reserveHostName = _reserveHostName;
    m_reserveHostNameHasBeenSet = true;
}

bool ModifyInstancesVpcAttributeRequest::ReserveHostNameHasBeenSet() const
{
    return m_reserveHostNameHasBeenSet;
}


