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

#include <tencentcloud/wedata/v20210820/model/DescribeCrontabTopNDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeCrontabTopNDsRequest::DescribeCrontabTopNDsRequest() :
    m_crontabExpHasBeenSet(false),
    m_topNHasBeenSet(false),
    m_startIsoTimeHasBeenSet(false)
{
}

string DescribeCrontabTopNDsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_crontabExpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crontabExp.c_str(), allocator).Move(), allocator);
    }

    if (m_topNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopN";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topN, allocator);
    }

    if (m_startIsoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartIsoTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startIsoTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCrontabTopNDsRequest::GetCrontabExp() const
{
    return m_crontabExp;
}

void DescribeCrontabTopNDsRequest::SetCrontabExp(const string& _crontabExp)
{
    m_crontabExp = _crontabExp;
    m_crontabExpHasBeenSet = true;
}

bool DescribeCrontabTopNDsRequest::CrontabExpHasBeenSet() const
{
    return m_crontabExpHasBeenSet;
}

uint64_t DescribeCrontabTopNDsRequest::GetTopN() const
{
    return m_topN;
}

void DescribeCrontabTopNDsRequest::SetTopN(const uint64_t& _topN)
{
    m_topN = _topN;
    m_topNHasBeenSet = true;
}

bool DescribeCrontabTopNDsRequest::TopNHasBeenSet() const
{
    return m_topNHasBeenSet;
}

string DescribeCrontabTopNDsRequest::GetStartIsoTime() const
{
    return m_startIsoTime;
}

void DescribeCrontabTopNDsRequest::SetStartIsoTime(const string& _startIsoTime)
{
    m_startIsoTime = _startIsoTime;
    m_startIsoTimeHasBeenSet = true;
}

bool DescribeCrontabTopNDsRequest::StartIsoTimeHasBeenSet() const
{
    return m_startIsoTimeHasBeenSet;
}


