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

#include <tencentcloud/dlc/v20210125/model/ModifySparkAppBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ModifySparkAppBatchRequest::ModifySparkAppBatchRequest() :
    m_sparkAppIdHasBeenSet(false),
    m_dataEngineHasBeenSet(false),
    m_appDriverSizeHasBeenSet(false),
    m_appExecutorSizeHasBeenSet(false),
    m_appExecutorNumsHasBeenSet(false),
    m_appExecutorMaxNumbersHasBeenSet(false),
    m_isInheritHasBeenSet(false)
{
}

string ModifySparkAppBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sparkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sparkAppId.begin(); itr != m_sparkAppId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_appDriverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppDriverSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appDriverSize.c_str(), allocator).Move(), allocator);
    }

    if (m_appExecutorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appExecutorSize.c_str(), allocator).Move(), allocator);
    }

    if (m_appExecutorNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppExecutorNums";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_appExecutorNums, allocator);
    }

    if (m_appExecutorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_appExecutorMaxNumbers, allocator);
    }

    if (m_isInheritHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInherit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInherit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifySparkAppBatchRequest::GetSparkAppId() const
{
    return m_sparkAppId;
}

void ModifySparkAppBatchRequest::SetSparkAppId(const vector<string>& _sparkAppId)
{
    m_sparkAppId = _sparkAppId;
    m_sparkAppIdHasBeenSet = true;
}

bool ModifySparkAppBatchRequest::SparkAppIdHasBeenSet() const
{
    return m_sparkAppIdHasBeenSet;
}

string ModifySparkAppBatchRequest::GetDataEngine() const
{
    return m_dataEngine;
}

void ModifySparkAppBatchRequest::SetDataEngine(const string& _dataEngine)
{
    m_dataEngine = _dataEngine;
    m_dataEngineHasBeenSet = true;
}

bool ModifySparkAppBatchRequest::DataEngineHasBeenSet() const
{
    return m_dataEngineHasBeenSet;
}

string ModifySparkAppBatchRequest::GetAppDriverSize() const
{
    return m_appDriverSize;
}

void ModifySparkAppBatchRequest::SetAppDriverSize(const string& _appDriverSize)
{
    m_appDriverSize = _appDriverSize;
    m_appDriverSizeHasBeenSet = true;
}

bool ModifySparkAppBatchRequest::AppDriverSizeHasBeenSet() const
{
    return m_appDriverSizeHasBeenSet;
}

string ModifySparkAppBatchRequest::GetAppExecutorSize() const
{
    return m_appExecutorSize;
}

void ModifySparkAppBatchRequest::SetAppExecutorSize(const string& _appExecutorSize)
{
    m_appExecutorSize = _appExecutorSize;
    m_appExecutorSizeHasBeenSet = true;
}

bool ModifySparkAppBatchRequest::AppExecutorSizeHasBeenSet() const
{
    return m_appExecutorSizeHasBeenSet;
}

uint64_t ModifySparkAppBatchRequest::GetAppExecutorNums() const
{
    return m_appExecutorNums;
}

void ModifySparkAppBatchRequest::SetAppExecutorNums(const uint64_t& _appExecutorNums)
{
    m_appExecutorNums = _appExecutorNums;
    m_appExecutorNumsHasBeenSet = true;
}

bool ModifySparkAppBatchRequest::AppExecutorNumsHasBeenSet() const
{
    return m_appExecutorNumsHasBeenSet;
}

uint64_t ModifySparkAppBatchRequest::GetAppExecutorMaxNumbers() const
{
    return m_appExecutorMaxNumbers;
}

void ModifySparkAppBatchRequest::SetAppExecutorMaxNumbers(const uint64_t& _appExecutorMaxNumbers)
{
    m_appExecutorMaxNumbers = _appExecutorMaxNumbers;
    m_appExecutorMaxNumbersHasBeenSet = true;
}

bool ModifySparkAppBatchRequest::AppExecutorMaxNumbersHasBeenSet() const
{
    return m_appExecutorMaxNumbersHasBeenSet;
}

uint64_t ModifySparkAppBatchRequest::GetIsInherit() const
{
    return m_isInherit;
}

void ModifySparkAppBatchRequest::SetIsInherit(const uint64_t& _isInherit)
{
    m_isInherit = _isInherit;
    m_isInheritHasBeenSet = true;
}

bool ModifySparkAppBatchRequest::IsInheritHasBeenSet() const
{
    return m_isInheritHasBeenSet;
}


