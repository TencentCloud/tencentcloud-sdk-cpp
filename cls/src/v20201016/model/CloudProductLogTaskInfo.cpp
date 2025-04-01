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

#include <tencentcloud/cls/v20201016/model/CloudProductLogTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CloudProductLogTaskInfo::CloudProductLogTaskInfo() :
    m_clsRegionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_extendHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CloudProductLogTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClsRegion") && !value["ClsRegion"].IsNull())
    {
        if (!value["ClsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductLogTaskInfo.ClsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsRegion = string(value["ClsRegion"].GetString());
        m_clsRegionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductLogTaskInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductLogTaskInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductLogTaskInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Extend") && !value["Extend"].IsNull())
    {
        if (!value["Extend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductLogTaskInfo.Extend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extend = string(value["Extend"].GetString());
        m_extendHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductLogTaskInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudProductLogTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudProductLogTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_extendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extend.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string CloudProductLogTaskInfo::GetClsRegion() const
{
    return m_clsRegion;
}

void CloudProductLogTaskInfo::SetClsRegion(const string& _clsRegion)
{
    m_clsRegion = _clsRegion;
    m_clsRegionHasBeenSet = true;
}

bool CloudProductLogTaskInfo::ClsRegionHasBeenSet() const
{
    return m_clsRegionHasBeenSet;
}

string CloudProductLogTaskInfo::GetInstanceId() const
{
    return m_instanceId;
}

void CloudProductLogTaskInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CloudProductLogTaskInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CloudProductLogTaskInfo::GetLogsetId() const
{
    return m_logsetId;
}

void CloudProductLogTaskInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CloudProductLogTaskInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CloudProductLogTaskInfo::GetTopicId() const
{
    return m_topicId;
}

void CloudProductLogTaskInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CloudProductLogTaskInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CloudProductLogTaskInfo::GetExtend() const
{
    return m_extend;
}

void CloudProductLogTaskInfo::SetExtend(const string& _extend)
{
    m_extend = _extend;
    m_extendHasBeenSet = true;
}

bool CloudProductLogTaskInfo::ExtendHasBeenSet() const
{
    return m_extendHasBeenSet;
}

string CloudProductLogTaskInfo::GetLogType() const
{
    return m_logType;
}

void CloudProductLogTaskInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CloudProductLogTaskInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

int64_t CloudProductLogTaskInfo::GetStatus() const
{
    return m_status;
}

void CloudProductLogTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudProductLogTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

