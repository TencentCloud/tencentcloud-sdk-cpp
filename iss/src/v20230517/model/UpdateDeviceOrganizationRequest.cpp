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

#include <tencentcloud/iss/v20230517/model/UpdateDeviceOrganizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateDeviceOrganizationRequest::UpdateDeviceOrganizationRequest() :
    m_deviceIdsHasBeenSet(false),
    m_organizationIdHasBeenSet(false)
{
}

string UpdateDeviceOrganizationRequest::ToJsonString() const
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

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UpdateDeviceOrganizationRequest::GetDeviceIds() const
{
    return m_deviceIds;
}

void UpdateDeviceOrganizationRequest::SetDeviceIds(const vector<string>& _deviceIds)
{
    m_deviceIds = _deviceIds;
    m_deviceIdsHasBeenSet = true;
}

bool UpdateDeviceOrganizationRequest::DeviceIdsHasBeenSet() const
{
    return m_deviceIdsHasBeenSet;
}

string UpdateDeviceOrganizationRequest::GetOrganizationId() const
{
    return m_organizationId;
}

void UpdateDeviceOrganizationRequest::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool UpdateDeviceOrganizationRequest::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}


