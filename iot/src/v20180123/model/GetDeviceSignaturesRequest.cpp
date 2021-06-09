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

#include <tencentcloud/iot/v20180123/model/GetDeviceSignaturesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

GetDeviceSignaturesRequest::GetDeviceSignaturesRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNamesHasBeenSet(false),
    m_expireHasBeenSet(false)
{
}

string GetDeviceSignaturesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceNames.begin(); itr != m_deviceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expire, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetDeviceSignaturesRequest::GetProductId() const
{
    return m_productId;
}

void GetDeviceSignaturesRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool GetDeviceSignaturesRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

vector<string> GetDeviceSignaturesRequest::GetDeviceNames() const
{
    return m_deviceNames;
}

void GetDeviceSignaturesRequest::SetDeviceNames(const vector<string>& _deviceNames)
{
    m_deviceNames = _deviceNames;
    m_deviceNamesHasBeenSet = true;
}

bool GetDeviceSignaturesRequest::DeviceNamesHasBeenSet() const
{
    return m_deviceNamesHasBeenSet;
}

uint64_t GetDeviceSignaturesRequest::GetExpire() const
{
    return m_expire;
}

void GetDeviceSignaturesRequest::SetExpire(const uint64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool GetDeviceSignaturesRequest::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}


