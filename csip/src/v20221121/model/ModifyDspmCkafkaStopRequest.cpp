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

#include <tencentcloud/csip/v20221121/model/ModifyDspmCkafkaStopRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmCkafkaStopRequest::ModifyDspmCkafkaStopRequest() :
    m_logDeliveryInfoHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string ModifyDspmCkafkaStopRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logDeliveryInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDeliveryInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logDeliveryInfo.begin(); itr != m_logDeliveryInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<LogDeliveryInfo> ModifyDspmCkafkaStopRequest::GetLogDeliveryInfo() const
{
    return m_logDeliveryInfo;
}

void ModifyDspmCkafkaStopRequest::SetLogDeliveryInfo(const vector<LogDeliveryInfo>& _logDeliveryInfo)
{
    m_logDeliveryInfo = _logDeliveryInfo;
    m_logDeliveryInfoHasBeenSet = true;
}

bool ModifyDspmCkafkaStopRequest::LogDeliveryInfoHasBeenSet() const
{
    return m_logDeliveryInfoHasBeenSet;
}

vector<string> ModifyDspmCkafkaStopRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmCkafkaStopRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmCkafkaStopRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


