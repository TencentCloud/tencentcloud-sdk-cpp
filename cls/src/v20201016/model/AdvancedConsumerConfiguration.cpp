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

#include <tencentcloud/cls/v20201016/model/AdvancedConsumerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AdvancedConsumerConfiguration::AdvancedConsumerConfiguration() :
    m_partitionHashStatusHasBeenSet(false),
    m_partitionFieldsHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedConsumerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionHashStatus") && !value["PartitionHashStatus"].IsNull())
    {
        if (!value["PartitionHashStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedConsumerConfiguration.PartitionHashStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_partitionHashStatus = value["PartitionHashStatus"].GetBool();
        m_partitionHashStatusHasBeenSet = true;
    }

    if (value.HasMember("PartitionFields") && !value["PartitionFields"].IsNull())
    {
        if (!value["PartitionFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvancedConsumerConfiguration.PartitionFields` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_partitionFields.push_back((*itr).GetString());
        }
        m_partitionFieldsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedConsumerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionHashStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionHashStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionHashStatus, allocator);
    }

    if (m_partitionFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partitionFields.begin(); itr != m_partitionFields.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool AdvancedConsumerConfiguration::GetPartitionHashStatus() const
{
    return m_partitionHashStatus;
}

void AdvancedConsumerConfiguration::SetPartitionHashStatus(const bool& _partitionHashStatus)
{
    m_partitionHashStatus = _partitionHashStatus;
    m_partitionHashStatusHasBeenSet = true;
}

bool AdvancedConsumerConfiguration::PartitionHashStatusHasBeenSet() const
{
    return m_partitionHashStatusHasBeenSet;
}

vector<string> AdvancedConsumerConfiguration::GetPartitionFields() const
{
    return m_partitionFields;
}

void AdvancedConsumerConfiguration::SetPartitionFields(const vector<string>& _partitionFields)
{
    m_partitionFields = _partitionFields;
    m_partitionFieldsHasBeenSet = true;
}

bool AdvancedConsumerConfiguration::PartitionFieldsHasBeenSet() const
{
    return m_partitionFieldsHasBeenSet;
}

