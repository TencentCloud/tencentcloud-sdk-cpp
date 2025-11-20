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

#include <tencentcloud/ckafka/v20190819/model/UpgradeBrokerVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

UpgradeBrokerVersionRequest::UpgradeBrokerVersionRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_targetVersionHasBeenSet(false),
    m_delayTimeStampHasBeenSet(false)
{
}

string UpgradeBrokerVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_sourceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_delayTimeStamp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeBrokerVersionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeBrokerVersionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeBrokerVersionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t UpgradeBrokerVersionRequest::GetType() const
{
    return m_type;
}

void UpgradeBrokerVersionRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpgradeBrokerVersionRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UpgradeBrokerVersionRequest::GetSourceVersion() const
{
    return m_sourceVersion;
}

void UpgradeBrokerVersionRequest::SetSourceVersion(const string& _sourceVersion)
{
    m_sourceVersion = _sourceVersion;
    m_sourceVersionHasBeenSet = true;
}

bool UpgradeBrokerVersionRequest::SourceVersionHasBeenSet() const
{
    return m_sourceVersionHasBeenSet;
}

string UpgradeBrokerVersionRequest::GetTargetVersion() const
{
    return m_targetVersion;
}

void UpgradeBrokerVersionRequest::SetTargetVersion(const string& _targetVersion)
{
    m_targetVersion = _targetVersion;
    m_targetVersionHasBeenSet = true;
}

bool UpgradeBrokerVersionRequest::TargetVersionHasBeenSet() const
{
    return m_targetVersionHasBeenSet;
}

string UpgradeBrokerVersionRequest::GetDelayTimeStamp() const
{
    return m_delayTimeStamp;
}

void UpgradeBrokerVersionRequest::SetDelayTimeStamp(const string& _delayTimeStamp)
{
    m_delayTimeStamp = _delayTimeStamp;
    m_delayTimeStampHasBeenSet = true;
}

bool UpgradeBrokerVersionRequest::DelayTimeStampHasBeenSet() const
{
    return m_delayTimeStampHasBeenSet;
}


