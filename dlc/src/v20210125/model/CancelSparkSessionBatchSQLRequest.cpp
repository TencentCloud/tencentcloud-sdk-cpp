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

#include <tencentcloud/dlc/v20210125/model/CancelSparkSessionBatchSQLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CancelSparkSessionBatchSQLRequest::CancelSparkSessionBatchSQLRequest() :
    m_batchIdHasBeenSet(false),
    m_customKeyHasBeenSet(false)
{
}

string CancelSparkSessionBatchSQLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_customKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CancelSparkSessionBatchSQLRequest::GetBatchId() const
{
    return m_batchId;
}

void CancelSparkSessionBatchSQLRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool CancelSparkSessionBatchSQLRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string CancelSparkSessionBatchSQLRequest::GetCustomKey() const
{
    return m_customKey;
}

void CancelSparkSessionBatchSQLRequest::SetCustomKey(const string& _customKey)
{
    m_customKey = _customKey;
    m_customKeyHasBeenSet = true;
}

bool CancelSparkSessionBatchSQLRequest::CustomKeyHasBeenSet() const
{
    return m_customKeyHasBeenSet;
}


