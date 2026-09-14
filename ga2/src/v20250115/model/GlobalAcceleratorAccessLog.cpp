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

#include <tencentcloud/ga2/v20250115/model/GlobalAcceleratorAccessLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

GlobalAcceleratorAccessLog::GlobalAcceleratorAccessLog() :
    m_logPushTaskIdHasBeenSet(false),
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_endpointGroupIdHasBeenSet(false),
    m_flowLogDescriptionHasBeenSet(false),
    m_cloudRegionHasBeenSet(false),
    m_cloudLogIdHasBeenSet(false),
    m_cloudLogSetIdHasBeenSet(false),
    m_fieldKeysHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome GlobalAcceleratorAccessLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogPushTaskId") && !value["LogPushTaskId"].IsNull())
    {
        if (!value["LogPushTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.LogPushTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPushTaskId = string(value["LogPushTaskId"].GetString());
        m_logPushTaskIdHasBeenSet = true;
    }

    if (value.HasMember("GlobalAcceleratorId") && !value["GlobalAcceleratorId"].IsNull())
    {
        if (!value["GlobalAcceleratorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.GlobalAcceleratorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalAcceleratorId = string(value["GlobalAcceleratorId"].GetString());
        m_globalAcceleratorIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("EndpointGroupId") && !value["EndpointGroupId"].IsNull())
    {
        if (!value["EndpointGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.EndpointGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointGroupId = string(value["EndpointGroupId"].GetString());
        m_endpointGroupIdHasBeenSet = true;
    }

    if (value.HasMember("FlowLogDescription") && !value["FlowLogDescription"].IsNull())
    {
        if (!value["FlowLogDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.FlowLogDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowLogDescription = string(value["FlowLogDescription"].GetString());
        m_flowLogDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CloudRegion") && !value["CloudRegion"].IsNull())
    {
        if (!value["CloudRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.CloudRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudRegion = string(value["CloudRegion"].GetString());
        m_cloudRegionHasBeenSet = true;
    }

    if (value.HasMember("CloudLogId") && !value["CloudLogId"].IsNull())
    {
        if (!value["CloudLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.CloudLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudLogId = string(value["CloudLogId"].GetString());
        m_cloudLogIdHasBeenSet = true;
    }

    if (value.HasMember("CloudLogSetId") && !value["CloudLogSetId"].IsNull())
    {
        if (!value["CloudLogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.CloudLogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudLogSetId = string(value["CloudLogSetId"].GetString());
        m_cloudLogSetIdHasBeenSet = true;
    }

    if (value.HasMember("FieldKeys") && !value["FieldKeys"].IsNull())
    {
        if (!value["FieldKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.FieldKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fieldKeys.push_back((*itr).GetString());
        }
        m_fieldKeysHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAccessLog.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlobalAcceleratorAccessLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logPushTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPushTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logPushTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLogDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowLogDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudLogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudLogSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldKeys.begin(); itr != m_fieldKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string GlobalAcceleratorAccessLog::GetLogPushTaskId() const
{
    return m_logPushTaskId;
}

void GlobalAcceleratorAccessLog::SetLogPushTaskId(const string& _logPushTaskId)
{
    m_logPushTaskId = _logPushTaskId;
    m_logPushTaskIdHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::LogPushTaskIdHasBeenSet() const
{
    return m_logPushTaskIdHasBeenSet;
}

string GlobalAcceleratorAccessLog::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void GlobalAcceleratorAccessLog::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string GlobalAcceleratorAccessLog::GetListenerId() const
{
    return m_listenerId;
}

void GlobalAcceleratorAccessLog::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string GlobalAcceleratorAccessLog::GetEndpointGroupId() const
{
    return m_endpointGroupId;
}

void GlobalAcceleratorAccessLog::SetEndpointGroupId(const string& _endpointGroupId)
{
    m_endpointGroupId = _endpointGroupId;
    m_endpointGroupIdHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::EndpointGroupIdHasBeenSet() const
{
    return m_endpointGroupIdHasBeenSet;
}

string GlobalAcceleratorAccessLog::GetFlowLogDescription() const
{
    return m_flowLogDescription;
}

void GlobalAcceleratorAccessLog::SetFlowLogDescription(const string& _flowLogDescription)
{
    m_flowLogDescription = _flowLogDescription;
    m_flowLogDescriptionHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::FlowLogDescriptionHasBeenSet() const
{
    return m_flowLogDescriptionHasBeenSet;
}

string GlobalAcceleratorAccessLog::GetCloudRegion() const
{
    return m_cloudRegion;
}

void GlobalAcceleratorAccessLog::SetCloudRegion(const string& _cloudRegion)
{
    m_cloudRegion = _cloudRegion;
    m_cloudRegionHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::CloudRegionHasBeenSet() const
{
    return m_cloudRegionHasBeenSet;
}

string GlobalAcceleratorAccessLog::GetCloudLogId() const
{
    return m_cloudLogId;
}

void GlobalAcceleratorAccessLog::SetCloudLogId(const string& _cloudLogId)
{
    m_cloudLogId = _cloudLogId;
    m_cloudLogIdHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::CloudLogIdHasBeenSet() const
{
    return m_cloudLogIdHasBeenSet;
}

string GlobalAcceleratorAccessLog::GetCloudLogSetId() const
{
    return m_cloudLogSetId;
}

void GlobalAcceleratorAccessLog::SetCloudLogSetId(const string& _cloudLogSetId)
{
    m_cloudLogSetId = _cloudLogSetId;
    m_cloudLogSetIdHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::CloudLogSetIdHasBeenSet() const
{
    return m_cloudLogSetIdHasBeenSet;
}

vector<string> GlobalAcceleratorAccessLog::GetFieldKeys() const
{
    return m_fieldKeys;
}

void GlobalAcceleratorAccessLog::SetFieldKeys(const vector<string>& _fieldKeys)
{
    m_fieldKeys = _fieldKeys;
    m_fieldKeysHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::FieldKeysHasBeenSet() const
{
    return m_fieldKeysHasBeenSet;
}

string GlobalAcceleratorAccessLog::GetStatus() const
{
    return m_status;
}

void GlobalAcceleratorAccessLog::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GlobalAcceleratorAccessLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

