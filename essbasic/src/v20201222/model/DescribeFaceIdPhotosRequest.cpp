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

#include <tencentcloud/essbasic/v20201222/model/DescribeFaceIdPhotosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

DescribeFaceIdPhotosRequest::DescribeFaceIdPhotosRequest() :
    m_callerHasBeenSet(false),
    m_wbAppIdHasBeenSet(false),
    m_orderNumbersHasBeenSet(false)
{
}

string DescribeFaceIdPhotosRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller DescribeFaceIdPhotosRequest::GetCaller() const
{
    return m_caller;
}

void DescribeFaceIdPhotosRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool DescribeFaceIdPhotosRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string DescribeFaceIdPhotosRequest::GetWbAppId() const
{
    return m_wbAppId;
}

void DescribeFaceIdPhotosRequest::SetWbAppId(const string& _wbAppId)
{
    m_wbAppId = _wbAppId;
    m_wbAppIdHasBeenSet = true;
}

bool DescribeFaceIdPhotosRequest::WbAppIdHasBeenSet() const
{
    return m_wbAppIdHasBeenSet;
}

vector<string> DescribeFaceIdPhotosRequest::GetOrderNumbers() const
{
    return m_orderNumbers;
}

void DescribeFaceIdPhotosRequest::SetOrderNumbers(const vector<string>& _orderNumbers)
{
    m_orderNumbers = _orderNumbers;
    m_orderNumbersHasBeenSet = true;
}

bool DescribeFaceIdPhotosRequest::OrderNumbersHasBeenSet() const
{
    return m_orderNumbersHasBeenSet;
}


