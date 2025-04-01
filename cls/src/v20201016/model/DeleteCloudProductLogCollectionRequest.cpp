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

#include <tencentcloud/cls/v20201016/model/DeleteCloudProductLogCollectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DeleteCloudProductLogCollectionRequest::DeleteCloudProductLogCollectionRequest() :
    m_instanceIdHasBeenSet(false),
    m_assumerNameHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_cloudProductRegionHasBeenSet(false)
{
}

string DeleteCloudProductLogCollectionRequest::ToJsonString() const
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

    if (m_assumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssumerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assumerName.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudProductRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudProductRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudProductRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCloudProductLogCollectionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteCloudProductLogCollectionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteCloudProductLogCollectionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeleteCloudProductLogCollectionRequest::GetAssumerName() const
{
    return m_assumerName;
}

void DeleteCloudProductLogCollectionRequest::SetAssumerName(const string& _assumerName)
{
    m_assumerName = _assumerName;
    m_assumerNameHasBeenSet = true;
}

bool DeleteCloudProductLogCollectionRequest::AssumerNameHasBeenSet() const
{
    return m_assumerNameHasBeenSet;
}

string DeleteCloudProductLogCollectionRequest::GetLogType() const
{
    return m_logType;
}

void DeleteCloudProductLogCollectionRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool DeleteCloudProductLogCollectionRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string DeleteCloudProductLogCollectionRequest::GetCloudProductRegion() const
{
    return m_cloudProductRegion;
}

void DeleteCloudProductLogCollectionRequest::SetCloudProductRegion(const string& _cloudProductRegion)
{
    m_cloudProductRegion = _cloudProductRegion;
    m_cloudProductRegionHasBeenSet = true;
}

bool DeleteCloudProductLogCollectionRequest::CloudProductRegionHasBeenSet() const
{
    return m_cloudProductRegionHasBeenSet;
}


