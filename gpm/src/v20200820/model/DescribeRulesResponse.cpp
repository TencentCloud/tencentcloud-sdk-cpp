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

#include <tencentcloud/gpm/v20200820/model/DescribeRulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

DescribeRulesResponse::DescribeRulesResponse() :
    m_ruleInfoListHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_searchTypeHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRulesResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("RuleInfoList") && !rsp["RuleInfoList"].IsNull())
    {
        if (!rsp["RuleInfoList"].IsArray())
            return CoreInternalOutcome(Error("response `RuleInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RuleInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleBriefInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleInfoList.push_back(item);
        }
        m_ruleInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("PageNumber") && !rsp["PageNumber"].IsNull())
    {
        if (!rsp["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = rsp["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("SearchType") && !rsp["SearchType"].IsNull())
    {
        if (!rsp["SearchType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SearchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchType = string(rsp["SearchType"].GetString());
        m_searchTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Keyword") && !rsp["Keyword"].IsNull())
    {
        if (!rsp["Keyword"].IsString())
        {
            return CoreInternalOutcome(Error("response `Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(rsp["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<RuleBriefInfo> DescribeRulesResponse::GetRuleInfoList() const
{
    return m_ruleInfoList;
}

bool DescribeRulesResponse::RuleInfoListHasBeenSet() const
{
    return m_ruleInfoListHasBeenSet;
}

int64_t DescribeRulesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeRulesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DescribeRulesResponse::GetPageNumber() const
{
    return m_pageNumber;
}

bool DescribeRulesResponse::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeRulesResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeRulesResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeRulesResponse::GetSearchType() const
{
    return m_searchType;
}

bool DescribeRulesResponse::SearchTypeHasBeenSet() const
{
    return m_searchTypeHasBeenSet;
}

string DescribeRulesResponse::GetKeyword() const
{
    return m_keyword;
}

bool DescribeRulesResponse::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


