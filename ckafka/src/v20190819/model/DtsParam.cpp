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

#include <tencentcloud/ckafka/v20190819/model/DtsParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DtsParam::DtsParam() :
    m_resourceHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupUserHasBeenSet(false),
    m_groupPasswordHasBeenSet(false),
    m_tranSqlHasBeenSet(false)
{
}

CoreInternalOutcome DtsParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DtsParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DtsParam.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DtsParam.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DtsParam.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DtsParam.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupUser") && !value["GroupUser"].IsNull())
    {
        if (!value["GroupUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DtsParam.GroupUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupUser = string(value["GroupUser"].GetString());
        m_groupUserHasBeenSet = true;
    }

    if (value.HasMember("GroupPassword") && !value["GroupPassword"].IsNull())
    {
        if (!value["GroupPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DtsParam.GroupPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupPassword = string(value["GroupPassword"].GetString());
        m_groupPasswordHasBeenSet = true;
    }

    if (value.HasMember("TranSql") && !value["TranSql"].IsNull())
    {
        if (!value["TranSql"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DtsParam.TranSql` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tranSql = value["TranSql"].GetBool();
        m_tranSqlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DtsParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupUser.c_str(), allocator).Move(), allocator);
    }

    if (m_groupPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_tranSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tranSql, allocator);
    }

}


string DtsParam::GetResource() const
{
    return m_resource;
}

void DtsParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool DtsParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string DtsParam::GetIp() const
{
    return m_ip;
}

void DtsParam::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DtsParam::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DtsParam::GetPort() const
{
    return m_port;
}

void DtsParam::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DtsParam::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DtsParam::GetTopic() const
{
    return m_topic;
}

void DtsParam::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool DtsParam::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string DtsParam::GetGroupId() const
{
    return m_groupId;
}

void DtsParam::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DtsParam::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DtsParam::GetGroupUser() const
{
    return m_groupUser;
}

void DtsParam::SetGroupUser(const string& _groupUser)
{
    m_groupUser = _groupUser;
    m_groupUserHasBeenSet = true;
}

bool DtsParam::GroupUserHasBeenSet() const
{
    return m_groupUserHasBeenSet;
}

string DtsParam::GetGroupPassword() const
{
    return m_groupPassword;
}

void DtsParam::SetGroupPassword(const string& _groupPassword)
{
    m_groupPassword = _groupPassword;
    m_groupPasswordHasBeenSet = true;
}

bool DtsParam::GroupPasswordHasBeenSet() const
{
    return m_groupPasswordHasBeenSet;
}

bool DtsParam::GetTranSql() const
{
    return m_tranSql;
}

void DtsParam::SetTranSql(const bool& _tranSql)
{
    m_tranSql = _tranSql;
    m_tranSqlHasBeenSet = true;
}

bool DtsParam::TranSqlHasBeenSet() const
{
    return m_tranSqlHasBeenSet;
}

