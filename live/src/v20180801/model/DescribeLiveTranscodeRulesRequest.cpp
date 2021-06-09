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

#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveTranscodeRulesRequest::DescribeLiveTranscodeRulesRequest() :
    m_templateIdsHasBeenSet(false),
    m_domainNamesHasBeenSet(false)
{
}

string DescribeLiveTranscodeRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateIds.begin(); itr != m_templateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_domainNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainNames.begin(); itr != m_domainNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeLiveTranscodeRulesRequest::GetTemplateIds() const
{
    return m_templateIds;
}

void DescribeLiveTranscodeRulesRequest::SetTemplateIds(const vector<int64_t>& _templateIds)
{
    m_templateIds = _templateIds;
    m_templateIdsHasBeenSet = true;
}

bool DescribeLiveTranscodeRulesRequest::TemplateIdsHasBeenSet() const
{
    return m_templateIdsHasBeenSet;
}

vector<string> DescribeLiveTranscodeRulesRequest::GetDomainNames() const
{
    return m_domainNames;
}

void DescribeLiveTranscodeRulesRequest::SetDomainNames(const vector<string>& _domainNames)
{
    m_domainNames = _domainNames;
    m_domainNamesHasBeenSet = true;
}

bool DescribeLiveTranscodeRulesRequest::DomainNamesHasBeenSet() const
{
    return m_domainNamesHasBeenSet;
}


