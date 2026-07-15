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

#include <tencentcloud/cls/v20201016/model/AgentApplicationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AgentApplicationInfo::AgentApplicationInfo() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_logTopicsHasBeenSet(false),
    m_metricsTopicsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AgentApplicationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentApplicationInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentApplicationInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentApplicationInfo.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentApplicationInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("LogTopics") && !value["LogTopics"].IsNull())
    {
        if (!value["LogTopics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentApplicationInfo.LogTopics` is not array type"));

        const rapidjson::Value &tmpValue = value["LogTopics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentTopicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logTopics.push_back(item);
        }
        m_logTopicsHasBeenSet = true;
    }

    if (value.HasMember("MetricsTopics") && !value["MetricsTopics"].IsNull())
    {
        if (!value["MetricsTopics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentApplicationInfo.MetricsTopics` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricsTopics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentTopicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricsTopics.push_back(item);
        }
        m_metricsTopicsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentApplicationInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentApplicationInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentApplicationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logTopics.begin(); itr != m_logTopics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metricsTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricsTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricsTopics.begin(); itr != m_metricsTopics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string AgentApplicationInfo::GetApplicationId() const
{
    return m_applicationId;
}

void AgentApplicationInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool AgentApplicationInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string AgentApplicationInfo::GetApplicationName() const
{
    return m_applicationName;
}

void AgentApplicationInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool AgentApplicationInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string AgentApplicationInfo::GetAccessType() const
{
    return m_accessType;
}

void AgentApplicationInfo::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool AgentApplicationInfo::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string AgentApplicationInfo::GetRegion() const
{
    return m_region;
}

void AgentApplicationInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AgentApplicationInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<AgentTopicInfo> AgentApplicationInfo::GetLogTopics() const
{
    return m_logTopics;
}

void AgentApplicationInfo::SetLogTopics(const vector<AgentTopicInfo>& _logTopics)
{
    m_logTopics = _logTopics;
    m_logTopicsHasBeenSet = true;
}

bool AgentApplicationInfo::LogTopicsHasBeenSet() const
{
    return m_logTopicsHasBeenSet;
}

vector<AgentTopicInfo> AgentApplicationInfo::GetMetricsTopics() const
{
    return m_metricsTopics;
}

void AgentApplicationInfo::SetMetricsTopics(const vector<AgentTopicInfo>& _metricsTopics)
{
    m_metricsTopics = _metricsTopics;
    m_metricsTopicsHasBeenSet = true;
}

bool AgentApplicationInfo::MetricsTopicsHasBeenSet() const
{
    return m_metricsTopicsHasBeenSet;
}

uint64_t AgentApplicationInfo::GetCreateTime() const
{
    return m_createTime;
}

void AgentApplicationInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AgentApplicationInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AgentApplicationInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AgentApplicationInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AgentApplicationInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

