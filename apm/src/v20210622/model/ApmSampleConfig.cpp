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

#include <tencentcloud/apm/v20210622/model/ApmSampleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ApmSampleConfig::ApmSampleConfig() :
    m_instanceKeyHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_sampleNameHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_spanNumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome ApmSampleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("SampleName") && !value["SampleName"].IsNull())
    {
        if (!value["SampleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.SampleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleName = string(value["SampleName"].GetString());
        m_sampleNameHasBeenSet = true;
    }

    if (value.HasMember("OperationName") && !value["OperationName"].IsNull())
    {
        if (!value["OperationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.OperationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationName = string(value["OperationName"].GetString());
        m_operationNameHasBeenSet = true;
    }

    if (value.HasMember("SpanNum") && !value["SpanNum"].IsNull())
    {
        if (!value["SpanNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.SpanNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spanNum = value["SpanNum"].GetInt64();
        m_spanNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            APMKVItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.SampleRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetInt64();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.OperationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = value["OperationType"].GetInt64();
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmSampleConfig.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApmSampleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sampleName.c_str(), allocator).Move(), allocator);
    }

    if (m_operationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationName.c_str(), allocator).Move(), allocator);
    }

    if (m_spanNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spanNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operationType, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string ApmSampleConfig::GetInstanceKey() const
{
    return m_instanceKey;
}

void ApmSampleConfig::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool ApmSampleConfig::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string ApmSampleConfig::GetServiceName() const
{
    return m_serviceName;
}

void ApmSampleConfig::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ApmSampleConfig::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ApmSampleConfig::GetSampleName() const
{
    return m_sampleName;
}

void ApmSampleConfig::SetSampleName(const string& _sampleName)
{
    m_sampleName = _sampleName;
    m_sampleNameHasBeenSet = true;
}

bool ApmSampleConfig::SampleNameHasBeenSet() const
{
    return m_sampleNameHasBeenSet;
}

string ApmSampleConfig::GetOperationName() const
{
    return m_operationName;
}

void ApmSampleConfig::SetOperationName(const string& _operationName)
{
    m_operationName = _operationName;
    m_operationNameHasBeenSet = true;
}

bool ApmSampleConfig::OperationNameHasBeenSet() const
{
    return m_operationNameHasBeenSet;
}

int64_t ApmSampleConfig::GetSpanNum() const
{
    return m_spanNum;
}

void ApmSampleConfig::SetSpanNum(const int64_t& _spanNum)
{
    m_spanNum = _spanNum;
    m_spanNumHasBeenSet = true;
}

bool ApmSampleConfig::SpanNumHasBeenSet() const
{
    return m_spanNumHasBeenSet;
}

int64_t ApmSampleConfig::GetStatus() const
{
    return m_status;
}

void ApmSampleConfig::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApmSampleConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<APMKVItem> ApmSampleConfig::GetTags() const
{
    return m_tags;
}

void ApmSampleConfig::SetTags(const vector<APMKVItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ApmSampleConfig::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t ApmSampleConfig::GetSampleRate() const
{
    return m_sampleRate;
}

void ApmSampleConfig::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool ApmSampleConfig::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

int64_t ApmSampleConfig::GetOperationType() const
{
    return m_operationType;
}

void ApmSampleConfig::SetOperationType(const int64_t& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool ApmSampleConfig::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

int64_t ApmSampleConfig::GetId() const
{
    return m_id;
}

void ApmSampleConfig::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ApmSampleConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

