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

#include <tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorAccessLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

CreateGlobalAcceleratorAccessLogRequest::CreateGlobalAcceleratorAccessLogRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_endpointGroupIdHasBeenSet(false),
    m_cloudRegionHasBeenSet(false),
    m_cloudLogIdHasBeenSet(false),
    m_cloudLogSetIdHasBeenSet(false),
    m_fieldKeysHasBeenSet(false),
    m_flowLogDescriptionHasBeenSet(false)
{
}

string CreateGlobalAcceleratorAccessLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudLogSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudLogSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldKeys.begin(); itr != m_fieldKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowLogDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLogDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowLogDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateGlobalAcceleratorAccessLogRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void CreateGlobalAcceleratorAccessLogRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool CreateGlobalAcceleratorAccessLogRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string CreateGlobalAcceleratorAccessLogRequest::GetListenerId() const
{
    return m_listenerId;
}

void CreateGlobalAcceleratorAccessLogRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool CreateGlobalAcceleratorAccessLogRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string CreateGlobalAcceleratorAccessLogRequest::GetEndpointGroupId() const
{
    return m_endpointGroupId;
}

void CreateGlobalAcceleratorAccessLogRequest::SetEndpointGroupId(const string& _endpointGroupId)
{
    m_endpointGroupId = _endpointGroupId;
    m_endpointGroupIdHasBeenSet = true;
}

bool CreateGlobalAcceleratorAccessLogRequest::EndpointGroupIdHasBeenSet() const
{
    return m_endpointGroupIdHasBeenSet;
}

string CreateGlobalAcceleratorAccessLogRequest::GetCloudRegion() const
{
    return m_cloudRegion;
}

void CreateGlobalAcceleratorAccessLogRequest::SetCloudRegion(const string& _cloudRegion)
{
    m_cloudRegion = _cloudRegion;
    m_cloudRegionHasBeenSet = true;
}

bool CreateGlobalAcceleratorAccessLogRequest::CloudRegionHasBeenSet() const
{
    return m_cloudRegionHasBeenSet;
}

string CreateGlobalAcceleratorAccessLogRequest::GetCloudLogId() const
{
    return m_cloudLogId;
}

void CreateGlobalAcceleratorAccessLogRequest::SetCloudLogId(const string& _cloudLogId)
{
    m_cloudLogId = _cloudLogId;
    m_cloudLogIdHasBeenSet = true;
}

bool CreateGlobalAcceleratorAccessLogRequest::CloudLogIdHasBeenSet() const
{
    return m_cloudLogIdHasBeenSet;
}

string CreateGlobalAcceleratorAccessLogRequest::GetCloudLogSetId() const
{
    return m_cloudLogSetId;
}

void CreateGlobalAcceleratorAccessLogRequest::SetCloudLogSetId(const string& _cloudLogSetId)
{
    m_cloudLogSetId = _cloudLogSetId;
    m_cloudLogSetIdHasBeenSet = true;
}

bool CreateGlobalAcceleratorAccessLogRequest::CloudLogSetIdHasBeenSet() const
{
    return m_cloudLogSetIdHasBeenSet;
}

vector<string> CreateGlobalAcceleratorAccessLogRequest::GetFieldKeys() const
{
    return m_fieldKeys;
}

void CreateGlobalAcceleratorAccessLogRequest::SetFieldKeys(const vector<string>& _fieldKeys)
{
    m_fieldKeys = _fieldKeys;
    m_fieldKeysHasBeenSet = true;
}

bool CreateGlobalAcceleratorAccessLogRequest::FieldKeysHasBeenSet() const
{
    return m_fieldKeysHasBeenSet;
}

string CreateGlobalAcceleratorAccessLogRequest::GetFlowLogDescription() const
{
    return m_flowLogDescription;
}

void CreateGlobalAcceleratorAccessLogRequest::SetFlowLogDescription(const string& _flowLogDescription)
{
    m_flowLogDescription = _flowLogDescription;
    m_flowLogDescriptionHasBeenSet = true;
}

bool CreateGlobalAcceleratorAccessLogRequest::FlowLogDescriptionHasBeenSet() const
{
    return m_flowLogDescriptionHasBeenSet;
}


