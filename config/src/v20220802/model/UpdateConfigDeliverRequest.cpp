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

#include <tencentcloud/config/v20220802/model/UpdateConfigDeliverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

UpdateConfigDeliverRequest::UpdateConfigDeliverRequest() :
    m_statusHasBeenSet(false),
    m_deliverNameHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_deliverPrefixHasBeenSet(false),
    m_deliverTypeHasBeenSet(false),
    m_deliverContentTypeHasBeenSet(false)
{
}

string UpdateConfigDeliverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_deliverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deliverName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetArn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetArn.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deliverPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deliverType.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverContentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deliverContentType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateConfigDeliverRequest::GetStatus() const
{
    return m_status;
}

void UpdateConfigDeliverRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateConfigDeliverRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UpdateConfigDeliverRequest::GetDeliverName() const
{
    return m_deliverName;
}

void UpdateConfigDeliverRequest::SetDeliverName(const string& _deliverName)
{
    m_deliverName = _deliverName;
    m_deliverNameHasBeenSet = true;
}

bool UpdateConfigDeliverRequest::DeliverNameHasBeenSet() const
{
    return m_deliverNameHasBeenSet;
}

string UpdateConfigDeliverRequest::GetTargetArn() const
{
    return m_targetArn;
}

void UpdateConfigDeliverRequest::SetTargetArn(const string& _targetArn)
{
    m_targetArn = _targetArn;
    m_targetArnHasBeenSet = true;
}

bool UpdateConfigDeliverRequest::TargetArnHasBeenSet() const
{
    return m_targetArnHasBeenSet;
}

string UpdateConfigDeliverRequest::GetDeliverPrefix() const
{
    return m_deliverPrefix;
}

void UpdateConfigDeliverRequest::SetDeliverPrefix(const string& _deliverPrefix)
{
    m_deliverPrefix = _deliverPrefix;
    m_deliverPrefixHasBeenSet = true;
}

bool UpdateConfigDeliverRequest::DeliverPrefixHasBeenSet() const
{
    return m_deliverPrefixHasBeenSet;
}

string UpdateConfigDeliverRequest::GetDeliverType() const
{
    return m_deliverType;
}

void UpdateConfigDeliverRequest::SetDeliverType(const string& _deliverType)
{
    m_deliverType = _deliverType;
    m_deliverTypeHasBeenSet = true;
}

bool UpdateConfigDeliverRequest::DeliverTypeHasBeenSet() const
{
    return m_deliverTypeHasBeenSet;
}

uint64_t UpdateConfigDeliverRequest::GetDeliverContentType() const
{
    return m_deliverContentType;
}

void UpdateConfigDeliverRequest::SetDeliverContentType(const uint64_t& _deliverContentType)
{
    m_deliverContentType = _deliverContentType;
    m_deliverContentTypeHasBeenSet = true;
}

bool UpdateConfigDeliverRequest::DeliverContentTypeHasBeenSet() const
{
    return m_deliverContentTypeHasBeenSet;
}


