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

#include <tencentcloud/mna/v20210119/model/ModifyDeviceAccessRegionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

ModifyDeviceAccessRegionsRequest::ModifyDeviceAccessRegionsRequest() :
    m_deviceIdsHasBeenSet(false),
    m_allowedRegionsHasBeenSet(false)
{
}

string ModifyDeviceAccessRegionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceIds.begin(); itr != m_deviceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowedRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedRegions.begin(); itr != m_allowedRegions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDeviceAccessRegionsRequest::GetDeviceIds() const
{
    return m_deviceIds;
}

void ModifyDeviceAccessRegionsRequest::SetDeviceIds(const vector<string>& _deviceIds)
{
    m_deviceIds = _deviceIds;
    m_deviceIdsHasBeenSet = true;
}

bool ModifyDeviceAccessRegionsRequest::DeviceIdsHasBeenSet() const
{
    return m_deviceIdsHasBeenSet;
}

vector<string> ModifyDeviceAccessRegionsRequest::GetAllowedRegions() const
{
    return m_allowedRegions;
}

void ModifyDeviceAccessRegionsRequest::SetAllowedRegions(const vector<string>& _allowedRegions)
{
    m_allowedRegions = _allowedRegions;
    m_allowedRegionsHasBeenSet = true;
}

bool ModifyDeviceAccessRegionsRequest::AllowedRegionsHasBeenSet() const
{
    return m_allowedRegionsHasBeenSet;
}


