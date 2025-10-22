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

#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20190711::Model;
using namespace std;

PullSmsSendStatusRequest::PullSmsSendStatusRequest() :
    m_limitHasBeenSet(false),
    m_smsSdkAppidHasBeenSet(false)
{
}

string PullSmsSendStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_smsSdkAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsSdkAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_smsSdkAppid.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t PullSmsSendStatusRequest::GetLimit() const
{
    return m_limit;
}

void PullSmsSendStatusRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool PullSmsSendStatusRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string PullSmsSendStatusRequest::GetSmsSdkAppid() const
{
    return m_smsSdkAppid;
}

void PullSmsSendStatusRequest::SetSmsSdkAppid(const string& _smsSdkAppid)
{
    m_smsSdkAppid = _smsSdkAppid;
    m_smsSdkAppidHasBeenSet = true;
}

bool PullSmsSendStatusRequest::SmsSdkAppidHasBeenSet() const
{
    return m_smsSdkAppidHasBeenSet;
}


