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

#include <tencentcloud/cls/v20201016/model/RemoteWriteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

RemoteWriteInfo::RemoteWriteInfo() :
    m_taskIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_remoteWriteURLHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_authInfoHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_virtualGatewayTypeHasBeenSet(false)
{
}

CoreInternalOutcome RemoteWriteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.NetType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netType = value["NetType"].GetUint64();
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("RemoteWriteURL") && !value["RemoteWriteURL"].IsNull())
    {
        if (!value["RemoteWriteURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.RemoteWriteURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteWriteURL = string(value["RemoteWriteURL"].GetString());
        m_remoteWriteURLHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.AuthType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetUint64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthInfo") && !value["AuthInfo"].IsNull())
    {
        if (!value["AuthInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.AuthInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authInfo.Deserialize(value["AuthInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authInfoHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("VirtualGatewayType") && !value["VirtualGatewayType"].IsNull())
    {
        if (!value["VirtualGatewayType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWriteInfo.VirtualGatewayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualGatewayType = value["VirtualGatewayType"].GetInt64();
        m_virtualGatewayTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemoteWriteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netType, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteWriteURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteWriteURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteWriteURL.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_authInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_virtualGatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualGatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualGatewayType, allocator);
    }

}


string RemoteWriteInfo::GetTaskId() const
{
    return m_taskId;
}

void RemoteWriteInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RemoteWriteInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RemoteWriteInfo::GetTopicId() const
{
    return m_topicId;
}

void RemoteWriteInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool RemoteWriteInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string RemoteWriteInfo::GetName() const
{
    return m_name;
}

void RemoteWriteInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RemoteWriteInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t RemoteWriteInfo::GetNetType() const
{
    return m_netType;
}

void RemoteWriteInfo::SetNetType(const uint64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool RemoteWriteInfo::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string RemoteWriteInfo::GetVpcId() const
{
    return m_vpcId;
}

void RemoteWriteInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool RemoteWriteInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t RemoteWriteInfo::GetStatus() const
{
    return m_status;
}

void RemoteWriteInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RemoteWriteInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RemoteWriteInfo::GetCreateTime() const
{
    return m_createTime;
}

void RemoteWriteInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RemoteWriteInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RemoteWriteInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RemoteWriteInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RemoteWriteInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RemoteWriteInfo::GetTarget() const
{
    return m_target;
}

void RemoteWriteInfo::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool RemoteWriteInfo::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string RemoteWriteInfo::GetRemoteWriteURL() const
{
    return m_remoteWriteURL;
}

void RemoteWriteInfo::SetRemoteWriteURL(const string& _remoteWriteURL)
{
    m_remoteWriteURL = _remoteWriteURL;
    m_remoteWriteURLHasBeenSet = true;
}

bool RemoteWriteInfo::RemoteWriteURLHasBeenSet() const
{
    return m_remoteWriteURLHasBeenSet;
}

uint64_t RemoteWriteInfo::GetAuthType() const
{
    return m_authType;
}

void RemoteWriteInfo::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool RemoteWriteInfo::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

RemoteWriteAuthInfo RemoteWriteInfo::GetAuthInfo() const
{
    return m_authInfo;
}

void RemoteWriteInfo::SetAuthInfo(const RemoteWriteAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool RemoteWriteInfo::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}

string RemoteWriteInfo::GetLogsetId() const
{
    return m_logsetId;
}

void RemoteWriteInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool RemoteWriteInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

uint64_t RemoteWriteInfo::GetEnable() const
{
    return m_enable;
}

void RemoteWriteInfo::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool RemoteWriteInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t RemoteWriteInfo::GetVirtualGatewayType() const
{
    return m_virtualGatewayType;
}

void RemoteWriteInfo::SetVirtualGatewayType(const int64_t& _virtualGatewayType)
{
    m_virtualGatewayType = _virtualGatewayType;
    m_virtualGatewayTypeHasBeenSet = true;
}

bool RemoteWriteInfo::VirtualGatewayTypeHasBeenSet() const
{
    return m_virtualGatewayTypeHasBeenSet;
}

