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

#include <tencentcloud/ic/v20190307/model/RenewCardsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

RenewCardsRequest::RenewCardsRequest() :
    m_sdkappidHasBeenSet(false),
    m_iccidsHasBeenSet(false),
    m_renewNumHasBeenSet(false)
{
}

string RenewCardsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkappidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sdkappid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkappid, allocator);
    }

    if (m_iccidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iccids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iccids.begin(); itr != m_iccids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_renewNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_renewNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t RenewCardsRequest::GetSdkappid() const
{
    return m_sdkappid;
}

void RenewCardsRequest::SetSdkappid(const uint64_t& _sdkappid)
{
    m_sdkappid = _sdkappid;
    m_sdkappidHasBeenSet = true;
}

bool RenewCardsRequest::SdkappidHasBeenSet() const
{
    return m_sdkappidHasBeenSet;
}

vector<string> RenewCardsRequest::GetIccids() const
{
    return m_iccids;
}

void RenewCardsRequest::SetIccids(const vector<string>& _iccids)
{
    m_iccids = _iccids;
    m_iccidsHasBeenSet = true;
}

bool RenewCardsRequest::IccidsHasBeenSet() const
{
    return m_iccidsHasBeenSet;
}

uint64_t RenewCardsRequest::GetRenewNum() const
{
    return m_renewNum;
}

void RenewCardsRequest::SetRenewNum(const uint64_t& _renewNum)
{
    m_renewNum = _renewNum;
    m_renewNumHasBeenSet = true;
}

bool RenewCardsRequest::RenewNumHasBeenSet() const
{
    return m_renewNumHasBeenSet;
}


