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

#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageGraphRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeTokenUsageGraphRequest::DescribeTokenUsageGraphRequest() :
    m_uinAccountHasBeenSet(false),
    m_subBizTypeHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_appBizIdsHasBeenSet(false),
    m_appTypeHasBeenSet(false)
{
}

string DescribeTokenUsageGraphRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_subBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubBizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subBizType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeTokenUsageGraphRequest::GetUinAccount() const
{
    return m_uinAccount;
}

void DescribeTokenUsageGraphRequest::SetUinAccount(const vector<string>& _uinAccount)
{
    m_uinAccount = _uinAccount;
    m_uinAccountHasBeenSet = true;
}

bool DescribeTokenUsageGraphRequest::UinAccountHasBeenSet() const
{
    return m_uinAccountHasBeenSet;
}

string DescribeTokenUsageGraphRequest::GetSubBizType() const
{
    return m_subBizType;
}

void DescribeTokenUsageGraphRequest::SetSubBizType(const string& _subBizType)
{
    m_subBizType = _subBizType;
    m_subBizTypeHasBeenSet = true;
}

bool DescribeTokenUsageGraphRequest::SubBizTypeHasBeenSet() const
{
    return m_subBizTypeHasBeenSet;
}

string DescribeTokenUsageGraphRequest::GetModelName() const
{
    return m_modelName;
}

void DescribeTokenUsageGraphRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool DescribeTokenUsageGraphRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string DescribeTokenUsageGraphRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTokenUsageGraphRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTokenUsageGraphRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTokenUsageGraphRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTokenUsageGraphRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTokenUsageGraphRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeTokenUsageGraphRequest::GetAppBizIds() const
{
    return m_appBizIds;
}

void DescribeTokenUsageGraphRequest::SetAppBizIds(const vector<string>& _appBizIds)
{
    m_appBizIds = _appBizIds;
    m_appBizIdsHasBeenSet = true;
}

bool DescribeTokenUsageGraphRequest::AppBizIdsHasBeenSet() const
{
    return m_appBizIdsHasBeenSet;
}

string DescribeTokenUsageGraphRequest::GetAppType() const
{
    return m_appType;
}

void DescribeTokenUsageGraphRequest::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool DescribeTokenUsageGraphRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}


