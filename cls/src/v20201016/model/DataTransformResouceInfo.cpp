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

#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DataTransformResouceInfo::DataTransformResouceInfo() :
    m_topicIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_isCrossAccountHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_logsetNameHasBeenSet(false)
{
}

CoreInternalOutcome DataTransformResouceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformResouceInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformResouceInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("IsCrossAccount") && !value["IsCrossAccount"].IsNull())
    {
        if (!value["IsCrossAccount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformResouceInfo.IsCrossAccount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCrossAccount = value["IsCrossAccount"].GetBool();
        m_isCrossAccountHasBeenSet = true;
    }

    if (value.HasMember("RoleARN") && !value["RoleARN"].IsNull())
    {
        if (!value["RoleARN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformResouceInfo.RoleARN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleARN = string(value["RoleARN"].GetString());
        m_roleARNHasBeenSet = true;
    }

    if (value.HasMember("ExternalId") && !value["ExternalId"].IsNull())
    {
        if (!value["ExternalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformResouceInfo.ExternalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalId = string(value["ExternalId"].GetString());
        m_externalIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformResouceInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("LogsetName") && !value["LogsetName"].IsNull())
    {
        if (!value["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataTransformResouceInfo.LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(value["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataTransformResouceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_isCrossAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCrossAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCrossAccount, allocator);
    }

    if (m_roleARNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleARN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleARN.c_str(), allocator).Move(), allocator);
    }

    if (m_externalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

}


string DataTransformResouceInfo::GetTopicId() const
{
    return m_topicId;
}

void DataTransformResouceInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool DataTransformResouceInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string DataTransformResouceInfo::GetAlias() const
{
    return m_alias;
}

void DataTransformResouceInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool DataTransformResouceInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

bool DataTransformResouceInfo::GetIsCrossAccount() const
{
    return m_isCrossAccount;
}

void DataTransformResouceInfo::SetIsCrossAccount(const bool& _isCrossAccount)
{
    m_isCrossAccount = _isCrossAccount;
    m_isCrossAccountHasBeenSet = true;
}

bool DataTransformResouceInfo::IsCrossAccountHasBeenSet() const
{
    return m_isCrossAccountHasBeenSet;
}

string DataTransformResouceInfo::GetRoleARN() const
{
    return m_roleARN;
}

void DataTransformResouceInfo::SetRoleARN(const string& _roleARN)
{
    m_roleARN = _roleARN;
    m_roleARNHasBeenSet = true;
}

bool DataTransformResouceInfo::RoleARNHasBeenSet() const
{
    return m_roleARNHasBeenSet;
}

string DataTransformResouceInfo::GetExternalId() const
{
    return m_externalId;
}

void DataTransformResouceInfo::SetExternalId(const string& _externalId)
{
    m_externalId = _externalId;
    m_externalIdHasBeenSet = true;
}

bool DataTransformResouceInfo::ExternalIdHasBeenSet() const
{
    return m_externalIdHasBeenSet;
}

string DataTransformResouceInfo::GetTopicName() const
{
    return m_topicName;
}

void DataTransformResouceInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DataTransformResouceInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string DataTransformResouceInfo::GetLogsetName() const
{
    return m_logsetName;
}

void DataTransformResouceInfo::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool DataTransformResouceInfo::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

