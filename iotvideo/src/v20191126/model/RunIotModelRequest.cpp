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

#include <tencentcloud/iotvideo/v20191126/model/RunIotModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

RunIotModelRequest::RunIotModelRequest() :
    m_productIdHasBeenSet(false),
    m_iotModelHasBeenSet(false)
{
}

string RunIotModelRequest::ToJsonString() const
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

    if (m_iotModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iotModel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunIotModelRequest::GetProductId() const
{
    return m_productId;
}

void RunIotModelRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool RunIotModelRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string RunIotModelRequest::GetIotModel() const
{
    return m_iotModel;
}

void RunIotModelRequest::SetIotModel(const string& _iotModel)
{
    m_iotModel = _iotModel;
    m_iotModelHasBeenSet = true;
}

bool RunIotModelRequest::IotModelHasBeenSet() const
{
    return m_iotModelHasBeenSet;
}


