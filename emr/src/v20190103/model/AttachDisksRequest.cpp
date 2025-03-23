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

#include <tencentcloud/emr/v20190103/model/AttachDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AttachDisksRequest::AttachDisksRequest() :
    m_instanceIdHasBeenSet(false),
    m_diskIdsHasBeenSet(false),
    m_alignTypeHasBeenSet(false),
    m_cvmInstanceIdsHasBeenSet(false),
    m_createDiskHasBeenSet(false),
    m_diskSpecHasBeenSet(false),
    m_deleteWithInstanceHasBeenSet(false),
    m_selectiveConfServicesHasBeenSet(false)
{
}

string AttachDisksRequest::ToJsonString() const
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

    if (m_diskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_diskIds.begin(); itr != m_diskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alignTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlignType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alignType.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cvmInstanceIds.begin(); itr != m_cvmInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createDisk, allocator);
    }

    if (m_diskSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deleteWithInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteWithInstance, allocator);
    }

    if (m_selectiveConfServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectiveConfServices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selectiveConfServices.begin(); itr != m_selectiveConfServices.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AttachDisksRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AttachDisksRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AttachDisksRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> AttachDisksRequest::GetDiskIds() const
{
    return m_diskIds;
}

void AttachDisksRequest::SetDiskIds(const vector<string>& _diskIds)
{
    m_diskIds = _diskIds;
    m_diskIdsHasBeenSet = true;
}

bool AttachDisksRequest::DiskIdsHasBeenSet() const
{
    return m_diskIdsHasBeenSet;
}

string AttachDisksRequest::GetAlignType() const
{
    return m_alignType;
}

void AttachDisksRequest::SetAlignType(const string& _alignType)
{
    m_alignType = _alignType;
    m_alignTypeHasBeenSet = true;
}

bool AttachDisksRequest::AlignTypeHasBeenSet() const
{
    return m_alignTypeHasBeenSet;
}

vector<string> AttachDisksRequest::GetCvmInstanceIds() const
{
    return m_cvmInstanceIds;
}

void AttachDisksRequest::SetCvmInstanceIds(const vector<string>& _cvmInstanceIds)
{
    m_cvmInstanceIds = _cvmInstanceIds;
    m_cvmInstanceIdsHasBeenSet = true;
}

bool AttachDisksRequest::CvmInstanceIdsHasBeenSet() const
{
    return m_cvmInstanceIdsHasBeenSet;
}

bool AttachDisksRequest::GetCreateDisk() const
{
    return m_createDisk;
}

void AttachDisksRequest::SetCreateDisk(const bool& _createDisk)
{
    m_createDisk = _createDisk;
    m_createDiskHasBeenSet = true;
}

bool AttachDisksRequest::CreateDiskHasBeenSet() const
{
    return m_createDiskHasBeenSet;
}

NodeSpecDiskV2 AttachDisksRequest::GetDiskSpec() const
{
    return m_diskSpec;
}

void AttachDisksRequest::SetDiskSpec(const NodeSpecDiskV2& _diskSpec)
{
    m_diskSpec = _diskSpec;
    m_diskSpecHasBeenSet = true;
}

bool AttachDisksRequest::DiskSpecHasBeenSet() const
{
    return m_diskSpecHasBeenSet;
}

bool AttachDisksRequest::GetDeleteWithInstance() const
{
    return m_deleteWithInstance;
}

void AttachDisksRequest::SetDeleteWithInstance(const bool& _deleteWithInstance)
{
    m_deleteWithInstance = _deleteWithInstance;
    m_deleteWithInstanceHasBeenSet = true;
}

bool AttachDisksRequest::DeleteWithInstanceHasBeenSet() const
{
    return m_deleteWithInstanceHasBeenSet;
}

vector<string> AttachDisksRequest::GetSelectiveConfServices() const
{
    return m_selectiveConfServices;
}

void AttachDisksRequest::SetSelectiveConfServices(const vector<string>& _selectiveConfServices)
{
    m_selectiveConfServices = _selectiveConfServices;
    m_selectiveConfServicesHasBeenSet = true;
}

bool AttachDisksRequest::SelectiveConfServicesHasBeenSet() const
{
    return m_selectiveConfServicesHasBeenSet;
}


