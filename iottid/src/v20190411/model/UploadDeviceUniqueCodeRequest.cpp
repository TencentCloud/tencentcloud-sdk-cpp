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

#include <tencentcloud/iottid/v20190411/model/UploadDeviceUniqueCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iottid::V20190411::Model;
using namespace std;

UploadDeviceUniqueCodeRequest::UploadDeviceUniqueCodeRequest() :
    m_codeSetHasBeenSet(false),
    m_orderIdHasBeenSet(false)
{
}

string UploadDeviceUniqueCodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_codeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_codeSet.begin(); itr != m_codeSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UploadDeviceUniqueCodeRequest::GetCodeSet() const
{
    return m_codeSet;
}

void UploadDeviceUniqueCodeRequest::SetCodeSet(const vector<string>& _codeSet)
{
    m_codeSet = _codeSet;
    m_codeSetHasBeenSet = true;
}

bool UploadDeviceUniqueCodeRequest::CodeSetHasBeenSet() const
{
    return m_codeSetHasBeenSet;
}

string UploadDeviceUniqueCodeRequest::GetOrderId() const
{
    return m_orderId;
}

void UploadDeviceUniqueCodeRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool UploadDeviceUniqueCodeRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}


