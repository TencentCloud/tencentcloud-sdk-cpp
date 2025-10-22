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

#include <tencentcloud/ssa/v20180608/model/DescribeSocAlertDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DescribeSocAlertDetailsRequest::DescribeSocAlertDetailsRequest() :
    m_alertIdHasBeenSet(false),
    m_alertTimestampHasBeenSet(false)
{
}

string DescribeSocAlertDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_alertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alertId.c_str(), allocator).Move(), allocator);
    }

    if (m_alertTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alertTimestamp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSocAlertDetailsRequest::GetAlertId() const
{
    return m_alertId;
}

void DescribeSocAlertDetailsRequest::SetAlertId(const string& _alertId)
{
    m_alertId = _alertId;
    m_alertIdHasBeenSet = true;
}

bool DescribeSocAlertDetailsRequest::AlertIdHasBeenSet() const
{
    return m_alertIdHasBeenSet;
}

string DescribeSocAlertDetailsRequest::GetAlertTimestamp() const
{
    return m_alertTimestamp;
}

void DescribeSocAlertDetailsRequest::SetAlertTimestamp(const string& _alertTimestamp)
{
    m_alertTimestamp = _alertTimestamp;
    m_alertTimestampHasBeenSet = true;
}

bool DescribeSocAlertDetailsRequest::AlertTimestampHasBeenSet() const
{
    return m_alertTimestampHasBeenSet;
}


