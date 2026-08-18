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

#include <tencentcloud/adp/v20260520/model/UsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

UsageDetail::UsageDetail() :
    m_callSourceHasBeenSet(false),
    m_dosageIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_pluginHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome UsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallSource") && !value["CallSource"].IsNull())
    {
        if (!value["CallSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.CallSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callSource.Deserialize(value["CallSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callSourceHasBeenSet = true;
    }

    if (value.HasMember("DosageId") && !value["DosageId"].IsNull())
    {
        if (!value["DosageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.DosageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageId = string(value["DosageId"].GetString());
        m_dosageIdHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Plugin") && !value["Plugin"].IsNull())
    {
        if (!value["Plugin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Plugin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_plugin.Deserialize(value["Plugin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pluginHasBeenSet = true;
    }

    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dosageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pluginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plugin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_plugin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


CallSource UsageDetail::GetCallSource() const
{
    return m_callSource;
}

void UsageDetail::SetCallSource(const CallSource& _callSource)
{
    m_callSource = _callSource;
    m_callSourceHasBeenSet = true;
}

bool UsageDetail::CallSourceHasBeenSet() const
{
    return m_callSourceHasBeenSet;
}

string UsageDetail::GetDosageId() const
{
    return m_dosageId;
}

void UsageDetail::SetDosageId(const string& _dosageId)
{
    m_dosageId = _dosageId;
    m_dosageIdHasBeenSet = true;
}

bool UsageDetail::DosageIdHasBeenSet() const
{
    return m_dosageIdHasBeenSet;
}

string UsageDetail::GetEventTime() const
{
    return m_eventTime;
}

void UsageDetail::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool UsageDetail::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

ModelUsageDetail UsageDetail::GetModel() const
{
    return m_model;
}

void UsageDetail::SetModel(const ModelUsageDetail& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool UsageDetail::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

PluginUsageDetail UsageDetail::GetPlugin() const
{
    return m_plugin;
}

void UsageDetail::SetPlugin(const PluginUsageDetail& _plugin)
{
    m_plugin = _plugin;
    m_pluginHasBeenSet = true;
}

bool UsageDetail::PluginHasBeenSet() const
{
    return m_pluginHasBeenSet;
}

string UsageDetail::GetTraceId() const
{
    return m_traceId;
}

void UsageDetail::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool UsageDetail::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

string UsageDetail::GetUserId() const
{
    return m_userId;
}

void UsageDetail::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UsageDetail::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

