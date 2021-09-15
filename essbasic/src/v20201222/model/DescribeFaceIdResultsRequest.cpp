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

#include <tencentcloud/essbasic/v20201222/model/DescribeFaceIdResultsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

DescribeFaceIdResultsRequest::DescribeFaceIdResultsRequest() :
    m_callerHasBeenSet(false),
    m_wbAppIdHasBeenSet(false),
    m_orderNumbersHasBeenSet(false),
    m_fileTypeHasBeenSet(false)
{
}

string DescribeFaceIdResultsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_wbAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WbAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wbAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNumbers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orderNumbers.begin(); itr != m_orderNumbers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller DescribeFaceIdResultsRequest::GetCaller() const
{
    return m_caller;
}

void DescribeFaceIdResultsRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool DescribeFaceIdResultsRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string DescribeFaceIdResultsRequest::GetWbAppId() const
{
    return m_wbAppId;
}

void DescribeFaceIdResultsRequest::SetWbAppId(const string& _wbAppId)
{
    m_wbAppId = _wbAppId;
    m_wbAppIdHasBeenSet = true;
}

bool DescribeFaceIdResultsRequest::WbAppIdHasBeenSet() const
{
    return m_wbAppIdHasBeenSet;
}

vector<string> DescribeFaceIdResultsRequest::GetOrderNumbers() const
{
    return m_orderNumbers;
}

void DescribeFaceIdResultsRequest::SetOrderNumbers(const vector<string>& _orderNumbers)
{
    m_orderNumbers = _orderNumbers;
    m_orderNumbersHasBeenSet = true;
}

bool DescribeFaceIdResultsRequest::OrderNumbersHasBeenSet() const
{
    return m_orderNumbersHasBeenSet;
}

int64_t DescribeFaceIdResultsRequest::GetFileType() const
{
    return m_fileType;
}

void DescribeFaceIdResultsRequest::SetFileType(const int64_t& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DescribeFaceIdResultsRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}


