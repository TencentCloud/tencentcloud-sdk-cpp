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

#include <tencentcloud/cfs/v20190719/model/ModifyFileSystemAutoScaleUpRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

ModifyFileSystemAutoScaleUpRuleRequest::ModifyFileSystemAutoScaleUpRuleRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_scaleUpThresholdHasBeenSet(false),
    m_targetThresholdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyFileSystemAutoScaleUpRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleUpThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleUpThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scaleUpThreshold, allocator);
    }

    if (m_targetThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetThreshold, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFileSystemAutoScaleUpRuleRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void ModifyFileSystemAutoScaleUpRuleRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool ModifyFileSystemAutoScaleUpRuleRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t ModifyFileSystemAutoScaleUpRuleRequest::GetScaleUpThreshold() const
{
    return m_scaleUpThreshold;
}

void ModifyFileSystemAutoScaleUpRuleRequest::SetScaleUpThreshold(const uint64_t& _scaleUpThreshold)
{
    m_scaleUpThreshold = _scaleUpThreshold;
    m_scaleUpThresholdHasBeenSet = true;
}

bool ModifyFileSystemAutoScaleUpRuleRequest::ScaleUpThresholdHasBeenSet() const
{
    return m_scaleUpThresholdHasBeenSet;
}

uint64_t ModifyFileSystemAutoScaleUpRuleRequest::GetTargetThreshold() const
{
    return m_targetThreshold;
}

void ModifyFileSystemAutoScaleUpRuleRequest::SetTargetThreshold(const uint64_t& _targetThreshold)
{
    m_targetThreshold = _targetThreshold;
    m_targetThresholdHasBeenSet = true;
}

bool ModifyFileSystemAutoScaleUpRuleRequest::TargetThresholdHasBeenSet() const
{
    return m_targetThresholdHasBeenSet;
}

uint64_t ModifyFileSystemAutoScaleUpRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyFileSystemAutoScaleUpRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyFileSystemAutoScaleUpRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


