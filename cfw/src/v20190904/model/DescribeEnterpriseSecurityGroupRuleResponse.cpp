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

#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeEnterpriseSecurityGroupRuleResponse::DescribeEnterpriseSecurityGroupRuleResponse() :
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEnterpriseSecurityGroupRuleResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("PageNo") && !rsp["PageNo"].IsNull())
    {
        if (!rsp["PageNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageNo = string(rsp["PageNo"].GetString());
        m_pageNoHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = string(rsp["PageSize"].GetString());
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("Rules") && !rsp["Rules"].IsNull())
    {
        if (!rsp["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rules` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = string(rsp["TotalCount"].GetString());
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEnterpriseSecurityGroupRuleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageNo.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageSize.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCount.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeEnterpriseSecurityGroupRuleResponse::GetPageNo() const
{
    return m_pageNo;
}

bool DescribeEnterpriseSecurityGroupRuleResponse::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeEnterpriseSecurityGroupRuleResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<SecurityGroupRule> DescribeEnterpriseSecurityGroupRuleResponse::GetRules() const
{
    return m_rules;
}

bool DescribeEnterpriseSecurityGroupRuleResponse::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeEnterpriseSecurityGroupRuleResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


