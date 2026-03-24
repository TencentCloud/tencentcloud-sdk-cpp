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

#include <tencentcloud/config/v20220802/model/UpdateAggregateConfigDeliverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

UpdateAggregateConfigDeliverRequest::UpdateAggregateConfigDeliverRequest() :
    m_statusHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_deliverNameHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_deliverPrefixHasBeenSet(false),
    m_deliverTypeHasBeenSet(false),
    m_deliverUinHasBeenSet(false),
    m_deliverContentTypeHasBeenSet(false)
{
}

string UpdateAggregateConfigDeliverRequest::ToJsonString() const
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

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_deliverUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deliverUin, allocator);
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


uint64_t UpdateAggregateConfigDeliverRequest::GetStatus() const
{
    return m_status;
}

void UpdateAggregateConfigDeliverRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateAggregateConfigDeliverRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UpdateAggregateConfigDeliverRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void UpdateAggregateConfigDeliverRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool UpdateAggregateConfigDeliverRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string UpdateAggregateConfigDeliverRequest::GetDeliverName() const
{
    return m_deliverName;
}

void UpdateAggregateConfigDeliverRequest::SetDeliverName(const string& _deliverName)
{
    m_deliverName = _deliverName;
    m_deliverNameHasBeenSet = true;
}

bool UpdateAggregateConfigDeliverRequest::DeliverNameHasBeenSet() const
{
    return m_deliverNameHasBeenSet;
}

string UpdateAggregateConfigDeliverRequest::GetTargetArn() const
{
    return m_targetArn;
}

void UpdateAggregateConfigDeliverRequest::SetTargetArn(const string& _targetArn)
{
    m_targetArn = _targetArn;
    m_targetArnHasBeenSet = true;
}

bool UpdateAggregateConfigDeliverRequest::TargetArnHasBeenSet() const
{
    return m_targetArnHasBeenSet;
}

string UpdateAggregateConfigDeliverRequest::GetDeliverPrefix() const
{
    return m_deliverPrefix;
}

void UpdateAggregateConfigDeliverRequest::SetDeliverPrefix(const string& _deliverPrefix)
{
    m_deliverPrefix = _deliverPrefix;
    m_deliverPrefixHasBeenSet = true;
}

bool UpdateAggregateConfigDeliverRequest::DeliverPrefixHasBeenSet() const
{
    return m_deliverPrefixHasBeenSet;
}

string UpdateAggregateConfigDeliverRequest::GetDeliverType() const
{
    return m_deliverType;
}

void UpdateAggregateConfigDeliverRequest::SetDeliverType(const string& _deliverType)
{
    m_deliverType = _deliverType;
    m_deliverTypeHasBeenSet = true;
}

bool UpdateAggregateConfigDeliverRequest::DeliverTypeHasBeenSet() const
{
    return m_deliverTypeHasBeenSet;
}

int64_t UpdateAggregateConfigDeliverRequest::GetDeliverUin() const
{
    return m_deliverUin;
}

void UpdateAggregateConfigDeliverRequest::SetDeliverUin(const int64_t& _deliverUin)
{
    m_deliverUin = _deliverUin;
    m_deliverUinHasBeenSet = true;
}

bool UpdateAggregateConfigDeliverRequest::DeliverUinHasBeenSet() const
{
    return m_deliverUinHasBeenSet;
}

uint64_t UpdateAggregateConfigDeliverRequest::GetDeliverContentType() const
{
    return m_deliverContentType;
}

void UpdateAggregateConfigDeliverRequest::SetDeliverContentType(const uint64_t& _deliverContentType)
{
    m_deliverContentType = _deliverContentType;
    m_deliverContentTypeHasBeenSet = true;
}

bool UpdateAggregateConfigDeliverRequest::DeliverContentTypeHasBeenSet() const
{
    return m_deliverContentTypeHasBeenSet;
}


