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

#include <tencentcloud/cls/v20201016/model/OpenClawServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

OpenClawServiceResponse::OpenClawServiceResponse() :
    m_logsetIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_metricTopicIdHasBeenSet(false),
    m_metricTopicNameHasBeenSet(false),
    m_machineGroupIdHasBeenSet(false),
    m_machineGroupNameHasBeenSet(false),
    m_appLogConfigIdHasBeenSet(false),
    m_appLogConfigNameHasBeenSet(false),
    m_sessionLogConfigIdHasBeenSet(false),
    m_sessionLogConfigNameHasBeenSet(false)
{
}

CoreInternalOutcome OpenClawServiceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("LogsetId") && !rsp["LogsetId"].IsNull())
    {
        if (!rsp["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(rsp["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (rsp.HasMember("LogsetName") && !rsp["LogsetName"].IsNull())
    {
        if (!rsp["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(rsp["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }

    if (rsp.HasMember("TopicId") && !rsp["TopicId"].IsNull())
    {
        if (!rsp["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(rsp["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (rsp.HasMember("TopicName") && !rsp["TopicName"].IsNull())
    {
        if (!rsp["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(rsp["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (rsp.HasMember("MetricTopicId") && !rsp["MetricTopicId"].IsNull())
    {
        if (!rsp["MetricTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricTopicId = string(rsp["MetricTopicId"].GetString());
        m_metricTopicIdHasBeenSet = true;
    }

    if (rsp.HasMember("MetricTopicName") && !rsp["MetricTopicName"].IsNull())
    {
        if (!rsp["MetricTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricTopicName = string(rsp["MetricTopicName"].GetString());
        m_metricTopicNameHasBeenSet = true;
    }

    if (rsp.HasMember("MachineGroupId") && !rsp["MachineGroupId"].IsNull())
    {
        if (!rsp["MachineGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineGroupId = string(rsp["MachineGroupId"].GetString());
        m_machineGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("MachineGroupName") && !rsp["MachineGroupName"].IsNull())
    {
        if (!rsp["MachineGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineGroupName = string(rsp["MachineGroupName"].GetString());
        m_machineGroupNameHasBeenSet = true;
    }

    if (rsp.HasMember("AppLogConfigId") && !rsp["AppLogConfigId"].IsNull())
    {
        if (!rsp["AppLogConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppLogConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appLogConfigId = string(rsp["AppLogConfigId"].GetString());
        m_appLogConfigIdHasBeenSet = true;
    }

    if (rsp.HasMember("AppLogConfigName") && !rsp["AppLogConfigName"].IsNull())
    {
        if (!rsp["AppLogConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppLogConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appLogConfigName = string(rsp["AppLogConfigName"].GetString());
        m_appLogConfigNameHasBeenSet = true;
    }

    if (rsp.HasMember("SessionLogConfigId") && !rsp["SessionLogConfigId"].IsNull())
    {
        if (!rsp["SessionLogConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionLogConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionLogConfigId = string(rsp["SessionLogConfigId"].GetString());
        m_sessionLogConfigIdHasBeenSet = true;
    }

    if (rsp.HasMember("SessionLogConfigName") && !rsp["SessionLogConfigName"].IsNull())
    {
        if (!rsp["SessionLogConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionLogConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionLogConfigName = string(rsp["SessionLogConfigName"].GetString());
        m_sessionLogConfigNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string OpenClawServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_appLogConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppLogConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appLogConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_appLogConfigNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppLogConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appLogConfigName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionLogConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionLogConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionLogConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionLogConfigNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionLogConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionLogConfigName.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string OpenClawServiceResponse::GetLogsetId() const
{
    return m_logsetId;
}

bool OpenClawServiceResponse::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string OpenClawServiceResponse::GetLogsetName() const
{
    return m_logsetName;
}

bool OpenClawServiceResponse::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string OpenClawServiceResponse::GetTopicId() const
{
    return m_topicId;
}

bool OpenClawServiceResponse::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string OpenClawServiceResponse::GetTopicName() const
{
    return m_topicName;
}

bool OpenClawServiceResponse::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string OpenClawServiceResponse::GetMetricTopicId() const
{
    return m_metricTopicId;
}

bool OpenClawServiceResponse::MetricTopicIdHasBeenSet() const
{
    return m_metricTopicIdHasBeenSet;
}

string OpenClawServiceResponse::GetMetricTopicName() const
{
    return m_metricTopicName;
}

bool OpenClawServiceResponse::MetricTopicNameHasBeenSet() const
{
    return m_metricTopicNameHasBeenSet;
}

string OpenClawServiceResponse::GetMachineGroupId() const
{
    return m_machineGroupId;
}

bool OpenClawServiceResponse::MachineGroupIdHasBeenSet() const
{
    return m_machineGroupIdHasBeenSet;
}

string OpenClawServiceResponse::GetMachineGroupName() const
{
    return m_machineGroupName;
}

bool OpenClawServiceResponse::MachineGroupNameHasBeenSet() const
{
    return m_machineGroupNameHasBeenSet;
}

string OpenClawServiceResponse::GetAppLogConfigId() const
{
    return m_appLogConfigId;
}

bool OpenClawServiceResponse::AppLogConfigIdHasBeenSet() const
{
    return m_appLogConfigIdHasBeenSet;
}

string OpenClawServiceResponse::GetAppLogConfigName() const
{
    return m_appLogConfigName;
}

bool OpenClawServiceResponse::AppLogConfigNameHasBeenSet() const
{
    return m_appLogConfigNameHasBeenSet;
}

string OpenClawServiceResponse::GetSessionLogConfigId() const
{
    return m_sessionLogConfigId;
}

bool OpenClawServiceResponse::SessionLogConfigIdHasBeenSet() const
{
    return m_sessionLogConfigIdHasBeenSet;
}

string OpenClawServiceResponse::GetSessionLogConfigName() const
{
    return m_sessionLogConfigName;
}

bool OpenClawServiceResponse::SessionLogConfigNameHasBeenSet() const
{
    return m_sessionLogConfigNameHasBeenSet;
}


