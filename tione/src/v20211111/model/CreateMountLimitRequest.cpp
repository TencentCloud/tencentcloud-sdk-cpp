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

#include <tencentcloud/tione/v20211111/model/CreateMountLimitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateMountLimitRequest::CreateMountLimitRequest() :
    m_typeHasBeenSet(false),
    m_storageIdHasBeenSet(false),
    m_limitMountHasBeenSet(false)
{
}

string CreateMountLimitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_storageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limitMount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMountLimitRequest::GetType() const
{
    return m_type;
}

void CreateMountLimitRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateMountLimitRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateMountLimitRequest::GetStorageId() const
{
    return m_storageId;
}

void CreateMountLimitRequest::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool CreateMountLimitRequest::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

bool CreateMountLimitRequest::GetLimitMount() const
{
    return m_limitMount;
}

void CreateMountLimitRequest::SetLimitMount(const bool& _limitMount)
{
    m_limitMount = _limitMount;
    m_limitMountHasBeenSet = true;
}

bool CreateMountLimitRequest::LimitMountHasBeenSet() const
{
    return m_limitMountHasBeenSet;
}


