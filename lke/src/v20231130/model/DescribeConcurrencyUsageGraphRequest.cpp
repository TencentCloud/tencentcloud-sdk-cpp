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

#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageGraphRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeConcurrencyUsageGraphRequest::DescribeConcurrencyUsageGraphRequest() :
    m_modelNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_uinAccountHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_subBizTypeHasBeenSet(false),
    m_appBizIdsHasBeenSet(false)
{
}

string DescribeConcurrencyUsageGraphRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uinAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UinAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uinAccount.begin(); itr != m_uinAccount.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubBizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_appBizIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appBizIds.begin(); itr != m_appBizIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeConcurrencyUsageGraphRequest::GetModelName() const
{
    return m_modelName;
}

void DescribeConcurrencyUsageGraphRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool DescribeConcurrencyUsageGraphRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string DescribeConcurrencyUsageGraphRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeConcurrencyUsageGraphRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeConcurrencyUsageGraphRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeConcurrencyUsageGraphRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeConcurrencyUsageGraphRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeConcurrencyUsageGraphRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeConcurrencyUsageGraphRequest::GetUinAccount() const
{
    return m_uinAccount;
}

void DescribeConcurrencyUsageGraphRequest::SetUinAccount(const vector<string>& _uinAccount)
{
    m_uinAccount = _uinAccount;
    m_uinAccountHasBeenSet = true;
}

bool DescribeConcurrencyUsageGraphRequest::UinAccountHasBeenSet() const
{
    return m_uinAccountHasBeenSet;
}

string DescribeConcurrencyUsageGraphRequest::GetLoginUin() const
{
    return m_loginUin;
}

void DescribeConcurrencyUsageGraphRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool DescribeConcurrencyUsageGraphRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string DescribeConcurrencyUsageGraphRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void DescribeConcurrencyUsageGraphRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool DescribeConcurrencyUsageGraphRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string DescribeConcurrencyUsageGraphRequest::GetSubBizType() const
{
    return m_subBizType;
}

void DescribeConcurrencyUsageGraphRequest::SetSubBizType(const string& _subBizType)
{
    m_subBizType = _subBizType;
    m_subBizTypeHasBeenSet = true;
}

bool DescribeConcurrencyUsageGraphRequest::SubBizTypeHasBeenSet() const
{
    return m_subBizTypeHasBeenSet;
}

vector<string> DescribeConcurrencyUsageGraphRequest::GetAppBizIds() const
{
    return m_appBizIds;
}

void DescribeConcurrencyUsageGraphRequest::SetAppBizIds(const vector<string>& _appBizIds)
{
    m_appBizIds = _appBizIds;
    m_appBizIdsHasBeenSet = true;
}

bool DescribeConcurrencyUsageGraphRequest::AppBizIdsHasBeenSet() const
{
    return m_appBizIdsHasBeenSet;
}


