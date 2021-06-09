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

#include <tencentcloud/bm/v20180423/model/DescribeDeviceClassRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DescribeDeviceClassRequest::DescribeDeviceClassRequest() :
    m_onSaleHasBeenSet(false),
    m_needPriceInfoHasBeenSet(false)
{
}

string DescribeDeviceClassRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_onSaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnSale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onSale, allocator);
    }

    if (m_needPriceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPriceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPriceInfo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDeviceClassRequest::GetOnSale() const
{
    return m_onSale;
}

void DescribeDeviceClassRequest::SetOnSale(const uint64_t& _onSale)
{
    m_onSale = _onSale;
    m_onSaleHasBeenSet = true;
}

bool DescribeDeviceClassRequest::OnSaleHasBeenSet() const
{
    return m_onSaleHasBeenSet;
}

uint64_t DescribeDeviceClassRequest::GetNeedPriceInfo() const
{
    return m_needPriceInfo;
}

void DescribeDeviceClassRequest::SetNeedPriceInfo(const uint64_t& _needPriceInfo)
{
    m_needPriceInfo = _needPriceInfo;
    m_needPriceInfoHasBeenSet = true;
}

bool DescribeDeviceClassRequest::NeedPriceInfoHasBeenSet() const
{
    return m_needPriceInfoHasBeenSet;
}


