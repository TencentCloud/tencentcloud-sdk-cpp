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

#include <tencentcloud/waf/v20180125/model/PostCLSFlowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

PostCLSFlowInfo::PostCLSFlowInfo() :
    m_flowIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cLSRegionHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_logsetIDHasBeenSet(false),
    m_logTopicNameHasBeenSet(false),
    m_logTopicIDHasBeenSet(false)
{
}

CoreInternalOutcome PostCLSFlowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostCLSFlowInfo.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostCLSFlowInfo.LogType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logType = value["LogType"].GetInt64();
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostCLSFlowInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CLSRegion") && !value["CLSRegion"].IsNull())
    {
        if (!value["CLSRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCLSFlowInfo.CLSRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLSRegion = string(value["CLSRegion"].GetString());
        m_cLSRegionHasBeenSet = true;
    }

    if (value.HasMember("LogsetName") && !value["LogsetName"].IsNull())
    {
        if (!value["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCLSFlowInfo.LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(value["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }

    if (value.HasMember("LogsetID") && !value["LogsetID"].IsNull())
    {
        if (!value["LogsetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCLSFlowInfo.LogsetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetID = string(value["LogsetID"].GetString());
        m_logsetIDHasBeenSet = true;
    }

    if (value.HasMember("LogTopicName") && !value["LogTopicName"].IsNull())
    {
        if (!value["LogTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCLSFlowInfo.LogTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicName = string(value["LogTopicName"].GetString());
        m_logTopicNameHasBeenSet = true;
    }

    if (value.HasMember("LogTopicID") && !value["LogTopicID"].IsNull())
    {
        if (!value["LogTopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCLSFlowInfo.LogTopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicID = string(value["LogTopicID"].GetString());
        m_logTopicIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PostCLSFlowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cLSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetID.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicID.c_str(), allocator).Move(), allocator);
    }

}


int64_t PostCLSFlowInfo::GetFlowId() const
{
    return m_flowId;
}

void PostCLSFlowInfo::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool PostCLSFlowInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

int64_t PostCLSFlowInfo::GetLogType() const
{
    return m_logType;
}

void PostCLSFlowInfo::SetLogType(const int64_t& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool PostCLSFlowInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

int64_t PostCLSFlowInfo::GetStatus() const
{
    return m_status;
}

void PostCLSFlowInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PostCLSFlowInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PostCLSFlowInfo::GetCLSRegion() const
{
    return m_cLSRegion;
}

void PostCLSFlowInfo::SetCLSRegion(const string& _cLSRegion)
{
    m_cLSRegion = _cLSRegion;
    m_cLSRegionHasBeenSet = true;
}

bool PostCLSFlowInfo::CLSRegionHasBeenSet() const
{
    return m_cLSRegionHasBeenSet;
}

string PostCLSFlowInfo::GetLogsetName() const
{
    return m_logsetName;
}

void PostCLSFlowInfo::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool PostCLSFlowInfo::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string PostCLSFlowInfo::GetLogsetID() const
{
    return m_logsetID;
}

void PostCLSFlowInfo::SetLogsetID(const string& _logsetID)
{
    m_logsetID = _logsetID;
    m_logsetIDHasBeenSet = true;
}

bool PostCLSFlowInfo::LogsetIDHasBeenSet() const
{
    return m_logsetIDHasBeenSet;
}

string PostCLSFlowInfo::GetLogTopicName() const
{
    return m_logTopicName;
}

void PostCLSFlowInfo::SetLogTopicName(const string& _logTopicName)
{
    m_logTopicName = _logTopicName;
    m_logTopicNameHasBeenSet = true;
}

bool PostCLSFlowInfo::LogTopicNameHasBeenSet() const
{
    return m_logTopicNameHasBeenSet;
}

string PostCLSFlowInfo::GetLogTopicID() const
{
    return m_logTopicID;
}

void PostCLSFlowInfo::SetLogTopicID(const string& _logTopicID)
{
    m_logTopicID = _logTopicID;
    m_logTopicIDHasBeenSet = true;
}

bool PostCLSFlowInfo::LogTopicIDHasBeenSet() const
{
    return m_logTopicIDHasBeenSet;
}

