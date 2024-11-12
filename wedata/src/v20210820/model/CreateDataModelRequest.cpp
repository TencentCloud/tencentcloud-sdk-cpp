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

#include <tencentcloud/wedata/v20210820/model/CreateDataModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateDataModelRequest::CreateDataModelRequest() :
    m_cloudappIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_dataModelVersionHasBeenSet(false)
{
}

string CreateDataModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cloudappIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudappId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudappId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_dataModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataModelVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataModelRequest::GetCloudappId() const
{
    return m_cloudappId;
}

void CreateDataModelRequest::SetCloudappId(const string& _cloudappId)
{
    m_cloudappId = _cloudappId;
    m_cloudappIdHasBeenSet = true;
}

bool CreateDataModelRequest::CloudappIdHasBeenSet() const
{
    return m_cloudappIdHasBeenSet;
}

string CreateDataModelRequest::GetUserId() const
{
    return m_userId;
}

void CreateDataModelRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateDataModelRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateDataModelRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateDataModelRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateDataModelRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t CreateDataModelRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateDataModelRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateDataModelRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

uint64_t CreateDataModelRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateDataModelRequest::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateDataModelRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CreateDataModelRequest::GetDataModelVersion() const
{
    return m_dataModelVersion;
}

void CreateDataModelRequest::SetDataModelVersion(const string& _dataModelVersion)
{
    m_dataModelVersion = _dataModelVersion;
    m_dataModelVersionHasBeenSet = true;
}

bool CreateDataModelRequest::DataModelVersionHasBeenSet() const
{
    return m_dataModelVersionHasBeenSet;
}


