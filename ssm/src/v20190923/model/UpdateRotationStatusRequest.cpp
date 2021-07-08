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

#include <tencentcloud/ssm/v20190923/model/UpdateRotationStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

UpdateRotationStatusRequest::UpdateRotationStatusRequest() :
    m_secretNameHasBeenSet(false),
    m_enableRotationHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_rotationBeginTimeHasBeenSet(false)
{
}

string UpdateRotationStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableRotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRotation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRotation, allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_frequency, allocator);
    }

    if (m_rotationBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationBeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rotationBeginTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateRotationStatusRequest::GetSecretName() const
{
    return m_secretName;
}

void UpdateRotationStatusRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool UpdateRotationStatusRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

bool UpdateRotationStatusRequest::GetEnableRotation() const
{
    return m_enableRotation;
}

void UpdateRotationStatusRequest::SetEnableRotation(const bool& _enableRotation)
{
    m_enableRotation = _enableRotation;
    m_enableRotationHasBeenSet = true;
}

bool UpdateRotationStatusRequest::EnableRotationHasBeenSet() const
{
    return m_enableRotationHasBeenSet;
}

int64_t UpdateRotationStatusRequest::GetFrequency() const
{
    return m_frequency;
}

void UpdateRotationStatusRequest::SetFrequency(const int64_t& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool UpdateRotationStatusRequest::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

string UpdateRotationStatusRequest::GetRotationBeginTime() const
{
    return m_rotationBeginTime;
}

void UpdateRotationStatusRequest::SetRotationBeginTime(const string& _rotationBeginTime)
{
    m_rotationBeginTime = _rotationBeginTime;
    m_rotationBeginTimeHasBeenSet = true;
}

bool UpdateRotationStatusRequest::RotationBeginTimeHasBeenSet() const
{
    return m_rotationBeginTimeHasBeenSet;
}


