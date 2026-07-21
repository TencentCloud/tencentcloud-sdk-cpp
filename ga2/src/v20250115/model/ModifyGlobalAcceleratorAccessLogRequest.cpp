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

#include <tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorAccessLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ModifyGlobalAcceleratorAccessLogRequest::ModifyGlobalAcceleratorAccessLogRequest() :
    m_logPushTaskIdHasBeenSet(false),
    m_globalAcceleratorIdHasBeenSet(false),
    m_cloudLogIdHasBeenSet(false),
    m_cloudLogSetIdHasBeenSet(false),
    m_fieldKeysHasBeenSet(false),
    m_flowLogDescriptionHasBeenSet(false)
{
}

string ModifyGlobalAcceleratorAccessLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logPushTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPushTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logPushTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
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


string ModifyGlobalAcceleratorAccessLogRequest::GetLogPushTaskId() const
{
    return m_logPushTaskId;
}

void ModifyGlobalAcceleratorAccessLogRequest::SetLogPushTaskId(const string& _logPushTaskId)
{
    m_logPushTaskId = _logPushTaskId;
    m_logPushTaskIdHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAccessLogRequest::LogPushTaskIdHasBeenSet() const
{
    return m_logPushTaskIdHasBeenSet;
}

string ModifyGlobalAcceleratorAccessLogRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ModifyGlobalAcceleratorAccessLogRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAccessLogRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ModifyGlobalAcceleratorAccessLogRequest::GetCloudLogId() const
{
    return m_cloudLogId;
}

void ModifyGlobalAcceleratorAccessLogRequest::SetCloudLogId(const string& _cloudLogId)
{
    m_cloudLogId = _cloudLogId;
    m_cloudLogIdHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAccessLogRequest::CloudLogIdHasBeenSet() const
{
    return m_cloudLogIdHasBeenSet;
}

string ModifyGlobalAcceleratorAccessLogRequest::GetCloudLogSetId() const
{
    return m_cloudLogSetId;
}

void ModifyGlobalAcceleratorAccessLogRequest::SetCloudLogSetId(const string& _cloudLogSetId)
{
    m_cloudLogSetId = _cloudLogSetId;
    m_cloudLogSetIdHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAccessLogRequest::CloudLogSetIdHasBeenSet() const
{
    return m_cloudLogSetIdHasBeenSet;
}

vector<string> ModifyGlobalAcceleratorAccessLogRequest::GetFieldKeys() const
{
    return m_fieldKeys;
}

void ModifyGlobalAcceleratorAccessLogRequest::SetFieldKeys(const vector<string>& _fieldKeys)
{
    m_fieldKeys = _fieldKeys;
    m_fieldKeysHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAccessLogRequest::FieldKeysHasBeenSet() const
{
    return m_fieldKeysHasBeenSet;
}

string ModifyGlobalAcceleratorAccessLogRequest::GetFlowLogDescription() const
{
    return m_flowLogDescription;
}

void ModifyGlobalAcceleratorAccessLogRequest::SetFlowLogDescription(const string& _flowLogDescription)
{
    m_flowLogDescription = _flowLogDescription;
    m_flowLogDescriptionHasBeenSet = true;
}

bool ModifyGlobalAcceleratorAccessLogRequest::FlowLogDescriptionHasBeenSet() const
{
    return m_flowLogDescriptionHasBeenSet;
}


