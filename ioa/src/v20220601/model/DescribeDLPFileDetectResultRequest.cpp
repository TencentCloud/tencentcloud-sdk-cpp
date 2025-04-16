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

#include <tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDLPFileDetectResultRequest::DescribeDLPFileDetectResultRequest() :
    m_domainInstanceIdHasBeenSet(false),
    m_queryIDHasBeenSet(false)
{
}

string DescribeDLPFileDetectResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDLPFileDetectResultRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void DescribeDLPFileDetectResultRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool DescribeDLPFileDetectResultRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

string DescribeDLPFileDetectResultRequest::GetQueryID() const
{
    return m_queryID;
}

void DescribeDLPFileDetectResultRequest::SetQueryID(const string& _queryID)
{
    m_queryID = _queryID;
    m_queryIDHasBeenSet = true;
}

bool DescribeDLPFileDetectResultRequest::QueryIDHasBeenSet() const
{
    return m_queryIDHasBeenSet;
}


