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

#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusStatRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeDeviceStatusStatRequest::DescribeDeviceStatusStatRequest() :
    m_levelHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_spaceCodeSetHasBeenSet(false),
    m_deviceTypeSetHasBeenSet(false)
{
}

string DescribeDeviceStatusStatRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_level, allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceCodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCodeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_spaceCodeSet.begin(); itr != m_spaceCodeSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deviceTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceTypeSet.begin(); itr != m_deviceTypeSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDeviceStatusStatRequest::GetLevel() const
{
    return m_level;
}

void DescribeDeviceStatusStatRequest::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeDeviceStatusStatRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DescribeDeviceStatusStatRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeDeviceStatusStatRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeDeviceStatusStatRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeDeviceStatusStatRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeDeviceStatusStatRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeDeviceStatusStatRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

vector<string> DescribeDeviceStatusStatRequest::GetSpaceCodeSet() const
{
    return m_spaceCodeSet;
}

void DescribeDeviceStatusStatRequest::SetSpaceCodeSet(const vector<string>& _spaceCodeSet)
{
    m_spaceCodeSet = _spaceCodeSet;
    m_spaceCodeSetHasBeenSet = true;
}

bool DescribeDeviceStatusStatRequest::SpaceCodeSetHasBeenSet() const
{
    return m_spaceCodeSetHasBeenSet;
}

vector<string> DescribeDeviceStatusStatRequest::GetDeviceTypeSet() const
{
    return m_deviceTypeSet;
}

void DescribeDeviceStatusStatRequest::SetDeviceTypeSet(const vector<string>& _deviceTypeSet)
{
    m_deviceTypeSet = _deviceTypeSet;
    m_deviceTypeSetHasBeenSet = true;
}

bool DescribeDeviceStatusStatRequest::DeviceTypeSetHasBeenSet() const
{
    return m_deviceTypeSetHasBeenSet;
}


