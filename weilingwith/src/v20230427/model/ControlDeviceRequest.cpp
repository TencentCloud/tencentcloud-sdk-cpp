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

#include <tencentcloud/weilingwith/v20230427/model/ControlDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ControlDeviceRequest::ControlDeviceRequest() :
    m_workspaceIdHasBeenSet(false),
    m_wIDSetHasBeenSet(false),
    m_controlDataHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_isSynchronizedHasBeenSet(false)
{
}

string ControlDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_wIDSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WIDSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wIDSet.begin(); itr != m_wIDSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_controlDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_controlData.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_isSynchronizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSynchronized";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSynchronized, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ControlDeviceRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ControlDeviceRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ControlDeviceRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

vector<string> ControlDeviceRequest::GetWIDSet() const
{
    return m_wIDSet;
}

void ControlDeviceRequest::SetWIDSet(const vector<string>& _wIDSet)
{
    m_wIDSet = _wIDSet;
    m_wIDSetHasBeenSet = true;
}

bool ControlDeviceRequest::WIDSetHasBeenSet() const
{
    return m_wIDSetHasBeenSet;
}

string ControlDeviceRequest::GetControlData() const
{
    return m_controlData;
}

void ControlDeviceRequest::SetControlData(const string& _controlData)
{
    m_controlData = _controlData;
    m_controlDataHasBeenSet = true;
}

bool ControlDeviceRequest::ControlDataHasBeenSet() const
{
    return m_controlDataHasBeenSet;
}

string ControlDeviceRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void ControlDeviceRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool ControlDeviceRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

bool ControlDeviceRequest::GetIsSynchronized() const
{
    return m_isSynchronized;
}

void ControlDeviceRequest::SetIsSynchronized(const bool& _isSynchronized)
{
    m_isSynchronized = _isSynchronized;
    m_isSynchronizedHasBeenSet = true;
}

bool ControlDeviceRequest::IsSynchronizedHasBeenSet() const
{
    return m_isSynchronizedHasBeenSet;
}


