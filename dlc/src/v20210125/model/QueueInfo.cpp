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

#include <tencentcloud/dlc/v20210125/model/QueueInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

QueueInfo::QueueInfo() :
    m_idHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_resourceUsageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_queueTypeHasBeenSet(false)
{
}

CoreInternalOutcome QueueInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueInfo.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceUsage") && !value["ResourceUsage"].IsNull())
    {
        if (!value["ResourceUsage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueueInfo.ResourceUsage` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceUsage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceUsage.push_back(item);
        }
        m_resourceUsageHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueInfo.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("QueueType") && !value["QueueType"].IsNull())
    {
        if (!value["QueueType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueInfo.QueueType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = value["QueueType"].GetInt64();
        m_queueTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueueInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceUsage.begin(); itr != m_resourceUsage.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueType, allocator);
    }

}


int64_t QueueInfo::GetId() const
{
    return m_id;
}

void QueueInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool QueueInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string QueueInfo::GetQueueName() const
{
    return m_queueName;
}

void QueueInfo::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool QueueInfo::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

vector<ResourceUsage> QueueInfo::GetResourceUsage() const
{
    return m_resourceUsage;
}

void QueueInfo::SetResourceUsage(const vector<ResourceUsage>& _resourceUsage)
{
    m_resourceUsage = _resourceUsage;
    m_resourceUsageHasBeenSet = true;
}

bool QueueInfo::ResourceUsageHasBeenSet() const
{
    return m_resourceUsageHasBeenSet;
}

string QueueInfo::GetDescription() const
{
    return m_description;
}

void QueueInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool QueueInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t QueueInfo::GetIsDefault() const
{
    return m_isDefault;
}

void QueueInfo::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool QueueInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

int64_t QueueInfo::GetQueueType() const
{
    return m_queueType;
}

void QueueInfo::SetQueueType(const int64_t& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool QueueInfo::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

