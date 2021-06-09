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

#include <tencentcloud/iotvideo/v20191126/model/CreateStorageServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateStorageServiceRequest::CreateStorageServiceRequest() :
    m_pkgIdHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_orderCountHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_chnNumHasBeenSet(false),
    m_accessIdHasBeenSet(false),
    m_enableTimeHasBeenSet(false)
{
}

string CreateStorageServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_orderCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderCount, allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_chnNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChnNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_chnNum, allocator);
    }

    if (m_accessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStorageServiceRequest::GetPkgId() const
{
    return m_pkgId;
}

void CreateStorageServiceRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool CreateStorageServiceRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string CreateStorageServiceRequest::GetTid() const
{
    return m_tid;
}

void CreateStorageServiceRequest::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool CreateStorageServiceRequest::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

int64_t CreateStorageServiceRequest::GetOrderCount() const
{
    return m_orderCount;
}

void CreateStorageServiceRequest::SetOrderCount(const int64_t& _orderCount)
{
    m_orderCount = _orderCount;
    m_orderCountHasBeenSet = true;
}

bool CreateStorageServiceRequest::OrderCountHasBeenSet() const
{
    return m_orderCountHasBeenSet;
}

string CreateStorageServiceRequest::GetStorageRegion() const
{
    return m_storageRegion;
}

void CreateStorageServiceRequest::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool CreateStorageServiceRequest::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

int64_t CreateStorageServiceRequest::GetChnNum() const
{
    return m_chnNum;
}

void CreateStorageServiceRequest::SetChnNum(const int64_t& _chnNum)
{
    m_chnNum = _chnNum;
    m_chnNumHasBeenSet = true;
}

bool CreateStorageServiceRequest::ChnNumHasBeenSet() const
{
    return m_chnNumHasBeenSet;
}

string CreateStorageServiceRequest::GetAccessId() const
{
    return m_accessId;
}

void CreateStorageServiceRequest::SetAccessId(const string& _accessId)
{
    m_accessId = _accessId;
    m_accessIdHasBeenSet = true;
}

bool CreateStorageServiceRequest::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

int64_t CreateStorageServiceRequest::GetEnableTime() const
{
    return m_enableTime;
}

void CreateStorageServiceRequest::SetEnableTime(const int64_t& _enableTime)
{
    m_enableTime = _enableTime;
    m_enableTimeHasBeenSet = true;
}

bool CreateStorageServiceRequest::EnableTimeHasBeenSet() const
{
    return m_enableTimeHasBeenSet;
}


