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

#include <tencentcloud/tdmq/v20200217/model/Environment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Environment::Environment() :
    m_environmentIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_msgTTLHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_retentionPolicyHasBeenSet(false),
    m_autoSubscriptionCreationHasBeenSet(false)
{
}

CoreInternalOutcome Environment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("MsgTTL") && !value["MsgTTL"].IsNull())
    {
        if (!value["MsgTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.MsgTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgTTL = value["MsgTTL"].GetInt64();
        m_msgTTLHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("TopicNum") && !value["TopicNum"].IsNull())
    {
        if (!value["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = value["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (value.HasMember("RetentionPolicy") && !value["RetentionPolicy"].IsNull())
    {
        if (!value["RetentionPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.RetentionPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_retentionPolicy.Deserialize(value["RetentionPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_retentionPolicyHasBeenSet = true;
    }

    if (value.HasMember("AutoSubscriptionCreation") && !value["AutoSubscriptionCreation"].IsNull())
    {
        if (!value["AutoSubscriptionCreation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.AutoSubscriptionCreation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSubscriptionCreation = value["AutoSubscriptionCreation"].GetBool();
        m_autoSubscriptionCreationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Environment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgTTL, allocator);
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

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNum, allocator);
    }

    if (m_retentionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_retentionPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoSubscriptionCreationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSubscriptionCreation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSubscriptionCreation, allocator);
    }

}


string Environment::GetEnvironmentId() const
{
    return m_environmentId;
}

void Environment::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool Environment::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string Environment::GetRemark() const
{
    return m_remark;
}

void Environment::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Environment::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t Environment::GetMsgTTL() const
{
    return m_msgTTL;
}

void Environment::SetMsgTTL(const int64_t& _msgTTL)
{
    m_msgTTL = _msgTTL;
    m_msgTTLHasBeenSet = true;
}

bool Environment::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}

string Environment::GetCreateTime() const
{
    return m_createTime;
}

void Environment::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Environment::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Environment::GetUpdateTime() const
{
    return m_updateTime;
}

void Environment::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Environment::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Environment::GetNamespaceId() const
{
    return m_namespaceId;
}

void Environment::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool Environment::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string Environment::GetNamespaceName() const
{
    return m_namespaceName;
}

void Environment::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool Environment::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

int64_t Environment::GetTopicNum() const
{
    return m_topicNum;
}

void Environment::SetTopicNum(const int64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool Environment::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

RetentionPolicy Environment::GetRetentionPolicy() const
{
    return m_retentionPolicy;
}

void Environment::SetRetentionPolicy(const RetentionPolicy& _retentionPolicy)
{
    m_retentionPolicy = _retentionPolicy;
    m_retentionPolicyHasBeenSet = true;
}

bool Environment::RetentionPolicyHasBeenSet() const
{
    return m_retentionPolicyHasBeenSet;
}

bool Environment::GetAutoSubscriptionCreation() const
{
    return m_autoSubscriptionCreation;
}

void Environment::SetAutoSubscriptionCreation(const bool& _autoSubscriptionCreation)
{
    m_autoSubscriptionCreation = _autoSubscriptionCreation;
    m_autoSubscriptionCreationHasBeenSet = true;
}

bool Environment::AutoSubscriptionCreationHasBeenSet() const
{
    return m_autoSubscriptionCreationHasBeenSet;
}

