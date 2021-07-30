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

#include <tencentcloud/iotvideo/v20201215/model/ModifyDataForwardRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

ModifyDataForwardRequest::ModifyDataForwardRequest() :
    m_productIdHasBeenSet(false),
    m_forwardAddrHasBeenSet(false),
    m_dataChoseHasBeenSet(false)
{
}

string ModifyDataForwardRequest::ToJsonString() const
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

    if (m_forwardAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_dataChoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataChose";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataChose, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDataForwardRequest::GetProductId() const
{
    return m_productId;
}

void ModifyDataForwardRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyDataForwardRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyDataForwardRequest::GetForwardAddr() const
{
    return m_forwardAddr;
}

void ModifyDataForwardRequest::SetForwardAddr(const string& _forwardAddr)
{
    m_forwardAddr = _forwardAddr;
    m_forwardAddrHasBeenSet = true;
}

bool ModifyDataForwardRequest::ForwardAddrHasBeenSet() const
{
    return m_forwardAddrHasBeenSet;
}

int64_t ModifyDataForwardRequest::GetDataChose() const
{
    return m_dataChose;
}

void ModifyDataForwardRequest::SetDataChose(const int64_t& _dataChose)
{
    m_dataChose = _dataChose;
    m_dataChoseHasBeenSet = true;
}

bool ModifyDataForwardRequest::DataChoseHasBeenSet() const
{
    return m_dataChoseHasBeenSet;
}


