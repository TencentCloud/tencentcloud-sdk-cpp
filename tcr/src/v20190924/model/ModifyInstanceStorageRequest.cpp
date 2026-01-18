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

#include <tencentcloud/tcr/v20190924/model/ModifyInstanceStorageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ModifyInstanceStorageRequest::ModifyInstanceStorageRequest() :
    m_registryIdHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_targetStorageNameHasBeenSet(false)
{
}

string ModifyInstanceStorageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetStorageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetStorageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetStorageName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceStorageRequest::GetRegistryId() const
{
    return m_registryId;
}

void ModifyInstanceStorageRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ModifyInstanceStorageRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ModifyInstanceStorageRequest::GetTargetRegion() const
{
    return m_targetRegion;
}

void ModifyInstanceStorageRequest::SetTargetRegion(const string& _targetRegion)
{
    m_targetRegion = _targetRegion;
    m_targetRegionHasBeenSet = true;
}

bool ModifyInstanceStorageRequest::TargetRegionHasBeenSet() const
{
    return m_targetRegionHasBeenSet;
}

string ModifyInstanceStorageRequest::GetTargetStorageName() const
{
    return m_targetStorageName;
}

void ModifyInstanceStorageRequest::SetTargetStorageName(const string& _targetStorageName)
{
    m_targetStorageName = _targetStorageName;
    m_targetStorageNameHasBeenSet = true;
}

bool ModifyInstanceStorageRequest::TargetStorageNameHasBeenSet() const
{
    return m_targetStorageNameHasBeenSet;
}


