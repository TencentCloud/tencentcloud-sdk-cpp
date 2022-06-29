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

#include <tencentcloud/dnspod/v20210323/model/PayOrderWithBalanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

PayOrderWithBalanceRequest::PayOrderWithBalanceRequest() :
    m_bigDealIdListHasBeenSet(false),
    m_voucherIdListHasBeenSet(false)
{
}

string PayOrderWithBalanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bigDealIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bigDealIdList.begin(); itr != m_bigDealIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_voucherIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voucherIdList.begin(); itr != m_voucherIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> PayOrderWithBalanceRequest::GetBigDealIdList() const
{
    return m_bigDealIdList;
}

void PayOrderWithBalanceRequest::SetBigDealIdList(const vector<string>& _bigDealIdList)
{
    m_bigDealIdList = _bigDealIdList;
    m_bigDealIdListHasBeenSet = true;
}

bool PayOrderWithBalanceRequest::BigDealIdListHasBeenSet() const
{
    return m_bigDealIdListHasBeenSet;
}

vector<string> PayOrderWithBalanceRequest::GetVoucherIdList() const
{
    return m_voucherIdList;
}

void PayOrderWithBalanceRequest::SetVoucherIdList(const vector<string>& _voucherIdList)
{
    m_voucherIdList = _voucherIdList;
    m_voucherIdListHasBeenSet = true;
}

bool PayOrderWithBalanceRequest::VoucherIdListHasBeenSet() const
{
    return m_voucherIdListHasBeenSet;
}


